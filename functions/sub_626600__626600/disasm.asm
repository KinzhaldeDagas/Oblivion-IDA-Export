0x626600: push    0FFFFFFFFh; Post-load identity/cursor fixup. Modern path resolves saved actor FormIDs in package and DialogueItems only; it runs no result script and performs no topic selection.
0x626602: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x626607: mov     eax, large fs:0
0x62660D: push    eax
0x62660E: push    ecx
0x62660F: push    ebx
0x626610: push    ebp
0x626611: push    esi
0x626612: push    edi
0x626613: mov     eax, ds:0B30AACh
0x626618: xor     eax, esp
0x62661A: push    eax
0x62661B: lea     eax, [esp+24h+var_C]
0x62661F: mov     large fs:0, eax
0x626625: mov     esi, ecx
0x626627: call    TESPackage_InitLoadGame
0x62662C: mov     eax, [esi+48h]
0x62662F: push    0; int
0x626631: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x626636: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62663B: push    0; int
0x62663D: push    eax; a1
0x62663E: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x626643: add     esp, 4
0x626646: push    eax; void *
0x626647: call    OblivionDynamicCast
0x62664C: add     esp, 14h
0x62664F: push    0; int
0x626651: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x626656: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x62665B: mov     [esi+48h], eax
0x62665E: mov     eax, [esi+5Ch]
0x626661: push    0; int
0x626663: push    eax; a1
0x626664: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x626669: add     esp, 4
0x62666C: push    eax; void *
0x62666D: call    OblivionDynamicCast
0x626672: add     esp, 14h
0x626675: push    0; int
0x626677: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x62667C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x626681: mov     [esi+5Ch], eax
0x626684: mov     eax, [esi+60h]
0x626687: push    0; int
0x626689: push    eax; a1
0x62668A: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x62668F: add     esp, 4
0x626692: push    eax; void *
0x626693: call    OblivionDynamicCast
0x626698: mov     [esi+60h], eax
0x62669B: mov     eax, ds:0B33B00h
0x6266A0: mov     al, [eax+7Ch]
0x6266A3: add     esp, 14h
0x6266A6: cmp     al, 20h ; ' '
0x6266A8: jb      short loc_6266B6; Modern save version >=0x20: call Conversation::InitLoadGame solely to resolve each DialogueItem's saved speaker FormID.
0x6266AA: mov     ecx, [esi+50h]; this
0x6266AD: test    ecx, ecx
0x6266AF: jz      short loc_6266B6
0x6266B1: call    Conversation__InitLoadGame; Modern post-load fixup walks loaded DialogueItems and resolves only each saved speaker FormID.
0x6266B6: mov     ecx, ds:0B33B00h
0x6266BC: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x6266C0: jnb     loc_626767; Legacy save version <0x20: regenerate the Conversation from speaker, target, and startingTopic, then restore item/response indices. Regeneration calls TESTopic::CreateConversation, so ImmediateResult INFOs and their AddTopicList effects are executed again; deferred results are not run by load.
0x6266C6: mov     edi, [esi+50h]
0x6266C9: test    edi, edi
0x6266CB: movzx   ebx, word ptr [esi+54h]
0x6266CF: movzx   ebp, word ptr [esi+58h]
0x6266D3: jz      loc_626767
0x6266D9: push    10h; Size
0x6266DB: call    FormHeapAlloc
0x6266E0: add     esp, 4
0x6266E3: mov     [esp+24h+var_10], eax
0x6266E7: test    eax, eax
0x6266E9: mov     [esp+24h+var_4], 0
0x6266F1: jz      short loc_626709
0x6266F3: mov     edx, [esi+40h]
0x6266F6: mov     ecx, [esi+60h]
0x6266F9: push    edi; unused
0x6266FA: push    edx; startingTopic
0x6266FB: mov     edx, [esi+5Ch]
0x6266FE: push    ecx; target
0x6266FF: push    edx; speaker
0x626700: mov     ecx, eax; this
0x626702: call    Conversation__Conversation; Legacy-only conversation reconstruction. Because the constructor invokes TESTopic::CreateConversation, selection/random linkage can differ from the original old-save chain and ImmediateResult side effects repeat.
0x626707: jmp     short loc_62670B
0x626709: xor     eax, eax
0x62670B: cmp     bx, 0FFFFh
0x62670F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x626717: mov     [esi+50h], eax
0x62671A: jz      short loc_626729
0x62671C: push    ebx; index
0x62671D: mov     ecx, eax; this
0x62671F: call    Conversation__GetDialogueItemByIndex
0x626724: mov     [esi+54h], eax
0x626727: jmp     short loc_626730
0x626729: mov     dword ptr [esi+54h], 0
0x626730: mov     ecx, [esi+54h]; this
0x626733: test    ecx, ecx
0x626735: jz      short loc_626748
0x626737: cmp     bp, 0FFFFh
0x62673B: jz      short loc_626748
0x62673D: push    ebp; index
0x62673E: call    DialogueItem__GetDialogueResponseByIndex
0x626743: mov     [esi+58h], eax
0x626746: jmp     short loc_62674F
0x626748: mov     dword ptr [esi+58h], 0
0x62674F: mov     eax, [esi+54h]
0x626752: mov     ecx, [esi+50h]; this
0x626755: push    eax; item
0x626756: call    DialogueListCursor__SetCurrent; Legacy-only: restore the regenerated Conversation's internal current-item cursor from the saved external index.
0x62675B: mov     ecx, [esi+58h]
0x62675E: push    ecx; item
0x62675F: mov     ecx, [esi+54h]; this
0x626762: call    DialogueListCursor__SetCurrent; Legacy-only: restore currentItem's internal current-response cursor from the saved external index.
0x626767: mov     ecx, [esp+24h+var_C]
0x62676B: mov     large fs:0, ecx
0x626772: pop     ecx
0x626773: pop     edi
0x626774: pop     esi
0x626775: pop     ebp
0x626776: pop     ebx
0x626777: add     esp, 10h
0x62677A: retn
0x9CAD70: mov     eax, [ebp-10h]
0x9CAD73: push    eax
0x9CAD74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CAD79: pop     ecx
0x9CAD7A: retn
0x9CAD7B: mov     edx, [esp+arg_4]
0x9CAD7F: lea     eax, [edx-14h]
0x9CAD82: mov     ecx, [edx-18h]
0x9CAD85: xor     ecx, eax
0x9CAD87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAD8C: mov     eax, offset stru_AF3390
0x9CAD91: jmp     ___CxxFrameHandler3
