0x77EBB0: mov     eax, [esp+arg_0]
0x77EBB4: test    eax, eax
0x77EBB6: mov     ds:0B428B4h, eax
0x77EBBB: jz      short loc_77EBFA
0x77EBBD: push    esi
0x77EBBE: mov     esi, [eax+280h]
0x77EBC4: mov     eax, ds:0B428B0h
0x77EBC9: test    eax, eax
0x77EBCB: jz      short loc_77EBD5
0x77EBCD: mov     ecx, [eax]
0x77EBCF: mov     edx, [ecx+8]
0x77EBD2: push    eax
0x77EBD3: call    edx
0x77EBD5: test    esi, esi
0x77EBD7: mov     ds:0B428B0h, esi
0x77EBDD: jz      short loc_77EBE7
0x77EBDF: mov     eax, [esi]
0x77EBE1: mov     ecx, [eax+4]
0x77EBE4: push    esi
0x77EBE5: call    ecx
0x77EBE7: mov     edx, ds:0B428B4h
0x77EBED: mov     eax, [edx+8ACh]
0x77EBF3: mov     ds:0B428B8h, eax
0x77EBF8: pop     esi
0x77EBF9: retn
0x77EBFA: mov     eax, ds:0B428B0h
0x77EBFF: test    eax, eax
0x77EC01: mov     dword ptr ds:0B428B8h, 0
0x77EC0B: jz      short loc_77EC15
0x77EC0D: mov     ecx, [eax]
0x77EC0F: mov     edx, [ecx+8]
0x77EC12: push    eax
0x77EC13: call    edx
0x77EC15: mov     dword ptr ds:0B428B0h, 0
0x77EC1F: retn
