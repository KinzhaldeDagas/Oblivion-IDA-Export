0x5BEA90: push    ecx
0x5BEA91: push    40Ah
0x5BEA96: call    Menu_GetOpenMenuTile
0x5BEA9B: add     esp, 4
0x5BEA9E: test    eax, eax
0x5BEAA0: jz      loc_5BEB5F
0x5BEAA6: push    esi; a3
0x5BEAA7: mov     ecx, eax
0x5BEAA9: call    Tile_GetParentMenu
0x5BEAAE: mov     esi, eax
0x5BEAB0: test    esi, esi
0x5BEAB2: jz      loc_5BEB5E
0x5BEAB8: mov     ecx, [esi+98h]
0x5BEABE: push    0FA1h
0x5BEAC3: call    Tile_GetFloat
0x5BEAC8: fcomp   dword ptr ds:0A379B4h
0x5BEACE: fnstsw  ax
0x5BEAD0: test    ah, 44h
0x5BEAD3: jp      short loc_5BEADC
0x5BEAD5: mov     ecx, 1
0x5BEADA: jmp     short loc_5BEADE
0x5BEADC: xor     ecx, ecx
0x5BEADE: mov     al, [esp+8+arg_0]
0x5BEAE2: movzx   edx, al
0x5BEAE5: cmp     edx, ecx
0x5BEAE7: jz      short loc_5BEB5E
0x5BEAE9: sub     al, 1
0x5BEAEB: neg     al
0x5BEAED: push    ecx
0x5BEAEE: mov     ecx, [esi+98h]; this
0x5BEAF4: sbb     eax, eax
0x5BEAF6: add     eax, 2
0x5BEAF9: mov     [esp+0Ch+a3], eax
0x5BEAFD: fild    [esp+0Ch+a3]
0x5BEB01: fstp    [esp+0Ch+a3]; a3
0x5BEB05: fld     [esp+0Ch+a3]
0x5BEB09: fstp    [esp+0Ch+a2]; a3
0x5BEB0C: push    0FA1h; a2
0x5BEB11: call    Tile_SetFloat
0x5BEB16: fld     [esp+8+a3]
0x5BEB1A: push    ecx
0x5BEB1B: mov     ecx, [esi+9Ch]; this
0x5BEB21: fstp    [esp+0Ch+a2]; a3
0x5BEB24: push    0FA1h; a2
0x5BEB29: call    Tile_SetFloat
0x5BEB2E: fld     [esp+8+a3]
0x5BEB32: push    ecx
0x5BEB33: mov     ecx, [esi+0A0h]; this
0x5BEB39: fstp    [esp+0Ch+a2]; a3
0x5BEB3C: push    0FA1h; a2
0x5BEB41: call    Tile_SetFloat
0x5BEB46: fld     [esp+8+a3]
0x5BEB4A: push    ecx
0x5BEB4B: mov     ecx, [esi+0A4h]; this
0x5BEB51: fstp    [esp+0Ch+a2]; a3
0x5BEB54: push    0FA1h; a2
0x5BEB59: call    Tile_SetFloat
0x5BEB5E: pop     esi
0x5BEB5F: pop     ecx
0x5BEB60: retn
