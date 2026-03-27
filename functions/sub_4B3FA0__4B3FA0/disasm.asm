0x4B3FA0: mov     eax, [esp+arg_0]
0x4B3FA4: push    esi
0x4B3FA5: push    0; int
0x4B3FA7: push    offset ??_R0?AVTESObjectACTI@@@8; struct TypeDescriptor *
0x4B3FAC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B3FB1: push    0; int
0x4B3FB3: push    eax; void *
0x4B3FB4: mov     esi, ecx
0x4B3FB6: call    OblivionDynamicCast
0x4B3FBB: add     esp, 14h
0x4B3FBE: test    eax, eax
0x4B3FC0: jnz     short loc_4B3FC8
0x4B3FC2: mov     al, 1
0x4B3FC4: pop     esi
0x4B3FC5: retn    4
0x4B3FC8: mov     ecx, [esi+54h]
0x4B3FCB: cmp     ecx, [eax+54h]
0x4B3FCE: jnz     short loc_4B3FC2
0x4B3FD0: push    eax; a2
0x4B3FD1: mov     ecx, esi; this
0x4B3FD3: call    TESForm_CompareAllComponentsTo
0x4B3FD8: test    al, al
0x4B3FDA: setnz   al
0x4B3FDD: pop     esi
0x4B3FDE: retn    4
