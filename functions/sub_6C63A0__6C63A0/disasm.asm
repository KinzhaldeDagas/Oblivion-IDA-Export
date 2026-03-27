0x6C63A0: movzx   eax, word ptr [ecx+6]
0x6C63A4: cmp     ax, 0FFFFh
0x6C63A8: jz      short loc_6C63B3
0x6C63AA: mov     ecx, [ecx]
0x6C63AC: movzx   eax, ax
0x6C63AF: add     eax, [ecx+8]
0x6C63B2: retn
0x6C63B3: xor     eax, eax
0x6C63B5: retn
