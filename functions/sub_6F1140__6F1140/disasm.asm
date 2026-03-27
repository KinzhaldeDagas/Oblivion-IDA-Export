0x6F1140: mov     eax, [ecx+4]
0x6F1143: test    eax, eax
0x6F1145: jnz     short loc_6F1148
0x6F1147: retn
0x6F1148: mov     ecx, [ecx+8]
0x6F114B: sub     ecx, eax
0x6F114D: mov     eax, 2E8BA2E9h
0x6F1152: imul    ecx
0x6F1154: sar     edx, 3
0x6F1157: mov     eax, edx
0x6F1159: shr     eax, 1Fh
0x6F115C: add     eax, edx
0x6F115E: retn
