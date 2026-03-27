0x533FE0: mov     ecx, [ecx+8]
0x533FE3: test    ecx, ecx
0x533FE5: jz      short loc_533FF6
0x533FE7: mov     eax, [ecx+30h]
0x533FEA: cmp     eax, 0FFFFFFFFh
0x533FED: jnz     short locret_533FF8
0x533FEF: mov     eax, [ecx+148h]
0x533FF5: retn
0x533FF6: xor     eax, eax
0x533FF8: retn
