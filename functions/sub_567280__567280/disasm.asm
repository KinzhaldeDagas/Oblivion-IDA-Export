0x567280: mov     ecx, [esp+arg_0]
0x567284: xor     al, al
0x567286: test    ecx, ecx
0x567288: jz      short locret_56729B
0x56728A: mov     ecx, [ecx+58h]
0x56728D: test    ecx, ecx
0x56728F: jz      short locret_56729B
0x567291: mov     eax, [ecx]
0x567293: mov     edx, [eax+0C0h]
0x567299: call    edx
0x56729B: retn    4
