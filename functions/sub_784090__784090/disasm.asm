0x784090: mov     eax, [esp+arg_0]
0x784094: mov     ecx, [eax+8]
0x784097: cmp     byte ptr [ecx+2Dh], 0
0x78409B: jnz     short locret_7840AB
0x78409D: lea     ecx, [ecx+0]
0x7840A0: mov     eax, ecx
0x7840A2: mov     ecx, [eax+8]
0x7840A5: cmp     byte ptr [ecx+2Dh], 0
0x7840A9: jz      short loc_7840A0
0x7840AB: retn
