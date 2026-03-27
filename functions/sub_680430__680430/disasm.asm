0x680430: movzx   eax, word ptr [ecx]
0x680433: xor     edx, edx
0x680435: cmp     ax, ds:0B3BF04h
0x68043C: jnb     short loc_68044E
0x68043E: movzx   eax, ax
0x680441: shl     eax, 4
0x680444: add     eax, ds:0B3BF00h
0x68044A: mov     eax, [eax+4]
0x68044D: retn
0x68044E: mov     eax, [edx+4]
0x680451: retn
