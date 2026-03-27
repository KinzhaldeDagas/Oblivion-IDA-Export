0x5ACB40: cmp     word ptr ds:0B1397Ah, 1Ah
0x5ACB48: jbe     short locret_5ACB5E
0x5ACB4A: mov     eax, ds:0B13974h
0x5ACB4F: mov     ecx, [eax+68h]
0x5ACB52: test    ecx, ecx
0x5ACB54: jz      short locret_5ACB5E
0x5ACB56: mov     edx, [ecx]
0x5ACB58: mov     eax, [edx]
0x5ACB5A: push    1
0x5ACB5C: call    eax
0x5ACB5E: retn
