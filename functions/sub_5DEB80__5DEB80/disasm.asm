0x5DEB80: sub     esp, 20h
0x5DEB83: push    ebx
0x5DEB84: push    esi
0x5DEB85: push    edi; a3
0x5DEB86: push    3FAh
0x5DEB8B: call    Menu_GetOpenMenuTile
0x5DEB90: xor     ebx, ebx
0x5DEB92: add     esp, 4
0x5DEB95: cmp     eax, ebx
0x5DEB97: jz      short loc_5DEBA3
0x5DEB99: mov     edx, [eax]
0x5DEB9B: mov     ecx, eax
0x5DEB9D: mov     eax, [edx]
0x5DEB9F: push    1; a3
0x5DEBA1: call    eax
0x5DEBA3: push    1; arg1
0x5DEBA5: push    ebx; canCreate
0x5DEBA6: call    InterfaceManager_GetSingleton
0x5DEBAB: add     esp, 8
0x5DEBAE: mov     esi, eax
0x5DEBB0: call    InterfaceManager_GetDepth
0x5DEBB5: fstp    [esp+2Ch+var_20]; a3
0x5DEBB9: mov     ecx, [esi+68h]; TileWindow *
0x5DEBBC: push    offset aDataMenusOpt_6; "Data\\Menus\\Options\\video_menu.xml"
0x5DEBC1: call    Menu_LoadXML
0x5DEBC6: mov     edi, eax
0x5DEBC8: mov     ecx, edi
0x5DEBCA: call    Tile_GetParentMenu
0x5DEBCF: mov     esi, eax
0x5DEBD1: cmp     esi, ebx
0x5DEBD3: mov     [esp+2Ch+var_1C], esi
0x5DEBD7: jz      loc_5DF152
0x5DEBDD: mov     edx, [esi]
0x5DEBDF: mov     eax, [edx+34h]
0x5DEBE2: mov     ecx, esi
0x5DEBE4: call    eax
0x5DEBE6: cmp     eax, 3FAh
0x5DEBEB: jnz     loc_5DF143
0x5DEBF1: push    ebx; int
0x5DEBF2: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5DEBF7: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5DEBFC: push    ebx; int
0x5DEBFD: push    edi; void *
0x5DEBFE: call    OblivionDynamicCast
0x5DEC03: add     esp, 14h
0x5DEC06: push    eax
0x5DEC07: mov     ecx, esi
0x5DEC09: call    Menu_SetTileMenu
0x5DEC0E: push    ebx; int
0x5DEC0F: push    offset ??_R0?AVVideoMenu@@@8; struct TypeDescriptor *
0x5DEC14: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DEC19: push    ebx; int
0x5DEC1A: push    esi; void *
0x5DEC1B: call    OblivionDynamicCast
0x5DEC20: mov     esi, eax
0x5DEC22: add     esp, 14h
0x5DEC25: xor     eax, eax
0x5DEC27: lea     ecx, [esi+28h]
0x5DEC2A: lea     ebx, [ebx+0]
0x5DEC30: cmp     [ecx], ebx
0x5DEC32: jz      loc_5DEDC9
0x5DEC38: add     eax, 1
0x5DEC3B: add     ecx, 4
0x5DEC3E: cmp     eax, 30h ; '0'
0x5DEC41: jl      short loc_5DEC30
0x5DEC43: push    0FA5h
0x5DEC48: mov     ecx, edi
0x5DEC4A: call    Tile_GetFloat
0x5DEC4F: fcomp   dword ptr ds:0A69770h
0x5DEC55: fnstsw  ax
0x5DEC57: test    ah, 44h
0x5DEC5A: jnp     short loc_5DEC75
0x5DEC5C: push    0FA5h
0x5DEC61: mov     ecx, edi
0x5DEC63: call    Tile_GetFloat
0x5DEC68: fcomp   qword ptr ds:0A69778h
0x5DEC6E: fnstsw  ax
0x5DEC70: test    ah, 44h
0x5DEC73: jp      short loc_5DEC89
0x5DEC75: fld     [esp+2Ch+var_20]
0x5DEC79: push    ecx
0x5DEC7A: fstp    [esp+30h+var_30]; a3
0x5DEC7D: push    0FABh; a2
0x5DEC82: mov     ecx, edi; this
0x5DEC84: call    Tile_SetFloat
0x5DEC89: mov     byte ptr [esi+115h], 1
0x5DEC90: cmp     ds:0B06CB4h, bl
0x5DEC96: jnz     short loc_5DECA4
0x5DEC98: mov     ds:0B06CF4h, bl
0x5DEC9E: mov     ds:0B06CECh, bl
0x5DECA4: movzx   ecx, byte ptr ds:0B43077h
0x5DECAB: mov     edx, [esi+48h]
0x5DECAE: push    ecx
0x5DECAF: push    edx
0x5DECB0: mov     ecx, esi
0x5DECB2: call    sub_59B640
0x5DECB7: movzx   eax, byte ptr ds:0B06F0Ch
0x5DECBE: mov     ecx, [esi+4Ch]
0x5DECC1: push    eax
0x5DECC2: push    ecx
0x5DECC3: mov     ecx, esi
0x5DECC5: call    sub_59B640
0x5DECCA: movzx   edx, byte ptr ds:0B06F14h
0x5DECD1: mov     eax, [esi+78h]
0x5DECD4: push    edx
0x5DECD5: push    eax
0x5DECD6: mov     ecx, esi
0x5DECD8: call    sub_59B640
0x5DECDD: movzx   ecx, byte ptr ds:0B06CBCh
0x5DECE4: mov     edx, [esi+50h]
0x5DECE7: push    ecx
0x5DECE8: push    edx
0x5DECE9: mov     ecx, esi
0x5DECEB: call    sub_59B640
0x5DECF0: movzx   eax, byte ptr ds:0B06DE4h
0x5DECF7: mov     ecx, [esi+0BCh]
0x5DECFD: push    eax
0x5DECFE: push    ecx
0x5DECFF: mov     ecx, esi
0x5DED01: call    sub_59B640
0x5DED06: movzx   edx, byte ptr ds:0B07060h
0x5DED0D: mov     eax, [esi+0C4h]
0x5DED13: push    edx
0x5DED14: push    eax
0x5DED15: mov     ecx, esi
0x5DED17: call    sub_59B640
0x5DED1C: movzx   ecx, byte ptr ds:0B09AE8h
0x5DED23: mov     edx, [esi+9Ch]
0x5DED29: push    ecx
0x5DED2A: push    edx
0x5DED2B: mov     ecx, esi
0x5DED2D: call    sub_59B640
0x5DED32: movzx   eax, byte ptr ds:0B09AF0h
0x5DED39: mov     ecx, [esi+0A0h]
0x5DED3F: push    eax
0x5DED40: push    ecx
0x5DED41: mov     ecx, esi
0x5DED43: call    sub_59B640
0x5DED48: movzx   edx, byte ptr ds:0B07090h
0x5DED4F: mov     eax, [esi+0C8h]
0x5DED55: push    edx
0x5DED56: push    eax
0x5DED57: mov     ecx, esi
0x5DED59: call    sub_59B640
0x5DED5E: movzx   ecx, byte ptr ds:0B430ADh
0x5DED65: mov     edx, [esi+0CCh]
0x5DED6B: push    ecx
0x5DED6C: push    edx
0x5DED6D: mov     ecx, esi
0x5DED6F: call    sub_59B640
0x5DED74: movzx   eax, byte ptr ds:0B06D34h
0x5DED7B: mov     ecx, [esi+0E0h]
0x5DED81: push    eax
0x5DED82: push    ecx
0x5DED83: mov     ecx, esi
0x5DED85: call    sub_59B640
0x5DED8A: movzx   edx, byte ptr ds:0B43077h
0x5DED91: push    edx
0x5DED92: mov     ecx, esi
0x5DED94: call    sub_5DE9C0
0x5DED99: mov     eax, ds:0B4205Ch
0x5DED9E: fldz
0x5DEDA0: mov     [esi+0ECh], eax
0x5DEDA6: fcomp   dword ptr ds:0B097C8h
0x5DEDAC: fnstsw  ax
0x5DEDAE: test    ah, 5
0x5DEDB1: jp      short loc_5DEDDF
0x5DEDB3: xor     ecx, ecx
0x5DEDB5: cmp     ds:0B06F5Ch, bl
0x5DEDBB: setnz   cl
0x5DEDBE: add     ecx, 1
0x5DEDC1: mov     [esi+0F0h], ecx
0x5DEDC7: jmp     short loc_5DEDE5
0x5DEDC9: push    offset aVideoMenuCreat; "Video Menu Creation Failed... Are your "...
0x5DEDCE: call    PrintError
0x5DEDD3: add     esp, 4
0x5DEDD6: pop     edi
0x5DEDD7: pop     esi
0x5DEDD8: xor     al, al
0x5DEDDA: pop     ebx
0x5DEDDB: add     esp, 20h
0x5DEDDE: retn
0x5DEDDF: mov     [esi+0F0h], ebx
0x5DEDE5: cmp     dword ptr ds:0B42F48h, 5
0x5DEDEC: jge     short loc_5DEE0C
0x5DEDEE: fld1
0x5DEDF0: push    ecx
0x5DEDF1: mov     ecx, [esi+0E4h]; this
0x5DEDF7: fstp    [esp+30h+var_30]; a3
0x5DEDFA: push    0FAFh; a2
0x5DEDFF: call    Tile_SetFloat
0x5DEE04: mov     [esi+0F4h], ebx
0x5DEE0A: jmp     short loc_5DEE2C
0x5DEE0C: mov     eax, ds:0B06F2Ch
0x5DEE11: cmp     eax, 2
0x5DEE14: jnz     short loc_5DEE1E
0x5DEE16: mov     [esi+0F4h], eax
0x5DEE1C: jmp     short loc_5DEE2C
0x5DEE1E: xor     edx, edx
0x5DEE20: cmp     eax, 1
0x5DEE23: setz    dl
0x5DEE26: mov     [esi+0F4h], edx
0x5DEE2C: xor     eax, eax
0x5DEE2E: cmp     ds:0B07058h, bl
0x5DEE34: setnz   al
0x5DEE37: xor     ecx, ecx
0x5DEE39: mov     [esi+0F8h], eax
0x5DEE3F: mov     eax, ds:0B06D0Ch
0x5DEE44: cmp     eax, 1
0x5DEE47: setle   cl
0x5DEE4A: sub     ecx, 1
0x5DEE4D: and     eax, ecx
0x5DEE4F: push    eax
0x5DEE50: mov     [esi+0FCh], eax
0x5DEE56: call    sub_497D50
0x5DEE5B: add     esp, 4
0x5DEE5E: test    al, al
0x5DEE60: jnz     short loc_5DEE68
0x5DEE62: mov     [esi+0FCh], ebx
0x5DEE68: push    ebp
0x5DEE69: mov     ecx, esi
0x5DEE6B: call    sub_5DE920
0x5DEE70: mov     eax, ds:0B42154h
0x5DEE75: mov     ecx, ds:0B06C54h
0x5DEE7B: mov     edx, [eax]
0x5DEE7D: mov     edx, [edx+18h]
0x5DEE80: push    16h
0x5DEE82: push    ecx
0x5DEE83: push    eax; a3
0x5DEE84: call    edx
0x5DEE86: cmp     eax, ebx
0x5DEE88: mov     [esp+30h+var_20], eax; a3
0x5DEE8C: jbe     short loc_5DEF05
0x5DEE8E: mov     edi, edi
0x5DEE90: mov     eax, ds:0B42154h
0x5DEE95: mov     ecx, [eax]
0x5DEE97: lea     edx, [esp+30h+var_10]
0x5DEE9B: push    edx; a3
0x5DEE9C: mov     edx, ds:0B06C54h
0x5DEEA2: push    ebx; a3
0x5DEEA3: push    16h; a3
0x5DEEA5: push    edx; a3
0x5DEEA6: push    eax; a3
0x5DEEA7: mov     eax, [ecx+1Ch]
0x5DEEAA: call    eax
0x5DEEAC: mov     eax, [esi+104h]
0x5DEEB2: test    eax, eax
0x5DEEB4: mov     edx, [esp+30h+var_10]
0x5DEEB8: mov     edi, [esp+30h+var_C]
0x5DEEBC: mov     [esp+30h+a3], edx; a3
0x5DEEC0: mov     [esp+30h+var_14], edi
0x5DEEC4: jz      short loc_5DEEE1
0x5DEEC6: cmp     edx, [eax+8]
0x5DEEC9: lea     ecx, [eax+8]
0x5DEECC: mov     ebp, eax
0x5DEECE: mov     eax, [eax]
0x5DEED0: jnz     short loc_5DEED7
0x5DEED2: cmp     edi, [ecx+4]
0x5DEED5: jz      short loc_5DEEDD
0x5DEED7: test    eax, eax
0x5DEED9: jnz     short loc_5DEEC6
0x5DEEDB: jmp     short loc_5DEEE1
0x5DEEDD: test    ebp, ebp
0x5DEEDF: jnz     short loc_5DEEFC
0x5DEEE1: imul    edi, edx
0x5DEEE4: cmp     edi, 4B000h
0x5DEEEA: jb      short loc_5DEEFC
0x5DEEEC: lea     ecx, [esp+30h+a3]
0x5DEEF0: push    ecx
0x5DEEF1: lea     ecx, [esi+100h]
0x5DEEF7: call    sub_5DEA80
0x5DEEFC: add     ebx, 1
0x5DEEFF: cmp     ebx, [esp+30h+var_20]
0x5DEF03: jb      short loc_5DEE90
0x5DEF05: mov     ebp, [esi+104h]
0x5DEF0B: mov     edx, ds:0B06C4Ch
0x5DEF11: mov     ebx, ds:0B06C50h
0x5DEF17: mov     eax, ebp
0x5DEF19: test    eax, eax
0x5DEF1B: jz      short loc_5DEF39
0x5DEF1D: lea     ecx, [ecx+0]
0x5DEF20: cmp     edx, [eax+8]
0x5DEF23: lea     ecx, [eax+8]
0x5DEF26: mov     edi, eax
0x5DEF28: mov     eax, [eax]
0x5DEF2A: jnz     short loc_5DEF35
0x5DEF2C: cmp     ebx, [ecx+4]
0x5DEF2F: jz      loc_5DF13C
0x5DEF35: test    eax, eax
0x5DEF37: jnz     short loc_5DEF20
0x5DEF39: xor     eax, eax
0x5DEF3B: test    eax, eax
0x5DEF3D: mov     [esi+110h], eax
0x5DEF43: jnz     short loc_5DEF4B
0x5DEF45: mov     [esi+110h], ebp
0x5DEF4B: mov     ecx, esi
0x5DEF4D: call    sub_5DEAD0
0x5DEF52: fild    dword ptr ds:0B1487Ch
0x5DEF58: push    ecx
0x5DEF59: mov     ecx, [esi+0A4h]; this
0x5DEF5F: fstp    [esp+34h+a2]; a3
0x5DEF62: push    0FAFh; a2
0x5DEF67: call    Tile_SetFloat
0x5DEF6C: fild    dword ptr ds:0B14884h
0x5DEF72: push    ecx
0x5DEF73: mov     ecx, [esi+0A4h]; this
0x5DEF79: fstp    [esp+34h+a2]; a3
0x5DEF7C: push    0FB0h; a2
0x5DEF81: call    Tile_SetFloat
0x5DEF86: fld1
0x5DEF88: push    ecx
0x5DEF89: fstp    [esp+34h+a2]; a3
0x5DEF8C: mov     ecx, [esi+0A4h]; this
0x5DEF92: push    0FB1h; a2
0x5DEF97: call    Tile_SetFloat
0x5DEF9C: mov     eax, ds:0B14884h
0x5DEFA1: sub     eax, ds:0B1487Ch
0x5DEFA7: push    ecx
0x5DEFA8: mov     ecx, [esi+0A4h]; this
0x5DEFAE: cdq
0x5DEFAF: and     edx, 3
0x5DEFB2: add     eax, edx
0x5DEFB4: sar     eax, 2
0x5DEFB7: mov     [esp+34h+var_20], eax; a3
0x5DEFBB: fild    [esp+34h+var_20]
0x5DEFBF: fstp    [esp+34h+a2]; a3
0x5DEFC2: push    0FB2h; a2
0x5DEFC7: call    Tile_SetFloat
0x5DEFCC: fild    dword ptr ds:0B1486Ch
0x5DEFD2: push    ecx
0x5DEFD3: mov     ecx, [esi+0ACh]; this
0x5DEFD9: fstp    [esp+34h+a2]; a3
0x5DEFDC: push    0FAFh; a2
0x5DEFE1: call    Tile_SetFloat
0x5DEFE6: fild    dword ptr ds:0B14874h
0x5DEFEC: push    ecx
0x5DEFED: mov     ecx, [esi+0ACh]; this
0x5DEFF3: fstp    [esp+34h+a2]; a3
0x5DEFF6: push    0FB0h; a2
0x5DEFFB: call    Tile_SetFloat
0x5DF000: fld1
0x5DF002: push    ecx
0x5DF003: fstp    [esp+34h+a2]; a3
0x5DF006: mov     ecx, [esi+0ACh]; this
0x5DF00C: push    0FB1h; a2
0x5DF011: call    Tile_SetFloat
0x5DF016: mov     eax, ds:0B14874h
0x5DF01B: sub     eax, ds:0B1486Ch
0x5DF021: push    ecx
0x5DF022: mov     ecx, [esi+0ACh]; this
0x5DF028: cdq
0x5DF029: and     edx, 3
0x5DF02C: add     eax, edx
0x5DF02E: sar     eax, 2
0x5DF031: mov     [esp+34h+var_20], eax; a3
0x5DF035: fild    [esp+34h+var_20]
0x5DF039: fstp    [esp+34h+a2]; a3
0x5DF03C: push    0FB2h; a2
0x5DF041: call    Tile_SetFloat
0x5DF046: cmp     byte ptr ds:0B34FA5h, 0
0x5DF04D: pop     ebp
0x5DF04E: jnz     short loc_5DF063
0x5DF050: fld1
0x5DF052: push    ecx
0x5DF053: mov     ecx, [esi+38h]; this
0x5DF056: fstp    [esp+30h+var_30]; a3
0x5DF059: push    0FBBh; a2
0x5DF05E: call    Tile_SetFloat
0x5DF063: mov     ecx, esi
0x5DF065: call    sub_5DE2E0
0x5DF06A: fld     dword ptr ds:0A6B328h
0x5DF070: push    ecx
0x5DF071: mov     ecx, [esi+2Ch]; this
0x5DF074: fstp    [esp+30h+var_30]; a3
0x5DF077: push    0FB3h; a2
0x5DF07C: call    Tile_SetFloat
0x5DF081: fldz
0x5DF083: push    ecx
0x5DF084: fstp    [esp+30h+var_30]; a3
0x5DF087: mov     ecx, [esi+2Ch]; this
0x5DF08A: push    0FB3h; a2
0x5DF08F: call    Tile_SetFloat
0x5DF094: mov     dl, ds:0B02D70h
0x5DF09A: mov     byte ptr ds:0B3B740h, 0
0x5DF0A1: mov     [esi+114h], dl
0x5DF0A7: cmp     byte ptr ds:0B06CC4h, 0
0x5DF0AE: mov     word ptr ds:0B3B744h, 0
0x5DF0B7: jz      short loc_5DF0C2
0x5DF0B9: cmp     byte ptr ds:0B350D6h, 0
0x5DF0C0: jnz     short loc_5DF0F2
0x5DF0C2: fld1
0x5DF0C4: push    ecx
0x5DF0C5: mov     ecx, [esi+0BCh]; this
0x5DF0CB: fstp    [esp+30h+var_30]; a3
0x5DF0CE: push    0FAFh; a2
0x5DF0D3: call    Tile_SetFloat
0x5DF0D8: mov     ecx, [esi+0BCh]
0x5DF0DE: test    ecx, ecx
0x5DF0E0: jz      short loc_5DF0F2
0x5DF0E2: mov     eax, ds:0B38DA8h
0x5DF0E7: push    eax
0x5DF0E8: push    0FDEh
0x5DF0ED: call    Tile_SetString
0x5DF0F2: cmp     dword ptr ds:0B42F48h, 5
0x5DF0F9: jge     short loc_5DF128
0x5DF0FB: fld1
0x5DF0FD: push    ecx
0x5DF0FE: mov     ecx, [esi+78h]; this
0x5DF101: fstp    [esp+30h+var_30]; a3
0x5DF104: push    0FAFh; a2
0x5DF109: call    Tile_SetFloat
0x5DF10E: mov     esi, [esi+78h]
0x5DF111: test    esi, esi
0x5DF113: jz      short loc_5DF128
0x5DF115: mov     ecx, ds:0B38DA8h
0x5DF11B: push    ecx
0x5DF11C: push    0FDEh
0x5DF121: mov     ecx, esi
0x5DF123: call    Tile_SetString
0x5DF128: mov     ecx, [esp+2Ch+var_1C]; int
0x5DF12C: push    0; char
0x5DF12E: call    EnableMenu
0x5DF133: pop     edi
0x5DF134: pop     esi
0x5DF135: mov     al, 1
0x5DF137: pop     ebx
0x5DF138: add     esp, 20h
0x5DF13B: retn
0x5DF13C: mov     eax, edi
0x5DF13E: jmp     loc_5DEF3B
0x5DF143: cmp     [esi+4], ebx
0x5DF146: jz      short loc_5DF152
0x5DF148: mov     edx, [esi]
0x5DF14A: mov     eax, [edx]
0x5DF14C: push    1
0x5DF14E: mov     ecx, esi
0x5DF150: call    eax
0x5DF152: pop     edi
0x5DF153: pop     esi
0x5DF154: xor     al, al
0x5DF156: pop     ebx
0x5DF157: add     esp, 20h
0x5DF15A: retn
