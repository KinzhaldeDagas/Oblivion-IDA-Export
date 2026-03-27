0x784180: mov     ecx, [esp+arg_0]
0x784184: mov     edx, [esp+arg_4]
0x784188: cmp     ecx, edx
0x78418A: mov     eax, [esp+arg_8]
0x78418E: jz      short locret_7841BE
0x784190: push    esi
0x784191: mov     esi, [ecx]
0x784193: mov     [eax], esi
0x784195: mov     esi, [ecx+4]
0x784198: mov     [eax+4], esi
0x78419B: mov     esi, [ecx+8]
0x78419E: mov     [eax+8], esi
0x7841A1: mov     esi, [ecx+0Ch]
0x7841A4: mov     [eax+0Ch], esi
0x7841A7: mov     esi, [ecx+10h]
0x7841AA: mov     [eax+10h], esi
0x7841AD: mov     esi, [ecx+14h]
0x7841B0: mov     [eax+14h], esi
0x7841B3: add     ecx, 18h
0x7841B6: add     eax, 18h
0x7841B9: cmp     ecx, edx
0x7841BB: jnz     short loc_784191
0x7841BD: pop     esi
0x7841BE: retn
