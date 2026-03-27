0x5AA1B0: push    esi; a3
0x5AA1B1: mov     esi, ecx
0x5AA1B3: cmp     byte ptr [esi+44h], 0
0x5AA1B7: jnz     short loc_5AA1E6
0x5AA1B9: mov     ecx, [esi+28h]; this
0x5AA1BC: test    ecx, ecx
0x5AA1BE: jz      short loc_5AA1E6
0x5AA1C0: fld1
0x5AA1C2: push    ecx
0x5AA1C3: fstp    [esp+8+a2]; a3
0x5AA1C6: push    0FA1h; a2
0x5AA1CB: call    Tile_SetFloat
0x5AA1D0: push    1; arg1
0x5AA1D2: push    0; canCreate
0x5AA1D4: call    InterfaceManager_GetSingleton
0x5AA1D9: add     esp, 8
0x5AA1DC: mov     dword ptr [eax+88h], 0
0x5AA1E6: or      al, 0FFh
0x5AA1E8: add     [esi+44h], al
0x5AA1EB: cmp     [esi+44h], al
0x5AA1EE: jge     short loc_5AA1F3
0x5AA1F0: mov     [esi+44h], al
0x5AA1F3: push    3EAh
0x5AA1F8: call    InterfaceManager_MenuModeHasFocus
0x5AA1FD: add     esp, 4
0x5AA200: test    al, al
0x5AA202: pop     esi
0x5AA203: jz      short locret_5AA20A
0x5AA205: jmp     sub_5C1F70
0x5AA20A: retn
