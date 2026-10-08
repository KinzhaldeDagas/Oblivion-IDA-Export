0x57D300: mov     eax, [esp+arg_4]
0x57D304: fild    [esp+arg_4]
0x57D308: test    eax, eax
0x57D30A: jge     short loc_57D312
0x57D30C: fadd    dword ptr ds:0A2FC78h
0x57D312: mov     edx, [esp+propertyCode]
0x57D316: push    ecx
0x57D317: fstp    [esp+4+a2]; value
0x57D31A: push    edx; propertyCode
0x57D31B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x57D320: retn    8
