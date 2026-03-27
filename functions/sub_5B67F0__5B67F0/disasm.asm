0x5B67F0: cmp     byte ptr [esp+arg_8], 0
0x5B67F5: push    esi; a3
0x5B67F6: jz      short loc_5B67FD
0x5B67F8: mov     esi, [ecx+58h]
0x5B67FB: jmp     short loc_5B6800
0x5B67FD: mov     esi, [ecx+60h]
0x5B6800: push    0FBAh
0x5B6805: mov     ecx, esi
0x5B6807: call    Tile_GetFloat
0x5B680C: fadd    [esp+4+arg_0]
0x5B6810: push    ecx
0x5B6811: mov     ecx, esi; this
0x5B6813: fstp    [esp+8+arg_8]
0x5B6817: fld     [esp+8+arg_8]
0x5B681B: fstp    [esp+8+a2]; a3
0x5B681E: push    0FB8h; a2
0x5B6823: call    Tile_SetFloat
0x5B6828: push    0FBBh
0x5B682D: mov     ecx, esi
0x5B682F: call    Tile_GetFloat
0x5B6834: fadd    [esp+4+arg_4]
0x5B6838: push    ecx
0x5B6839: mov     ecx, esi; this
0x5B683B: fstp    [esp+8+arg_8]
0x5B683F: fld     [esp+8+arg_8]
0x5B6843: fstp    [esp+8+a2]; a3
0x5B6846: push    0FB9h; a2
0x5B684B: call    Tile_SetFloat
0x5B6850: pop     esi
0x5B6851: retn    0Ch
