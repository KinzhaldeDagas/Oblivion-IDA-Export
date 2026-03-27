0x567730: push    esi
0x567731: push    edi
0x567732: mov     edi, [esp+8+arg_4]
0x567736: test    edi, edi
0x567738: jz      short loc_567763
0x56773A: mov     esi, [esp+8+arg_0]
0x56773E: mov     eax, [esi]
0x567740: mov     edx, [eax+170h]
0x567746: mov     ecx, esi
0x567748: call    edx
0x56774A: cmp     eax, edi
0x56774C: jnz     short loc_567763
0x56774E: mov     eax, [esi+8]
0x567751: shr     eax, 5
0x567754: test    al, 1
0x567756: jnz     short loc_567763
0x567758: pop     edi
0x567759: mov     ds:0B3A3C4h, esi
0x56775F: mov     al, 1
0x567761: pop     esi
0x567762: retn
0x567763: pop     edi
0x567764: xor     al, al
0x567766: pop     esi
0x567767: retn
