0x783FE0: mov     eax, [ecx+4]
0x783FE3: test    eax, eax
0x783FE5: jnz     short loc_783FE8
0x783FE7: retn
0x783FE8: mov     ecx, [ecx+8]
0x783FEB: sub     ecx, eax
0x783FED: mov     eax, 2AAAAAABh
0x783FF2: imul    ecx
0x783FF4: sar     edx, 2
0x783FF7: mov     eax, edx
0x783FF9: shr     eax, 1Fh
0x783FFC: add     eax, edx
0x783FFE: retn
