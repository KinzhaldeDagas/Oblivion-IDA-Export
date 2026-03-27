0x51FDF0: push    ebx
0x51FDF1: mov     ebx, [esp+4+a2]
0x51FDF5: push    esi
0x51FDF6: push    edi
0x51FDF7: push    0; int
0x51FDF9: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x51FDFE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51FE03: push    0; int
0x51FE05: push    ebx; void *
0x51FE06: mov     edi, ecx
0x51FE08: call    OblivionDynamicCast
0x51FE0D: mov     esi, eax
0x51FE0F: add     esp, 14h
0x51FE12: test    esi, esi
0x51FE14: jz      short loc_51FE24
0x51FE16: push    ebx; a2
0x51FE17: mov     ecx, edi; this
0x51FE19: call    TESForm_CopyAllComponentsFrom
0x51FE1E: mov     al, [esi+48h]
0x51FE21: mov     [edi+48h], al
0x51FE24: pop     edi
0x51FE25: pop     esi
0x51FE26: pop     ebx
0x51FE27: retn    4
