0x5DCF20: push    ecx
0x5DCF21: push    41Bh
0x5DCF26: call    Menu_GetOpenMenuTile
0x5DCF2B: add     esp, 4
0x5DCF2E: test    eax, eax
0x5DCF30: jz      short loc_5DCF3C
0x5DCF32: mov     edx, [eax]
0x5DCF34: mov     ecx, eax
0x5DCF36: mov     eax, [edx]
0x5DCF38: push    1
0x5DCF3A: call    eax
0x5DCF3C: push    ebp
0x5DCF3D: push    esi
0x5DCF3E: push    1; arg1
0x5DCF40: push    0; canCreate
0x5DCF42: call    InterfaceManager_GetSingleton
0x5DCF47: add     esp, 8
0x5DCF4A: mov     esi, eax
0x5DCF4C: call    InterfaceManager_GetDepth
0x5DCF51: fstp    [esp+0Ch+var_4]
0x5DCF55: mov     ecx, [esi+68h]; TileWindow *
0x5DCF58: push    offset aDataMenusDia_2; "Data\\Menus\\Dialog\\TextEditMenu.xml"
0x5DCF5D: call    Menu_LoadXML
0x5DCF62: mov     ebp, eax
0x5DCF64: mov     ecx, ebp
0x5DCF66: call    Tile_GetParentMenu
0x5DCF6B: mov     esi, eax
0x5DCF6D: test    esi, esi
0x5DCF6F: jz      TextMenu_Create___Return_0
0x5DCF75: mov     edx, [esi]
0x5DCF77: mov     eax, [edx+34h]
0x5DCF7A: mov     ecx, esi
0x5DCF7C: call    eax
0x5DCF7E: cmp     eax, 41Bh
0x5DCF83: jnz     TextMenu_Create___DestroyBadMenu
0x5DCF89: push    ebx
0x5DCF8A: push    edi; a3
0x5DCF8B: push    0; int
0x5DCF8D: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5DCF92: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5DCF97: push    0; int
0x5DCF99: push    ebp; void *
0x5DCF9A: call    OblivionDynamicCast
0x5DCF9F: add     esp, 14h
0x5DCFA2: push    eax
0x5DCFA3: mov     ecx, esi
0x5DCFA5: call    Menu_SetTileMenu
0x5DCFAA: push    0; int
0x5DCFAC: push    offset ??_R0?AVTextEditMenu@@@8; struct TypeDescriptor *
0x5DCFB1: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DCFB6: push    0; int
0x5DCFB8: push    esi; void *
0x5DCFB9: call    OblivionDynamicCast
0x5DCFBE: mov     edi, eax
0x5DCFC0: lea     ebx, [edi+28h]
0x5DCFC3: add     esp, 14h
0x5DCFC6: xor     eax, eax
0x5DCFC8: mov     ecx, ebx
0x5DCFCA: lea     ebx, [ebx+0]
0x5DCFD0: cmp     dword ptr [ecx], 0
0x5DCFD3: jz      TextMenu_Create___Return_0_FailureMsg
0x5DCFD9: add     eax, 1
0x5DCFDC: add     ecx, 4
0x5DCFDF: cmp     eax, 3
0x5DCFE2: jl      short loc_5DCFD0
0x5DCFE4: push    0FA5h
0x5DCFE9: mov     ecx, ebp
0x5DCFEB: call    Tile_GetFloat
0x5DCFF0: fcomp   dword ptr ds:0A69770h
0x5DCFF6: fnstsw  ax
0x5DCFF8: test    ah, 44h
0x5DCFFB: jnp     short loc_5DD016
0x5DCFFD: push    0FA5h
0x5DD002: mov     ecx, ebp
0x5DD004: call    Tile_GetFloat
0x5DD009: fcomp   qword ptr ds:0A69778h
0x5DD00F: fnstsw  ax
0x5DD011: test    ah, 44h
0x5DD014: jp      short loc_5DD02A
0x5DD016: fld     [esp+14h+var_4]
0x5DD01A: push    ecx
0x5DD01B: fstp    [esp+18h+a3]; a3
0x5DD01E: push    0FABh; a2
0x5DD023: mov     ecx, ebp; this
0x5DD025: call    Tile_SetFloat
0x5DD02A: mov     ecx, [esp+14h+arg_0]
0x5DD02E: push    ecx
0x5DD02F: push    0FAEh
0x5DD034: mov     ecx, ebp
0x5DD036: call    Tile_SetString
0x5DD03B: mov     edx, [esp+14h+arg_4]
0x5DD03F: mov     ecx, [ebx]
0x5DD041: push    edx
0x5DD042: push    0FDEh
0x5DD047: call    Tile_SetString
0x5DD04C: mov     ecx, [ebx]
0x5DD04E: push    0FD4h
0x5DD053: add     edi, 34h ; '4'
0x5DD056: call    Tile_GetFloat
0x5DD05B: call    Double_To_SInt32
0x5DD060: push    eax
0x5DD061: mov     ecx, edi
0x5DD063: call    sub_583DD0
0x5DD068: mov     ecx, [ebx]
0x5DD06A: push    0FDEh
0x5DD06F: call    sub_588C10
0x5DD074: push    eax
0x5DD075: mov     ecx, edi
0x5DD077: call    sub_57FF20
0x5DD07C: push    1
0x5DD07E: mov     ecx, edi
0x5DD080: call    sub_57DD90
0x5DD085: push    0; char
0x5DD087: mov     ecx, esi; int
0x5DD089: call    EnableMenu
0x5DD08E: pop     edi
0x5DD08F: pop     ebx
0x5DD090: pop     esi
0x5DD091: mov     al, 1
0x5DD093: pop     ebp
0x5DD094: pop     ecx
0x5DD095: retn
