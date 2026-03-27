0x680460: movzx   edx, word ptr [ecx]
0x680463: xor     eax, eax
0x680465: cmp     dx, ds:0B3BF04h
0x68046C: jnb     short loc_68047A
0x68046E: movzx   eax, dx
0x680471: shl     eax, 4
0x680474: add     eax, ds:0B3BF00h
0x68047A: mov     edx, [esp+arg_0]
0x68047E: mov     [eax+4], edx
0x680481: movzx   eax, word ptr [ecx]
0x680484: xor     edx, edx
0x680486: cmp     ax, ds:0B3BF04h
0x68048D: jnb     short loc_6804A5
0x68048F: mov     ecx, [esp+arg_4]
0x680493: movzx   eax, ax
0x680496: shl     eax, 4
0x680499: add     eax, ds:0B3BF00h
0x68049F: mov     [eax+8], ecx
0x6804A2: retn    8
0x6804A5: mov     eax, [esp+arg_4]
0x6804A9: mov     [edx+8], eax
0x6804AC: retn    8
