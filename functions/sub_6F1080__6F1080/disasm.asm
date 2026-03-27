0x6F1080: mov     eax, [ecx+4]
0x6F1083: test    eax, eax
0x6F1085: jnz     short loc_6F1088
0x6F1087: retn
0x6F1088: mov     ecx, [ecx+8]
0x6F108B: sub     ecx, eax
0x6F108D: mov     eax, 2AAAAAABh
0x6F1092: imul    ecx
0x6F1094: sar     edx, 1
0x6F1096: mov     eax, edx
0x6F1098: shr     eax, 1Fh
0x6F109B: add     eax, edx
0x6F109D: retn
