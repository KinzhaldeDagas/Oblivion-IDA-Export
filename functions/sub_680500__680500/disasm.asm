0x680500: movzx   ecx, word ptr [ecx]
0x680503: xor     eax, eax
0x680505: cmp     [esp+arg_0], al
0x680509: jz      short loc_680527
0x68050B: cmp     cx, ds:0B3BF04h
0x680512: jnb     short loc_680520
0x680514: movzx   eax, cx
0x680517: shl     eax, 4
0x68051A: add     eax, ds:0B3BF00h
0x680520: or      byte ptr [eax+0Ch], 2
0x680524: retn    4
0x680527: cmp     cx, ds:0B3BF04h
0x68052E: jnb     short loc_68053C
0x680530: movzx   eax, cx
0x680533: shl     eax, 4
0x680536: add     eax, ds:0B3BF00h
0x68053C: and     byte ptr [eax+0Ch], 0FDh
0x680540: retn    4
