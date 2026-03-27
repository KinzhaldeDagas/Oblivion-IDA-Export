0x4A63E0: test    ecx, ecx
0x4A63E2: jz      short loc_4A6402
0x4A63E4: lea     eax, [ecx+4]
0x4A63E7: test    eax, eax
0x4A63E9: jz      short loc_4A6402
0x4A63EB: mov     edx, [esp+arg_0]
0x4A63EF: nop
0x4A63F0: mov     ecx, [eax]
0x4A63F2: test    ecx, ecx
0x4A63F4: jz      short loc_4A63FB
0x4A63F6: cmp     [ecx+0Ch], edx
0x4A63F9: jz      short loc_4A6407
0x4A63FB: mov     eax, [eax+4]
0x4A63FE: test    eax, eax
0x4A6400: jnz     short loc_4A63F0
0x4A6402: xor     eax, eax
0x4A6404: retn    4
0x4A6407: mov     eax, ecx
0x4A6409: retn    4
