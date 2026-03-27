0x5B5C90: fld     dword ptr ds:0A40098h
0x5B5C96: mov     eax, ds:0B3B40Ch
0x5B5C9B: push    esi; a3
0x5B5C9C: push    ecx
0x5B5C9D: mov     ecx, [eax+4]; this
0x5B5CA0: fstp    [esp+8+a2]; a3
0x5B5CA3: push    0FB1h; a2
0x5B5CA8: call    Tile_SetFloat
0x5B5CAD: mov     ecx, ds:0B3B40Ch
0x5B5CB3: mov     esi, [ecx+4]
0x5B5CB6: push    0FB2h
0x5B5CBB: mov     ecx, esi
0x5B5CBD: call    Tile_GetFloat
0x5B5CC2: sub     esp, 0Ch
0x5B5CC5: fstp    [esp+10h+a2]; float
0x5B5CC9: mov     ecx, esi; int
0x5B5CCB: fldz
0x5B5CCD: fstp    [esp+10h+var_C]; float
0x5B5CD1: fld     dword ptr ds:0A40098h
0x5B5CD7: fstp    [esp+10h+var_10]; float
0x5B5CDA: push    0FB1h; int
0x5B5CDF: call    sub_589980
0x5B5CE4: mov     eax, ds:0B33428h
0x5B5CE9: test    eax, eax
0x5B5CEB: pop     esi
0x5B5CEC: jz      short loc_5B5D31
0x5B5CEE: cmp     dword ptr [eax+20h], 0
0x5B5CF2: setnz   al
0x5B5CF5: test    al, al
0x5B5CF7: mov     ds:0B3B408h, al
0x5B5CFC: jnz     short loc_5B5D18
0x5B5CFE: mov     edx, ds:0B03094h
0x5B5D04: push    1
0x5B5D06: push    edx
0x5B5D07: call    sub_410C40
0x5B5D0C: add     esp, 8
0x5B5D0F: test    al, al
0x5B5D11: mov     ds:0B3B408h, al
0x5B5D16: jz      short loc_5B5D3A
0x5B5D18: fld1
0x5B5D1A: mov     eax, ds:0B3B40Ch
0x5B5D1F: push    ecx
0x5B5D20: fstp    [esp+4+a3]; a3
0x5B5D23: mov     ecx, [eax+44h]; this
0x5B5D26: push    0FA1h; a2
0x5B5D2B: call    Tile_SetFloat
0x5B5D30: retn
0x5B5D31: mov     byte ptr ds:0B3B408h, 0
0x5B5D38: jmp     short loc_5B5CFE
0x5B5D3A: fld     dword ptr ds:0A379B4h
0x5B5D40: push    ecx
0x5B5D41: mov     ecx, ds:0B3B40Ch
0x5B5D47: fstp    [esp+4+a3]; a3
0x5B5D4A: mov     ecx, [ecx+44h]; this
0x5B5D4D: push    0FA1h; a2
0x5B5D52: call    Tile_SetFloat
0x5B5D57: retn
