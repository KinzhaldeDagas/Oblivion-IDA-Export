0x6DA840: push    esi
0x6DA841: push    edi
0x6DA842: mov     edi, [esp+8+arg_0]
0x6DA846: push    edi
0x6DA847: mov     esi, ecx
0x6DA849: call    sub_6EC2C0
0x6DA84E: test    al, al
0x6DA850: jnz     short loc_6DA857
0x6DA852: pop     edi
0x6DA853: pop     esi
0x6DA854: retn    4
0x6DA857: mov     ecx, [esi+18h]
0x6DA85A: test    ecx, ecx
0x6DA85C: jz      short loc_6DA866
0x6DA85E: mov     eax, [ecx]
0x6DA860: mov     edx, [eax+24h]
0x6DA863: push    edi
0x6DA864: call    edx
0x6DA866: pop     edi
0x6DA867: mov     al, 1
0x6DA869: pop     esi
0x6DA86A: retn    4
