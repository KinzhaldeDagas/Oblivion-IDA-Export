0x5AA0A0: push    esi
0x5AA0A1: mov     esi, ecx
0x5AA0A3: call    sub_57BD80
0x5AA0A8: mov     ecx, [esi+28h]; this
0x5AA0AB: test    ecx, ecx
0x5AA0AD: mov     dword ptr [esi+3Ch], 0
0x5AA0B4: pop     esi
0x5AA0B5: jz      short locret_5AA0DD
0x5AA0B7: fld1
0x5AA0B9: push    ecx
0x5AA0BA: fstp    [esp+4+a2]; a3
0x5AA0BD: push    0FA1h; a2
0x5AA0C2: call    Tile_SetFloat
0x5AA0C7: push    1; arg1
0x5AA0C9: push    0; canCreate
0x5AA0CB: call    InterfaceManager_GetSingleton
0x5AA0D0: add     esp, 8
0x5AA0D3: mov     dword ptr [eax+88h], 0
0x5AA0DD: retn    8
