0x592250: mov     eax, [esp+sibling]
0x592254: mov     edx, [esp+parent]
0x592258: push    esi; a3
0x592259: mov     esi, ecx
0x59225B: mov     ecx, [esp+4+name]
0x59225F: push    eax; sibling
0x592260: push    ecx; name
0x592261: push    edx; parent
0x592262: mov     ecx, esi; this
0x592264: call    Tile__Init; Verified: initializes base Tile, optionally attaches to supplied parent via 0x58D1C0, then optionally names it. First argument after receiver is Tile* parent, not float; disassembly uses integer pointer test and push.
0x592269: push    offset word_A36430
0x59226E: push    0FDEh
0x592273: mov     ecx, esi
0x592275: call    Tile_SetString
0x59227A: fld     dword ptr ds:0A6B1A0h
0x592280: push    ecx
0x592281: fstp    [esp+8+a2]; value
0x592284: push    0FCCh; propertyCode
0x592289: mov     ecx, esi; this
0x59228B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x592290: fld     dword ptr ds:0A6B19Ch
0x592296: push    ecx
0x592297: fstp    [esp+8+a2]; value
0x59229A: push    0FCDh; propertyCode
0x59229F: mov     ecx, esi; this
0x5922A1: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5922A6: fld     dword ptr ds:0A6B198h
0x5922AC: push    ecx
0x5922AD: fstp    [esp+8+a2]; value
0x5922B0: push    0FCEh; propertyCode
0x5922B5: mov     ecx, esi; this
0x5922B7: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5922BC: fld     dword ptr ds:0A40098h
0x5922C2: push    ecx
0x5922C3: fstp    [esp+8+a2]; value
0x5922C6: push    0FA7h; propertyCode
0x5922CB: mov     ecx, esi; this
0x5922CD: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5922D2: pop     esi
0x5922D3: retn    0Ch
