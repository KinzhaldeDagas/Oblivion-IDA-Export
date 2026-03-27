0x6D2A50: cmp     dword ptr [ecx+10h], 0
0x6D2A54: jz      short loc_6D2A5B
0x6D2A56: xor     al, al
0x6D2A58: retn    4
0x6D2A5B: fld     dword ptr [ecx+0Ch]
0x6D2A5E: fld     dword ptr ds:0A7C6B0h
0x6D2A64: fucompp
0x6D2A66: fnstsw  ax
0x6D2A68: test    ah, 44h
0x6D2A6B: jnp     short loc_6D2A56
0x6D2A6D: mov     al, 1
0x6D2A6F: retn    4
