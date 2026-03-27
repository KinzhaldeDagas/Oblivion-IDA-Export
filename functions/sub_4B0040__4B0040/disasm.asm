0x4B0040: push    esi
0x4B0041: push    edi
0x4B0042: mov     edi, [esp+8+a2]
0x4B0046: push    0; int
0x4B0048: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x4B004D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0052: push    0; int
0x4B0054: push    edi; void *
0x4B0055: mov     esi, ecx
0x4B0057: call    OblivionDynamicCast
0x4B005C: add     esp, 14h
0x4B005F: test    eax, eax
0x4B0061: jz      short loc_4B006B
0x4B0063: push    edi; a2
0x4B0064: mov     ecx, esi; this
0x4B0066: call    TESForm_CopyAllComponentsFrom
0x4B006B: pop     edi
0x4B006C: pop     esi
0x4B006D: retn    4
