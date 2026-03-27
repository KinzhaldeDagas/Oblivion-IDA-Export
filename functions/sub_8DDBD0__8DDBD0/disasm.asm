0x8DDBD0: mov     edx, [esp+arg_4]
0x8DDBD4: mov     eax, [edx]
0x8DDBD6: push    esi
0x8DDBD7: mov     esi, [ecx+8]
0x8DDBDA: cmp     esi, eax
0x8DDBDC: jle     short loc_8DDBE0
0x8DDBDE: mov     eax, esi
0x8DDBE0: mov     [ecx+8], eax
0x8DDBE3: mov     esi, [edx+4]
0x8DDBE6: cmp     eax, esi
0x8DDBE8: jg      short loc_8DDBEC
0x8DDBEA: mov     eax, esi
0x8DDBEC: mov     esi, [ecx+0Ch]
0x8DDBEF: mov     [ecx+8], eax
0x8DDBF2: mov     eax, [edx+4]
0x8DDBF5: add     esi, eax
0x8DDBF7: mov     [ecx+0Ch], esi
0x8DDBFA: mov     eax, [edx+8]
0x8DDBFD: mov     esi, [ecx+10h]
0x8DDC00: add     esi, eax
0x8DDC02: mov     eax, [ecx+18h]
0x8DDC05: mov     [ecx+10h], esi
0x8DDC08: mov     edx, [edx+0Ch]
0x8DDC0B: add     eax, edx
0x8DDC0D: mov     [ecx+18h], eax
0x8DDC10: pop     esi
0x8DDC11: retn    8
