0x5E5670: cmp     dword ptr [ecx+58h], 0
0x5E5674: jz      short loc_5E5688
0x5E5676: mov     ecx, [ecx+58h]
0x5E5679: mov     eax, [ecx]
0x5E567B: mov     edx, [eax+2D0h]
0x5E5681: call    edx
0x5E5683: cmp     eax, 6
0x5E5686: jz      short loc_5E568B
0x5E5688: xor     al, al
0x5E568A: retn
0x5E568B: mov     al, 1
0x5E568D: retn
