0x591D40: mov     eax, [esp+sibling]
0x591D44: mov     edx, [esp+parent]
0x591D48: push    esi; a3
0x591D49: mov     esi, ecx
0x591D4B: mov     ecx, [esp+4+name]
0x591D4F: push    eax; sibling
0x591D50: push    ecx; name
0x591D51: push    edx; parent
0x591D52: mov     ecx, esi; this
0x591D54: call    Tile__Init; Verified: initializes base Tile, optionally attaches to supplied parent via 0x58D1C0, then optionally names it. First argument after receiver is Tile* parent, not float; disassembly uses integer pointer test and push.
0x591D59: fld     dword ptr ds:0A40098h
0x591D5F: push    ecx
0x591D60: fstp    [esp+8+a2]; value
0x591D63: push    0FCCh; propertyCode
0x591D68: mov     ecx, esi; this
0x591D6A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x591D6F: fld     dword ptr ds:0A40098h
0x591D75: push    ecx
0x591D76: fstp    [esp+8+a2]; value
0x591D79: push    0FCDh; propertyCode
0x591D7E: mov     ecx, esi; this
0x591D80: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x591D85: fld     dword ptr ds:0A40098h
0x591D8B: push    ecx
0x591D8C: fstp    [esp+8+a2]; value
0x591D8F: push    0FCEh; propertyCode
0x591D94: mov     ecx, esi; this
0x591D96: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x591D9B: fldz
0x591D9D: push    ecx
0x591D9E: fstp    [esp+8+a2]; value
0x591DA1: push    0FA7h; propertyCode
0x591DA6: mov     ecx, esi; this
0x591DA8: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x591DAD: pop     esi
0x591DAE: retn    0Ch
