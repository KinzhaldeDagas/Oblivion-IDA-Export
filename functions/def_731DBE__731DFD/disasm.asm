0x731DFD: cmp     dword ptr [esi+10h], 0; jumptable 00731DBE default case
0x731E01: jnz     short loc_731E1F
0x731E03: cmp     dword ptr [esi+14h], 0
0x731E07: jnz     short loc_731E1F
0x731E09: cmp     dword ptr [esi+18h], 0
0x731E0D: jnz     short loc_731E1F
0x731E0F: cmp     dword ptr [esi+1Ch], 0
0x731E13: jnz     short loc_731E1F
0x731E15: xor     eax, eax
0x731E17: pop     edi
0x731E18: mov     [esi+8], al
0x731E1B: pop     esi
0x731E1C: retn    4
0x731E1F: mov     eax, 1
0x731E24: mov     [esi+8], al
0x731E27: pop     edi
0x731E28: pop     esi
0x731E29: retn    4
