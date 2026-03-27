0x507C00: mov     eax, [esp+arg_8]
0x507C04: test    eax, eax
0x507C06: jz      short loc_507C57
0x507C08: push    0; int
0x507C0A: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x507C0F: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x507C14: push    0; int
0x507C16: push    eax; void *
0x507C17: call    OblivionDynamicCast
0x507C1C: add     esp, 14h
0x507C1F: test    eax, eax
0x507C21: jz      short loc_507C57
0x507C23: mov     ecx, eax; this
0x507C25: call    MobileObject_GetCharProxy
0x507C2A: test    eax, eax
0x507C2C: jz      short loc_507C57
0x507C2E: mov     edx, [eax+36Ch]
0x507C34: test    edx, edx
0x507C36: jnz     short loc_507C48
0x507C38: mov     edx, 1
0x507C3D: push    edx
0x507C3E: mov     ecx, eax
0x507C40: call    sub_894940
0x507C45: mov     al, 1
0x507C47: retn
0x507C48: cmp     edx, 1
0x507C4B: jnz     short loc_507C4F
0x507C4D: xor     edx, edx
0x507C4F: push    edx
0x507C50: mov     ecx, eax
0x507C52: call    sub_894940
0x507C57: mov     al, 1
0x507C59: retn
