0x5BCC00: mov     eax, [esp+arg_10]
0x5BCC04: mov     ecx, [esp+arg_C]
0x5BCC08: mov     edx, [esp+arg_8]
0x5BCC0C: push    ebx; a3
0x5BCC0D: push    esi; a3
0x5BCC0E: push    eax
0x5BCC0F: mov     eax, [esp+0Ch+arg_4]
0x5BCC13: push    ecx
0x5BCC14: mov     ecx, [esp+10h+arg_0]
0x5BCC18: push    edx
0x5BCC19: push    eax
0x5BCC1A: push    ecx
0x5BCC1B: call    sub_5BC8B0
0x5BCC20: push    3E9h
0x5BCC25: mov     bl, al
0x5BCC27: call    Menu_GetOpenMenuTile
0x5BCC2C: mov     esi, eax
0x5BCC2E: add     esp, 18h
0x5BCC31: test    esi, esi
0x5BCC33: jz      short loc_5BCC9D
0x5BCC35: fldz
0x5BCC37: mov     eax, [esi+24h]
0x5BCC3A: sub     esp, 8
0x5BCC3D: fstp    [esp+10h+a2]; float
0x5BCC41: fld1
0x5BCC43: fstp    [esp+10h+var_10]; float
0x5BCC46: push    eax; int
0x5BCC47: push    1; arg1
0x5BCC49: push    0; canCreate
0x5BCC4B: call    InterfaceManager_GetSingleton
0x5BCC50: add     esp, 8
0x5BCC53: mov     ecx, eax
0x5BCC55: call    sub_57EA20
0x5BCC5A: fld     dword ptr ds:0A379B4h
0x5BCC60: push    ecx
0x5BCC61: fstp    [esp+0Ch+a2]; a3
0x5BCC64: push    0FA1h; a2
0x5BCC69: mov     ecx, esi; this
0x5BCC6B: call    Tile_SetFloat
0x5BCC70: fld     dword ptr ds:0A379B4h
0x5BCC76: push    ecx
0x5BCC77: fstp    [esp+0Ch+a2]; a3
0x5BCC7A: push    1772h; a2
0x5BCC7F: mov     ecx, esi; this
0x5BCC81: call    Tile_SetFloat
0x5BCC86: mov     ecx, esi
0x5BCC88: call    Tile_GetParentMenu
0x5BCC8D: push    0; float
0x5BCC8F: mov     ecx, esi
0x5BCC91: mov     dword ptr [eax+24h], 1
0x5BCC98: call    sub_58FBA0
0x5BCC9D: pop     esi
0x5BCC9E: mov     al, bl
0x5BCCA0: pop     ebx
0x5BCCA1: retn
