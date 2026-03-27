0x4B5640: push    ebx
0x4B5641: mov     ebx, [esp+4+a2]
0x4B5645: push    esi
0x4B5646: push    edi
0x4B5647: push    0; int
0x4B5649: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x4B564E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B5653: push    0; int
0x4B5655: push    ebx; void *
0x4B5656: mov     edi, ecx
0x4B5658: call    OblivionDynamicCast
0x4B565D: mov     esi, eax
0x4B565F: add     esp, 14h
0x4B5662: test    esi, esi
0x4B5664: jz      short loc_4B567C
0x4B5666: push    ebx; a2
0x4B5667: mov     ecx, edi; this
0x4B5669: call    TESForm_CopyAllComponentsFrom
0x4B566E: mov     ax, [esi+88h]
0x4B5675: mov     [edi+88h], ax
0x4B567C: pop     edi
0x4B567D: pop     esi
0x4B567E: pop     ebx
0x4B567F: retn    4
