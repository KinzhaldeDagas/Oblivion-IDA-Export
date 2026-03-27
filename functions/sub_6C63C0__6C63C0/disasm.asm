0x6C63C0: movzx   eax, word ptr [ecx+8]
0x6C63C4: cmp     ax, 0FFFFh
0x6C63C8: jz      short loc_6C63D3
0x6C63CA: mov     ecx, [ecx]
0x6C63CC: movzx   eax, ax
0x6C63CF: add     eax, [ecx+8]
0x6C63D2: retn
0x6C63D3: xor     eax, eax
0x6C63D5: retn
