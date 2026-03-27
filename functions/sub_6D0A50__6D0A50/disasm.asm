0x6D0A50: movzx   eax, [esp+arg_0]
0x6D0A55: mov     ecx, [ecx+50h]
0x6D0A58: cmp     eax, [ecx+8]
0x6D0A5B: jnb     short loc_6D0A6E
0x6D0A5D: mov     ecx, [ecx+10h]
0x6D0A60: lea     eax, [eax+eax*2]
0x6D0A63: lea     ecx, [ecx+eax*4]
0x6D0A66: call    TESHealthForm_GetHealth
0x6D0A6B: retn    4
0x6D0A6E: xor     ecx, ecx
0x6D0A70: call    TESHealthForm_GetHealth
0x6D0A75: retn    4
