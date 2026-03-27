0x787D90: mov     ecx, [ecx+58h]
0x787D93: xor     eax, eax
0x787D95: test    ecx, ecx
0x787D97: jz      short locret_787DB9
0x787D99: mov     eax, [ecx+4]
0x787D9C: test    eax, eax
0x787D9E: jnz     short loc_787DA1
0x787DA0: retn
0x787DA1: mov     ecx, [ecx+8]
0x787DA4: sub     ecx, eax
0x787DA6: mov     eax, 92492493h
0x787DAB: imul    ecx
0x787DAD: add     edx, ecx
0x787DAF: sar     edx, 4
0x787DB2: mov     eax, edx
0x787DB4: shr     eax, 1Fh
0x787DB7: add     eax, edx
0x787DB9: retn
