0x8A63F0: mov     eax, [ecx+54h]
0x8A63F3: test    eax, eax
0x8A63F5: jnz     short loc_8A6401
0x8A63F7: mov     eax, [esp+arg_0]
0x8A63FB: mov     byte ptr [eax], 0
0x8A63FE: retn    4
0x8A6401: mov     cl, [eax+28h]
0x8A6404: mov     eax, [esp+arg_0]
0x8A6408: mov     [eax], cl
0x8A640A: retn    4
