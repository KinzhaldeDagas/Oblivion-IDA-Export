0x940CF0: mov     al, [ecx+0Dh]
0x940CF3: cmp     al, 18h
0x940CF5: jnz     short loc_940CFD
0x940CF7: mov     eax, 0FFFFFFFFh
0x940CFC: retn
0x940CFD: cmp     al, 19h
0x940CFF: jz      short loc_940D10
0x940D01: movzx   eax, al
0x940D04: lea     eax, [eax+eax*2]
0x940D07: movsx   eax, word ptr ds:0AA1ED0h[eax*4]
0x940D0F: retn
0x940D10: mov     ecx, [ecx+4]
0x940D13: jmp     sub_953130
