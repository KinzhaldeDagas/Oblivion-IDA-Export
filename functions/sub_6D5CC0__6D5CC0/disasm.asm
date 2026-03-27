0x6D5CC0: mov     ax, [esp+arg_0]
0x6D5CC5: test    ax, ax
0x6D5CC8: jnz     short loc_6D5CD7
0x6D5CCA: mov     ecx, [ecx+2Ch]
0x6D5CCD: test    ecx, ecx
0x6D5CCF: jz      short loc_6D5CFD
0x6D5CD1: mov     eax, [ecx+14h]
0x6D5CD4: retn    4
0x6D5CD7: cmp     ax, 1
0x6D5CDB: jnz     short loc_6D5CEA
0x6D5CDD: mov     ecx, [ecx+2Ch]
0x6D5CE0: test    ecx, ecx
0x6D5CE2: jz      short loc_6D5CFD
0x6D5CE4: mov     eax, [ecx+10h]
0x6D5CE7: retn    4
0x6D5CEA: cmp     ax, 2
0x6D5CEE: jnz     short loc_6D5CFD
0x6D5CF0: mov     ecx, [ecx+2Ch]
0x6D5CF3: test    ecx, ecx
0x6D5CF5: jz      short loc_6D5CFD
0x6D5CF7: mov     eax, [ecx+18h]
0x6D5CFA: retn    4
0x6D5CFD: xor     eax, eax
0x6D5CFF: retn    4
