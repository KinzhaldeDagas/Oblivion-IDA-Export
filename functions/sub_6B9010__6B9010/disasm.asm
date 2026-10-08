0x6B9010: push    0FFFFFFFFh; Oblivion appends eligible ordinary MenuTopics in input-list order and performs no topic-priority sort here. Fallout's corresponding FillTopicList (x4y6:0x825E8740) sorts non-choice lists with PrioritySort (0x825E7390) by TESTopic priority; choice lists keep authored order. In Oblivion, the known-topic source is already sorted by display name in PlayerCharacter::AddKnownTopics, while INFO.linkedTo retains its own list order.
0x6B9012: push    offset SEH_6B9010
0x6B9017: mov     eax, large fs:0
0x6B901D: push    eax
0x6B901E: sub     esp, 14h
0x6B9021: push    ebx
0x6B9022: push    ebp
0x6B9023: push    esi
0x6B9024: push    edi
0x6B9025: mov     eax, ds:0B30AACh
0x6B902A: xor     eax, esp
0x6B902C: push    eax
0x6B902D: lea     eax, [esp+34h+var_C]
0x6B9031: mov     large fs:0, eax
0x6B9037: mov     edi, ecx
0x6B9039: mov     [esp+34h+var_1C], edi
0x6B903D: mov     eax, [edi+0Ch]
0x6B9040: push    0; int
0x6B9042: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6B9047: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6B904C: push    0; int
0x6B904E: push    eax; void *
0x6B904F: mov     [esp+48h+var_1F], 0
0x6B9054: call    OblivionDynamicCast
0x6B9059: mov     [esp+48h+var_18], eax
0x6B905D: lea     eax, [edi+4]
0x6B9060: add     esp, 14h
0x6B9063: xor     ecx, ecx; Hard seed invariant: count existing MenuTopics and return unless count >= 1. This is not merely a duplicate check; FillTopicList cannot populate an empty manager.
0x6B9065: test    eax, eax
0x6B9067: jz      loc_6B9235
0x6B906D: lea     ecx, [ecx+0]
0x6B9070: cmp     dword ptr [eax], 0
0x6B9073: jz      short loc_6B9078
0x6B9075: add     ecx, 1
0x6B9078: mov     eax, [eax+4]
0x6B907B: test    eax, eax
0x6B907D: jnz     short loc_6B9070
0x6B907F: cmp     ecx, 1
0x6B9082: jb      loc_6B9235
0x6B9088: mov     eax, [esp+34h+topics]
0x6B908C: test    eax, eax
0x6B908E: jz      loc_6B9235
0x6B9094: jmp     short loc_6B909E
0x6B9096: mov     eax, [esp+34h+topics]
0x6B909A: mov     edi, [esp+34h+var_1C]
0x6B909E: mov     esi, [eax]
0x6B90A0: test    esi, esi
0x6B90A2: jz      loc_6B9235
0x6B90A8: cmp     dword ptr [esi+0Ch], 0D7h ; '×'
0x6B90AF: mov     ecx, [eax+4]
0x6B90B2: mov     [esp+34h+topics], ecx
0x6B90B6: jnz     short loc_6B910D
0x6B90B8: mov     ecx, [esp+34h+var_18]; this
0x6B90BC: call    Actor__IsNoRumor; NoRumors is only an offer gate for player-menu INFOGENERAL D7. It does not invalidate ExtraInfoGeneralTopic (0x59), alter the cached INFO/response/display/unread state, or filter ambient conversation links.
0x6B90C1: test    al, al
0x6B90C3: jnz     short loc_6B910D
0x6B90C5: mov     eax, [edi+0Ch]
0x6B90C8: lea     ecx, [eax+44h]; this
0x6B90CB: push    eax; speaker
0x6B90CC: call    ExtraDataList__GetInfoGeneralTopic; Retrieve the actor-owned INFOGENERAL cache when D7 is encountered in the player choice source. An empty post-load cache reconstructs responses from its stored selection identity; it does not rerun conditions.
0x6B90D1: mov     edi, eax
0x6B90D3: test    edi, edi
0x6B90D5: jz      short loc_6B910D
0x6B90D7: cmp     [esp+34h+var_1F], 0
0x6B90DC: jnz     short loc_6B910D
0x6B90DE: lea     eax, [edi+0Ch]
0x6B90E1: test    eax, eax
0x6B90E3: mov     [edi+1Ch], eax; Rewind the cached INFOGENERAL MenuTopic to its first response before re-appending it. No topic/INFO condition selection is rerun, so clearing NoRumors can resurrect the exact old cached rumor line and UI state.
0x6B90E6: jz      short loc_6B9108
0x6B90E8: cmp     dword ptr [eax], 0
0x6B90EB: jz      short loc_6B9108
0x6B90ED: mov     ebx, [esp+34h+var_1C]
0x6B90F1: add     ebx, 4
0x6B90F4: push    edi; item
0x6B90F5: mov     ecx, ebx; this
0x6B90F7: call    BSSimpleList__Contains; Generic BSSimpleList membership test. Dialogue menu code uses it to avoid duplicate MenuTopics; social AI uses it for the recent-conversation target cooldown list.
0x6B90FC: test    al, al
0x6B90FE: jnz     short loc_6B9108
0x6B9100: push    edi
0x6B9101: mov     ecx, ebx
0x6B9103: call    BSSimpleList_PushBack
0x6B9108: mov     [esp+34h+var_1F], 1
0x6B910D: mov     edx, ds:0B333C4h
0x6B9113: mov     eax, [esp+34h+var_1C]
0x6B9117: mov     ecx, [eax+0Ch]
0x6B911A: push    edx; target
0x6B911B: push    ecx; speaker
0x6B911C: lea     edx, [esp+3Ch+conditionFallback]
0x6B9120: push    edx; lowDispositionFailure
0x6B9121: mov     ecx, esi; this
0x6B9123: mov     [esp+40h+conditionFallback], 0
0x6B9128: call    TESTopic__GetMatchingInfo
0x6B912D: mov     ebp, eax
0x6B912F: test    ebp, ebp
0x6B9131: jz      loc_6B922A
0x6B9137: push    ebp; info
0x6B9138: mov     ecx, esi; this
0x6B913A: call    TESTopic__GetOwnerQuest
0x6B913F: cmp     dword ptr [esi+0Ch], 0D7h ; '×'
0x6B9146: mov     ebx, eax
0x6B9148: mov     [esp+34h+var_1D], 0
0x6B914D: mov     [esp+34h+var_1E], 1
0x6B9152: jnz     short loc_6B9174; Second player-menu INFOGENERAL gate decides whether to construct/cache a fresh Rumors MenuTopic. This logic is separate from ambient HELLO/linked-topic conversation generation.
0x6B9154: cmp     [esp+34h+var_1F], 0
0x6B9159: jnz     short loc_6B916F
0x6B915B: mov     ecx, [esp+34h+var_18]; this
0x6B915F: call    Actor__IsNoRumor; Second NoRumors gate prevents constructing a fresh INFOGENERAL MenuTopic. A previously cached type-0x59 object remains owned by the actor and can reappear if the type-0x5A NoRumors override later clears.
0x6B9164: test    al, al
0x6B9166: jnz     short loc_6B916F
0x6B9168: mov     [esp+34h+var_1D], 1
0x6B916D: jmp     short loc_6B9174
0x6B916F: mov     [esp+34h+var_1E], 0
0x6B9174: xor     edi, edi
0x6B9176: cmp     [esp+34h+var_1E], 0
0x6B917B: jz      short loc_6B91B8
0x6B917D: push    28h ; '('; Size
0x6B917F: call    FormHeapAlloc
0x6B9184: add     esp, 4
0x6B9187: mov     [esp+34h+var_10], eax
0x6B918B: test    eax, eax
0x6B918D: mov     [esp+34h+var_4], edi
0x6B9191: jz      short loc_6B91AC
0x6B9193: mov     ecx, dword ptr [esp+34h+conditionFallback]
0x6B9197: mov     edx, [esp+34h+var_1C]
0x6B919B: push    ecx; substituteInfoRefusal
0x6B919C: mov     ecx, [edx+0Ch]
0x6B919F: push    ecx; speaker
0x6B91A0: push    ebp; info
0x6B91A1: push    esi; topic
0x6B91A2: push    ebx; ownerQuest
0x6B91A3: mov     ecx, eax; this
0x6B91A5: call    MenuTopic__MenuTopic; Oblivion MenuTopic allocation is 0x28 bytes at its native creator. Fallout counterpart FillTopicList allocates 0x2C bytes before MenuTopic constructor (x4y6:0x825E8740); keep these version-specific class layouts separate.
0x6B91AA: jmp     short loc_6B91AE
0x6B91AC: xor     eax, eax
0x6B91AE: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6B91B6: mov     edi, eax
0x6B91B8: cmp     [esp+34h+var_1D], 0
0x6B91BD: jz      short loc_6B91DF
0x6B91BF: mov     edx, [edi+18h]
0x6B91C2: movzx   eax, byte ptr [edx+25h]
0x6B91C6: shr     eax, 2
0x6B91C9: test    al, 1
0x6B91CB: jnz     short loc_6B91DF; Fresh INFOGENERAL with SayOnce clear is assigned to actor-owned ExtraInfoGeneralTopic. SayOnce prevents that ownership transfer. If such an uncached Rumors MenuTopic is appended, ClearData still skips destruction because isInfoGeneralTopic remains true, producing a native ownership leak.
0x6B91CD: mov     esi, [esp+34h+var_1C]
0x6B91D1: mov     ecx, [esi+0Ch]
0x6B91D4: push    edi; menuTopic
0x6B91D5: add     ecx, 44h ; 'D'; this
0x6B91D8: call    ExtraDataList__SetInfoGeneralTopic; Stores the exact MenuTopic pointer in ExtraInfoGeneralTopic; this is ownership, not a clone. The pointer is installed before the subsequent nonempty-response append test, so authored INFOGENERAL data relies on having at least one usable response.
0x6B91DD: jmp     short loc_6B91E3
0x6B91DF: mov     esi, [esp+34h+var_1C]
0x6B91E3: cmp     [esp+34h+var_1E], 0
0x6B91E8: jz      short loc_6B9216
0x6B91EA: lea     eax, [edi+0Ch]
0x6B91ED: test    eax, eax
0x6B91EF: mov     [edi+1Ch], eax
0x6B91F2: jz      short loc_6B9216
0x6B91F4: cmp     dword ptr [eax], 0
0x6B91F7: jz      short loc_6B9216
0x6B91F9: lea     eax, [esi+4]; Only the cached INFOGENERAL MenuTopic is checked against the existing MenuTopic list before append. Ordinary linkedTo entries have no corresponding duplicate-pointer check, so repeated authored links may render repeated TOPIC tiles.
0x6B91FC: test    eax, eax
0x6B91FE: jz      short loc_6B920B
0x6B9200: cmp     [eax], edi
0x6B9202: jz      short loc_6B9216
0x6B9204: mov     eax, [eax+4]
0x6B9207: test    eax, eax
0x6B9209: jnz     short loc_6B9200
0x6B920B: push    edi; Append successful MenuTopic to the seeded list and bypass local destruction. For cached INFOGENERAL, ExtraInfoGeneralTopic owns it. A SayOnce INFOGENERAL is deliberately uncached but remains exempt from ClearData destruction.
0x6B920C: lea     ecx, [esi+4]
0x6B920F: call    BSSimpleList_PushBack
0x6B9214: jmp     short loc_6B922A
0x6B9216: test    edi, edi; Non-appended MenuTopic is destroyed here. For a freshly cached INFOGENERAL with no usable response, the actor ExtraInfoGeneralTopic already holds this raw pointer; native data therefore depends on the nonempty-response invariant.
0x6B9218: jz      short loc_6B922A
0x6B921A: mov     ecx, edi; this
0x6B921C: call    MenuTopic__Destroy; Ordinary MenuTopics destroy every DialogueResponse. INFOGENERAL skips response destruction here because ExtraInfoGeneralTopic owns the cached object; that owner's destructor clears isInfoGeneralTopic first, then calls this routine for full cleanup.
0x6B9221: push    edi
0x6B9222: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6B9227: add     esp, 4
0x6B922A: cmp     [esp+34h+topics], 0
0x6B922F: jnz     loc_6B9096
0x6B9235: mov     ecx, [esp+34h+var_C]
0x6B9239: mov     large fs:0, ecx
0x6B9240: pop     ecx
0x6B9241: pop     edi
0x6B9242: pop     esi
0x6B9243: pop     ebp
0x6B9244: pop     ebx
0x6B9245: add     esp, 20h
0x6B9248: retn    4
0x9C6FC0: mov     eax, [ebp-10h]
0x9C6FC3: push    eax
0x9C6FC4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6FC9: pop     ecx
0x9C6FCA: retn
0x9C6FCB: mov     edx, [esp+arg_4]
0x9C6FCF: lea     eax, [edx-24h]
0x9C6FD2: mov     ecx, [edx-28h]
0x9C6FD5: xor     ecx, eax
0x9C6FD7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6FDC: mov     eax, offset stru_AEF44C
0x9C6FE1: jmp     ___CxxFrameHandler3
