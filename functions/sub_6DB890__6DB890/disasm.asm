0x6DB890: push    esi
0x6DB891: push    edi
0x6DB892: mov     edi, [esp+8+arg_0]
0x6DB896: push    edi
0x6DB897: mov     esi, ecx
0x6DB899: call    sub_6EC2C0
0x6DB89E: test    al, al
0x6DB8A0: jnz     short loc_6DB8A7
0x6DB8A2: pop     edi
0x6DB8A3: pop     esi
0x6DB8A4: retn    4
0x6DB8A7: mov     ecx, [esi+18h]
0x6DB8AA: test    ecx, ecx
0x6DB8AC: jz      short loc_6DB8B6
0x6DB8AE: mov     eax, [ecx]
0x6DB8B0: mov     edx, [eax+24h]
0x6DB8B3: push    edi
0x6DB8B4: call    edx
0x6DB8B6: mov     ecx, [esi+1Ch]
0x6DB8B9: test    ecx, ecx
0x6DB8BB: jz      short loc_6DB8C5
0x6DB8BD: mov     eax, [ecx]
0x6DB8BF: mov     edx, [eax+24h]
0x6DB8C2: push    edi
0x6DB8C3: call    edx
0x6DB8C5: pop     edi
0x6DB8C6: mov     al, 1
0x6DB8C8: pop     esi
0x6DB8C9: retn    4
