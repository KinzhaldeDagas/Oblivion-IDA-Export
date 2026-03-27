0x4B6600: push    ebx
0x4B6601: mov     ebx, [esp+4+a2]
0x4B6605: push    esi
0x4B6606: push    edi
0x4B6607: push    0; int
0x4B6609: push    offset ??_R0?AVTESObjectCONT@@@8; struct TypeDescriptor *
0x4B660E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B6613: push    0; int
0x4B6615: push    ebx; void *
0x4B6616: mov     edi, ecx
0x4B6618: call    OblivionDynamicCast
0x4B661D: mov     esi, eax
0x4B661F: add     esp, 14h
0x4B6622: test    esi, esi
0x4B6624: jz      short loc_4B6640
0x4B6626: push    ebx; a2
0x4B6627: mov     ecx, edi; this
0x4B6629: call    TESForm_CopyAllComponentsFrom
0x4B662E: mov     al, [esi+78h]
0x4B6631: mov     [edi+78h], al
0x4B6634: mov     ecx, [esi+70h]
0x4B6637: mov     [edi+70h], ecx
0x4B663A: mov     edx, [esi+74h]
0x4B663D: mov     [edi+74h], edx
0x4B6640: pop     edi
0x4B6641: pop     esi
0x4B6642: pop     ebx
0x4B6643: retn    4
