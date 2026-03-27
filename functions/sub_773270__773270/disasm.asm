0x773270: push    esi
0x773271: lea     eax, [ecx+0A4h]
0x773277: mov     esi, 5
0x77327C: xor     edx, edx
0x77327E: mov     edi, edi
0x773280: mov     [eax-24h], dl
0x773283: mov     [eax], dl
0x773285: mov     [eax+0Ch], dl
0x773288: add     eax, 1
0x77328B: sub     esi, 1
0x77328E: jnz     short loc_773280
0x773290: mov     [ecx+88h], edx
0x773296: mov     [ecx+64h], edx
0x773299: mov     [ecx+0ACh], edx
0x77329F: pop     esi
0x7732A0: retn
