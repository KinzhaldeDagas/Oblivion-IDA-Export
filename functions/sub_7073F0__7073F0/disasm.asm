0x7073F0: mov     eax, [esp+arg_0]
0x7073F4: test    eax, eax
0x7073F6: jz      short loc_70743B
0x7073F8: mov     edx, [ecx+8]
0x7073FB: test    edx, edx
0x7073FD: jz      short loc_70743B
0x7073FF: push    ebx
0x707400: mov     bl, [eax]
0x707402: cmp     bl, [edx]
0x707404: jnz     short loc_70742A
0x707406: test    bl, bl
0x707408: jz      short loc_70741C
0x70740A: mov     bl, [eax+1]
0x70740D: cmp     bl, [edx+1]
0x707410: jnz     short loc_70742A
0x707412: add     eax, 2
0x707415: add     edx, 2
0x707418: test    bl, bl
0x70741A: jnz     short loc_707400
0x70741C: xor     eax, eax
0x70741E: neg     eax
0x707420: sbb     eax, eax
0x707422: not     eax
0x707424: and     eax, ecx
0x707426: pop     ebx
0x707427: retn    4
0x70742A: sbb     eax, eax
0x70742C: sbb     eax, 0FFFFFFFFh
0x70742F: neg     eax
0x707431: sbb     eax, eax
0x707433: not     eax
0x707435: and     eax, ecx
0x707437: pop     ebx
0x707438: retn    4
0x70743B: xor     eax, eax
0x70743D: retn    4
