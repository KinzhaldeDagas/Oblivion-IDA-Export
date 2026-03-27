0x501D80: mov     eax, [esp+arg_8]
0x501D84: test    eax, eax
0x501D86: jz      short loc_501DC5
0x501D88: push    esi
0x501D89: push    0; int
0x501D8B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x501D90: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501D95: push    0; int
0x501D97: push    eax; void *
0x501D98: call    OblivionDynamicCast
0x501D9D: mov     esi, eax
0x501D9F: add     esp, 14h
0x501DA2: test    esi, esi
0x501DA4: jz      short loc_501DC1
0x501DA6: push    0
0x501DA8: push    esi
0x501DA9: mov     ecx, offset ActorProcessManager_ptr
0x501DAE: call    sub_675D50
0x501DB3: mov     eax, [esi]
0x501DB5: mov     edx, [eax+340h]
0x501DBB: push    0
0x501DBD: mov     ecx, esi
0x501DBF: call    edx
0x501DC1: mov     al, 1
0x501DC3: pop     esi
0x501DC4: retn
0x501DC5: mov     al, 1
0x501DC7: retn
