0x8A2690: test    ecx, ecx
0x8A2692: jz      short loc_8A26A7
0x8A2694: mov     eax, [ecx+8]
0x8A2697: test    eax, eax
0x8A2699: jz      short loc_8A26A7
0x8A269B: mov     eax, [eax+8]
0x8A269E: mov     ecx, [esp+arg_0]
0x8A26A2: mov     [ecx], eax
0x8A26A4: retn    4
0x8A26A7: mov     edx, [esp+arg_0]
0x8A26AB: xor     eax, eax
0x8A26AD: mov     [edx], eax
0x8A26AF: retn    4
