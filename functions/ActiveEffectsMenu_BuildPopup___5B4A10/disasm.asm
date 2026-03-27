0x5B4A10: push    ebp
0x5B4A11: mov     ebp, esp
0x5B4A13: and     esp, 0FFFFFFF8h
0x5B4A16: push    0FFFFFFFFh
0x5B4A18: push    offset ActiveEffectsMenu_BuildPopup??_SEH
0x5B4A1D: mov     eax, large fs:0
0x5B4A23: push    eax
0x5B4A24: sub     esp, 160h
0x5B4A2A: mov     eax, ds:0B30AACh
0x5B4A2F: xor     eax, esp
0x5B4A31: mov     [esp+16Ch+var_14], eax
0x5B4A38: push    ebx
0x5B4A39: push    esi
0x5B4A3A: push    edi
0x5B4A3B: mov     eax, ds:0B30AACh
0x5B4A40: xor     eax, esp
0x5B4A42: push    eax
0x5B4A43: lea     eax, [esp+17Ch+var_C]
0x5B4A4A: mov     large fs:0, eax
0x5B4A50: mov     edi, [ebp+arg_0]
0x5B4A53: push    400h
0x5B4A58: mov     [esp+180h+var_154], edi
0x5B4A5C: call    Menu_GetOpenMenuTile
0x5B4A61: add     esp, 4
0x5B4A64: test    eax, eax
0x5B4A66: mov     dword ptr [esp+17Ch+var_148+4], eax
0x5B4A6A: jz      loc_5B4DE6
0x5B4A70: push    0; int
0x5B4A72: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x5B4A77: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4A7C: push    0; int
0x5B4A7E: mov     ecx, eax
0x5B4A80: call    Tile_GetParentMenu
0x5B4A85: push    eax; void *
0x5B4A86: call    OblivionDynamicCast
0x5B4A8B: mov     esi, eax
0x5B4A8D: add     esp, 14h
0x5B4A90: test    esi, esi
0x5B4A92: mov     dword ptr [esp+17Ch+var_148], esi
0x5B4A96: jz      loc_5B4DE6
0x5B4A9C: mov     dword ptr [esi+58h], 1
0x5B4AA3: mov     ecx, ds:0B333C4h
0x5B4AA9: mov     eax, [edi+1Ch]
0x5B4AAC: mov     edx, [ecx+68h]
0x5B4AAF: add     ecx, 68h ; 'h'
0x5B4AB2: mov     [esp+17Ch+var_164], eax
0x5B4AB6: mov     eax, [edx+8]
0x5B4AB9: xor     ebx, ebx
0x5B4ABB: mov     [esp+17Ch+var_168], ebx
0x5B4ABF: call    eax
0x5B4AC1: test    eax, eax
0x5B4AC3: mov     [esp+17Ch+var_160], eax
0x5B4AC7: jz      loc_5B4D46
0x5B4ACD: lea     edi, [esi+2Ch]
0x5B4AD0: mov     ecx, [esp+17Ch+var_160]
0x5B4AD4: mov     esi, [ecx]
0x5B4AD6: test    esi, esi
0x5B4AD8: jz      loc_5B4D3D
0x5B4ADE: cmp     ebx, 8
0x5B4AE1: jge     loc_5B4D6B
0x5B4AE7: mov     eax, [esp+17Ch+var_164]
0x5B4AEB: mov     edx, 46464553h
0x5B4AF0: cmp     [eax+98h], edx
0x5B4AF6: jnz     short loc_5B4B64
0x5B4AF8: mov     ecx, [esi+0Ch]
0x5B4AFB: mov     eax, [ecx+1Ch]
0x5B4AFE: cmp     [eax+98h], edx
0x5B4B04: jnz     short loc_5B4B64
0x5B4B06: lea     edx, [esp+17Ch+var_140]
0x5B4B0A: push    edx
0x5B4B0B: call    EffectItem_GetName
0x5B4B10: mov     ebx, eax
0x5B4B12: mov     ecx, [esp+158h+var_130]
0x5B4B16: lea     eax, [esp+158h+var_110]
0x5B4B1A: push    eax
0x5B4B1B: mov     [esp+15Ch+arg_18], 0
0x5B4B26: call    EffectItem_GetName
0x5B4B2B: mov     ebx, [ebx]
0x5B4B2D: mov     eax, [eax]
0x5B4B2F: push    ebx; Str2
0x5B4B30: push    eax; Str1
0x5B4B31: call    __strcmp
0x5B4B36: add     esp, 8
0x5B4B39: lea     ecx, [esp+134h+var_EC]; void *
0x5B4B3D: mov     ebx, eax
0x5B4B3F: call    BSStringT_Clear
0x5B4B44: lea     ecx, [esp+134h+var_F8]; void *
0x5B4B48: mov     [esp+134h+arg_3C], 0FFFFFFFFh
0x5B4B53: call    BSStringT_Clear
0x5B4B58: test    ebx, ebx
0x5B4B5A: mov     ebx, [esp+134h+var_120]
0x5B4B5E: jnz     loc_5B4D2A
0x5B4B64: mov     eax, [esi+0Ch]
0x5B4B67: mov     ecx, [esp+134h+var_11C]
0x5B4B6B: cmp     ecx, [eax+1Ch]
0x5B4B6E: jnz     loc_5B4D2A
0x5B4B74: mov     ecx, [ecx+58h]
0x5B4B77: mov     edx, ecx
0x5B4B79: shr     edx, 13h
0x5B4B7C: test    dl, 1
0x5B4B7F: jnz     short loc_5B4B89
0x5B4B81: shr     ecx, 14h
0x5B4B84: test    cl, 1
0x5B4B87: jz      short loc_5B4B99
0x5B4B89: mov     ecx, [esp+134h+var_10C]
0x5B4B8D: mov     ecx, [ecx+14h]
0x5B4B90: cmp     ecx, [eax+14h]
0x5B4B93: jnz     loc_5B4D2A
0x5B4B99: mov     edx, [esp+134h+var_11C]
0x5B4B9D: mov     eax, [edx+48h]
0x5B4BA0: test    eax, eax
0x5B4BA2: jnz     short loc_5B4BA9
0x5B4BA4: mov     eax, offset EmptyString
0x5B4BA9: push    eax
0x5B4BAA: push    offset aIcons; "Icons"
0x5B4BAF: lea     eax, [esp+13Ch+var_D8]
0x5B4BB3: push    offset aSS_2; "%s\\%s"
0x5B4BB8: push    eax
0x5B4BB9: call    __sprintf
0x5B4BBE: mov     eax, [esi+28h]
0x5B4BC1: push    eax
0x5B4BC2: call    Magic_GetMagicTypeName
0x5B4BC7: add     esp, 14h
0x5B4BCA: push    eax
0x5B4BCB: lea     ecx, [esp+138h+var_114]
0x5B4BCF: call    BSStringT_constr_str
0x5B4BD4: push    offset word_A56274
0x5B4BD9: lea     ecx, [esp+138h+var_114]
0x5B4BDD: mov     [esp+138h+arg_3C], 1
0x5B4BE8: call    BSStringT_Append
0x5B4BED: mov     ecx, [esi+8]
0x5B4BF0: mov     edx, [ecx]
0x5B4BF2: mov     eax, [edx+18h]
0x5B4BF5: call    eax
0x5B4BF7: cmp     eax, 6
0x5B4BFA: jnz     short loc_5B4C20
0x5B4BFC: mov     eax, [esi+30h]
0x5B4BFF: test    eax, eax
0x5B4C01: jz      short loc_5B4C39
0x5B4C03: push    0; int
0x5B4C05: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5B4C0A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4C0F: push    0; int
0x5B4C11: push    eax; void *
0x5B4C12: call    OblivionDynamicCast
0x5B4C17: add     esp, 14h
0x5B4C1A: test    eax, eax
0x5B4C1C: jz      short loc_5B4C39
0x5B4C1E: jmp     short loc_5B4C23
0x5B4C20: mov     eax, [esi+8]
0x5B4C23: mov     eax, [eax+4]
0x5B4C26: test    eax, eax
0x5B4C28: jnz     short loc_5B4C2F
0x5B4C2A: mov     eax, offset EmptyString
0x5B4C2F: push    eax
0x5B4C30: lea     ecx, [esp+138h+var_114]
0x5B4C34: call    BSStringT_Append
0x5B4C39: push    esi
0x5B4C3A: call    sub_5B2140
0x5B4C3F: xor     esi, esi
0x5B4C41: add     esp, 4
0x5B4C44: cmp     eax, esi
0x5B4C46: jl      short loc_5B4C69
0x5B4C48: push    eax
0x5B4C49: lea     ecx, [esp+138h+var_E4]
0x5B4C4D: push    offset aD_1; " (%d)"
0x5B4C52: push    ecx
0x5B4C53: call    __sprintf
0x5B4C58: add     esp, 0Ch
0x5B4C5B: lea     edx, [esp+134h+var_E4]
0x5B4C5F: push    edx
0x5B4C60: lea     ecx, [esp+138h+var_114]
0x5B4C64: call    BSStringT_Append
0x5B4C69: mov     ecx, [edi]; this
0x5B4C6B: fld     dword ptr ds:0A379B4h
0x5B4C71: push    ecx
0x5B4C72: fstp    [esp+138h+a2]; a3
0x5B4C75: push    0FA1h; a2
0x5B4C7A: call    Tile_SetFloat
0x5B4C7F: mov     ecx, [edi]
0x5B4C81: lea     eax, [esp+134h+var_D8]
0x5B4C85: push    eax
0x5B4C86: push    0FAFh
0x5B4C8B: call    Tile_SetString
0x5B4C90: mov     ecx, dword ptr [esp+134h+var_114]
0x5B4C94: push    ecx
0x5B4C95: mov     ecx, [edi]
0x5B4C97: push    0FAEh
0x5B4C9C: call    Tile_SetString
0x5B4CA1: fld     dword ptr ds:0A30634h
0x5B4CA7: mov     ecx, [edi]; this
0x5B4CA9: push    ecx
0x5B4CAA: fstp    [esp+138h+a2]; a3
0x5B4CAD: push    0FB0h; a2
0x5B4CB2: call    Tile_SetFloat
0x5B4CB7: mov     [esp+134h+var_108], esi
0x5B4CBB: mov     [esp+134h+var_104], si
0x5B4CC0: mov     [esp+134h+var_102], si
0x5B4CC5: lea     esi, [ebx+1]
0x5B4CC8: push    esi; ArgList
0x5B4CC9: lea     edx, [esp+138h+var_108]
0x5B4CCD: push    offset aMagicpop_effec; "magicpop_effect_%d_icon"
0x5B4CD2: push    edx; int
0x5B4CD3: mov     byte ptr [esp+140h+arg_3C], 2
0x5B4CDB: call    BSStringT_Static_Format
0x5B4CE0: mov     eax, [esp+140h+var_108]
0x5B4CE4: mov     ecx, [edi]
0x5B4CE6: add     esp, 0Ch
0x5B4CE9: push    eax; unsigned __int8 *
0x5B4CEA: call    sub_589930
0x5B4CEF: test    eax, eax
0x5B4CF1: jz      short loc_5B4CFC
0x5B4CF3: mov     ecx, [eax+2Ch]
0x5B4CF6: or      ecx, 10h
0x5B4CF9: mov     [eax+2Ch], ecx
0x5B4CFC: lea     ecx, [esp+134h+var_108]; void *
0x5B4D00: mov     [esp+134h+var_120], esi
0x5B4D04: add     edi, 4
0x5B4D07: mov     byte ptr [esp+134h+arg_3C], 1
0x5B4D0F: call    BSStringT_Clear
0x5B4D14: lea     ecx, [esp+134h+var_114]; void *
0x5B4D18: mov     [esp+134h+arg_3C], 0FFFFFFFFh
0x5B4D23: call    BSStringT_Clear
0x5B4D28: mov     ebx, esi
0x5B4D2A: mov     ecx, [esp+134h+var_118]
0x5B4D2E: mov     eax, [ecx+4]
0x5B4D31: test    eax, eax
0x5B4D33: mov     [esp+134h+var_118], eax
0x5B4D37: jnz     loc_5B4AD0
0x5B4D3D: cmp     ebx, 8
0x5B4D40: jge     short loc_5B4D6B
0x5B4D42: mov     esi, [esp+134h+var_100]
0x5B4D46: mov     edi, 8
0x5B4D4B: lea     esi, [esi+ebx*4+2Ch]
0x5B4D4F: sub     edi, ebx
0x5B4D51: mov     ecx, [esi]; this
0x5B4D53: fld1
0x5B4D55: push    ecx
0x5B4D56: fstp    [esp+138h+a2]; a3
0x5B4D59: push    0FA1h; a2
0x5B4D5E: add     esi, 4
0x5B4D61: call    Tile_SetFloat
0x5B4D66: sub     edi, 1
0x5B4D69: jnz     short loc_5B4D51
0x5B4D6B: fld     [ebp+arg_8]
0x5B4D6E: mov     edi, [esp+134h+var_FC]
0x5B4D72: push    ecx
0x5B4D73: fstp    [esp+138h+a2]; a3
0x5B4D76: push    0FAEh; a2
0x5B4D7B: mov     ecx, edi; this
0x5B4D7D: call    Tile_SetFloat
0x5B4D82: fld     [ebp+arg_C]
0x5B4D85: push    ecx
0x5B4D86: fstp    [esp+138h+a2]; a3
0x5B4D89: push    0FAFh; a2
0x5B4D8E: mov     ecx, edi; this
0x5B4D90: call    Tile_SetFloat
0x5B4D95: fld     [ebp+arg_10]
0x5B4D98: push    ecx
0x5B4D99: fstp    [esp+138h+a2]; a3
0x5B4D9C: push    0FB1h; a2
0x5B4DA1: mov     ecx, edi; this
0x5B4DA3: call    Tile_SetFloat
0x5B4DA8: fld     [ebp+arg_4]
0x5B4DAB: mov     esi, [esp+134h+var_100]
0x5B4DAF: mov     ecx, [esi+28h]
0x5B4DB2: fst     dword ptr [esi+50h]
0x5B4DB5: push    0FCBh
0x5B4DBA: fstp    qword ptr [esp+138h+var_F8]
0x5B4DBE: call    Tile_GetFloat
0x5B4DC3: fsubr   qword ptr [esp+134h+var_F8]
0x5B4DC7: push    ecx
0x5B4DC8: mov     ecx, [esi+4Ch]; this
0x5B4DCB: fstp    dword ptr [esi+54h]
0x5B4DCE: fld1
0x5B4DD0: fstp    [esp+138h+a2]; a3
0x5B4DD3: push    0FA1h; a2
0x5B4DD8: call    Tile_SetFloat
0x5B4DDD: push    0; float
0x5B4DDF: mov     ecx, edi
0x5B4DE1: call    sub_58FBA0
0x5B4DE6: mov     ecx, [esp+134h+arg_34]
0x5B4DED: mov     large fs:0, ecx
0x5B4DF4: pop     ecx
0x5B4DF5: pop     edi
0x5B4DF6: pop     esi
0x5B4DF7: pop     ebx
0x5B4DF8: mov     ecx, [esp+124h+arg_2C]
0x5B4DFF: xor     ecx, esp
0x5B4E01: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B4E06: mov     esp, ebp
0x5B4E08: pop     ebp
0x5B4E09: retn
