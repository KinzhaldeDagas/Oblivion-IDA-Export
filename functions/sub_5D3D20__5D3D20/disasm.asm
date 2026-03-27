0x5D3D20: push    esi
0x5D3D21: mov     esi, ecx
0x5D3D23: cmp     byte ptr [esi+5Ch], 0
0x5D3D27: jnz     loc_5D3DFD
0x5D3D2D: push    edi; a3
0x5D3D2E: mov     edi, [esp+8+arg_0]
0x5D3D32: cmp     edi, 1
0x5D3D35: jnz     short loc_5D3D61
0x5D3D37: call    sub_5D2CF0
0x5D3D3C: call    sub_5BDA20
0x5D3D41: mov     ecx, [esi+40h]; this
0x5D3D44: test    ecx, ecx
0x5D3D46: jz      loc_5D3DFC
0x5D3D4C: fld1
0x5D3D4E: push    ecx
0x5D3D4F: fstp    [esp+0Ch+a2]; a3
0x5D3D52: push    0FA1h; a2
0x5D3D57: call    Tile_SetFloat
0x5D3D5C: pop     edi
0x5D3D5D: pop     esi
0x5D3D5E: retn    8
0x5D3D61: cmp     edi, 65h ; 'e'
0x5D3D64: jl      loc_5D3DFC
0x5D3D6A: push    1; arg1
0x5D3D6C: push    0; canCreate
0x5D3D6E: call    InterfaceManager_GetSingleton
0x5D3D73: mov     eax, [eax+118h]
0x5D3D79: shr     eax, 2
0x5D3D7C: add     esp, 8
0x5D3D7F: test    al, 1
0x5D3D81: jz      short loc_5D3DBD
0x5D3D83: cmp     edi, 65h ; 'e'
0x5D3D86: jz      short loc_5D3DFC
0x5D3D88: mov     ecx, [esp+8+arg_4]
0x5D3D8C: mov     [esi+58h], ecx
0x5D3D8F: mov     edx, ds:0B38CF8h
0x5D3D95: mov     eax, ds:0B38D00h
0x5D3D9A: mov     ecx, ds:0B38760h
0x5D3DA0: push    0
0x5D3DA2: push    edx
0x5D3DA3: push    eax
0x5D3DA4: push    1
0x5D3DA6: push    offset sub_5D3B70
0x5D3DAB: push    ecx
0x5D3DAC: call    ShowUIMessageBox
0x5D3DB1: add     esp, 18h
0x5D3DB4: pop     edi
0x5D3DB5: mov     byte ptr [esi+5Ch], 1
0x5D3DB9: pop     esi
0x5D3DBA: retn    8
0x5D3DBD: cmp     edi, 65h ; 'e'
0x5D3DC0: jnz     short loc_5D3DCC
0x5D3DC2: call    sub_5D3230
0x5D3DC7: pop     edi
0x5D3DC8: pop     esi
0x5D3DC9: retn    8
0x5D3DCC: mov     edx, [esp+8+arg_4]
0x5D3DD0: mov     [esi+58h], edx
0x5D3DD3: mov     eax, ds:0B38CF8h
0x5D3DD8: mov     ecx, ds:0B38D00h
0x5D3DDE: mov     edx, ds:0B38758h
0x5D3DE4: push    0
0x5D3DE6: push    eax
0x5D3DE7: push    ecx
0x5D3DE8: push    1
0x5D3DEA: push    offset SaveLoad_OverwriteSavegameCallback
0x5D3DEF: push    edx
0x5D3DF0: call    ShowUIMessageBox
0x5D3DF5: mov     byte ptr [esi+5Ch], 1
0x5D3DF9: add     esp, 18h
0x5D3DFC: pop     edi
0x5D3DFD: pop     esi
0x5D3DFE: retn    8
