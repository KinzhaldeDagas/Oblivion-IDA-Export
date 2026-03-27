0x6C63E0: movzx   eax, word ptr [ecx+0Ah]
0x6C63E4: cmp     ax, 0FFFFh
0x6C63E8: jz      short loc_6C63F3
0x6C63EA: mov     ecx, [ecx]
0x6C63EC: movzx   eax, ax
0x6C63EF: add     eax, [ecx+8]
0x6C63F2: retn
0x6C63F3: xor     eax, eax
0x6C63F5: retn
