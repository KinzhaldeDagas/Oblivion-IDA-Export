0x57DDE0: mov     eax, ds:0B33EA0h
0x57DDE5: mov     edx, eax
0x57DDE7: sub     edx, [ecx+10h]
0x57DDEA: cmp     edx, 1F4h
0x57DDF0: jbe     short locret_57DDFF
0x57DDF2: cmp     byte ptr [ecx+8], 0
0x57DDF6: mov     [ecx+10h], eax
0x57DDF9: setz    dl
0x57DDFC: mov     [ecx+8], dl
0x57DDFF: retn
