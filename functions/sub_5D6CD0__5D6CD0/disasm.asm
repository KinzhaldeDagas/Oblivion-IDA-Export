0x5D6CD0: mov     eax, [esp+arg_0]
0x5D6CD4: cmp     eax, 6
0x5D6CD7: jnz     short loc_5D6CDF
0x5D6CD9: push    ecx
0x5D6CDA: mov     ecx, [ecx+34h]
0x5D6CDD: jmp     short loc_5D6CE8
0x5D6CDF: cmp     eax, 5
0x5D6CE2: jnz     short locret_5D6CFB
0x5D6CE4: push    ecx
0x5D6CE5: mov     ecx, [ecx+30h]; this
0x5D6CE8: fld     dword ptr ds:0A40098h
0x5D6CEE: fstp    [esp+4+a2]; a3
0x5D6CF1: push    0FA7h; a2
0x5D6CF6: call    Tile_SetFloat
0x5D6CFB: retn    8
