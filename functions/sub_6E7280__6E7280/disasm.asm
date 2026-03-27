0x6E7280: push    esi
0x6E7281: push    edi
0x6E7282: mov     edi, [esp+8+a2]
0x6E7286: push    edi; a2
0x6E7287: mov     esi, ecx
0x6E7289: call    sub_700670
0x6E728E: test    al, al
0x6E7290: jz      short loc_6E72A9
0x6E7292: mov     eax, [edi+10h]
0x6E7295: cmp     eax, [esi+10h]
0x6E7298: jnz     short loc_6E72A9
0x6E729A: mov     ecx, [edi+14h]
0x6E729D: cmp     ecx, [esi+14h]
0x6E72A0: jnz     short loc_6E72A9
0x6E72A2: pop     edi
0x6E72A3: mov     al, 1
0x6E72A5: pop     esi
0x6E72A6: retn    4
0x6E72A9: pop     edi
0x6E72AA: xor     al, al
0x6E72AC: pop     esi
0x6E72AD: retn    4
