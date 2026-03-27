0x4B41F0: push    ebx
0x4B41F1: mov     ebx, [esp+4+a2]
0x4B41F5: push    esi
0x4B41F6: push    edi
0x4B41F7: push    0; int
0x4B41F9: push    offset ??_R0?AVTESObjectANIO@@@8; struct TypeDescriptor *
0x4B41FE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4203: push    0; int
0x4B4205: push    ebx; void *
0x4B4206: mov     edi, ecx
0x4B4208: call    OblivionDynamicCast
0x4B420D: mov     esi, eax
0x4B420F: add     esp, 14h
0x4B4212: test    esi, esi
0x4B4214: jz      short loc_4B4224
0x4B4216: push    ebx; a2
0x4B4217: mov     ecx, edi; this
0x4B4219: call    TESForm_CopyAllComponentsFrom
0x4B421E: mov     eax, [esi+30h]
0x4B4221: mov     [edi+30h], eax
0x4B4224: pop     edi
0x4B4225: pop     esi
0x4B4226: pop     ebx
0x4B4227: retn    4
