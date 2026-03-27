0x54F720: mov     eax, [ecx+4]
0x54F723: test    eax, eax
0x54F725: jnz     short loc_54F728
0x54F727: retn
0x54F728: mov     ecx, [ecx+8]
0x54F72B: sub     ecx, eax
0x54F72D: mov     eax, 66666667h
0x54F732: imul    ecx
0x54F734: sar     edx, 3
0x54F737: mov     eax, edx
0x54F739: shr     eax, 1Fh
0x54F73C: add     eax, edx
0x54F73E: retn
