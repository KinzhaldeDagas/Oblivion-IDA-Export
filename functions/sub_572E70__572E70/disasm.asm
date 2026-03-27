0x572E70: mov     eax, [esp+arg_0]
0x572E74: lea     eax, [eax+eax*2]
0x572E77: cmp     dword ptr ds:0B12DD0h[eax*8], 0
0x572E7F: lea     eax, ds:0B12DC0h[eax*8]
0x572E86: jz      short loc_572E93
0x572E88: cmp     byte ptr [eax+8], 0
0x572E8C: jz      short loc_572E93
0x572E8E: mov     al, 1
0x572E90: retn    4
0x572E93: xor     al, al
0x572E95: retn    4
