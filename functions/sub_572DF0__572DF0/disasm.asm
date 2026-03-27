0x572DF0: mov     eax, [esp+arg_0]
0x572DF4: lea     eax, [eax+eax*2]
0x572DF7: cmp     dword ptr ds:0B12DD0h[eax*8], 0
0x572DFF: lea     eax, ds:0B12DC0h[eax*8]
0x572E06: jz      short loc_572E1F
0x572E08: cmp     byte ptr [eax+8], 0
0x572E0C: jz      short loc_572E1F
0x572E0E: fld1
0x572E10: fcomp   dword ptr [eax+14h]
0x572E13: fnstsw  ax
0x572E15: test    ah, 41h
0x572E18: jnz     short loc_572E1F
0x572E1A: mov     al, 1
0x572E1C: retn    4
0x572E1F: xor     al, al
0x572E21: retn    4
