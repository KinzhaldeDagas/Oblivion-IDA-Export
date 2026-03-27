0x5A20C0: push    esi; a3
0x5A20C1: mov     esi, ecx
0x5A20C3: cmp     dword ptr [esi+2Ch], 0
0x5A20C7: jz      short loc_5A20E3
0x5A20C9: fld     dword ptr ds:0A379B4h
0x5A20CF: push    ecx
0x5A20D0: mov     ecx, [esi+88h]; this
0x5A20D6: fstp    [esp+8+a2]; a3
0x5A20D9: push    0FA1h; a2
0x5A20DE: call    Tile_SetFloat
0x5A20E3: cmp     dword ptr [esi+30h], 0
0x5A20E7: jz      short loc_5A2103
0x5A20E9: fld     dword ptr ds:0A379B4h
0x5A20EF: push    ecx
0x5A20F0: mov     ecx, [esi+8Ch]; this
0x5A20F6: fstp    [esp+8+a2]; a3
0x5A20F9: push    0FA1h; a2
0x5A20FE: call    Tile_SetFloat
0x5A2103: mov     ecx, [esi+98h]
0x5A2109: call    sub_57D2F0
0x5A210E: test    al, al
0x5A2110: jz      short loc_5A214F
0x5A2112: mov     ecx, [esi+98h]
0x5A2118: call    sub_57DDE0
0x5A211D: mov     ecx, [esi+98h]
0x5A2123: call    sub_580120
0x5A2128: mov     ecx, [esi+3Ch]
0x5A212B: push    eax
0x5A212C: push    0FDEh
0x5A2131: call    Tile_SetString
0x5A2136: mov     ecx, [esi+98h]
0x5A213C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5A2141: mov     ecx, [esi+28h]
0x5A2144: push    0; a3
0x5A2146: push    eax; a2
0x5A2147: add     ecx, 1Ch; this
0x5A214A: call    BSStringT_Set
0x5A214F: pop     esi
0x5A2150: retn
