0x4491B0: mov     eax, [ecx]
0x4491B2: cmp     dword ptr [eax+4], 0
0x4491B6: jnz     short loc_4491C3
0x4491B8: cmp     dword ptr [eax], 0
0x4491BB: jnz     short loc_4491C3
0x4491BD: mov     eax, 1
0x4491C2: retn
0x4491C3: xor     eax, eax
0x4491C5: retn
