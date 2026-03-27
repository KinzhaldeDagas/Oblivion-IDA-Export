0x46EFB0: mov     eax, [esp+arg_0]
0x46EFB4: push    esi
0x46EFB5: push    0; int
0x46EFB7: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x46EFBC: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46EFC1: push    0; int
0x46EFC3: push    eax; void *
0x46EFC4: mov     esi, ecx
0x46EFC6: call    OblivionDynamicCast
0x46EFCB: add     esp, 14h
0x46EFCE: test    eax, eax
0x46EFD0: jz      short loc_46EFD8
0x46EFD2: mov     ecx, [eax+4]
0x46EFD5: mov     [esi+4], ecx
0x46EFD8: pop     esi
0x46EFD9: retn    4
