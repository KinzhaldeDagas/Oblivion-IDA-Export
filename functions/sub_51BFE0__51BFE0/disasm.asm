0x51BFE0: push    ebx
0x51BFE1: mov     ebx, [esp+4+a2]
0x51BFE5: push    esi
0x51BFE6: push    edi
0x51BFE7: push    0; int
0x51BFE9: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x51BFEE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51BFF3: push    0; int
0x51BFF5: push    ebx; void *
0x51BFF6: mov     edi, ecx
0x51BFF8: call    OblivionDynamicCast
0x51BFFD: mov     esi, eax
0x51BFFF: add     esp, 14h
0x51C002: test    esi, esi
0x51C004: jz      short loc_51C01B
0x51C006: push    ebx; a2
0x51C007: mov     ecx, edi; this
0x51C009: call    TESForm_CopyAllComponentsFrom
0x51C00E: add     esi, 38h ; '8'
0x51C011: add     edi, 38h ; '8'
0x51C014: mov     ecx, 0Dh
0x51C019: rep movsd
0x51C01B: pop     edi
0x51C01C: pop     esi
0x51C01D: pop     ebx
0x51C01E: retn    4
