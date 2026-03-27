0x6B9610: mov     eax, [ecx+24h]
0x6B9613: push    esi
0x6B9614: push    edi
0x6B9615: mov     edi, [esp+8+arg_0]
0x6B9619: xor     edx, edx
0x6B961B: div     edi
0x6B961D: mov     esi, [ecx+14h]
0x6B9620: test    esi, esi
0x6B9622: mov     [ecx+24h], eax
0x6B9625: jz      short loc_6B9636
0x6B9627: mov     ecx, [esi+8]
0x6B962A: push    edi
0x6B962B: call    sub_6B9610
0x6B9630: mov     esi, [esi]
0x6B9632: test    esi, esi
0x6B9634: jnz     short loc_6B9627
0x6B9636: pop     edi
0x6B9637: pop     esi
0x6B9638: retn    4
