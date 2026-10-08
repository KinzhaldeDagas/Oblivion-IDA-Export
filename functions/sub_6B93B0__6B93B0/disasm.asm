0x6B93B0: push    0FFFFFFFFh; Player-dialogue initializer. Clears the manager, resolves an optional forced topic or stock GREETING 000000C8, selects its INFO without InfoRefusal substitution, and pushes it as the head seed. A Goodbye GREETING is pre-committed (AddTopicList then RunResult) and returns closePending=true, but DialogMenu still plays its responses before closing.
0x6B93B2: push    offset SEH_6CF490
0x6B93B7: mov     eax, large fs:0
0x6B93BD: push    eax
0x6B93BE: push    ebx
0x6B93BF: push    ebp
0x6B93C0: push    esi
0x6B93C1: push    edi
0x6B93C2: mov     eax, ds:0B30AACh
0x6B93C7: xor     eax, esp
0x6B93C9: push    eax
0x6B93CA: lea     eax, [esp+20h+var_C]
0x6B93CE: mov     large fs:0, eax
0x6B93D4: mov     esi, ecx
0x6B93D6: push    1; clearAll
0x6B93D8: mov     dword ptr [esi+0Ch], 0
0x6B93DF: call    MenuTopicManager__ClearData; ClearData owns ordinary MenuTopics but deliberately does not destroy isInfoGeneralTopic entries. Those are actor-specific caches owned by ExtraInfoGeneralTopic (0x59).
0x6B93E4: mov     edi, [esp+20h+forcedGreeting]
0x6B93E8: test    edi, edi
0x6B93EA: mov     eax, [esp+20h+speaker]
0x6B93EE: mov     [esi+0Ch], eax
0x6B93F1: jnz     short loc_6B9407
0x6B93F3: push    edi; index
0x6B93F4: push    edi; topicType
0x6B93F5: call    TESTopic__GetTopic; Dialog menu initialization requests Topic bucket index 0: fixed FormID 000000C8 GREETING.
0x6B93FA: mov     edi, eax
0x6B93FC: add     esp, 8
0x6B93FF: test    edi, edi
0x6B9401: jz      loc_6B94AC; Null GREETING selects the nominal known-topic source later, but no seed MenuTopic was created. FillTopicList's count>=1 guard therefore leaves the manager empty; the native runtime assumes stock GREETING exists.
0x6B9407: mov     ecx, ds:0B333C4h
0x6B940D: mov     edx, [esi+0Ch]
0x6B9410: push    ecx; target
0x6B9411: push    edx; speaker
0x6B9412: lea     eax, [esp+28h+speaker]
0x6B9416: push    eax; lowDispositionFailure
0x6B9417: mov     ecx, edi; this
0x6B9419: call    TESTopic__GetMatchingInfo; GREETING selection passes a scratch pointer over the now-unused stack copy of the speaker argument. If no normal match exists, SelectInfoForSpeaker may return the last INFO rejected only by GetDisposition >/>= and set this scratch flag.
0x6B941E: mov     ebp, eax
0x6B9420: test    ebp, ebp
0x6B9422: jz      loc_6B94AC; No matching GREETING INFO has the same consequence as a null GREETING: no seed is pushed, so the later known-topic fallback cannot populate the empty manager.
0x6B9428: push    ebp; info
0x6B9429: mov     ecx, edi; this
0x6B942B: call    TESTopic__GetOwnerQuest
0x6B9430: push    28h ; '('; Size
0x6B9432: mov     ebx, eax
0x6B9434: call    FormHeapAlloc
0x6B9439: add     esp, 4
0x6B943C: mov     [esp+20h+forcedGreeting], eax
0x6B9440: test    eax, eax
0x6B9442: mov     [esp+20h+var_4], 0
0x6B944A: jz      short loc_6B9460
0x6B944C: mov     ecx, [esi+0Ch]
0x6B944F: push    0; GREETING explicitly disables InfoRefusal substitution. Therefore a low-disposition fallback INFO returned at 6B9419 is used as the greeting itself; ordinary TOPIC choices instead pass the fallback flag into MenuTopic and substitute FormID 118 when appropriate.
0x6B9451: push    ecx; speaker
0x6B9452: push    ebp; info
0x6B9453: push    edi; topic
0x6B9454: push    ebx; ownerQuest
0x6B9455: mov     ecx, eax; this
0x6B9457: call    MenuTopic__MenuTopic; Oblivion MenuTopic allocation is 0x28 bytes at its native creator. Fallout counterpart FillTopicList allocates 0x2C bytes before MenuTopic constructor (x4y6:0x825E8740); keep these version-specific class layouts separate.
0x6B945C: mov     edi, eax
0x6B945E: jmp     short loc_6B9462
0x6B9460: xor     edi, edi
0x6B9462: push    edi
0x6B9463: lea     ecx, [esi+4]
0x6B9466: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6B946E: call    BSSimpleList_PushBack
0x6B9473: test    edi, edi
0x6B9475: jz      short loc_6B94AC
0x6B9477: mov     ebp, [edi+18h]
0x6B947A: test    ebp, ebp
0x6B947C: jz      short loc_6B94AC
0x6B947E: test    byte ptr [ebp+25h], 1
0x6B9482: jz      short loc_6B949A; Goodbye GREETING is pre-committed, not skipped: AddTopicList and RunResult execute now, before speech, and Initialize returns closePending=true. DialogMenu temporarily masks that close flag while building choices, restores the head cursor, and still plays the GREETING response chain.
0x6B9484: mov     ecx, ebp; this
0x6B9486: call    TESTopicInfo__AddTopicList; Pre-speech Goodbye GREETING ordering is AddTopicList first, then RunResult. If its response chain completes normally, LoadNextTopicList reaches AddTopicList again before observing Goodbye; known-topic duplicate suppression normally makes that second acquisition idempotent.
0x6B948B: mov     edx, [esi+0Ch]
0x6B948E: push    edx; speaker
0x6B948F: mov     ecx, ebp; this
0x6B9491: call    TESTopicInfo__RunResult; Run the Goodbye GREETING result immediately on the dialogue speaker, before any GREETING response is played. This early commit is why the later close path does not need the clicked-Goodbye pending-INFO slot.
0x6B9496: mov     al, 1
0x6B9498: jmp     short loc_6B94C7; Return closePending=true; this is not an immediate no-speech close. DialogMenu::InitializeTopics masks the flag for its initial LoadTopicsList call, then the caller starts the head GREETING response and closes after response exhaustion.
0x6B949A: test    ebp, ebp
0x6B949C: jz      short loc_6B94AC
0x6B949E: cmp     byte ptr [edi+8], 0; GREETING linkedTo entries become the initial TOPIC choice list; without links the source is PlayerCharacter's known-topic list at +0x5E4.
0x6B94A2: jz      short loc_6B94AC
0x6B94A4: mov     ebp, [ebp+30h]
0x6B94A7: add     ebp, 8
0x6B94AA: jmp     short loc_6B94B8
0x6B94AC: mov     ebp, ds:0B333C4h; Fallback source is player+0x5E4, the player's known-topic list; dialogue menu initialization continues normally.
0x6B94B2: add     ebp, 5E4h; Nominal fallback source is PlayerCharacter.knownTopics. It is effective only when firstTopic already has a seed; after a null/unmatched greeting, FillTopicList immediately returns.
0x6B94B8: push    ebp; topics
0x6B94B9: mov     ecx, esi; this
0x6B94BB: call    MenuTopicManager__FillTopicList; Oblivion appends eligible ordinary MenuTopics in input-list order and performs no topic-priority sort here. Fallout's corresponding FillTopicList (x4y6:0x825E8740) sorts non-choice lists with PrioritySort (0x825E7390) by TESTopic priority; choice lists keep authored order. In Oblivion, the known-topic source is already sorted by display name in PlayerCharacter::AddKnownTopics, while INFO.linkedTo retains its own list order.
0x6B94C0: lea     eax, [esi+4]
0x6B94C3: mov     [esi], eax
0x6B94C5: xor     al, al
0x6B94C7: mov     ecx, [esp+20h+var_C]
0x6B94CB: mov     large fs:0, ecx
0x6B94D2: pop     ecx
0x6B94D3: pop     edi
0x6B94D4: pop     esi
0x6B94D5: pop     ebp
0x6B94D6: pop     ebx
0x6B94D7: add     esp, 0Ch
0x6B94DA: retn    8
0x9AFB50: mov     eax, [ebp+8]
0x9AFB53: push    eax
0x9AFB54: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFB59: pop     ecx
0x9AFB5A: retn
0x9AFB5B: mov     edx, [esp+referenceFormIDOrZero]
0x9AFB5F: lea     eax, [edx-10h]
0x9AFB62: mov     ecx, [edx-14h]
0x9AFB65: xor     ecx, eax
0x9AFB67: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFB6C: mov     eax, offset stru_ADC04C
0x9AFB71: jmp     ___CxxFrameHandler3
