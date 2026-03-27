0x942B00: mov     eax, [esp+arg_0]
0x942B04: push    esi
0x942B05: push    eax
0x942B06: mov     esi, ecx
0x942B08: call    sub_942A80
0x942B0D: mov     ecx, [esi+8]
0x942B10: cmp     eax, ecx
0x942B12: jg      short loc_942B29
0x942B14: lea     edx, [eax+ecx*2+2]
0x942B18: mov     eax, [esi]
0x942B1A: mov     ecx, [eax+edx*4]
0x942B1D: mov     edx, [esp+4+arg_4]
0x942B21: mov     [edx], ecx
0x942B23: xor     eax, eax
0x942B25: pop     esi
0x942B26: retn    8
0x942B29: mov     eax, 1
0x942B2E: pop     esi
0x942B2F: retn    8
