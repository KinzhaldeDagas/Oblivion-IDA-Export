0x54F6A0: mov     eax, [ecx+4]
0x54F6A3: test    eax, eax
0x54F6A5: jnz     short loc_54F6A8
0x54F6A7: retn
0x54F6A8: mov     ecx, [ecx+8]
0x54F6AB: sub     ecx, eax
0x54F6AD: mov     eax, 4EC4EC4Fh
0x54F6B2: imul    ecx
0x54F6B4: sar     edx, 4
0x54F6B7: mov     eax, edx
0x54F6B9: shr     eax, 1Fh
0x54F6BC: add     eax, edx
0x54F6BE: retn
