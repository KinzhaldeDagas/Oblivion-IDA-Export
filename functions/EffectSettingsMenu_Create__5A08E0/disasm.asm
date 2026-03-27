0x5A08E0: push    0FFFFFFFFh
0x5A08E2: push    offset EffectSettingsMenu_Create_SEH
0x5A08E7: mov     eax, large fs:0
0x5A08ED: push    eax
0x5A08EE: sub     esp, 130h
0x5A08F4: mov     eax, ds:0B30AACh
0x5A08F9: xor     eax, esp
0x5A08FB: mov     [esp+13Ch+var_10], eax
0x5A0902: push    ebx; a3
0x5A0903: push    ebp; a3
0x5A0904: push    esi; a3
0x5A0905: push    edi; a3
0x5A0906: mov     eax, ds:0B30AACh
0x5A090B: xor     eax, esp
0x5A090D: push    eax; a3
0x5A090E: lea     eax, [esp+150h+var_C]
0x5A0915: mov     large fs:0, eax
0x5A091B: mov     eax, [esp+150h+arg_0]
0x5A0922: push    413h
0x5A0927: mov     [esp+154h+var_130], eax; a3
0x5A092B: call    Menu_GetOpenMenuTile
0x5A0930: xor     edi, edi
0x5A0932: add     esp, 4
0x5A0935: cmp     eax, edi
0x5A0937: jz      short loc_5A0943
0x5A0939: mov     edx, [eax]
0x5A093B: mov     ecx, eax
0x5A093D: mov     eax, [edx]
0x5A093F: push    1; a3
0x5A0941: call    eax
0x5A0943: push    1; arg1
0x5A0945: push    edi; canCreate
0x5A0946: call    InterfaceManager_GetSingleton
0x5A094B: add     esp, 8
0x5A094E: mov     esi, eax
0x5A0950: call    InterfaceManager_GetDepth
0x5A0955: fstp    [esp+154h+a3]; a3
0x5A0959: mov     ecx, [esi+68h]; TileWindow *
0x5A095C: push    offset aDataMenusDia_5; "Data\\Menus\\dialog\\enchantmentsetting"...
0x5A0961: call    Menu_LoadXML
0x5A0966: mov     ebx, eax
0x5A0968: mov     ecx, ebx
0x5A096A: mov     [esp+154h+var_124], ebx; a3
0x5A096E: call    Tile_GetParentMenu
0x5A0973: mov     esi, eax
0x5A0975: cmp     esi, edi
0x5A0977: jz      loc_5A135C
0x5A097D: mov     edx, [esi]
0x5A097F: mov     eax, [edx+34h]
0x5A0982: mov     ecx, esi
0x5A0984: call    eax
0x5A0986: cmp     eax, 413h
0x5A098B: jnz     loc_5A134D
0x5A0991: push    ebx
0x5A0992: mov     ecx, esi
0x5A0994: call    Menu_SetTileMenu
0x5A0999: push    0FA5h
0x5A099E: mov     ecx, ebx
0x5A09A0: call    Tile_GetFloat
0x5A09A5: fcomp   dword ptr ds:0A69770h
0x5A09AB: fnstsw  ax
0x5A09AD: test    ah, 44h
0x5A09B0: jnp     short loc_5A09CB
0x5A09B2: push    0FA5h
0x5A09B7: mov     ecx, ebx
0x5A09B9: call    Tile_GetFloat
0x5A09BE: fcomp   qword ptr ds:0A69778h
0x5A09C4: fnstsw  ax
0x5A09C6: test    ah, 44h
0x5A09C9: jp      short loc_5A09DF
0x5A09CB: fld     [esp+154h+a3]
0x5A09CF: push    ecx
0x5A09D0: fstp    [esp+158h+a2]; a3
0x5A09D3: push    0FABh; a2
0x5A09D8: mov     ecx, ebx; this
0x5A09DA: call    Tile_SetFloat
0x5A09DF: mov     ecx, esi
0x5A09E1: call    sub_59FE70
0x5A09E6: mov     eax, [esi+7Ch]
0x5A09E9: mov     cl, byte ptr [esp+154h+arg_0]
0x5A09F0: xor     ebp, ebp
0x5A09F2: cmp     eax, edi
0x5A09F4: mov     [esi+71h], cl
0x5A09F7: mov     byte ptr [esp+154h+var_140+3], 1
0x5A09FC: jz      short loc_5A0A2C
0x5A09FE: mov     edx, [eax+30h]
0x5A0A01: mov     eax, [edx+8]
0x5A0A04: push    edi; int
0x5A0A05: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5A0A0A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A0A0F: push    edi; int
0x5A0A10: push    eax; void *
0x5A0A11: call    OblivionDynamicCast
0x5A0A16: mov     edx, [eax]
0x5A0A18: mov     ecx, eax
0x5A0A1A: mov     eax, [edx+10h]
0x5A0A1D: add     esp, 14h
0x5A0A20: call    eax
0x5A0A22: cmp     eax, 3
0x5A0A25: mov     byte ptr [esp+154h+var_138+3], 1
0x5A0A2A: jz      short loc_5A0A31
0x5A0A2C: mov     byte ptr [esp+154h+var_138+3], 0
0x5A0A31: mov     eax, [esi+7Ch]
0x5A0A34: cmp     eax, edi
0x5A0A36: jz      short loc_5A0A65
0x5A0A38: mov     ecx, [eax+30h]
0x5A0A3B: mov     eax, [ecx+8]
0x5A0A3E: push    edi; int
0x5A0A3F: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5A0A44: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5A0A49: push    edi; int
0x5A0A4A: push    eax; void *
0x5A0A4B: call    OblivionDynamicCast
0x5A0A50: mov     edx, [eax]
0x5A0A52: mov     ecx, eax
0x5A0A54: mov     eax, [edx+10h]
0x5A0A57: add     esp, 14h
0x5A0A5A: call    eax
0x5A0A5C: cmp     eax, 2
0x5A0A5F: jnz     short loc_5A0A65
0x5A0A61: mov     bl, 1
0x5A0A63: jmp     short loc_5A0A67
0x5A0A65: xor     bl, bl
0x5A0A67: cmp     byte ptr [esp+154h+arg_0], 0
0x5A0A6F: jz      loc_5A0B6D
0x5A0A75: push    24h ; '$'; Size
0x5A0A77: call    FormHeapAlloc
0x5A0A7C: add     esp, 4
0x5A0A7F: mov     [esp+154h+a3], eax
0x5A0A83: cmp     eax, edi
0x5A0A85: mov     [esp+154h+var_8], edi
0x5A0A8C: jz      short loc_5A0A9C
0x5A0A8E: mov     ecx, [esp+154h+var_134]
0x5A0A92: push    ecx
0x5A0A93: mov     ecx, eax
0x5A0A95: call    EffectItem_constrCopy
0x5A0A9A: mov     edi, eax
0x5A0A9C: mov     [esi+94h], edi
0x5A0AA2: fld     dword ptr ds:0B3B29Ch
0x5A0AA8: fsub    qword ptr ds:0A2F928h
0x5A0AAE: mov     [esp+154h+var_8], 0FFFFFFFFh
0x5A0AB9: call    Double_To_SInt32
0x5A0ABE: push    eax
0x5A0ABF: mov     ecx, edi
0x5A0AC1: call    EffectItem_SetArea
0x5A0AC6: fld     dword ptr ds:0B3B2ACh
0x5A0ACC: call    Double_To_SInt32
0x5A0AD1: mov     ecx, [esi+94h]
0x5A0AD7: push    eax
0x5A0AD8: call    EffectItem_SetMagnitude
0x5A0ADD: fld     dword ptr ds:0B3B2BCh
0x5A0AE3: call    Double_To_SInt32
0x5A0AE8: mov     ecx, [esi+94h]
0x5A0AEE: push    eax
0x5A0AEF: call    EffectItem_SetDuration
0x5A0AF4: test    bl, bl
0x5A0AF6: jnz     short loc_5A0B0E
0x5A0AF8: mov     ecx, [esi+94h]
0x5A0AFE: push    0
0x5A0B00: call    EffectItem_SetRange
0x5A0B05: test    al, al
0x5A0B07: jz      short loc_5A0B0E
0x5A0B09: mov     ebp, 1
0x5A0B0E: cmp     byte ptr [esp+154h+var_138+3], 0
0x5A0B13: jnz     short loc_5A0B41
0x5A0B15: test    bl, bl
0x5A0B17: jnz     short loc_5A0B2D
0x5A0B19: mov     ecx, [esi+94h]
0x5A0B1F: push    2
0x5A0B21: call    EffectItem_SetRange
0x5A0B26: test    al, al
0x5A0B28: jz      short loc_5A0B2D
0x5A0B2A: add     ebp, 1
0x5A0B2D: mov     ecx, [esi+94h]
0x5A0B33: push    1
0x5A0B35: call    EffectItem_SetRange
0x5A0B3A: test    al, al
0x5A0B3C: jz      short loc_5A0B41
0x5A0B3E: add     ebp, 1
0x5A0B41: mov     ecx, [esi+64h]; this
0x5A0B44: fld1
0x5A0B46: push    ecx
0x5A0B47: fstp    [esp+158h+a2]; a3
0x5A0B4A: push    0FA1h; a2
0x5A0B4F: call    Tile_SetFloat
0x5A0B54: mov     edx, [esi+94h]
0x5A0B5A: push    edx
0x5A0B5B: mov     ecx, esi
0x5A0B5D: call    sub_59FBF0
0x5A0B62: mov     ebx, [esp+154h+var_134]
0x5A0B66: xor     edi, edi
0x5A0B68: jmp     loc_5A0C4C
0x5A0B6D: test    bl, bl
0x5A0B6F: mov     ecx, [esp+154h+var_134]
0x5A0B73: mov     [esi+94h], ecx
0x5A0B79: jnz     short loc_5A0B8D
0x5A0B7B: mov     eax, [ecx+1Ch]
0x5A0B7E: mov     eax, [eax+58h]
0x5A0B81: shr     eax, 4
0x5A0B84: test    al, 1
0x5A0B86: jz      short loc_5A0B8D
0x5A0B88: mov     ebp, 1
0x5A0B8D: cmp     byte ptr [esp+154h+var_138+3], 0
0x5A0B92: jnz     short loc_5A0BB9
0x5A0B94: test    bl, bl
0x5A0B96: jnz     short loc_5A0BA9
0x5A0B98: mov     eax, [ecx+1Ch]
0x5A0B9B: mov     edx, [eax+58h]
0x5A0B9E: shr     edx, 6
0x5A0BA1: test    dl, 1
0x5A0BA4: jz      short loc_5A0BA9
0x5A0BA6: add     ebp, 1
0x5A0BA9: mov     eax, [ecx+1Ch]
0x5A0BAC: mov     eax, [eax+58h]
0x5A0BAF: shr     eax, 5
0x5A0BB2: test    al, 1
0x5A0BB4: jz      short loc_5A0BB9
0x5A0BB6: add     ebp, 1
0x5A0BB9: mov     ecx, [esi+64h]; this
0x5A0BBC: fld     dword ptr ds:0A379B4h
0x5A0BC2: push    ecx
0x5A0BC3: fstp    [esp+158h+a2]; a3
0x5A0BC6: push    0FA1h; a2
0x5A0BCB: call    Tile_SetFloat
0x5A0BD0: mov     ebx, [esp+154h+var_134]
0x5A0BD4: mov     ecx, ebx
0x5A0BD6: call    EffectItem_GetArea
0x5A0BDB: test    eax, eax
0x5A0BDD: jz      short loc_5A0C3A
0x5A0BDF: mov     [esp+154h+var_12C], edi
0x5A0BE3: mov     word ptr [esp+154h+var_128], di
0x5A0BE8: mov     word ptr [esp+154h+var_128+2], di
0x5A0BED: mov     ecx, ebx
0x5A0BEF: mov     [esp+154h+var_8], 1
0x5A0BFA: call    EffectItem_GetArea
0x5A0BFF: push    eax; ArgList
0x5A0C00: lea     ecx, [esp+158h+var_12C]
0x5A0C04: push    offset aD_0; "%d"
0x5A0C09: push    ecx; int
0x5A0C0A: call    BSStringT_Static_Format
0x5A0C0F: mov     edx, [esp+160h+var_12C]
0x5A0C13: mov     ecx, [esi+4Ch]
0x5A0C16: add     esp, 0Ch
0x5A0C19: push    edx
0x5A0C1A: push    0FAEh
0x5A0C1F: call    Tile_SetString
0x5A0C24: lea     ecx, [esp+154h+var_12C]; void *
0x5A0C28: mov     [esp+154h+var_8], 0FFFFFFFFh
0x5A0C33: call    BSStringT_Clear
0x5A0C38: jmp     short loc_5A0C4C
0x5A0C3A: mov     ecx, [esi+4Ch]
0x5A0C3D: push    offset asc_A3A0E4; "-"
0x5A0C42: push    0FAEh
0x5A0C47: call    Tile_SetString
0x5A0C4C: mov     eax, [esi+94h]
0x5A0C52: mov     eax, [eax+14h]
0x5A0C55: mov     [esi+90h], eax
0x5A0C5B: mov     ecx, [ebx+1Ch]
0x5A0C5E: mov     edx, [ecx+58h]
0x5A0C61: shr     edx, 14h
0x5A0C64: test    dl, 1
0x5A0C67: jz      short loc_5A0CB8
0x5A0C69: push    eax
0x5A0C6A: call    ActorValue_GetName
0x5A0C6F: fld1
0x5A0C71: mov     ecx, [esi+38h]; this
0x5A0C74: fstp    [esp+158h+a2]; a3
0x5A0C77: push    0FA1h; a2
0x5A0C7C: mov     edi, eax
0x5A0C7E: call    Tile_SetFloat
0x5A0C83: fld     dword ptr ds:0A379B4h
0x5A0C89: mov     ecx, [esi+34h]; this
0x5A0C8C: push    ecx
0x5A0C8D: fstp    [esp+158h+a2]; a3
0x5A0C90: push    0FA1h; a2
0x5A0C95: call    Tile_SetFloat
0x5A0C9A: mov     ecx, [esi+34h]
0x5A0C9D: push    edi
0x5A0C9E: push    0FAEh
0x5A0CA3: call    Tile_SetString
0x5A0CA8: mov     ebx, [esp+154h+var_134]
0x5A0CAC: mov     byte ptr [esp+154h+var_140+3], 0
0x5A0CB1: xor     edi, edi
0x5A0CB3: jmp     loc_5A0D49
0x5A0CB8: mov     ecx, [ecx+58h]
0x5A0CBB: shr     ecx, 13h
0x5A0CBE: test    cl, 1
0x5A0CC1: jz      short loc_5A0D0F
0x5A0CC3: push    eax
0x5A0CC4: call    ActorValue_GetName
0x5A0CC9: fld1
0x5A0CCB: mov     ecx, [esi+34h]; this
0x5A0CCE: fstp    [esp+158h+a2]; a3
0x5A0CD1: push    0FA1h; a2
0x5A0CD6: mov     edi, eax
0x5A0CD8: call    Tile_SetFloat
0x5A0CDD: fld     dword ptr ds:0A379B4h
0x5A0CE3: mov     ecx, [esi+38h]; this
0x5A0CE6: push    ecx
0x5A0CE7: fstp    [esp+158h+a2]; a3
0x5A0CEA: push    0FA1h; a2
0x5A0CEF: call    Tile_SetFloat
0x5A0CF4: mov     ecx, [esi+38h]
0x5A0CF7: push    edi
0x5A0CF8: push    0FAEh
0x5A0CFD: call    Tile_SetString
0x5A0D02: mov     ebx, [esp+154h+var_134]
0x5A0D06: mov     byte ptr [esp+154h+var_140+3], 0
0x5A0D0B: xor     edi, edi
0x5A0D0D: jmp     short loc_5A0D49
0x5A0D0F: mov     ecx, [esi+34h]; this
0x5A0D12: fld1
0x5A0D14: push    ecx
0x5A0D15: fstp    [esp+158h+a2]; a3
0x5A0D18: push    0FA1h; a2
0x5A0D1D: call    Tile_SetFloat
0x5A0D22: fld1
0x5A0D24: mov     ecx, [esi+38h]; this
0x5A0D27: push    ecx
0x5A0D28: fstp    [esp+158h+a2]; a3
0x5A0D2B: push    0FA1h; a2
0x5A0D30: call    Tile_SetFloat
0x5A0D35: fldz
0x5A0D37: push    ecx
0x5A0D38: fstp    [esp+158h+a2]; a3
0x5A0D3B: mov     ecx, [esp+158h+var_124]; this
0x5A0D3F: push    0FAFh; a2
0x5A0D44: call    Tile_SetFloat
0x5A0D49: cmp     [esi+78h], edi
0x5A0D4C: mov     edx, [esi+94h]
0x5A0D52: mov     eax, [edx+10h]
0x5A0D55: mov     [esi+8Ch], eax
0x5A0D5B: jz      short loc_5A0D9D
0x5A0D5D: cmp     ebp, 1
0x5A0D60: jle     short loc_5A0D9D
0x5A0D62: mov     ecx, [esi+3Ch]; this
0x5A0D65: fld     dword ptr ds:0A379B4h
0x5A0D6B: push    ecx
0x5A0D6C: fstp    [esp+158h+a2]; a3
0x5A0D6F: push    0FA1h; a2
0x5A0D74: call    Tile_SetFloat
0x5A0D79: mov     eax, [esi+8Ch]
0x5A0D7F: push    eax
0x5A0D80: call    Magic_GetRangeName
0x5A0D85: mov     ecx, [esi+3Ch]
0x5A0D88: add     esp, 4
0x5A0D8B: push    eax
0x5A0D8C: push    0FAEh
0x5A0D91: call    Tile_SetString
0x5A0D96: mov     byte ptr [esp+154h+var_140+3], 0
0x5A0D9B: jmp     short loc_5A0DB0
0x5A0D9D: mov     ecx, [esi+3Ch]; this
0x5A0DA0: fld1
0x5A0DA2: push    ecx
0x5A0DA3: fstp    [esp+158h+a2]; a3
0x5A0DA6: push    0FA1h; a2
0x5A0DAB: call    Tile_SetFloat
0x5A0DB0: mov     ecx, [esi+94h]
0x5A0DB6: call    EffectItem_GetArea
0x5A0DBB: mov     [esi+80h], eax
0x5A0DC1: mov     eax, [esi+94h]
0x5A0DC7: mov     ecx, [eax+1Ch]
0x5A0DCA: mov     ecx, [ecx+58h]
0x5A0DCD: shr     ecx, 9
0x5A0DD0: test    cl, 1
0x5A0DD3: jnz     loc_5A0ECD
0x5A0DD9: cmp     [eax+10h], edi
0x5A0DDC: jz      loc_5A0ECD
0x5A0DE2: mov     ecx, offset flt_B3B29C
0x5A0DE7: call    GameSetting_GetSafeFloatPointer
0x5A0DEC: fld     dword ptr [eax]
0x5A0DEE: fsub    qword ptr ds:0A2F928h
0x5A0DF4: mov     ecx, offset unk_B3B2A4
0x5A0DF9: fstp    [esp+154h+var_130]
0x5A0DFD: call    GameSetting_GetSafeFloatPointer
0x5A0E02: fld     dword ptr [eax]
0x5A0E04: mov     ecx, [esi+50h]; this
0x5A0E07: fstp    [esp+154h+var_134]
0x5A0E0B: push    ecx
0x5A0E0C: fld     [esp+158h+var_134]
0x5A0E10: fsub    [esp+158h+var_130]
0x5A0E14: fstp    [esp+158h+a3]
0x5A0E18: fld     dword ptr ds:0A379B4h
0x5A0E1E: fstp    [esp+158h+a2]; a3
0x5A0E21: push    0FA1h; a2
0x5A0E26: call    Tile_SetFloat
0x5A0E2B: fld     [esp+154h+var_130]
0x5A0E2F: push    ecx
0x5A0E30: mov     ecx, [esi+50h]; this
0x5A0E33: fstp    [esp+158h+a2]; a3
0x5A0E36: push    0FAFh; a2
0x5A0E3B: call    Tile_SetFloat
0x5A0E40: fld     [esp+154h+var_134]
0x5A0E44: push    ecx
0x5A0E45: mov     ecx, [esi+50h]; this
0x5A0E48: fstp    [esp+158h+a2]; a3
0x5A0E4B: push    0FB0h; a2
0x5A0E50: call    Tile_SetFloat
0x5A0E55: fld     dword ptr ds:0A31E2Ch
0x5A0E5B: sub     esp, 8
0x5A0E5E: fstp    [esp+15Ch+a2]; float
0x5A0E62: fld     [esp+15Ch+a3]
0x5A0E66: fdiv    qword ptr ds:0A3F3E8h
0x5A0E6C: fstp    [esp+15Ch+a3]
0x5A0E70: fld     [esp+15Ch+a3]
0x5A0E74: fstp    [esp+15Ch+var_15C]; float
0x5A0E77: call    Round_Float
0x5A0E7C: fstp    [esp+15Ch+a2]; a3
0x5A0E80: mov     ecx, [esi+50h]; this
0x5A0E83: add     esp, 4
0x5A0E86: push    0FB2h; a2
0x5A0E8B: call    Tile_SetFloat
0x5A0E90: fild    dword ptr [esi+80h]
0x5A0E96: push    ecx
0x5A0E97: mov     ecx, [esi+50h]; this
0x5A0E9A: fsub    [esp+158h+var_130]
0x5A0E9E: fstp    [esp+158h+a3]
0x5A0EA2: fld     [esp+158h+a3]
0x5A0EA6: fstp    [esp+158h+a2]; a3
0x5A0EA9: push    0FB3h; a2
0x5A0EAE: call    Tile_SetFloat
0x5A0EB3: fldz
0x5A0EB5: mov     ecx, [esi+50h]; this
0x5A0EB8: push    ecx
0x5A0EB9: fstp    [esp+158h+a2]; a3
0x5A0EBC: push    0FB3h; a2
0x5A0EC1: call    Tile_SetFloat
0x5A0EC6: mov     byte ptr [esp+154h+var_140+3], 0
0x5A0ECB: jmp     short loc_5A0EE0
0x5A0ECD: mov     ecx, [esi+50h]; this
0x5A0ED0: fld1
0x5A0ED2: push    ecx
0x5A0ED3: fstp    [esp+158h+a2]; a3
0x5A0ED6: push    0FA1h; a2
0x5A0EDB: call    Tile_SetFloat
0x5A0EE0: mov     ecx, [esi+94h]
0x5A0EE6: call    EffectItem_GetMagnitude
0x5A0EEB: mov     edx, [esi+94h]
0x5A0EF1: mov     [esi+84h], eax
0x5A0EF7: mov     eax, [edx+1Ch]
0x5A0EFA: mov     eax, [eax+58h]
0x5A0EFD: shr     eax, 8
0x5A0F00: test    al, 1
0x5A0F02: jnz     loc_5A1153
0x5A0F08: mov     eax, [esi+7Ch]
0x5A0F0B: cmp     eax, edi
0x5A0F0D: jz      short loc_5A0F22
0x5A0F0F: mov     ecx, [eax+34h]
0x5A0F12: mov     edx, [ecx]
0x5A0F14: mov     eax, [edx+10h]
0x5A0F17: call    eax
0x5A0F19: cmp     eax, 3
0x5A0F1C: jz      loc_5A1153
0x5A0F22: mov     ecx, [esi+40h]; this
0x5A0F25: fld     dword ptr ds:0A379B4h
0x5A0F2B: push    ecx
0x5A0F2C: fstp    [esp+158h+a2]; a3
0x5A0F2F: push    0FA1h; a2
0x5A0F34: call    Tile_SetFloat
0x5A0F39: mov     byte ptr [esp+154h+var_140+3], 0
0x5A0F3E: mov     [esp+154h+var_12C], edi
0x5A0F42: mov     word ptr [esp+154h+var_128], di
0x5A0F47: mov     word ptr [esp+154h+var_128+2], di
0x5A0F4C: mov     eax, [esi+94h]
0x5A0F52: cmp     dword ptr [eax], 4E45504Fh
0x5A0F58: mov     [esp+154h+var_8], 2
0x5A0F63: jz      loc_5A10AC
0x5A0F69: cmp     dword ptr [eax], 4B434F4Ch
0x5A0F6F: jz      loc_5A10AC
0x5A0F75: mov     ecx, offset flt_B3B2AC
0x5A0F7A: call    GameSetting_GetSafeFloatPointer
0x5A0F7F: fld     dword ptr [eax]
0x5A0F81: mov     ecx, offset unk_B3B2B4
0x5A0F86: fstp    [esp+154h+var_130]
0x5A0F8A: call    GameSetting_GetSafeFloatPointer
0x5A0F8F: fld     dword ptr [eax]
0x5A0F91: mov     ecx, ds:0B38930h
0x5A0F97: fstp    [esp+154h+var_134]
0x5A0F9B: fld     [esp+154h+var_134]
0x5A0F9F: push    ecx; ArgList
0x5A0FA0: fsub    [esp+158h+var_130]
0x5A0FA4: lea     edx, [esp+158h+var_12C]
0x5A0FA8: push    offset aS_6; "%s:"
0x5A0FAD: push    edx; int
0x5A0FAE: fstp    [esp+160h+a3]; a3
0x5A0FB2: call    BSStringT_Static_Format
0x5A0FB7: fld1
0x5A0FB9: mov     ecx, [esi+40h]; this
0x5A0FBC: add     esp, 8
0x5A0FBF: fstp    [esp+158h+a2]; a3
0x5A0FC2: push    0FAEh; a2
0x5A0FC7: call    Tile_SetFloat
0x5A0FCC: fld     [esp+154h+var_130]
0x5A0FD0: push    ecx
0x5A0FD1: mov     ecx, [esi+44h]; this
0x5A0FD4: fstp    [esp+158h+a2]; a3
0x5A0FD7: push    0FAFh; a2
0x5A0FDC: call    Tile_SetFloat
0x5A0FE1: fld     [esp+154h+var_134]
0x5A0FE5: push    ecx
0x5A0FE6: mov     ecx, [esi+44h]; this
0x5A0FE9: fstp    [esp+158h+a2]; a3
0x5A0FEC: push    0FB0h; a2
0x5A0FF1: call    Tile_SetFloat
0x5A0FF6: fld     dword ptr ds:0A31E2Ch
0x5A0FFC: sub     esp, 8
0x5A0FFF: fstp    [esp+15Ch+a2]; float
0x5A1003: fld     [esp+15Ch+a3]
0x5A1007: fdiv    qword ptr ds:0A3F3E8h
0x5A100D: fstp    [esp+15Ch+a3]
0x5A1011: fld     [esp+15Ch+a3]
0x5A1015: fstp    [esp+15Ch+var_15C]; float
0x5A1018: call    Round_Float
0x5A101D: fstp    [esp+15Ch+a2]; a3
0x5A1021: mov     ecx, [esi+44h]; this
0x5A1024: add     esp, 4
0x5A1027: push    0FB2h; a2
0x5A102C: call    Tile_SetFloat
0x5A1031: fild    dword ptr [esi+84h]
0x5A1037: push    ecx
0x5A1038: mov     ecx, [esi+44h]; this
0x5A103B: fsub    [esp+158h+var_130]
0x5A103F: fstp    [esp+158h+a3]
0x5A1043: fld     [esp+158h+a3]
0x5A1047: fstp    [esp+158h+a2]; a3
0x5A104A: push    0FB3h; a2
0x5A104F: call    Tile_SetFloat
0x5A1054: fldz
0x5A1056: mov     ecx, [esi+44h]; this
0x5A1059: push    ecx
0x5A105A: fstp    [esp+158h+a2]; a3
0x5A105D: push    0FB3h; a2
0x5A1062: call    Tile_SetFloat
0x5A1067: mov     eax, [esi+94h]
0x5A106D: mov     eax, [eax+1Ch]
0x5A1070: mov     ecx, [eax+58h]
0x5A1073: shr     ecx, 1Eh
0x5A1076: test    cl, 1
0x5A1079: jz      loc_5A112B
0x5A107F: mov     ecx, offset fMagicLevelMagnitudeMult
0x5A1084: call    GameSetting_GetSafeFloatPointer
0x5A1089: fild    dword ptr [esi+84h]
0x5A108F: push    ecx
0x5A1090: mov     ecx, [esi+40h]; this
0x5A1093: fmul    dword ptr [eax]
0x5A1095: fstp    [esp+158h+a3]
0x5A1099: fld     [esp+158h+a3]
0x5A109D: fstp    [esp+158h+a2]; a3
0x5A10A0: push    0FB1h; a2
0x5A10A5: call    Tile_SetFloat
0x5A10AA: jmp     short loc_5A112B
0x5A10AC: mov     edx, ds:0B38940h
0x5A10B2: push    edx; ArgList
0x5A10B3: lea     eax, [esp+158h+var_12C]
0x5A10B7: push    offset aS_6; "%s:"
0x5A10BC: push    eax; int
0x5A10BD: call    BSStringT_Static_Format
0x5A10C2: fld     dword ptr ds:0A379B4h
0x5A10C8: mov     ecx, [esi+40h]; this
0x5A10CB: fstp    [esp+160h+a2]; a3
0x5A10CF: add     esp, 8
0x5A10D2: push    0FAEh; a2
0x5A10D7: call    Tile_SetFloat
0x5A10DC: mov     ecx, [esi+84h]
0x5A10E2: push    ecx
0x5A10E3: call    GetLockLevel
0x5A10E8: mov     [esi+98h], eax
0x5A10EE: mov     eax, ds:0B03E1Ch[eax*4]
0x5A10F5: add     esp, 4
0x5A10F8: cmp     eax, edi
0x5A10FA: jz      short loc_5A1100
0x5A10FC: mov     eax, [eax]
0x5A10FE: jmp     short loc_5A1102
0x5A1100: xor     eax, eax
0x5A1102: mov     ecx, [esi+40h]
0x5A1105: push    eax
0x5A1106: push    0FAFh
0x5A110B: call    Tile_SetString
0x5A1110: mov     edx, [esi+98h]
0x5A1116: push    edx
0x5A1117: call    sub_429A30
0x5A111C: mov     ecx, [esi+94h]
0x5A1122: add     esp, 4
0x5A1125: push    eax
0x5A1126: call    EffectItem_SetMagnitude
0x5A112B: mov     eax, [esp+154h+var_12C]
0x5A112F: mov     ecx, [esi+40h]
0x5A1132: push    eax
0x5A1133: push    0FB0h
0x5A1138: call    Tile_SetString
0x5A113D: lea     ecx, [esp+154h+var_12C]; void *
0x5A1141: mov     [esp+154h+var_8], 0FFFFFFFFh
0x5A114C: call    BSStringT_Clear
0x5A1151: jmp     short loc_5A1166
0x5A1153: mov     ecx, [esi+40h]; this
0x5A1156: fld1
0x5A1158: push    ecx
0x5A1159: fstp    [esp+158h+a2]; a3
0x5A115C: push    0FA1h; a2
0x5A1161: call    Tile_SetFloat
0x5A1166: mov     ecx, [esi+94h]
0x5A116C: call    EffectItem_GetDuration
0x5A1171: mov     ecx, [esi+94h]
0x5A1177: mov     [esi+88h], eax
0x5A117D: mov     eax, [ecx+1Ch]
0x5A1180: mov     edx, [eax+58h]
0x5A1183: shr     edx, 7
0x5A1186: test    dl, 1
0x5A1189: jnz     loc_5A127F
0x5A118F: cmp     byte ptr [esp+154h+var_138+3], 0
0x5A1194: jnz     loc_5A127F
0x5A119A: mov     ecx, offset flt_B3B2BC
0x5A119F: call    GameSetting_GetSafeFloatPointer
0x5A11A4: fld     dword ptr [eax]
0x5A11A6: mov     ecx, offset unk_B3B2C4
0x5A11AB: fstp    [esp+154h+var_130]
0x5A11AF: call    GameSetting_GetSafeFloatPointer
0x5A11B4: fld     dword ptr [eax]
0x5A11B6: mov     ecx, [esi+58h]; this
0x5A11B9: fstp    [esp+154h+var_134]
0x5A11BD: fld     [esp+154h+var_134]
0x5A11C1: push    ecx
0x5A11C2: fsub    [esp+158h+var_130]
0x5A11C6: fstp    [esp+158h+a3]
0x5A11CA: fld     dword ptr ds:0A379B4h
0x5A11D0: fstp    [esp+158h+a2]; a3
0x5A11D3: push    0FA1h; a2
0x5A11D8: call    Tile_SetFloat
0x5A11DD: fld     [esp+154h+var_130]
0x5A11E1: push    ecx
0x5A11E2: mov     ecx, [esi+58h]; this
0x5A11E5: fstp    [esp+158h+a2]; a3
0x5A11E8: push    0FAFh; a2
0x5A11ED: call    Tile_SetFloat
0x5A11F2: fld     [esp+154h+var_134]
0x5A11F6: push    ecx
0x5A11F7: mov     ecx, [esi+58h]; this
0x5A11FA: fstp    [esp+158h+a2]; a3
0x5A11FD: push    0FB0h; a2
0x5A1202: call    Tile_SetFloat
0x5A1207: fld     dword ptr ds:0A31E2Ch
0x5A120D: sub     esp, 8
0x5A1210: fstp    [esp+15Ch+a2]; float
0x5A1214: fld     [esp+15Ch+a3]
0x5A1218: fdiv    qword ptr ds:0A3F3E8h
0x5A121E: fstp    [esp+15Ch+a3]
0x5A1222: fld     [esp+15Ch+a3]
0x5A1226: fstp    [esp+15Ch+var_15C]; float
0x5A1229: call    Round_Float
0x5A122E: fstp    [esp+15Ch+a2]; a3
0x5A1232: mov     ecx, [esi+58h]; this
0x5A1235: add     esp, 4
0x5A1238: push    0FB2h; a2
0x5A123D: call    Tile_SetFloat
0x5A1242: fild    dword ptr [esi+88h]
0x5A1248: push    ecx
0x5A1249: mov     ecx, [esi+58h]; this
0x5A124C: fsub    [esp+158h+var_130]
0x5A1250: fstp    [esp+158h+a3]
0x5A1254: fld     [esp+158h+a3]
0x5A1258: fstp    [esp+158h+a2]; a3
0x5A125B: push    0FB3h; a2
0x5A1260: call    Tile_SetFloat
0x5A1265: fldz
0x5A1267: mov     ecx, [esi+58h]; this
0x5A126A: push    ecx
0x5A126B: fstp    [esp+158h+a2]; a3
0x5A126E: push    0FB3h; a2
0x5A1273: call    Tile_SetFloat
0x5A1278: mov     byte ptr [esp+154h+var_140+3], 0
0x5A127D: jmp     short loc_5A1292
0x5A127F: mov     ecx, [esi+58h]; this
0x5A1282: fld1
0x5A1284: push    ecx
0x5A1285: fstp    [esp+158h+a2]; a3
0x5A1288: push    0FA1h; a2
0x5A128D: call    Tile_SetFloat
0x5A1292: mov     eax, [ebx+1Ch]
0x5A1295: mov     eax, [eax+48h]
0x5A1298: cmp     eax, edi
0x5A129A: jnz     short loc_5A12A1
0x5A129C: mov     eax, offset EmptyString
0x5A12A1: push    eax
0x5A12A2: push    offset aIcons; "Icons"
0x5A12A7: lea     eax, [esp+15Ch+var_118]
0x5A12AB: push    offset aSS_2; "%s\\%s"
0x5A12B0: push    eax
0x5A12B1: call    __sprintf
0x5A12B6: add     esp, 10h
0x5A12B9: lea     ecx, [esp+154h+var_118]
0x5A12BD: push    ecx
0x5A12BE: mov     ecx, [esi+2Ch]
0x5A12C1: push    0FE6h
0x5A12C6: call    Tile_SetString
0x5A12CB: lea     edx, [esp+154h+var_120]
0x5A12CF: push    edx
0x5A12D0: mov     ecx, ebx
0x5A12D2: call    EffectItem_GetName
0x5A12D7: mov     eax, [eax]
0x5A12D9: mov     ecx, [esi+30h]
0x5A12DC: push    eax
0x5A12DD: push    0FDEh
0x5A12E2: mov     [esp+138h+arg_18], 3
0x5A12ED: call    Tile_SetString
0x5A12F2: mov     eax, [esp+130h+var_FC]
0x5A12F6: push    eax
0x5A12F7: mov     [esp+134h+arg_18], 0FFFFFFFFh
0x5A1302: call    FormHeapFree
0x5A1307: add     esp, 4
0x5A130A: push    edi; char
0x5A130B: mov     ecx, esi; int
0x5A130D: mov     [esp+134h+var_FC], edi
0x5A1311: mov     word ptr [esp+134h+var_F8+2], di
0x5A1316: mov     word ptr [esp+134h+var_F8], di
0x5A131B: call    EnableMenu
0x5A1320: cmp     byte ptr [esp+130h+var_11C+3], 0
0x5A1325: jz      short loc_5A1336
0x5A1327: cmp     byte ptr [esp+130h+arg_24], 0
0x5A132F: jz      short loc_5A133C
0x5A1331: call    sub_59FC60
0x5A1336: mov     eax, [esp+130h+var_100]
0x5A133A: jmp     short loc_5A135E
0x5A133C: mov     eax, [esi+64h]
0x5A133F: mov     edx, [esi]
0x5A1341: mov     edx, [edx+0Ch]
0x5A1344: push    eax
0x5A1345: push    16h
0x5A1347: mov     ecx, esi
0x5A1349: call    edx
0x5A134B: jmp     short loc_5A1352
0x5A134D: cmp     [esi+4], edi
0x5A1350: jz      short loc_5A135C
0x5A1352: mov     eax, [esi]
0x5A1354: mov     edx, [eax]
0x5A1356: push    1
0x5A1358: mov     ecx, esi
0x5A135A: call    edx
0x5A135C: xor     eax, eax
0x5A135E: mov     ecx, [esp+130h+arg_10]
0x5A1365: mov     large fs:0, ecx
0x5A136C: pop     ecx
0x5A136D: pop     edi
0x5A136E: pop     esi
0x5A136F: pop     ebp
0x5A1370: pop     ebx
0x5A1371: mov     ecx, [esp+11Ch+arg_C]
0x5A1378: xor     ecx, esp
0x5A137A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5A137F: add     esp, 13Ch
0x5A1385: retn
