0x6E8DA0: mov     ecx, [ecx+30h]
0x6E8DA3: test    ecx, ecx
0x6E8DA5: jz      short loc_6E8DC0
0x6E8DA7: mov     eax, [ecx]
0x6E8DA9: mov     edx, [eax+4]
0x6E8DAC: call    edx
0x6E8DAE: test    eax, eax
0x6E8DB0: jz      short loc_6E8DC0
0x6E8DB2: cmp     eax, offset dword_B3FAB0
0x6E8DB7: jz      short loc_6E8DC3
0x6E8DB9: mov     eax, [eax+4]
0x6E8DBC: test    eax, eax
0x6E8DBE: jnz     short loc_6E8DB2
0x6E8DC0: xor     al, al
0x6E8DC2: retn
0x6E8DC3: mov     al, 1
0x6E8DC5: retn
