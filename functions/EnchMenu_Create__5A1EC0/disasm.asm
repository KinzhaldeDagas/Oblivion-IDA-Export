0x5A1EC0: push    0FFFFFFFFh
0x5A1EC2: push    offset SEH_5ACE20
0x5A1EC7: mov     eax, large fs:0
0x5A1ECD: push    eax
0x5A1ECE: sub     esp, 8
0x5A1ED1: push    ebx
0x5A1ED2: push    ebp
0x5A1ED3: push    esi
0x5A1ED4: push    edi
0x5A1ED5: mov     eax, ds:0B30AACh
0x5A1EDA: xor     eax, esp
0x5A1EDC: push    eax; a3
0x5A1EDD: lea     eax, [esp+28h+var_C]
0x5A1EE1: mov     large fs:0, eax
0x5A1EE7: push    412h
0x5A1EEC: call    Menu_GetOpenMenuTile
0x5A1EF1: xor     ebp, ebp
0x5A1EF3: add     esp, 4
0x5A1EF6: cmp     eax, ebp
0x5A1EF8: jz      short loc_5A1F04
0x5A1EFA: mov     edx, [eax]
0x5A1EFC: mov     ecx, eax
0x5A1EFE: mov     eax, [edx]
0x5A1F00: push    1
0x5A1F02: call    eax
0x5A1F04: push    1; arg1
0x5A1F06: push    ebp; canCreate
0x5A1F07: call    InterfaceManager_GetSingleton
0x5A1F0C: add     esp, 8
0x5A1F0F: mov     esi, eax
0x5A1F11: call    InterfaceManager_GetDepth
0x5A1F16: fstp    [esp+28h+var_14]
0x5A1F1A: mov     ecx, [esi+68h]; TileWindow *
0x5A1F1D: push    offset aDataMenusDia_6; "Data\\Menus\\dialog\\Enchantment.xml"
0x5A1F22: call    Menu_LoadXML
0x5A1F27: mov     ebx, eax
0x5A1F29: mov     ecx, ebx
0x5A1F2B: call    Tile_GetParentMenu
0x5A1F30: mov     esi, eax
0x5A1F32: cmp     esi, ebp
0x5A1F34: jz      loc_5A20A9
0x5A1F3A: mov     edx, [esi]
0x5A1F3C: mov     eax, [edx+34h]
0x5A1F3F: mov     ecx, esi
0x5A1F41: call    eax
0x5A1F43: cmp     eax, 412h
0x5A1F48: jnz     loc_5A209A
0x5A1F4E: push    0Fh; int
0x5A1F50: call    sub_57DE50
0x5A1F55: push    ebp; int
0x5A1F56: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A1F5B: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A1F60: push    ebp; int
0x5A1F61: push    ebx; void *
0x5A1F62: call    OblivionDynamicCast
0x5A1F67: add     esp, 18h
0x5A1F6A: push    eax
0x5A1F6B: mov     ecx, esi
0x5A1F6D: call    Menu_SetTileMenu
0x5A1F72: push    ebp; int
0x5A1F73: push    offset ??_R0?AVEnchantmentMenu@@@8; struct TypeDescriptor *
0x5A1F78: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A1F7D: push    ebp; int
0x5A1F7E: push    esi; void *
0x5A1F7F: call    OblivionDynamicCast
0x5A1F84: mov     edi, eax
0x5A1F86: add     esp, 14h
0x5A1F89: mov     ecx, edi
0x5A1F8B: call    sub_5A17B0
0x5A1F90: test    al, al
0x5A1F92: jnz     short loc_5A1FA6
0x5A1F94: push    offset aEnchantmentMen; "Enchantment Menu Creation Failed... Are"...
0x5A1F99: call    PrintError
0x5A1F9E: add     esp, 4
0x5A1FA1: jmp     loc_5A20A9
0x5A1FA6: push    0FA5h
0x5A1FAB: mov     ecx, ebx
0x5A1FAD: call    Tile_GetFloat
0x5A1FB2: fcomp   dword ptr ds:0A69770h
0x5A1FB8: fnstsw  ax
0x5A1FBA: test    ah, 44h
0x5A1FBD: jnp     short loc_5A1FD8
0x5A1FBF: push    0FA5h
0x5A1FC4: mov     ecx, ebx
0x5A1FC6: call    Tile_GetFloat
0x5A1FCB: fcomp   qword ptr ds:0A69778h
0x5A1FD1: fnstsw  ax
0x5A1FD3: test    ah, 44h
0x5A1FD6: jp      short loc_5A1FEC
0x5A1FD8: fld     [esp+28h+var_14]
0x5A1FDC: push    ecx
0x5A1FDD: fstp    [esp+2Ch+a2]; a3
0x5A1FE0: push    0FABh; a2
0x5A1FE5: mov     ecx, ebx; this
0x5A1FE7: call    Tile_SetFloat
0x5A1FEC: mov     ds:0B3B718h, ebp
0x5A1FF2: mov     [esp+28h+var_14], ebp
0x5A1FF6: mov     [esp+28h+var_10], bp
0x5A1FFB: mov     [esp+28h+var_E], bp
0x5A2000: mov     eax, [edi+28h]
0x5A2003: mov     edx, [eax+24h]
0x5A2006: lea     ecx, [eax+24h]
0x5A2009: mov     eax, [edx]
0x5A200B: push    ebp
0x5A200C: mov     [esp+2Ch+var_4], ebp
0x5A2010: call    eax
0x5A2012: fmul    dword ptr ds:0B37FE8h
0x5A2018: call    Double_To_SInt32
0x5A201D: push    eax; ArgList
0x5A201E: lea     ecx, [esp+2Ch+var_14]
0x5A2022: push    offset aD_0; "%d"
0x5A2027: push    ecx; int
0x5A2028: call    BSStringT_Static_Format
0x5A202D: mov     edx, [esp+34h+var_14]
0x5A2031: mov     ecx, [edi+48h]
0x5A2034: add     esp, 0Ch
0x5A2037: push    edx
0x5A2038: push    0FDEh
0x5A203D: call    Tile_SetString
0x5A2042: mov     ecx, ds:0B333C4h
0x5A2048: call    sub_5E4420
0x5A204D: push    eax; ArgList
0x5A204E: lea     eax, [esp+2Ch+var_14]
0x5A2052: push    offset aD_0; "%d"
0x5A2057: push    eax; int
0x5A2058: call    BSStringT_Static_Format
0x5A205D: mov     ebp, [esp+34h+var_14]
0x5A2061: mov     ecx, [edi+4Ch]
0x5A2064: add     esp, 0Ch
0x5A2067: push    ebp
0x5A2068: push    0FDEh
0x5A206D: call    Tile_SetString
0x5A2072: push    0; char
0x5A2074: mov     ecx, esi; int
0x5A2076: call    EnableMenu
0x5A207B: push    ebp
0x5A207C: call    FormHeapFree
0x5A2081: add     esp, 4
0x5A2084: mov     eax, ebx
0x5A2086: mov     ecx, dword ptr [esp+28h+var_C]
0x5A208A: mov     large fs:0, ecx
0x5A2091: pop     ecx
0x5A2092: pop     edi
0x5A2093: pop     esi
0x5A2094: pop     ebp
0x5A2095: pop     ebx
0x5A2096: add     esp, 14h
0x5A2099: retn
0x5A209A: cmp     [esi+4], ebp
0x5A209D: jz      short loc_5A20A9
0x5A209F: mov     edx, [esi]
0x5A20A1: mov     eax, [edx]
0x5A20A3: push    1
0x5A20A5: mov     ecx, esi
0x5A20A7: call    eax
0x5A20A9: xor     eax, eax
0x5A20AB: mov     ecx, dword ptr [esp+28h+var_C]
0x5A20AF: mov     large fs:0, ecx
0x5A20B6: pop     ecx
0x5A20B7: pop     edi
0x5A20B8: pop     esi
0x5A20B9: pop     ebp
0x5A20BA: pop     ebx
0x5A20BB: add     esp, 14h
0x5A20BE: retn
