0x5888E0: mov     eax, [ecx]
0x5888E2: xor     edx, edx
0x5888E4: cmp     eax, edx
0x5888E6: jz      short loc_5888EE
0x5888E8: mov     eax, [eax]
0x5888EA: cmp     eax, edx
0x5888EC: jnz     short loc_5888E8
0x5888EE: mov     eax, [ecx]
0x5888F0: cmp     eax, edx
0x5888F2: push    esi
0x5888F3: jz      short loc_5888FB
0x5888F5: mov     esi, [ecx+4]
0x5888F8: mov     [eax+4], esi
0x5888FB: mov     eax, [ecx+4]
0x5888FE: cmp     eax, edx
0x588900: jz      short loc_588906
0x588902: mov     esi, [ecx]
0x588904: mov     [eax], esi
0x588906: mov     eax, [ecx+10h]
0x588909: cmp     eax, edx
0x58890B: jz      short loc_588913
0x58890D: mov     esi, [ecx+14h]
0x588910: mov     [eax+14h], esi
0x588913: mov     eax, [ecx+14h]
0x588916: cmp     eax, edx
0x588918: jz      short loc_588920
0x58891A: mov     esi, [ecx+10h]
0x58891D: mov     [eax+10h], esi
0x588920: mov     [ecx], edx
0x588922: mov     [ecx+4], edx
0x588925: mov     [ecx+10h], edx
0x588928: mov     [ecx+14h], edx
0x58892B: pop     esi
0x58892C: retn
