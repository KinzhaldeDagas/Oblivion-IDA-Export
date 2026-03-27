0x889750: test    ecx, ecx
0x889752: jz      short locret_889766
0x889754: mov     eax, [ecx]
0x889756: mov     edx, [eax+58h]
0x889759: call    edx
0x88975B: test    eax, eax
0x88975D: jz      short locret_889766
0x88975F: mov     ecx, eax
0x889761: jmp     sub_898DB0
0x889766: retn    4
