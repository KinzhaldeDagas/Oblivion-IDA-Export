0x52F790: push    0FFFFFFFFh; Selects a matching TESTopicInfo and wraps it as a 0x1C DialogueItem containing response list/cursor, INFO, topic, owner quest, and speaker.
0x52F792: push    offset SEH_71BE30
0x52F797: mov     eax, large fs:0
0x52F79D: push    eax
0x52F79E: push    ebx
0x52F79F: push    ebp
0x52F7A0: push    esi
0x52F7A1: push    edi
0x52F7A2: mov     eax, ds:0B30AACh
0x52F7A7: xor     eax, esp
0x52F7A9: push    eax
0x52F7AA: lea     eax, [esp+20h+var_C]
0x52F7AE: mov     large fs:0, eax
0x52F7B4: mov     esi, ecx
0x52F7B6: mov     eax, [esp+20h+a7]
0x52F7BA: mov     ecx, [esp+20h+a6]
0x52F7BE: mov     edx, [esp+20h+a4]
0x52F7C2: mov     ebp, [esp+20h+a3]
0x52F7C6: push    eax; conversation
0x52F7C7: push    ecx; previousTopic
0x52F7C8: push    1; useConversationRules
0x52F7CA: push    edx; target
0x52F7CB: push    ebp; speaker
0x52F7CC: lea     eax, [esp+34h+a7]
0x52F7D0: push    eax; lowDispositionFailure
0x52F7D1: mov     ecx, esi; this
0x52F7D3: call    TESTopic__SelectInfoForSpeaker; Authoritative Oblivion INFO selector. Scans running quest buckets by descending priority and INFOs in record order; applies conditions, conversation linkedFrom/ANY rules, reuse suppression, and Random groups. For an ambient first item (previousTopic=null), a nonempty linkedFrom list is rejected unless the target is the player. RandomEnd is latched before conversation reuse checks, so a duplicate/repeated RandomEnd INFO can terminate the scan without being eligible.
0x52F7D8: mov     edi, eax; Ambient CreateDialogueItem uses conversation rules. It deliberately reuses the already-pushed conversation argument slot as the ignored lowDispositionFailure scratch output; ambient selection never consumes that fallback.
0x52F7DA: test    edi, edi
0x52F7DC: jz      short loc_52F80D
0x52F7DE: push    1Ch; Size
0x52F7E0: call    FormHeapAlloc
0x52F7E5: mov     ebx, eax
0x52F7E7: add     esp, 4
0x52F7EA: mov     [esp+20h+a6], ebx
0x52F7EE: xor     eax, eax
0x52F7F0: cmp     ebx, eax
0x52F7F2: mov     [esp+20h+var_4], eax
0x52F7F6: jz      short loc_52F80F
0x52F7F8: push    ebp; speaker
0x52F7F9: push    edi; info
0x52F7FA: push    esi; topic
0x52F7FB: push    edi; info
0x52F7FC: mov     ecx, esi; this
0x52F7FE: call    TESTopic__GetOwnerQuest
0x52F803: push    eax; ownerQuest
0x52F804: mov     ecx, ebx; this
0x52F806: call    DialogueItem__DialogueItem; Ambient DialogueItem constructor. Unlike player MenuTopic::FillResponseList, this path appends every collected TESResponse without filtering empty display text and without INFOGENERAL/D7's first-nonempty-response limit. An ambient RUMOR item can therefore retain all authored responses.
0x52F80B: jmp     short loc_52F80F
0x52F80D: xor     eax, eax
0x52F80F: mov     ecx, [esp+20h+var_C]
0x52F813: mov     large fs:0, ecx
0x52F81A: pop     ecx
0x52F81B: pop     edi
0x52F81C: pop     esi
0x52F81D: pop     ebp
0x52F81E: pop     ebx
0x52F81F: add     esp, 0Ch
0x52F822: retn    10h
0x9CA5A0: mov     eax, [ebp+0Ch]
0x9CA5A3: push    eax
0x9CA5A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA5A9: pop     ecx
0x9CA5AA: retn
0x9CA5AB: mov     edx, [esp+quadY]
0x9CA5AF: lea     eax, [edx-10h]
0x9CA5B2: mov     ecx, [edx-14h]
0x9CA5B5: xor     ecx, eax
0x9CA5B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA5BC: mov     eax, offset stru_AF2C94
0x9CA5C1: jmp     ___CxxFrameHandler3
