0x5BC890: mov     ecx, [ecx+30h]; this
0x5BC893: test    ecx, ecx
0x5BC895: jz      short locret_5BC8A7
0x5BC897: fld1
0x5BC899: push    ecx
0x5BC89A: fstp    [esp+4+a2]; a3
0x5BC89D: push    0FA1h; a2
0x5BC8A2: call    Tile_SetFloat
0x5BC8A7: retn    8
