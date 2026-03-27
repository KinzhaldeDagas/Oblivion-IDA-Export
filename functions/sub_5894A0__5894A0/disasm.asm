0x5894A0: mov     eax, [ecx+28h]
0x5894A3: test    eax, eax
0x5894A5: mov     edx, [esp+arg_0]
0x5894A9: jz      short loc_5894BC
0x5894AB: jmp     short loc_5894B0
0x5894AD: align 10h
0x5894B0: cmp     [eax+4], edx
0x5894B3: jz      short loc_5894C5
0x5894B5: mov     eax, [eax+14h]
0x5894B8: test    eax, eax
0x5894BA: jnz     short loc_5894B0
0x5894BC: mov     [esp+arg_0], edx
0x5894C0: jmp     Tile_GetFloat
0x5894C5: fld     dword ptr [eax+0Ch]
0x5894C8: retn    4
