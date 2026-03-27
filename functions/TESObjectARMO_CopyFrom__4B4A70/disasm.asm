0x4B4A70: push    ebx
0x4B4A71: mov     ebx, [esp+4+a2]
0x4B4A75: push    esi
0x4B4A76: push    edi
0x4B4A77: push    0; int
0x4B4A79: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x4B4A7E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B4A83: push    0; int
0x4B4A85: push    ebx; void *
0x4B4A86: mov     edi, ecx
0x4B4A88: call    OblivionDynamicCast
0x4B4A8D: mov     esi, eax
0x4B4A8F: add     esp, 14h
0x4B4A92: test    esi, esi
0x4B4A94: jz      short loc_4B4AAC
0x4B4A96: push    ebx; a2
0x4B4A97: mov     ecx, edi; this
0x4B4A99: call    TESForm_CopyAllComponentsFrom
0x4B4A9E: mov     ax, [esi+0E4h]
0x4B4AA5: mov     [edi+0E4h], ax
0x4B4AAC: pop     edi
0x4B4AAD: pop     esi
0x4B4AAE: pop     ebx
0x4B4AAF: retn    4
