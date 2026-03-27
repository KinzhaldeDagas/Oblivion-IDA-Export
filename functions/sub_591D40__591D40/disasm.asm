0x591D40: mov     eax, [esp+arg_8]
0x591D44: mov     edx, [esp+arg_0]
0x591D48: push    esi; a3
0x591D49: mov     esi, ecx
0x591D4B: mov     ecx, [esp+4+arg_4]
0x591D4F: push    eax
0x591D50: push    ecx
0x591D51: push    edx
0x591D52: mov     ecx, esi
0x591D54: call    sub_58DA00
0x591D59: fld     dword ptr ds:0A40098h
0x591D5F: push    ecx
0x591D60: fstp    [esp+8+a2]; a3
0x591D63: push    0FCCh; a2
0x591D68: mov     ecx, esi; this
0x591D6A: call    Tile_SetFloat
0x591D6F: fld     dword ptr ds:0A40098h
0x591D75: push    ecx
0x591D76: fstp    [esp+8+a2]; a3
0x591D79: push    0FCDh; a2
0x591D7E: mov     ecx, esi; this
0x591D80: call    Tile_SetFloat
0x591D85: fld     dword ptr ds:0A40098h
0x591D8B: push    ecx
0x591D8C: fstp    [esp+8+a2]; a3
0x591D8F: push    0FCEh; a2
0x591D94: mov     ecx, esi; this
0x591D96: call    Tile_SetFloat
0x591D9B: fldz
0x591D9D: push    ecx
0x591D9E: fstp    [esp+8+a2]; a3
0x591DA1: push    0FA7h; a2
0x591DA6: mov     ecx, esi; this
0x591DA8: call    Tile_SetFloat
0x591DAD: pop     esi
0x591DAE: retn    0Ch
