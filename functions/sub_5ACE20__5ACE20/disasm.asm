0x5ACE20: push    0FFFFFFFFh
0x5ACE22: push    offset SEH_5ACE20
0x5ACE27: mov     eax, large fs:0
0x5ACE2D: push    eax
0x5ACE2E: sub     esp, 8
0x5ACE31: push    ebx
0x5ACE32: push    ebp; a3
0x5ACE33: push    esi; a3
0x5ACE34: push    edi; a3
0x5ACE35: mov     eax, ds:0B30AACh
0x5ACE3A: xor     eax, esp
0x5ACE3C: push    eax; a3
0x5ACE3D: lea     eax, [esp+28h+var_C]
0x5ACE41: mov     large fs:0, eax
0x5ACE47: push    403h
0x5ACE4C: call    Menu_GetOpenMenuTile
0x5ACE51: add     esp, 4
0x5ACE54: test    eax, eax
0x5ACE56: jz      short loc_5ACE62
0x5ACE58: mov     edx, [eax]
0x5ACE5A: mov     ecx, eax
0x5ACE5C: mov     eax, [edx]
0x5ACE5E: push    1
0x5ACE60: call    eax
0x5ACE62: push    1; arg1
0x5ACE64: push    0; canCreate
0x5ACE66: call    InterfaceManager_GetSingleton
0x5ACE6B: add     esp, 8
0x5ACE6E: mov     ebp, eax
0x5ACE70: call    InterfaceManager_GetDepth
0x5ACE75: fstp    [esp+28h+var_14]
0x5ACE79: mov     ecx, [ebp+68h]; TileWindow *
0x5ACE7C: push    offset aDataMenusLevel; "Data\\Menus\\levelup_menu.xml"
0x5ACE81: call    Menu_LoadXML
0x5ACE86: mov     esi, eax
0x5ACE88: mov     ecx, esi
0x5ACE8A: call    Tile_GetParentMenu
0x5ACE8F: mov     ebx, eax
0x5ACE91: test    ebx, ebx
0x5ACE93: jz      loc_5AD0B1
0x5ACE99: mov     edx, [ebx]
0x5ACE9B: mov     eax, [edx+34h]
0x5ACE9E: mov     ecx, ebx
0x5ACEA0: call    eax
0x5ACEA2: cmp     eax, 403h
0x5ACEA7: jnz     loc_5AD0A1
0x5ACEAD: push    0; int
0x5ACEAF: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5ACEB4: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5ACEB9: push    0; int
0x5ACEBB: push    esi; void *
0x5ACEBC: call    OblivionDynamicCast
0x5ACEC1: add     esp, 14h
0x5ACEC4: push    eax
0x5ACEC5: mov     ecx, ebx
0x5ACEC7: call    Menu_SetTileMenu
0x5ACECC: push    0; int
0x5ACECE: push    offset ??_R0?AVLevelUpMenu@@@8; struct TypeDescriptor *
0x5ACED3: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5ACED8: push    0; int
0x5ACEDA: push    ebx; void *
0x5ACEDB: call    OblivionDynamicCast
0x5ACEE0: mov     edi, eax
0x5ACEE2: add     esp, 14h
0x5ACEE5: cmp     dword ptr [edi+28h], 0
0x5ACEE9: jnz     short loc_5ACEFD
0x5ACEEB: push    offset aLevelUpMenuCre; "Level Up  Menu Creation Failed... Are y"...
0x5ACEF0: call    PrintError
0x5ACEF5: add     esp, 4
0x5ACEF8: jmp     loc_5AD0B1
0x5ACEFD: push    0FA5h
0x5ACF02: mov     ecx, esi
0x5ACF04: call    Tile_GetFloat
0x5ACF09: fcomp   dword ptr ds:0A69770h
0x5ACF0F: fnstsw  ax
0x5ACF11: test    ah, 44h
0x5ACF14: jnp     short loc_5ACF2F
0x5ACF16: push    0FA5h
0x5ACF1B: mov     ecx, esi
0x5ACF1D: call    Tile_GetFloat
0x5ACF22: fcomp   qword ptr ds:0A69778h
0x5ACF28: fnstsw  ax
0x5ACF2A: test    ah, 44h
0x5ACF2D: jp      short loc_5ACF43
0x5ACF2F: fld     [esp+28h+var_14]
0x5ACF33: push    ecx
0x5ACF34: fstp    [esp+2Ch+a2]; a3
0x5ACF37: push    0FABh; a2
0x5ACF3C: mov     ecx, esi; this
0x5ACF3E: call    Tile_SetFloat
0x5ACF43: xor     ecx, ecx
0x5ACF45: cmp     byte ptr [ebp+8], 1
0x5ACF49: setnz   cl
0x5ACF4C: mov     [esp+28h+var_14], ecx
0x5ACF50: fild    [esp+28h+var_14]
0x5ACF54: push    ecx
0x5ACF55: mov     ecx, esi; this
0x5ACF57: fstp    [esp+2Ch+a2]; a3
0x5ACF5A: push    0FAEh; a2
0x5ACF5F: call    Tile_SetFloat
0x5ACF64: xor     ebp, ebp
0x5ACF66: push    ebp
0x5ACF67: call    ActorValue_GetIcon
0x5ACF6C: add     esp, 4
0x5ACF6F: push    eax
0x5ACF70: push    0FB2h
0x5ACF75: mov     ecx, esi
0x5ACF77: call    Tile_SetString
0x5ACF7C: push    ebp
0x5ACF7D: call    ActorValue_GetDescription
0x5ACF82: add     esp, 4
0x5ACF85: push    eax
0x5ACF86: push    0FB3h
0x5ACF8B: mov     ecx, esi
0x5ACF8D: call    Tile_SetString
0x5ACF92: mov     ecx, edi
0x5ACF94: call    sub_5AC990
0x5ACF99: mov     [esp+28h+var_14], ebp
0x5ACF9D: mov     word ptr [esp+28h+var_10], bp
0x5ACFA2: mov     word ptr [esp+28h+var_10+2], bp
0x5ACFA7: mov     ecx, ds:0B333C4h
0x5ACFAD: mov     [esp+28h+var_4], ebp
0x5ACFB1: call    Actor_GetLevel
0x5ACFB6: mov     edx, ds:0B382F8h
0x5ACFBC: movzx   eax, ax
0x5ACFBF: add     eax, 1
0x5ACFC2: push    eax
0x5ACFC3: push    edx; ArgList
0x5ACFC4: lea     eax, [esp+30h+var_14]
0x5ACFC8: push    offset aSI_0; "%s %i"
0x5ACFCD: push    eax; int
0x5ACFCE: call    BSStringT_Static_Format
0x5ACFD3: mov     ecx, [esp+38h+var_14]
0x5ACFD7: add     esp, 10h
0x5ACFDA: push    ecx
0x5ACFDB: push    0FB1h
0x5ACFE0: mov     ecx, esi
0x5ACFE2: call    Tile_SetString
0x5ACFE7: mov     ecx, edi
0x5ACFE9: mov     dword ptr [edi+2Ch], 3
0x5ACFF0: call    sub_5ACB60
0x5ACFF5: mov     edx, ds:0B33398h
0x5ACFFB: mov     ebp, [edx+24h]
0x5ACFFE: test    ebp, ebp
0x5AD000: jz      short loc_5AD019
0x5AD002: push    0
0x5AD004: push    offset a_DataMusicSpec; ".\\Data\\Music\\Special\\success.mp3"
0x5AD009: push    8
0x5AD00B: mov     ecx, ebp
0x5AD00D: call    SoundManager_OpenMusicFile
0x5AD012: mov     ecx, ebp
0x5AD014: call    SoundManager_PlayMusic
0x5AD019: push    16h; int
0x5AD01B: call    sub_57DE50
0x5AD020: add     esp, 4
0x5AD023: push    0; char
0x5AD025: mov     ecx, ebx; int
0x5AD027: call    EnableMenu
0x5AD02C: fld     dword ptr ds:0A379B4h
0x5AD032: push    ecx
0x5AD033: fstp    [esp+2Ch+a2]; a3
0x5AD036: push    0FA1h; a2
0x5AD03B: mov     ecx, esi; this
0x5AD03D: call    Tile_SetFloat
0x5AD042: cmp     dword ptr [edi+2Ch], 0
0x5AD046: jnz     short loc_5AD07E
0x5AD048: mov     eax, ds:0B38CF0h
0x5AD04D: mov     ecx, ds:0B383C0h
0x5AD053: push    0
0x5AD055: push    eax
0x5AD056: push    1
0x5AD058: push    offset sub_5ACB40
0x5AD05D: push    ecx
0x5AD05E: call    ShowUIMessageBox
0x5AD063: fld1
0x5AD065: add     esp, 10h
0x5AD068: fstp    [esp+2Ch+a2]; a3
0x5AD06B: push    0FA1h; a2
0x5AD070: mov     ecx, esi; this
0x5AD072: mov     dword ptr [ebx+24h], 4
0x5AD079: call    Tile_SetFloat
0x5AD07E: mov     edx, [esp+28h+var_14]
0x5AD082: push    edx
0x5AD083: call    FormHeapFree
0x5AD088: add     esp, 4
0x5AD08B: mov     al, 1
0x5AD08D: mov     ecx, dword ptr [esp+28h+var_C]
0x5AD091: mov     large fs:0, ecx
0x5AD098: pop     ecx
0x5AD099: pop     edi
0x5AD09A: pop     esi
0x5AD09B: pop     ebp
0x5AD09C: pop     ebx
0x5AD09D: add     esp, 14h
0x5AD0A0: retn
0x5AD0A1: cmp     dword ptr [ebx+4], 0
0x5AD0A5: jz      short loc_5AD0B1
0x5AD0A7: mov     eax, [ebx]
0x5AD0A9: mov     edx, [eax]
0x5AD0AB: push    1
0x5AD0AD: mov     ecx, ebx
0x5AD0AF: call    edx
0x5AD0B1: xor     al, al
0x5AD0B3: mov     ecx, dword ptr [esp+28h+var_C]
0x5AD0B7: mov     large fs:0, ecx
0x5AD0BE: pop     ecx
0x5AD0BF: pop     edi
0x5AD0C0: pop     esi
0x5AD0C1: pop     ebp
0x5AD0C2: pop     ebx
0x5AD0C3: add     esp, 14h
0x5AD0C6: retn
