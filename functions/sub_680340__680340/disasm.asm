0x680340: movzx   eax, word ptr [ecx]
0x680343: cmp     ax, ds:0B3BF04h
0x68034A: jnb     short locret_680373
0x68034C: mov     edx, ds:0B3BF00h
0x680352: movzx   eax, ax
0x680355: shl     eax, 4
0x680358: and     byte ptr [eax+edx+0Ch], 0FBh
0x68035D: lea     eax, [eax+edx+0Ch]
0x680361: movzx   eax, word ptr [ecx]
0x680364: cmp     ax, ds:0B3BF08h
0x68036B: jnb     short locret_680373
0x68036D: mov     ds:0B3BF08h, ax
0x680373: retn
