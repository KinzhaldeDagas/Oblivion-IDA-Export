0x5C0AC0: push    esi; a3
0x5C0AC1: push    3F8h
0x5C0AC6: mov     esi, ecx
0x5C0AC8: call    InterfaceManager_MenuModeHasFocus
0x5C0ACD: add     esp, 4
0x5C0AD0: test    al, al
0x5C0AD2: jz      short loc_5C0B41
0x5C0AD4: mov     eax, [esp+4+arg_0]
0x5C0AD8: cmp     eax, 0Fh
0x5C0ADB: jnz     short loc_5C0B20
0x5C0ADD: fld1
0x5C0ADF: fcomp   [esp+4+arg_4]
0x5C0AE3: fnstsw  ax
0x5C0AE5: test    ah, 41h
0x5C0AE8: jp      short loc_5C0B41
0x5C0AEA: push    3; int
0x5C0AEC: call    sub_57DE50
0x5C0AF1: fld     dword ptr ds:0A6B1F0h
0x5C0AF7: mov     ecx, [esi+34h]; this
0x5C0AFA: fstp    [esp+8+a2]; a3
0x5C0AFD: push    0FB7h; a2
0x5C0B02: call    Tile_SetFloat
0x5C0B07: fldz
0x5C0B09: push    ecx
0x5C0B0A: fstp    [esp+8+a2]; a3
0x5C0B0D: mov     ecx, [esi+34h]; this
0x5C0B10: push    0FB7h; a2
0x5C0B15: call    Tile_SetFloat
0x5C0B1A: mov     al, 1
0x5C0B1C: pop     esi
0x5C0B1D: retn    8
0x5C0B20: cmp     eax, 10h
0x5C0B23: jnz     short loc_5C0B41
0x5C0B25: fld1
0x5C0B27: fcomp   [esp+4+arg_4]
0x5C0B2B: fnstsw  ax
0x5C0B2D: test    ah, 41h
0x5C0B30: jp      short loc_5C0B41
0x5C0B32: push    3; int
0x5C0B34: call    sub_57DE50
0x5C0B39: fld     dword ptr ds:0A6D1E8h
0x5C0B3F: jmp     short loc_5C0AF7
0x5C0B41: xor     al, al
0x5C0B43: pop     esi
0x5C0B44: retn    8
