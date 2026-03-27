0x4D90D0: push    esi
0x4D90D1: mov     esi, ecx
0x4D90D3: mov     ecx, ds:0B33B00h
0x4D90D9: call    sub_45A500
0x4D90DE: test    al, al
0x4D90E0: jz      short loc_4D90EE
0x4D90E2: lea     ecx, [esi+44h]
0x4D90E5: call    sub_420FD0
0x4D90EA: test    eax, eax
0x4D90EC: jnz     short loc_4D90FB
0x4D90EE: mov     eax, [esp+4+arg_0]
0x4D90F2: push    eax
0x4D90F3: lea     ecx, [esi+44h]
0x4D90F6: call    sub_424DE0
0x4D90FB: pop     esi
0x4D90FC: retn    4
