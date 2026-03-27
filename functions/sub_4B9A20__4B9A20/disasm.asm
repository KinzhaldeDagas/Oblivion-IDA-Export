0x4B9A20: push    esi
0x4B9A21: push    edi
0x4B9A22: mov     edi, [esp+8+a2]
0x4B9A26: push    0; int
0x4B9A28: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x4B9A2D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B9A32: push    0; int
0x4B9A34: push    edi; void *
0x4B9A35: mov     esi, ecx
0x4B9A37: call    OblivionDynamicCast
0x4B9A3C: add     esp, 14h
0x4B9A3F: test    eax, eax
0x4B9A41: jz      short loc_4B9A4B
0x4B9A43: push    edi; a2
0x4B9A44: mov     ecx, esi; this
0x4B9A46: call    TESForm_CopyAllComponentsFrom
0x4B9A4B: pop     edi
0x4B9A4C: pop     esi
0x4B9A4D: retn    4
