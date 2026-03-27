0x4B5B70: push    esi
0x4B5B71: push    edi
0x4B5B72: mov     edi, [esp+8+a2]
0x4B5B76: push    0; int
0x4B5B78: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x4B5B7D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B5B82: push    0; int
0x4B5B84: push    edi; void *
0x4B5B85: mov     esi, ecx
0x4B5B87: call    OblivionDynamicCast
0x4B5B8C: add     esp, 14h
0x4B5B8F: test    eax, eax
0x4B5B91: jz      short loc_4B5B9B
0x4B5B93: push    edi; a2
0x4B5B94: mov     ecx, esi; this
0x4B5B96: call    TESForm_CopyAllComponentsFrom
0x4B5B9B: pop     edi
0x4B5B9C: pop     esi
0x4B5B9D: retn    4
