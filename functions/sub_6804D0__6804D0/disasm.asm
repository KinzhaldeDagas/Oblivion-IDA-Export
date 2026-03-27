0x6804D0: movzx   ecx, word ptr [ecx]
0x6804D3: xor     eax, eax
0x6804D5: cmp     cx, ds:0B3BF04h
0x6804DC: jnb     short loc_6804EA
0x6804DE: movzx   eax, cx
0x6804E1: shl     eax, 4
0x6804E4: add     eax, ds:0B3BF00h
0x6804EA: movzx   eax, byte ptr [eax+0Ch]
0x6804EE: shr     eax, 1
0x6804F0: and     al, 1
0x6804F2: retn
