0x680570: movzx   ecx, word ptr [ecx]
0x680573: xor     eax, eax
0x680575: cmp     [esp+arg_0], al
0x680579: jz      short loc_680597
0x68057B: cmp     cx, ds:0B3BF04h
0x680582: jnb     short loc_680590
0x680584: movzx   eax, cx
0x680587: shl     eax, 4
0x68058A: add     eax, ds:0B3BF00h
0x680590: or      byte ptr [eax+0Ch], 1
0x680594: retn    4
0x680597: cmp     cx, ds:0B3BF04h
0x68059E: jnb     short loc_6805AC
0x6805A0: movzx   eax, cx
0x6805A3: shl     eax, 4
0x6805A6: add     eax, ds:0B3BF00h
0x6805AC: and     byte ptr [eax+0Ch], 0FEh
0x6805B0: retn    4
