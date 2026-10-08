0x581CC0: push    0FFFFFFFFh
0x581CC2: push    offset SEH_581CC0
0x581CC7: mov     eax, large fs:0
0x581CCD: push    eax
0x581CCE: sub     esp, 14h
0x581CD1: push    ebx; a3
0x581CD2: push    ebp; a3
0x581CD3: push    esi; a3
0x581CD4: push    edi; a3
0x581CD5: mov     eax, ds:0B30AACh
0x581CDA: xor     eax, esp
0x581CDC: push    eax; a3
0x581CDD: lea     eax, [esp+34h+var_C]
0x581CE1: mov     large fs:0, eax
0x581CE7: mov     edi, ecx
0x581CE9: push    44h ; 'D'; Size
0x581CEB: call    FormHeapAlloc
0x581CF0: xor     ebx, ebx
0x581CF2: add     esp, 4
0x581CF5: cmp     eax, ebx
0x581CF7: jz      short loc_581D38
0x581CF9: mov     [eax+8], ebx
0x581CFC: mov     [eax+0Ch], bx
0x581D00: mov     [eax+0Eh], bx
0x581D04: mov     [eax+20h], ebx
0x581D07: mov     [eax+18h], ebx
0x581D0A: mov     [eax+1Ch], ebx
0x581D0D: mov     dword ptr [eax+14h], offset ??_7?$NiTList@PAVValue@Tile@@@@6B@; const NiTList<Tile::Value *>::`vftable'
0x581D14: mov     [eax+3Ch], ebx
0x581D17: mov     [eax+34h], ebx
0x581D1A: mov     [eax+38h], ebx
0x581D1D: mov     dword ptr [eax+30h], offset ??_7?$NiTList@PAVTile@@@@6B@; const NiTList<Tile *>::`vftable'
0x581D24: mov     [eax+24h], ebx
0x581D27: mov     [eax+10h], ebx
0x581D2A: mov     [eax+4], bl
0x581D2D: mov     [eax+6], bl
0x581D30: mov     dword ptr [eax], offset ??_7TileRect@@6B@; const TileRect::`vftable'
0x581D36: jmp     short loc_581D3A
0x581D38: xor     eax, eax
0x581D3A: push    ebx; a3
0x581D3B: mov     [edi+68h], eax
0x581D3E: mov     edx, [eax]
0x581D40: push    offset aInterfaceman_1; "InterfaceManager: Menus Root"
0x581D45: mov     ecx, eax
0x581D47: mov     eax, [edx+4]
0x581D4A: push    ebx; a3
0x581D4B: call    eax
0x581D4D: mov     eax, [edi+68h]
0x581D50: push    ebx; a3
0x581D51: lea     ecx, [eax+8]; this
0x581D54: push    offset aMenuroot; "MenuRoot"
0x581D59: call    BSStringT_Set
0x581D5E: fld     dword ptr ds:0A379B4h
0x581D64: mov     ecx, [edi+68h]; this
0x581D67: push    ecx
0x581D68: fstp    [esp+38h+var_38]; value
0x581D6B: push    0FA6h; propertyCode
0x581D70: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581D75: fld     dword ptr ds:0A68C00h
0x581D7B: mov     ecx, [edi+68h]; this
0x581D7E: push    ecx
0x581D7F: fstp    [esp+38h+var_38]; value
0x581D82: push    1771h; propertyCode
0x581D87: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581D8C: fldz
0x581D8E: push    ecx
0x581D8F: fstp    [esp+38h+var_38]; value
0x581D92: mov     ecx, [edi+68h]; this
0x581D95: push    0FA7h; propertyCode
0x581D9A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581D9F: fild    dword ptr ds:0B06C4Ch
0x581DA5: fstp    [esp+34h+a3]
0x581DA9: fild    dword ptr ds:0B06C50h
0x581DAF: fstp    [esp+34h+var_1C]
0x581DB3: fld     [esp+34h+a3]
0x581DB7: fld     [esp+34h+var_1C]
0x581DBB: fcom    st(1)
0x581DBD: fnstsw  ax
0x581DBF: test    ah, 5
0x581DC2: jp      short loc_581DCE
0x581DC4: fdivp   st(1), st
0x581DC6: fmul    qword ptr ds:0A68D70h
0x581DCC: jmp     short loc_581DD8
0x581DCE: fstp    st(1)
0x581DD0: fstp    st
0x581DD2: fld     dword ptr ds:0A688A8h
0x581DD8: push    ecx
0x581DD9: fstp    [esp+38h+a3]; a3
0x581DDD: fld     [esp+38h+a3]
0x581DE1: mov     ecx, [edi+68h]; this
0x581DE4: fstp    [esp+38h+var_38]; value
0x581DE7: push    0FCBh; propertyCode
0x581DEC: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581DF1: fild    dword ptr ds:0B06C4Ch
0x581DF7: fstp    [esp+34h+a3]
0x581DFB: fild    dword ptr ds:0B06C50h
0x581E01: fstp    [esp+34h+var_1C]; a3
0x581E05: fld     [esp+34h+var_1C]
0x581E09: fld     [esp+34h+a3]
0x581E0D: fcom    st(1)
0x581E0F: fnstsw  ax
0x581E11: test    ah, 5
0x581E14: jp      short loc_581E20
0x581E16: fdivp   st(1), st
0x581E18: fmul    qword ptr ds:0A688A0h
0x581E1E: jmp     short loc_581E2A
0x581E20: fstp    st(1)
0x581E22: fstp    st
0x581E24: fld     dword ptr ds:0A68D78h
0x581E2A: push    ecx
0x581E2B: fstp    [esp+38h+a3]
0x581E2F: fld     [esp+38h+a3]
0x581E33: mov     ecx, [edi+68h]; this
0x581E36: fstp    [esp+38h+var_38]; value
0x581E39: push    0FCAh; propertyCode
0x581E3E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581E43: call    sub_57D330
0x581E48: push    ecx
0x581E49: mov     ecx, [edi+68h]; this
0x581E4C: fstp    [esp+38h+var_38]; value
0x581E4F: push    0FDAh; propertyCode
0x581E54: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581E59: call    sub_57D390
0x581E5E: push    ecx
0x581E5F: mov     ecx, [edi+68h]; this
0x581E62: fstp    [esp+38h+var_38]; value
0x581E65: push    0FD9h; propertyCode
0x581E6A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581E6F: call    sub_5903E0
0x581E74: mov     ecx, [edi+68h]; this
0x581E77: push    offset aDataMenusStrin; "Data\\Menus\\strings.xml"
0x581E7C: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x581E81: push    ebx; int
0x581E82: push    offset aDataMenusStrin; "Data\\Menus\\strings.xml"
0x581E87: mov     [edi+6Ch], eax
0x581E8A: call    sub_584670
0x581E8F: mov     ecx, [edi+6Ch]; this
0x581E92: add     esp, 8
0x581E95: push    ebx; sibling
0x581E96: push    ebx; parent
0x581E97: call    Tile__SetParent; Verified: detaches from old parent list and decrements child-count trait 0xFD0, assigns parent +0x10, increments new parent count, inserts in new parent child list. Optional sibling argument controls placement; null uses AddHead. This is attachment, not a float-value setter.
0x581E9C: push    0DCh ; 'Ü'; Size
0x581EA1: call    FormHeapAlloc
0x581EA6: add     esp, 4
0x581EA9: mov     [esp+34h+var_1C], eax
0x581EAD: cmp     eax, ebx
0x581EAF: mov     [esp+34h+var_4], ebx
0x581EB3: jz      short loc_581EBF
0x581EB5: push    ebx
0x581EB6: mov     ecx, eax; this
0x581EB8: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x581EBD: jmp     short loc_581EC1
0x581EBF: xor     eax, eax
0x581EC1: push    offset aInterfaceman_2; "InterfaceManager: DebugText Root"
0x581EC6: mov     ecx, eax
0x581EC8: mov     [esp+38h+var_4], 0FFFFFFFFh
0x581ED0: mov     [edi+70h], eax
0x581ED3: call    NiObjectNET_SetName
0x581ED8: mov     eax, [edi+70h]
0x581EDB: and     word ptr [eax+18h], 0FFFEh
0x581EE1: mov     ecx, [edi+54h]
0x581EE4: mov     edx, [ecx]
0x581EE6: mov     eax, [edi+70h]
0x581EE9: mov     edx, [edx+84h]
0x581EEF: push    ebx; a3
0x581EF0: push    eax; a3
0x581EF1: call    edx
0x581EF3: mov     esi, [edi]
0x581EF5: mov     ecx, esi; this
0x581EF7: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x581EFC: mov     ecx, esi
0x581EFE: call    NiNode_UpdateDynamicEffectState
0x581F03: fldz
0x581F05: push    1; a3
0x581F07: push    ecx
0x581F08: mov     ecx, esi; this
0x581F0A: fstp    [esp+3Ch+a2]; a2
0x581F0D: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x581F12: push    34h ; '4'; Size
0x581F14: call    FormHeapAlloc
0x581F19: add     esp, 4
0x581F1C: mov     [esp+34h+var_1C], eax
0x581F20: cmp     eax, ebx
0x581F22: mov     [esp+34h+var_4], 1
0x581F2A: jz      short loc_581F37
0x581F2C: mov     ecx, eax
0x581F2E: call    NiFogProperty_constr; Fog decode: constructs full BSFogProperty. Base NiFogProperty fields use default color; extension adds fogStart +0x2C and fogEnd +0x30.
0x581F33: mov     ebp, eax
0x581F35: jmp     short loc_581F39
0x581F37: xor     ebp, ebp
0x581F39: cmp     ebp, ebx
0x581F3B: mov     [esp+34h+var_1C], ebp
0x581F3F: jz      short loc_581F4B
0x581F41: lea     eax, [ebp+4]
0x581F44: push    eax; a3
0x581F45: call    dword ptr ds:0A28078h
0x581F4B: fldz
0x581F4D: fst     dword ptr [ebp+2Ch]
0x581F50: push    ebp; a2
0x581F51: fstp    dword ptr [ebp+30h]
0x581F54: mov     [esp+38h+var_4], 2
0x581F5C: mov     ecx, [edi+4]; this
0x581F5F: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x581F64: push    4Ch ; 'L'; Size
0x581F66: mov     [edi+50h], bl
0x581F69: call    FormHeapAlloc
0x581F6E: add     esp, 4
0x581F71: mov     [esp+34h+a3], eax; a3
0x581F75: cmp     eax, ebx
0x581F77: mov     byte ptr [esp+34h+var_4], 3
0x581F7C: jz      short loc_581F89
0x581F7E: mov     ecx, eax; this
0x581F80: call    ??0TileImage@@QAE@XZ; TileImage::TileImage(void)
0x581F85: mov     esi, eax
0x581F87: jmp     short loc_581F8B
0x581F89: xor     esi, esi
0x581F8B: mov     edx, [esi]
0x581F8D: mov     eax, [edx+4]
0x581F90: push    ebx; a3
0x581F91: push    offset aCursor; "Cursor"
0x581F96: push    ebx; a3
0x581F97: mov     ecx, esi
0x581F99: mov     byte ptr [esp+40h+var_4], 2
0x581F9E: call    eax
0x581FA0: fld     dword ptr ds:0A342A0h
0x581FA6: push    ecx
0x581FA7: fstp    [esp+38h+var_38]; value
0x581FAA: push    0FABh; propertyCode
0x581FAF: mov     ecx, esi; this
0x581FB1: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581FB6: fld     dword ptr ds:0A56670h
0x581FBC: push    ecx
0x581FBD: fstp    [esp+38h+var_38]; value
0x581FC0: push    0FCBh; propertyCode
0x581FC5: mov     ecx, esi; this
0x581FC7: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581FCC: fld     dword ptr ds:0A56670h
0x581FD2: push    ecx
0x581FD3: fstp    [esp+38h+var_38]; value
0x581FD6: push    0FCAh; propertyCode
0x581FDB: mov     ecx, esi; this
0x581FDD: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x581FE2: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x581FE7: push    0FE6h
0x581FEC: mov     ecx, esi
0x581FEE: call    Tile_SetString
0x581FF3: fldz
0x581FF5: push    ecx
0x581FF6: fstp    [esp+38h+var_38]; value
0x581FF9: push    0FADh; propertyCode
0x581FFE: mov     ecx, esi; this
0x582000: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x582005: fldz
0x582007: push    ecx
0x582008: fstp    [esp+38h+var_38]; value
0x58200B: push    0FACh; propertyCode
0x582010: mov     ecx, esi; this
0x582012: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x582017: fld1
0x582019: push    ecx
0x58201A: fstp    [esp+38h+var_38]; value
0x58201D: push    0FA1h; propertyCode
0x582022: mov     ecx, esi; this
0x582024: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x582029: fld     dword ptr ds:0A40098h
0x58202F: push    ecx
0x582030: fstp    [esp+38h+var_38]; value
0x582033: push    0FA7h; propertyCode
0x582038: mov     ecx, esi; this
0x58203A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x58203F: fld     dword ptr ds:0A40098h
0x582045: push    ecx
0x582046: fstp    [esp+38h+var_38]; value
0x582049: push    0FCCh; propertyCode
0x58204E: mov     ecx, esi; this
0x582050: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x582055: fld     dword ptr ds:0A40098h
0x58205B: push    ecx
0x58205C: fstp    [esp+38h+var_38]; value
0x58205F: push    0FCDh; propertyCode
0x582064: mov     ecx, esi; this
0x582066: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x58206B: fld     dword ptr ds:0A40098h
0x582071: push    ecx
0x582072: fstp    [esp+38h+var_38]; value
0x582075: push    0FCEh; propertyCode
0x58207A: mov     ecx, esi; this
0x58207C: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x582081: mov     ecx, esi
0x582083: call    sub_58E870
0x582088: cmp     [esi+24h], ebx
0x58208B: jnz     short loc_58209C
0x58208D: push    offset aTheCursorCould; "The Cursor could not be created. Check "...
0x582092: push    1; int
0x582094: call    sub_533D30
0x582099: add     esp, 8
0x58209C: mov     eax, [esi+24h]
0x58209F: mov     ecx, [edi+58h]
0x5820A2: mov     edx, [ecx]
0x5820A4: push    1
0x5820A6: push    eax
0x5820A7: mov     eax, [edx+84h]
0x5820AD: call    eax
0x5820AF: fldz
0x5820B1: mov     eax, [esi+24h]
0x5820B4: fst     [esp+34h+var_18]
0x5820B8: fld     dword ptr ds:0A30634h
0x5820BE: mov     ecx, [esp+34h+var_18]
0x5820C2: fstp    [esp+34h+var_14]
0x5820C6: mov     [eax+54h], ecx
0x5820C9: mov     edx, [esp+34h+var_14]
0x5820CD: mov     [eax+58h], edx
0x5820D0: fstp    [esp+34h+var_10]
0x5820D4: mov     ecx, [esp+34h+var_10]
0x5820D8: mov     [eax+5Ch], ecx
0x5820DB: mov     ecx, [esi+24h]; this
0x5820DE: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x5820E3: mov     ecx, [esi+24h]
0x5820E6: call    NiNode_UpdateDynamicEffectState
0x5820EB: fldz
0x5820ED: mov     ecx, [esi+24h]; this
0x5820F0: push    1; a3
0x5820F2: push    ecx
0x5820F3: fstp    [esp+3Ch+a2]; a2
0x5820F6: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x5820FB: mov     ecx, edi
0x5820FD: mov     [edi+1Ch], esi
0x582100: call    sub_57E7C0
0x582105: mov     edx, [edi+1Ch]
0x582108: mov     eax, [edx+24h]
0x58210B: or      word ptr [eax+18h], 1
0x582110: cmp     [esp+34h+a4], bl
0x582114: jz      short loc_58211F
0x582116: push    ebx
0x582117: call    sub_578E10
0x58211C: add     esp, 4
0x58211F: lea     eax, [ebp+4]
0x582122: push    eax; lpAddend
0x582123: mov     [esp+38h+var_4], 0FFFFFFFFh
0x58212B: call    dword ptr ds:0A2807Ch
0x582131: test    eax, eax
0x582133: jnz     short loc_582140
0x582135: mov     edx, [ebp+0]
0x582138: mov     eax, [edx]
0x58213A: push    1
0x58213C: mov     ecx, ebp
0x58213E: call    eax
0x582140: mov     ecx, dword ptr [esp+34h+var_C]
0x582144: mov     large fs:0, ecx
0x58214B: pop     ecx
0x58214C: pop     edi
0x58214D: pop     esi
0x58214E: pop     ebp
0x58214F: pop     ebx
0x582150: add     esp, 20h
0x582153: retn    4
0x9BEC90: mov     eax, [ebp-1Ch]
0x9BEC93: push    eax
0x9BEC94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BEC99: pop     ecx
0x9BEC9A: retn
0x9BEC9B: mov     eax, [ebp-1Ch]
0x9BEC9E: push    eax
0x9BEC9F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BECA4: pop     ecx
0x9BECA5: retn
0x9BECA6: lea     ecx, [ebp-1Ch]; slot
0x9BECA9: jmp     NiPointerSlot_Release
0x9BECAE: mov     eax, [ebp-20h]
0x9BECB1: push    eax
0x9BECB2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9BECB7: pop     ecx
0x9BECB8: retn
0x9BECB9: mov     edx, [esp+arg_4]
0x9BECBD: lea     eax, [edx-24h]
0x9BECC0: mov     ecx, [edx-28h]
0x9BECC3: xor     ecx, eax
0x9BECC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BECCA: mov     eax, offset stru_AE833C
0x9BECCF: jmp     ___CxxFrameHandler3
