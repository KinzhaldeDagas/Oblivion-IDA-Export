0x8A0530: test    ecx, ecx
0x8A0532: jz      short loc_8A0539
0x8A0534: mov     ecx, [ecx+8]
0x8A0537: jmp     short loc_8A053B
0x8A0539: xor     ecx, ecx
0x8A053B: xor     eax, eax
0x8A053D: test    ecx, ecx
0x8A053F: jz      short locret_8A0544
0x8A0541: mov     eax, [ecx+10h]
0x8A0544: retn
