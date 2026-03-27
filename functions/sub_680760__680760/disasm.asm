0x680760: movzx   eax, word ptr [ecx]
0x680763: xor     edx, edx
0x680765: cmp     ax, ds:0B3BF04h
0x68076C: jnb     short loc_68077E
0x68076E: movzx   eax, ax
0x680771: shl     eax, 4
0x680774: add     eax, ds:0B3BF00h
0x68077A: mov     eax, [eax+8]
0x68077D: retn
0x68077E: mov     eax, [edx+8]
0x680781: retn
