0x5D5AB0: push    esi; a3
0x5D5AB1: mov     esi, ecx
0x5D5AB3: mov     eax, [esi]
0x5D5AB5: mov     edx, [eax+34h]
0x5D5AB8: push    edi; a3
0x5D5AB9: call    edx
0x5D5ABB: mov     edi, eax
0x5D5ABD: call    sub_578FE0
0x5D5AC2: cmp     eax, edi
0x5D5AC4: jnz     short loc_5D5B31
0x5D5AC6: cmp     dword ptr [esi+4Ch], 0
0x5D5ACA: jz      short loc_5D5B31
0x5D5ACC: cmp     dword ptr [esi+34h], 0
0x5D5AD0: jz      short loc_5D5B31
0x5D5AD2: mov     ecx, esi
0x5D5AD4: call    sub_5D5A00
0x5D5AD9: cmp     eax, [esi+44h]
0x5D5ADC: push    ecx
0x5D5ADD: mov     ecx, [esi+34h]; this
0x5D5AE0: jnz     short loc_5D5B0F
0x5D5AE2: fld     dword ptr ds:0A379B4h
0x5D5AE8: fstp    [esp+0Ch+a2]; a3
0x5D5AEB: push    0FAFh; a2
0x5D5AF0: call    Tile_SetFloat
0x5D5AF5: fld     dword ptr ds:0A379B4h
0x5D5AFB: push    ecx
0x5D5AFC: mov     ecx, [esi+34h]; this
0x5D5AFF: fstp    [esp+0Ch+a2]; a3
0x5D5B02: push    0FC9h; a2
0x5D5B07: call    Tile_SetFloat
0x5D5B0C: pop     edi
0x5D5B0D: pop     esi
0x5D5B0E: retn
0x5D5B0F: fld1
0x5D5B11: fstp    [esp+0Ch+a2]; a3
0x5D5B14: push    0FAFh; a2
0x5D5B19: call    Tile_SetFloat
0x5D5B1E: fld1
0x5D5B20: push    ecx
0x5D5B21: fstp    [esp+0Ch+a2]; a3
0x5D5B24: mov     ecx, [esi+34h]; this
0x5D5B27: push    0FC9h; a2
0x5D5B2C: call    Tile_SetFloat
0x5D5B31: pop     edi
0x5D5B32: pop     esi
0x5D5B33: retn
