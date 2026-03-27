0x7876C0: mov     eax, [ecx+4]
0x7876C3: test    eax, eax
0x7876C5: jnz     short loc_7876C8
0x7876C7: retn
0x7876C8: mov     ecx, [ecx+8]
0x7876CB: sub     ecx, eax
0x7876CD: mov     eax, 92492493h
0x7876D2: imul    ecx
0x7876D4: add     edx, ecx
0x7876D6: sar     edx, 4
0x7876D9: mov     eax, edx
0x7876DB: shr     eax, 1Fh
0x7876DE: add     eax, edx
0x7876E0: retn
