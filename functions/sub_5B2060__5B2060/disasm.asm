0x5B2060: fild    [esp+arg_0]
0x5B2064: push    esi; a3
0x5B2065: push    ecx
0x5B2066: mov     esi, ecx
0x5B2068: mov     ecx, [esi+4]; this
0x5B206B: fstp    [esp+8+a2]; a3
0x5B206E: push    0FAEh; a2
0x5B2073: call    Tile_SetFloat
0x5B2078: push    1; arg1
0x5B207A: push    0; canCreate
0x5B207C: call    InterfaceManager_GetSingleton
0x5B2081: mov     ecx, [esp+0Ch+arg_0]
0x5B2085: add     esp, 8
0x5B2088: cmp     ecx, 1
0x5B208B: mov     [eax+0Ch], cl
0x5B208E: jle     short loc_5B209F
0x5B2090: add     ecx, 0FFFFFFFEh
0x5B2093: mov     eax, 1
0x5B2098: shl     eax, cl
0x5B209A: mov     [esi+50h], eax
0x5B209D: jmp     short loc_5B20A6
0x5B209F: mov     dword ptr [esi+50h], 7
0x5B20A6: mov     ecx, [esi+50h]
0x5B20A9: push    ecx
0x5B20AA: mov     ecx, esi
0x5B20AC: call    sub_5B1A40
0x5B20B1: fld     dword ptr ds:0A6B618h
0x5B20B7: push    ecx
0x5B20B8: mov     ecx, [esi+34h]; this
0x5B20BB: fstp    [esp+8+a2]; a3
0x5B20BE: push    0FB7h; a2
0x5B20C3: call    Tile_SetFloat
0x5B20C8: fldz
0x5B20CA: push    ecx
0x5B20CB: fstp    [esp+8+a2]; a3
0x5B20CE: mov     ecx, [esi+34h]; this
0x5B20D1: push    0FB7h; a2
0x5B20D6: call    Tile_SetFloat
0x5B20DB: push    1; arg1
0x5B20DD: push    0; canCreate
0x5B20DF: call    InterfaceManager_GetSingleton
0x5B20E4: mov     ecx, [eax+88h]
0x5B20EA: add     esp, 8
0x5B20ED: test    ecx, ecx
0x5B20EF: jz      short loc_5B210D
0x5B20F1: push    edi
0x5B20F2: mov     edi, [esi]
0x5B20F4: push    ecx
0x5B20F5: push    0FA8h
0x5B20FA: call    Tile_GetFloat
0x5B20FF: call    Double_To_SInt32
0x5B2104: mov     edx, [edi+14h]
0x5B2107: push    eax
0x5B2108: mov     ecx, esi
0x5B210A: call    edx
0x5B210C: pop     edi
0x5B210D: push    0
0x5B210F: push    0FDDh
0x5B2114: push    0
0x5B2116: push    1; arg1
0x5B2118: push    0; canCreate
0x5B211A: call    InterfaceManager_GetSingleton
0x5B211F: add     esp, 8
0x5B2122: mov     ecx, eax
0x5B2124: call    sub_57F9F0
0x5B2129: push    1; arg1
0x5B212B: push    0; canCreate
0x5B212D: call    InterfaceManager_GetSingleton
0x5B2132: add     esp, 8
0x5B2135: mov     ecx, eax
0x5B2137: call    sub_57FD60
0x5B213C: pop     esi
0x5B213D: retn    8
