0x680550: movzx   ecx, word ptr [ecx]
0x680553: xor     eax, eax
0x680555: cmp     cx, ds:0B3BF04h
0x68055C: jnb     short loc_68056A
0x68055E: movzx   eax, cx
0x680561: shl     eax, 4
0x680564: add     eax, ds:0B3BF00h
0x68056A: mov     al, [eax+0Ch]
0x68056D: and     al, 1
0x68056F: retn
