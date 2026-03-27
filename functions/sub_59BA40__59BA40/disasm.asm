0x59BA40: sub     esp, 0Ch
0x59BA43: push    ebp
0x59BA44: push    esi; a3
0x59BA45: push    edi; a3
0x59BA46: push    3FDh
0x59BA4B: call    Menu_GetOpenMenuTile
0x59BA50: xor     ebp, ebp
0x59BA52: add     esp, 4
0x59BA55: cmp     eax, ebp
0x59BA57: jz      short loc_59BA63
0x59BA59: mov     edx, [eax]
0x59BA5B: mov     ecx, eax
0x59BA5D: mov     eax, [edx]
0x59BA5F: push    1; a3
0x59BA61: call    eax
0x59BA63: push    1; arg1
0x59BA65: push    ebp; canCreate
0x59BA66: call    InterfaceManager_GetSingleton
0x59BA6B: add     esp, 8
0x59BA6E: mov     esi, eax
0x59BA70: call    InterfaceManager_GetDepth
0x59BA75: fstp    [esp+18h+var_C]; a3
0x59BA79: mov     ecx, [esi+68h]; TileWindow *
0x59BA7C: push    offset aDataMenusOpt_3; "Data\\Menus\\Options\\controls_menu.xml"
0x59BA81: call    Menu_LoadXML
0x59BA86: mov     edi, eax
0x59BA88: mov     ecx, edi
0x59BA8A: call    Tile_GetParentMenu
0x59BA8F: mov     esi, eax
0x59BA91: cmp     esi, ebp
0x59BA93: mov     [esp+18h+var_8], esi
0x59BA97: jz      loc_59BD77
0x59BA9D: mov     edx, [esi]
0x59BA9F: mov     eax, [edx+34h]
0x59BAA2: mov     ecx, esi
0x59BAA4: call    eax
0x59BAA6: cmp     eax, 3FDh
0x59BAAB: jnz     loc_59BD68
0x59BAB1: push    ebx; a3
0x59BAB2: push    ebp; int
0x59BAB3: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x59BAB8: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x59BABD: push    ebp; int
0x59BABE: push    edi; void *
0x59BABF: call    OblivionDynamicCast
0x59BAC4: add     esp, 14h
0x59BAC7: push    eax
0x59BAC8: mov     ecx, esi
0x59BACA: call    Menu_SetTileMenu
0x59BACF: push    ebp; int
0x59BAD0: push    offset ??_R0?AVControlsMenu@@@8; struct TypeDescriptor *
0x59BAD5: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59BADA: push    ebp; int
0x59BADB: push    esi; void *
0x59BADC: call    OblivionDynamicCast
0x59BAE1: mov     ebx, eax
0x59BAE3: add     esp, 14h
0x59BAE6: mov     ecx, ebx
0x59BAE8: call    sub_59B920
0x59BAED: test    al, al
0x59BAEF: jnz     short loc_59BB0B
0x59BAF1: mov     ecx, ds:0B38CF0h
0x59BAF7: mov     edx, ds:0B38EC8h
0x59BAFD: push    ebp
0x59BAFE: push    ecx
0x59BAFF: push    1
0x59BB01: push    ebp
0x59BB02: push    edx
0x59BB03: call    ShowUIMessageBox
0x59BB08: add     esp, 14h
0x59BB0B: xor     eax, eax
0x59BB0D: lea     ecx, [ebx+28h]
0x59BB10: cmp     [ecx], ebp
0x59BB12: jz      loc_59BC58
0x59BB18: add     eax, 1
0x59BB1B: add     ecx, 4
0x59BB1E: cmp     eax, 0Dh
0x59BB21: jl      short loc_59BB10
0x59BB23: push    0FA5h
0x59BB28: mov     ecx, edi
0x59BB2A: call    Tile_GetFloat
0x59BB2F: fcomp   dword ptr ds:0A69770h
0x59BB35: fnstsw  ax
0x59BB37: test    ah, 44h
0x59BB3A: jnp     short loc_59BB55
0x59BB3C: push    0FA5h
0x59BB41: mov     ecx, edi
0x59BB43: call    Tile_GetFloat
0x59BB48: fcomp   qword ptr ds:0A69778h
0x59BB4E: fnstsw  ax
0x59BB50: test    ah, 44h
0x59BB53: jp      short loc_59BB69
0x59BB55: fld     [esp+1Ch+var_C]
0x59BB59: push    ecx
0x59BB5A: fstp    [esp+20h+var_20]; a3
0x59BB5D: push    0FABh; a2
0x59BB62: mov     ecx, edi; this
0x59BB64: call    Tile_SetFloat
0x59BB69: fld     dword ptr ds:0B14EE8h
0x59BB6F: push    ecx
0x59BB70: fsub    qword ptr ds:0A59B38h
0x59BB76: mov     ecx, [ebx+38h]; this
0x59BB79: fdiv    qword ptr ds:0A6B760h
0x59BB7F: fmul    qword ptr ds:0A309F0h
0x59BB85: fstp    [esp+20h+var_C]; a3
0x59BB89: fld     [esp+20h+var_C]
0x59BB8D: fstp    [esp+20h+var_20]; a3
0x59BB90: push    0FB3h; a2
0x59BB95: call    Tile_SetFloat
0x59BB9A: fldz
0x59BB9C: push    ecx
0x59BB9D: fstp    [esp+20h+var_20]; a3
0x59BBA0: mov     ecx, [ebx+38h]; this
0x59BBA3: push    0FB3h; a2
0x59BBA8: call    Tile_SetFloat
0x59BBAD: movzx   eax, byte ptr ds:0B14F38h
0x59BBB4: mov     ecx, [ebx+40h]
0x59BBB7: push    eax
0x59BBB8: push    ecx
0x59BBB9: mov     ecx, ebx
0x59BBBB: call    sub_59B640
0x59BBC0: mov     edx, ds:0B33398h
0x59BBC6: mov     eax, [edx+20h]
0x59BBC9: cmp     [eax+18F0h], ebp
0x59BBCF: jnz     short loc_59BBE4
0x59BBD1: fld1
0x59BBD3: push    ecx
0x59BBD4: mov     ecx, [ebx+44h]; this
0x59BBD7: fstp    [esp+20h+var_20]; a3
0x59BBDA: push    0FC9h; a2
0x59BBDF: call    Tile_SetFloat
0x59BBE4: mov     [esp+1Ch+var_C], ebp; a3
0x59BBE8: push    ebp
0x59BBE9: call    sub_59B670
0x59BBEE: add     esp, 4
0x59BBF1: test    al, al
0x59BBF3: jz      loc_59BCF2
0x59BBF9: mov     eax, [ebx+34h]
0x59BBFC: push    0
0x59BBFE: push    offset aControls_templ; "controls_template"
0x59BC03: push    eax
0x59BC04: mov     ecx, ebx
0x59BC06: call    Menu_CreateTileFromTemplate
0x59BC0B: mov     esi, eax
0x59BC0D: test    esi, esi
0x59BC0F: jz      loc_59BCEE
0x59BC15: lea     ecx, [ebp+0Eh]
0x59BC18: mov     [esp+1Ch+var_4], ecx; a3
0x59BC1C: fild    [esp+1Ch+var_4]
0x59BC20: push    ecx
0x59BC21: mov     ecx, esi; this
0x59BC23: fstp    [esp+20h+var_20]; a3
0x59BC26: push    0FA8h; a2
0x59BC2B: call    Tile_SetFloat
0x59BC30: fild    [esp+1Ch+var_C]
0x59BC34: push    ecx
0x59BC35: mov     ecx, esi; this
0x59BC37: fstp    [esp+20h+var_20]; a3
0x59BC3A: push    0FAEh; a2
0x59BC3F: call    Tile_SetFloat
0x59BC44: mov     eax, ds:0B399D0h[ebp*4]
0x59BC4B: add     [esp+1Ch+var_C], 1
0x59BC50: test    eax, eax
0x59BC52: jz      short loc_59BC6F
0x59BC54: mov     eax, [eax]
0x59BC56: jmp     short loc_59BC71
0x59BC58: push    offset aControlsMenuCr; "Controls Menu Creation Failed... Are yo"...
0x59BC5D: call    PrintError
0x59BC62: add     esp, 4
0x59BC65: pop     ebx
0x59BC66: pop     edi
0x59BC67: pop     esi
0x59BC68: xor     al, al
0x59BC6A: pop     ebp
0x59BC6B: add     esp, 0Ch
0x59BC6E: retn
0x59BC6F: xor     eax, eax
0x59BC71: push    eax
0x59BC72: push    0FAFh
0x59BC77: mov     ecx, esi
0x59BC79: call    Tile_SetString
0x59BC7E: push    0FAFh
0x59BC83: mov     ecx, edi
0x59BC85: call    Tile_GetFloat
0x59BC8A: push    ecx
0x59BC8B: fstp    [esp+20h+var_20]; a3
0x59BC8E: push    0FCAh; a2
0x59BC93: mov     ecx, esi; this
0x59BC95: call    Tile_SetFloat
0x59BC9A: push    0FCCh
0x59BC9F: mov     ecx, edi
0x59BCA1: call    Tile_GetFloat
0x59BCA6: push    ecx
0x59BCA7: fstp    [esp+20h+var_20]; a3
0x59BCAA: push    0FCCh; a2
0x59BCAF: mov     ecx, esi; this
0x59BCB1: call    Tile_SetFloat
0x59BCB6: push    0FCDh
0x59BCBB: mov     ecx, edi
0x59BCBD: call    Tile_GetFloat
0x59BCC2: push    ecx
0x59BCC3: fstp    [esp+20h+var_20]; a3
0x59BCC6: push    0FCDh; a2
0x59BCCB: mov     ecx, esi; this
0x59BCCD: call    Tile_SetFloat
0x59BCD2: push    0FCEh
0x59BCD7: mov     ecx, edi
0x59BCD9: call    Tile_GetFloat
0x59BCDE: push    ecx
0x59BCDF: fstp    [esp+20h+var_20]; a3
0x59BCE2: push    0FCEh; a2
0x59BCE7: mov     ecx, esi; this
0x59BCE9: call    Tile_SetFloat
0x59BCEE: mov     esi, [esp+1Ch+var_8]
0x59BCF2: add     ebp, 1
0x59BCF5: cmp     ebp, 1Dh
0x59BCF8: jl      loc_59BBE8
0x59BCFE: fld     dword ptr ds:0A6B618h
0x59BD04: push    ecx
0x59BD05: mov     ecx, [ebx+2Ch]; this
0x59BD08: fstp    [esp+20h+var_20]; a3
0x59BD0B: push    0FB3h; a2
0x59BD10: call    Tile_SetFloat
0x59BD15: fldz
0x59BD17: push    ecx
0x59BD18: fstp    [esp+20h+var_20]; a3
0x59BD1B: mov     ecx, [ebx+2Ch]; this
0x59BD1E: push    0FB3h; a2
0x59BD23: call    Tile_SetFloat
0x59BD28: mov     ecx, [ebx+2Ch]
0x59BD2B: push    0FB1h
0x59BD30: call    Tile_GetFloat
0x59BD35: fstp    dword ptr [ebx+0DCh]
0x59BD3B: mov     ecx, [ebx+2Ch]
0x59BD3E: push    0FB2h
0x59BD43: call    Tile_GetFloat
0x59BD48: fstp    dword ptr [ebx+0E0h]
0x59BD4E: push    0; char
0x59BD50: mov     ecx, esi; int
0x59BD52: mov     byte ptr [ebx+0D4h], 1
0x59BD59: call    EnableMenu
0x59BD5E: pop     ebx
0x59BD5F: pop     edi
0x59BD60: pop     esi
0x59BD61: mov     al, 1
0x59BD63: pop     ebp
0x59BD64: add     esp, 0Ch
0x59BD67: retn
0x59BD68: cmp     [esi+4], ebp
0x59BD6B: jz      short loc_59BD77
0x59BD6D: mov     edx, [esi]
0x59BD6F: mov     eax, [edx]
0x59BD71: push    1
0x59BD73: mov     ecx, esi
0x59BD75: call    eax
0x59BD77: pop     edi
0x59BD78: pop     esi
0x59BD79: xor     al, al
0x59BD7B: pop     ebp
0x59BD7C: add     esp, 0Ch
0x59BD7F: retn
