0x784140: mov     eax, [esp+arg_0]
0x784144: mov     edx, [esp+arg_4]
0x784148: cmp     eax, edx
0x78414A: jz      short locret_78417B
0x78414C: mov     ecx, [esp+arg_8]
0x784150: push    esi
0x784151: mov     esi, [ecx]
0x784153: mov     [eax], esi
0x784155: mov     esi, [ecx+4]
0x784158: mov     [eax+4], esi
0x78415B: mov     esi, [ecx+8]
0x78415E: mov     [eax+8], esi
0x784161: mov     esi, [ecx+0Ch]
0x784164: mov     [eax+0Ch], esi
0x784167: mov     esi, [ecx+10h]
0x78416A: mov     [eax+10h], esi
0x78416D: mov     esi, [ecx+14h]
0x784170: mov     [eax+14h], esi
0x784173: add     eax, 18h
0x784176: cmp     eax, edx
0x784178: jnz     short loc_784151
0x78417A: pop     esi
0x78417B: retn
