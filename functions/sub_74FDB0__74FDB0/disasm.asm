0x74FDB0: push    esi
0x74FDB1: push    edi
0x74FDB2: mov     edi, [esp+8+arg_0]
0x74FDB6: push    edi
0x74FDB7: mov     esi, ecx
0x74FDB9: call    sub_75E670
0x74FDBE: mov     ecx, [esi+48h]
0x74FDC1: test    ecx, ecx
0x74FDC3: jz      short loc_74FDCD
0x74FDC5: mov     eax, [ecx]
0x74FDC7: mov     edx, [eax+38h]
0x74FDCA: push    edi
0x74FDCB: call    edx
0x74FDCD: pop     edi
0x74FDCE: pop     esi
0x74FDCF: retn    4
