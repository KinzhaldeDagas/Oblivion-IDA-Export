0x4A91D0: push    ebx
0x4A91D1: mov     ebx, [esp+4+a2]
0x4A91D5: push    esi
0x4A91D6: push    edi
0x4A91D7: push    0; int
0x4A91D9: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x4A91DE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4A91E3: push    0; int
0x4A91E5: push    ebx; void *
0x4A91E6: mov     edi, ecx
0x4A91E8: call    OblivionDynamicCast
0x4A91ED: mov     esi, eax
0x4A91EF: add     esp, 14h
0x4A91F2: test    esi, esi
0x4A91F4: jz      short loc_4A9216
0x4A91F6: push    ebx; a2
0x4A91F7: mov     ecx, edi; this
0x4A91F9: call    TESForm_CopyAllComponentsFrom
0x4A91FE: mov     eax, [esi+7Ch]
0x4A9201: mov     [edi+7Ch], eax
0x4A9204: mov     ecx, [esi+80h]
0x4A920A: mov     [edi+80h], ecx
0x4A9210: mov     dl, [esi+4]
0x4A9213: mov     [edi+4], dl
0x4A9216: pop     edi
0x4A9217: pop     esi
0x4A9218: pop     ebx
0x4A9219: retn    4
