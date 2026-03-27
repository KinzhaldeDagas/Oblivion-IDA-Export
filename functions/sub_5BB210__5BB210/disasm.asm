0x5BB210: fld1
0x5BB212: push    ebx; a3
0x5BB213: push    esi; a3
0x5BB214: push    ecx
0x5BB215: mov     esi, ecx
0x5BB217: fstp    [esp+0Ch+a2]; a3
0x5BB21A: mov     ecx, [esi+4Ch]; this
0x5BB21D: push    0FA1h; a2
0x5BB222: call    Tile_SetFloat
0x5BB227: fild    [esp+8+arg_0]
0x5BB22B: push    ecx
0x5BB22C: mov     ecx, [esi+28h]; this
0x5BB22F: fstp    [esp+0Ch+a2]; a3
0x5BB232: push    0FAEh; a2
0x5BB237: call    Tile_SetFloat
0x5BB23C: push    1; arg1
0x5BB23E: push    0; canCreate
0x5BB240: call    InterfaceManager_GetSingleton
0x5BB245: fld1
0x5BB247: mov     ebx, [esp+10h+arg_0]
0x5BB24B: fstp    [esp+10h+a2]; a3
0x5BB24F: add     esp, 4
0x5BB252: mov     [eax+0Dh], bl
0x5BB255: mov     ecx, [esi+5Ch]; this
0x5BB258: push    0FA1h; a2
0x5BB25D: call    Tile_SetFloat
0x5BB262: mov     ecx, [esi+5Ch]
0x5BB265: push    offset word_A36430
0x5BB26A: push    0FDEh
0x5BB26F: call    Tile_SetString
0x5BB274: mov     ecx, [esi+0F4h]; this
0x5BB27A: test    ecx, ecx
0x5BB27C: jz      short loc_5BB28E
0x5BB27E: fldz
0x5BB280: push    ecx
0x5BB281: fstp    [esp+0Ch+a2]; a3
0x5BB284: push    0FB5h; a2
0x5BB289: call    Tile_SetFloat
0x5BB28E: cmp     ebx, 4
0x5BB291: mov     dword ptr [esi+0F4h], 0
0x5BB29B: jz      short loc_5BB2A2
0x5BB29D: cmp     ebx, 5
0x5BB2A0: jnz     short loc_5BB2AD
0x5BB2A2: push    0
0x5BB2A4: call    sub_5BACB0
0x5BB2A9: fld1
0x5BB2AB: jmp     short loc_5BB2D9
0x5BB2AD: cmp     ebx, 3
0x5BB2B0: jnz     short loc_5BB2FE
0x5BB2B2: push    0
0x5BB2B4: call    sub_5BACB0
0x5BB2B9: mov     ecx, ds:0B333C4h
0x5BB2BF: add     esp, 4
0x5BB2C2: call    sub_65D830
0x5BB2C7: neg     eax
0x5BB2C9: sbb     eax, eax
0x5BB2CB: neg     eax
0x5BB2CD: add     eax, 1
0x5BB2D0: mov     [esp+8+arg_0], eax
0x5BB2D4: fild    [esp+8+arg_0]
0x5BB2D8: push    ecx
0x5BB2D9: mov     ecx, [esi+50h]; this
0x5BB2DC: fstp    [esp+0Ch+a2]; a3
0x5BB2DF: push    0FA1h; a2
0x5BB2E4: call    Tile_SetFloat
0x5BB2E9: fld1
0x5BB2EB: push    ecx
0x5BB2EC: fstp    [esp+0Ch+a2]; a3
0x5BB2EF: mov     ecx, [esi+54h]; this
0x5BB2F2: push    0FA1h; a2
0x5BB2F7: call    Tile_SetFloat
0x5BB2FC: jmp     short loc_5BB318
0x5BB2FE: cmp     ebx, 2
0x5BB301: jnz     short loc_5BB30A
0x5BB303: call    sub_5B91E0
0x5BB308: jmp     short loc_5BB318
0x5BB30A: cmp     ebx, 1
0x5BB30D: jnz     short loc_5BB318
0x5BB30F: push    ebx
0x5BB310: call    sub_5BA4D0
0x5BB315: add     esp, 4
0x5BB318: fld     dword ptr ds:0A6B618h
0x5BB31E: push    ecx
0x5BB31F: mov     ecx, [esi+44h]; this
0x5BB322: fstp    [esp+0Ch+a2]; a3
0x5BB325: push    0FB7h; a2
0x5BB32A: call    Tile_SetFloat
0x5BB32F: fldz
0x5BB331: push    ecx
0x5BB332: fstp    [esp+0Ch+a2]; a3
0x5BB335: mov     ecx, [esi+44h]; this
0x5BB338: push    0FB7h; a2
0x5BB33D: call    Tile_SetFloat
0x5BB342: pop     esi
0x5BB343: pop     ebx
0x5BB344: retn    8
