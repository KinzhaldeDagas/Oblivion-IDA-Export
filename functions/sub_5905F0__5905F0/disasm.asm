0x5905F0: mov     eax, [esp+arg_8]
0x5905F4: mov     edx, [esp+arg_0]
0x5905F8: push    esi; a3
0x5905F9: mov     esi, ecx
0x5905FB: mov     ecx, [esp+4+arg_4]
0x5905FF: push    eax
0x590600: push    ecx
0x590601: push    edx
0x590602: mov     ecx, esi
0x590604: call    sub_58DA00
0x590609: fld     dword ptr ds:0A40098h
0x59060F: push    ecx
0x590610: fstp    [esp+8+a2]; a3
0x590613: push    0FCCh; a2
0x590618: mov     ecx, esi; this
0x59061A: call    Tile_SetFloat
0x59061F: fld     dword ptr ds:0A40098h
0x590625: push    ecx
0x590626: fstp    [esp+8+a2]; a3
0x590629: push    0FCDh; a2
0x59062E: mov     ecx, esi; this
0x590630: call    Tile_SetFloat
0x590635: fld     dword ptr ds:0A40098h
0x59063B: push    ecx
0x59063C: fstp    [esp+8+a2]; a3
0x59063F: push    0FCEh; a2
0x590644: mov     ecx, esi; this
0x590646: call    Tile_SetFloat
0x59064B: fld     dword ptr ds:0A40098h
0x590651: push    ecx
0x590652: fstp    [esp+8+a2]; a3
0x590655: push    0FA7h; a2
0x59065A: mov     ecx, esi; this
0x59065C: call    Tile_SetFloat
0x590661: pop     esi
0x590662: retn    0Ch
