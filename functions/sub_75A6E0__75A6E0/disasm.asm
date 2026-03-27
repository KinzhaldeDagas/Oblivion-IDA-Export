0x75A6E0: push    esi
0x75A6E1: push    edi
0x75A6E2: mov     edi, [esp+8+arg_0]
0x75A6E6: push    edi
0x75A6E7: mov     esi, ecx
0x75A6E9: call    sub_6E7270
0x75A6EE: test    al, al
0x75A6F0: jnz     short loc_75A6F7
0x75A6F2: pop     edi
0x75A6F3: pop     esi
0x75A6F4: retn    4
0x75A6F7: mov     ecx, [esi+18h]
0x75A6FA: test    ecx, ecx
0x75A6FC: jz      short loc_75A706
0x75A6FE: mov     eax, [ecx]
0x75A700: mov     edx, [eax+24h]
0x75A703: push    edi
0x75A704: call    edx
0x75A706: pop     edi
0x75A707: mov     al, 1
0x75A709: pop     esi
0x75A70A: retn    4
