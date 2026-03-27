0x452570: push    ebx
0x452571: mov     ebx, [esp+4+arg_0]
0x452575: push    ebp
0x452576: push    esi
0x452577: mov     esi, ecx
0x452579: mov     eax, [esi]
0x45257B: mov     edx, [eax+4]
0x45257E: push    edi
0x45257F: push    ebx
0x452580: call    edx
0x452582: mov     ebp, eax
0x452584: mov     eax, [esi+8]
0x452587: mov     edi, [eax+ebp*4]
0x45258A: test    edi, edi
0x45258C: jz      short NiTMap_SetAt___InsertNode
0x45258E: mov     edi, edi
