0x7496D0: push    esi
0x7496D1: push    edi
0x7496D2: mov     edi, [esp+8+arg_0]
0x7496D6: push    edi
0x7496D7: mov     esi, ecx
0x7496D9: call    sub_717910
0x7496DE: test    al, al
0x7496E0: jnz     short loc_7496E7
0x7496E2: pop     edi
0x7496E3: pop     esi
0x7496E4: retn    4
0x7496E7: mov     esi, [esi+0C8h]
0x7496ED: test    esi, esi
0x7496EF: jz      short loc_749705
0x7496F1: mov     ecx, [esi+8]
0x7496F4: lea     eax, [esi+8]
0x7496F7: mov     eax, [ecx]
0x7496F9: mov     edx, [eax+24h]
0x7496FC: mov     esi, [esi]
0x7496FE: push    edi
0x7496FF: call    edx
0x749701: test    esi, esi
0x749703: jnz     short loc_7496F1
0x749705: pop     edi
0x749706: mov     al, 1
0x749708: pop     esi
0x749709: retn    4
