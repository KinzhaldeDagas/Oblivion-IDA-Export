0x782970: push    esi
0x782971: mov     esi, ecx
0x782973: mov     eax, [esi+8]
0x782976: test    eax, eax
0x782978: mov     dword ptr [esi], offset ??_7NiGeometryGroup@@6B@; const NiGeometryGroup::`vftable'
0x78297E: jz      short loc_782988
0x782980: mov     ecx, [eax]
0x782982: mov     edx, [ecx+8]
0x782985: push    eax
0x782986: call    edx
0x782988: test    [esp+4+arg_0], 1
0x78298D: jz      short loc_782998
0x78298F: push    esi
0x782990: call    FormHeapFree
0x782995: add     esp, 4
0x782998: mov     eax, esi
0x78299A: pop     esi
0x78299B: retn    4
