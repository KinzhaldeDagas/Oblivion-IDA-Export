0x5C1B80: sub     esp, 10Ch
0x5C1B86: mov     eax, ds:0B30AACh
0x5C1B8B: xor     eax, esp
0x5C1B8D: mov     [esp+10Ch+var_4], eax
0x5C1B94: call    sub_5C1900
0x5C1B99: push    416h
0x5C1B9E: call    Menu_GetOpenMenuTile
0x5C1BA3: add     esp, 4
0x5C1BA6: test    eax, eax
0x5C1BA8: jnz     short loc_5C1BC4
0x5C1BAA: call    sub_5C1290
0x5C1BAF: push    416h
0x5C1BB4: call    Menu_GetOpenMenuTile
0x5C1BB9: add     esp, 4
0x5C1BBC: test    eax, eax
0x5C1BBE: jz      loc_5C1DB5
0x5C1BC4: push    ebx; a3
0x5C1BC5: push    ebp; a3
0x5C1BC6: push    esi; a3
0x5C1BC7: push    edi; a3
0x5C1BC8: mov     ecx, eax
0x5C1BCA: call    Tile_GetParentMenu
0x5C1BCF: mov     esi, eax
0x5C1BD1: test    esi, esi
0x5C1BD3: jz      short loc_5C1BDB
0x5C1BD5: cmp     dword ptr [esi+24h], 2
0x5C1BD9: jz      short loc_5C1BE1
0x5C1BDB: cmp     dword ptr [esi+24h], 4
0x5C1BDF: jnz     short loc_5C1BE8
0x5C1BE1: mov     ecx, esi; int
0x5C1BE3: call    sub_584390
0x5C1BE8: fld     dword ptr ds:0A40098h
0x5C1BEE: push    ecx
0x5C1BEF: fstp    [esp+120h+a2]; a3
0x5C1BF2: mov     byte ptr ds:0B3B43Dh, 1
0x5C1BF9: mov     ecx, [esi+28h]; this
0x5C1BFC: push    0FA7h; a2
0x5C1C01: call    Tile_SetFloat
0x5C1C06: mov     eax, [esp+11Ch+arg_0]
0x5C1C0D: test    eax, eax
0x5C1C0F: jl      short loc_5C1C2D
0x5C1C11: add     eax, 1
0x5C1C14: mov     [esp+11Ch+var_10C], eax; a3
0x5C1C18: fild    [esp+11Ch+var_10C]
0x5C1C1C: push    ecx
0x5C1C1D: mov     ecx, [esi+2Ch]; this
0x5C1C20: fstp    [esp+120h+a2]; a3
0x5C1C23: push    0FAEh; a2
0x5C1C28: call    Tile_SetFloat
0x5C1C2D: fld     dword ptr ds:0A379B4h
0x5C1C33: push    ecx
0x5C1C34: mov     ecx, [esi+2Ch]; this
0x5C1C37: fstp    [esp+120h+a2]; a3
0x5C1C3A: push    0FA1h; a2
0x5C1C3F: call    Tile_SetFloat
0x5C1C44: fld1
0x5C1C46: push    ecx
0x5C1C47: fstp    [esp+120h+a2]; a3
0x5C1C4A: mov     ecx, [esi+2Ch]; this
0x5C1C4D: push    0FB0h; a2
0x5C1C52: call    Tile_SetFloat
0x5C1C57: fld     dword ptr ds:0A379B4h
0x5C1C5D: push    ecx
0x5C1C5E: mov     ecx, [esi+2Ch]; this
0x5C1C61: fstp    [esp+120h+a2]; a3
0x5C1C64: push    0FB1h; a2
0x5C1C69: call    Tile_SetFloat
0x5C1C6E: mov     ecx, [esi+2Ch]
0x5C1C71: push    0; float
0x5C1C73: call    sub_58FBA0
0x5C1C78: xor     ebp, ebp
0x5C1C7A: mov     ebx, offset dword_B3B444
0x5C1C7F: lea     edi, [esi+30h]
0x5C1C82: cmp     dword ptr [ebx+8], 0
0x5C1C86: jz      loc_5C1D61
0x5C1C8C: mov     eax, [ebx]
0x5C1C8E: mov     esi, [eax+8]
0x5C1C91: push    0; int
0x5C1C93: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5C1C98: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C1C9D: push    0; int
0x5C1C9F: push    esi; void *
0x5C1CA0: call    OblivionDynamicCast
0x5C1CA5: add     esp, 14h
0x5C1CA8: test    eax, eax
0x5C1CAA: jz      short loc_5C1CE9
0x5C1CAC: push    0
0x5C1CAE: push    3
0x5C1CB0: lea     ecx, [eax+24h]
0x5C1CB3: call    EffectItemList_GetStrongestItem
0x5C1CB8: mov     eax, [eax+1Ch]
0x5C1CBB: add     eax, 44h ; 'D'
0x5C1CBE: mov     eax, [eax+4]
0x5C1CC1: test    eax, eax
0x5C1CC3: jnz     short loc_5C1CCA
0x5C1CC5: mov     eax, offset EmptyString
0x5C1CCA: push    eax
0x5C1CCB: push    offset aIcons; "Icons"
0x5C1CD0: push    offset aMenus_1; "Menus"
0x5C1CD5: lea     ecx, [esp+128h+a3]
0x5C1CD9: push    offset aSSS_1; "%s\\%s\\%s"
0x5C1CDE: push    ecx
0x5C1CDF: call    __sprintf
0x5C1CE4: add     esp, 14h
0x5C1CE7: jmp     short loc_5C1D0C
0x5C1CE9: push    esi
0x5C1CEA: call    sub_5C0C50
0x5C1CEF: push    eax
0x5C1CF0: push    offset aIcons; "Icons"
0x5C1CF5: push    offset aMenus_1; "Menus"
0x5C1CFA: lea     edx, [esp+12Ch+a3]
0x5C1CFE: push    offset aSSS_1; "%s\\%s\\%s"
0x5C1D03: push    edx
0x5C1D04: call    __sprintf
0x5C1D09: add     esp, 18h
0x5C1D0C: mov     ecx, [edi]
0x5C1D0E: lea     eax, [esp+11Ch+a3]
0x5C1D12: push    eax
0x5C1D13: push    0FE6h
0x5C1D18: call    Tile_SetString
0x5C1D1D: cmp     ebp, [esp+11Ch+arg_0]
0x5C1D24: jnz     short loc_5C1D33
0x5C1D26: push    1
0x5C1D28: push    0
0x5C1D2A: push    esi
0x5C1D2B: call    sub_5C16E0
0x5C1D30: add     esp, 0Ch
0x5C1D33: fld     dword ptr ds:0A40098h
0x5C1D39: push    ecx
0x5C1D3A: mov     ecx, [edi]; this
0x5C1D3C: fstp    [esp+120h+a2]; a3
0x5C1D3F: push    0FA7h; a2
0x5C1D44: call    Tile_SetFloat
0x5C1D49: fld     dword ptr ds:0A379B4h
0x5C1D4F: push    ecx
0x5C1D50: mov     ecx, [edi]; this
0x5C1D52: fstp    [esp+120h+a2]; a3
0x5C1D55: push    0FA1h; a2
0x5C1D5A: call    Tile_SetFloat
0x5C1D5F: jmp     short loc_5C1D9C
0x5C1D61: fldz
0x5C1D63: push    ecx
0x5C1D64: mov     ecx, [edi]; this
0x5C1D66: fstp    [esp+120h+a2]; a3
0x5C1D69: push    0FA7h; a2
0x5C1D6E: call    Tile_SetFloat
0x5C1D73: fld1
0x5C1D75: push    ecx
0x5C1D76: fstp    [esp+120h+a2]; a3
0x5C1D79: mov     ecx, [edi]; this
0x5C1D7B: push    0FA1h; a2
0x5C1D80: call    Tile_SetFloat
0x5C1D85: call    sub_5C1100
0x5C1D8A: cmp     ebp, eax
0x5C1D8C: jnz     short loc_5C1D9C
0x5C1D8E: push    1
0x5C1D90: push    0
0x5C1D92: push    0
0x5C1D94: call    sub_5C16E0
0x5C1D99: add     esp, 0Ch
0x5C1D9C: add     ebx, 10h
0x5C1D9F: add     ebp, 1
0x5C1DA2: add     edi, 4
0x5C1DA5: cmp     ebx, offset unk_B3B4C4
0x5C1DAB: jl      loc_5C1C82
0x5C1DB1: pop     edi
0x5C1DB2: pop     esi
0x5C1DB3: pop     ebp
0x5C1DB4: pop     ebx
0x5C1DB5: mov     ecx, [esp+10Ch+var_4]
0x5C1DBC: xor     ecx, esp
0x5C1DBE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5C1DC3: add     esp, 10Ch
0x5C1DC9: retn
