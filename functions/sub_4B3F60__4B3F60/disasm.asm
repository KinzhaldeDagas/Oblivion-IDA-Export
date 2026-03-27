0x4B3F60: push    esi
0x4B3F61: push    edi
0x4B3F62: mov     edi, [esp+8+a2]
0x4B3F66: push    0; int
0x4B3F68: push    offset ??_R0?AVTESObjectACTI@@@8; struct TypeDescriptor *
0x4B3F6D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B3F72: push    0; int
0x4B3F74: push    edi; void *
0x4B3F75: mov     esi, ecx
0x4B3F77: call    OblivionDynamicCast
0x4B3F7C: add     esp, 14h
0x4B3F7F: test    eax, eax
0x4B3F81: jz      short loc_4B3F91
0x4B3F83: mov     eax, [eax+54h]
0x4B3F86: push    edi; a2
0x4B3F87: mov     ecx, esi; this
0x4B3F89: mov     [esi+54h], eax
0x4B3F8C: call    TESForm_CopyAllComponentsFrom
0x4B3F91: pop     edi
0x4B3F92: pop     esi
0x4B3F93: retn    4
