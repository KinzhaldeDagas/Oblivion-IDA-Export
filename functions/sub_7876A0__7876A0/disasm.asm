0x7876A0: mov     eax, [ecx+4]
0x7876A3: test    eax, eax
0x7876A5: jnz     short loc_7876A8
0x7876A7: retn
0x7876A8: mov     ecx, [ecx+8]
0x7876AB: sub     ecx, eax
0x7876AD: mov     eax, 30C30C31h
0x7876B2: imul    ecx
0x7876B4: sar     edx, 4
0x7876B7: mov     eax, edx
0x7876B9: shr     eax, 1Fh
0x7876BC: add     eax, edx
0x7876BE: retn
