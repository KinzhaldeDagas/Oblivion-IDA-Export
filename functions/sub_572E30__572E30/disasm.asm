0x572E30: mov     eax, [esp+arg_0]
0x572E34: lea     eax, [eax+eax*2]
0x572E37: cmp     dword ptr ds:0B12DD0h[eax*8], 0
0x572E3F: lea     eax, ds:0B12DC0h[eax*8]
0x572E46: jz      short loc_572E5F
0x572E48: cmp     byte ptr [eax+8], 0
0x572E4C: jz      short loc_572E5F
0x572E4E: fld1
0x572E50: fcomp   dword ptr [eax+14h]
0x572E53: fnstsw  ax
0x572E55: test    ah, 44h
0x572E58: jp      short loc_572E5F
0x572E5A: mov     al, 1
0x572E5C: retn    4
0x572E5F: xor     al, al
0x572E61: retn    4
