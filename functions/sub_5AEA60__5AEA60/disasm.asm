0x5AEA60: sub     esp, 144h
0x5AEA66: mov     eax, ds:0B30AACh
0x5AEA6B: xor     eax, esp
0x5AEA6D: mov     [esp+144h+var_4], eax
0x5AEA74: push    40Eh
0x5AEA79: call    Menu_GetOpenMenuTile
0x5AEA7E: add     esp, 4
0x5AEA81: test    eax, eax
0x5AEA83: jz      short loc_5AEA8F
0x5AEA85: mov     edx, [eax]
0x5AEA87: mov     ecx, eax
0x5AEA89: mov     eax, [edx]
0x5AEA8B: push    1
0x5AEA8D: call    eax
0x5AEA8F: push    esi
0x5AEA90: push    edi
0x5AEA91: push    1; arg1
0x5AEA93: push    0; canCreate
0x5AEA95: call    InterfaceManager_GetSingleton
0x5AEA9A: add     esp, 8
0x5AEA9D: mov     esi, eax
0x5AEA9F: call    InterfaceManager_GetDepth
0x5AEAA4: fstp    [esp+14Ch+var_13C]
0x5AEAA8: mov     ecx, [esi+68h]; TileWindow *
0x5AEAAB: push    offset aDataMenusOpt_1; "Data\\Menus\\Options\\load_menu.xml"
0x5AEAB0: call    Menu_LoadXML
0x5AEAB5: mov     edi, eax
0x5AEAB7: mov     ecx, edi
0x5AEAB9: mov     dword ptr [esp+14Ch+var_134], edi
0x5AEABD: call    Tile_GetParentMenu
0x5AEAC2: mov     esi, eax
0x5AEAC4: test    esi, esi
0x5AEAC6: mov     [esp+14Ch+var_138], esi
0x5AEACA: jz      loc_5AEC85
0x5AEAD0: mov     edx, [esi]
0x5AEAD2: mov     eax, [edx+34h]
0x5AEAD5: mov     ecx, esi
0x5AEAD7: call    eax
0x5AEAD9: cmp     eax, 40Eh
0x5AEADE: jnz     loc_5AEC75
0x5AEAE4: push    ebx; a3
0x5AEAE5: push    ebp; a3
0x5AEAE6: push    0; int
0x5AEAE8: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5AEAED: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AEAF2: push    0; int
0x5AEAF4: push    edi; void *
0x5AEAF5: call    OblivionDynamicCast
0x5AEAFA: add     esp, 14h
0x5AEAFD: push    eax
0x5AEAFE: mov     ecx, esi
0x5AEB00: call    Menu_SetTileMenu
0x5AEB05: push    0; int
0x5AEB07: push    offset ??_R0?AVLoadgameMenu@@@8; struct TypeDescriptor *
0x5AEB0C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5AEB11: push    0; int
0x5AEB13: push    esi; void *
0x5AEB14: call    OblivionDynamicCast
0x5AEB19: add     esp, 14h
0x5AEB1C: mov     ebx, eax
0x5AEB1E: push    0FA5h
0x5AEB23: mov     ecx, edi
0x5AEB25: mov     [esp+158h+var_140], ebx
0x5AEB29: call    Tile_GetFloat
0x5AEB2E: fcomp   dword ptr ds:0A69770h
0x5AEB34: fnstsw  ax
0x5AEB36: test    ah, 44h
0x5AEB39: jnp     short loc_5AEB54
0x5AEB3B: push    0FA5h
0x5AEB40: mov     ecx, edi
0x5AEB42: call    Tile_GetFloat
0x5AEB47: fcomp   qword ptr ds:0A69778h
0x5AEB4D: fnstsw  ax
0x5AEB4F: test    ah, 44h
0x5AEB52: jp      short loc_5AEB68
0x5AEB54: fld     [esp+154h+var_13C]
0x5AEB58: push    ecx
0x5AEB59: fstp    [esp+158h+var_158]; a3
0x5AEB5C: push    0FABh; a2
0x5AEB61: mov     ecx, edi; this
0x5AEB63: call    Tile_SetFloat
0x5AEB68: cmp     [esp+154h+arg_0], 0
0x5AEB70: jz      short loc_5AEB85
0x5AEB72: fld1
0x5AEB74: push    ecx
0x5AEB75: mov     ecx, [ebx+28h]; this
0x5AEB78: fstp    [esp+158h+var_158]; a3
0x5AEB7B: push    0FA1h; a2
0x5AEB80: call    Tile_SetFloat
0x5AEB85: mov     ecx, ds:0B33B00h
0x5AEB8B: call    sub_45E6A0
0x5AEB90: push    414h
0x5AEB95: mov     byte ptr [esp+158h+var_144+3], al
0x5AEB99: xor     ebp, ebp
0x5AEB9B: xor     edi, edi
0x5AEB9D: call    Menu_GetOpenMenuTile
0x5AEBA2: add     esp, 4
0x5AEBA5: test    eax, eax
0x5AEBA7: jz      short loc_5AEBB0
0x5AEBA9: cmp     byte ptr [esp+154h+var_144+3], 0
0x5AEBAE: jz      short loc_5AEBBB
0x5AEBB0: mov     ecx, ds:0B33B00h
0x5AEBB6: call    sub_45D450
0x5AEBBB: mov     ecx, ds:0B33B00h
0x5AEBC1: mov     esi, [ecx+6Ch]
0x5AEBC4: mov     [ebx+54h], esi
0x5AEBC7: xor     ebx, ebx
0x5AEBC9: test    esi, esi
0x5AEBCB: mov     eax, esi
0x5AEBCD: jz      short loc_5AEBE2
0x5AEBCF: nop
0x5AEBD0: cmp     [eax], ebp
0x5AEBD2: jz      short loc_5AEBD7
0x5AEBD4: add     ebx, 1
0x5AEBD7: mov     eax, [eax+4]
0x5AEBDA: test    eax, eax
0x5AEBDC: jnz     short loc_5AEBD0
0x5AEBDE: test    ebx, ebx
0x5AEBE0: jnz     short loc_5AEBF8
0x5AEBE2: mov     ecx, [esp+154h+var_140]
0x5AEBE6: push    0
0x5AEBE8: push    0
0x5AEBEA: push    0
0x5AEBEC: lea     edx, [esp+160h+var_130]
0x5AEBF0: push    edx
0x5AEBF1: call    sub_5AE6D0
0x5AEBF6: mov     edi, eax
0x5AEBF8: test    esi, esi
0x5AEBFA: jz      short loc_5AEC27
0x5AEBFC: lea     esp, [esp+0]
0x5AEC00: mov     eax, [esi]
0x5AEC02: test    eax, eax
0x5AEC04: jz      short loc_5AEC27
0x5AEC06: mov     ecx, [esp+154h+var_140]
0x5AEC0A: push    ebx
0x5AEC0B: push    eax
0x5AEC0C: push    ebp
0x5AEC0D: lea     eax, [esp+160h+var_130]
0x5AEC11: push    eax
0x5AEC12: call    sub_5AE6D0
0x5AEC17: test    edi, edi
0x5AEC19: jnz     short loc_5AEC1D
0x5AEC1B: mov     edi, eax
0x5AEC1D: mov     esi, [esi+4]
0x5AEC20: add     ebp, 1
0x5AEC23: test    esi, esi
0x5AEC25: jnz     short loc_5AEC00
0x5AEC27: mov     esi, dword ptr [esp+154h+var_134]
0x5AEC2B: push    0; float
0x5AEC2D: mov     ecx, esi
0x5AEC2F: call    sub_58FBA0
0x5AEC34: mov     ecx, [esp+154h+var_138]; int
0x5AEC38: push    0; char
0x5AEC3A: call    EnableMenu
0x5AEC3F: push    0
0x5AEC41: push    0FDDh
0x5AEC46: push    edi
0x5AEC47: push    1; arg1
0x5AEC49: push    0; canCreate
0x5AEC4B: call    InterfaceManager_GetSingleton
0x5AEC50: add     esp, 8
0x5AEC53: mov     ecx, eax
0x5AEC55: call    sub_57F9F0
0x5AEC5A: pop     ebp
0x5AEC5B: pop     ebx
0x5AEC5C: pop     edi
0x5AEC5D: mov     eax, esi
0x5AEC5F: pop     esi
0x5AEC60: mov     ecx, [esp+144h+var_4]
0x5AEC67: xor     ecx, esp
0x5AEC69: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AEC6E: add     esp, 144h
0x5AEC74: retn
0x5AEC75: cmp     dword ptr [esi+4], 0
0x5AEC79: jz      short loc_5AEC85
0x5AEC7B: mov     edx, [esi]
0x5AEC7D: mov     eax, [edx]
0x5AEC7F: push    1
0x5AEC81: mov     ecx, esi
0x5AEC83: call    eax
0x5AEC85: mov     ecx, [esp+14Ch+var_4]
0x5AEC8C: pop     edi
0x5AEC8D: pop     esi
0x5AEC8E: xor     ecx, esp
0x5AEC90: xor     eax, eax
0x5AEC92: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AEC97: add     esp, 144h
0x5AEC9D: retn
