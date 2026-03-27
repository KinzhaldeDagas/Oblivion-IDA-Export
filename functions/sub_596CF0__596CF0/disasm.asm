0x596CF0: push    ecx
0x596CF1: push    ebx; a3
0x596CF2: push    esi; a3
0x596CF3: mov     esi, [esp+0Ch+arg_0]
0x596CF7: test    esi, esi
0x596CF9: push    edi; a3
0x596CFA: mov     edi, ecx
0x596CFC: jnz     short loc_596D01
0x596CFE: mov     esi, [edi+3Ch]
0x596D01: xor     ebx, ebx
0x596D03: push    ebp; a3
0x596D04: mov     eax, [edi+4]
0x596D07: push    ebx
0x596D08: mov     ecx, esi
0x596D0A: mov     [esp+18h+arg_0], eax
0x596D0E: lea     ebp, [ebx+0FB9h]
0x596D14: call    sub_51BF00
0x596D19: push    eax
0x596D1A: call    sub_52E800
0x596D1F: add     esp, 4
0x596D22: push    eax
0x596D23: lea     ecx, [ebp-0Ah]
0x596D26: push    ecx
0x596D27: mov     ecx, [esp+1Ch+arg_0]
0x596D2B: call    Tile_SetString
0x596D30: mov     edx, [edi+4]
0x596D33: push    ebx
0x596D34: mov     ecx, esi
0x596D36: mov     [esp+18h+var_4], edx
0x596D3A: call    sub_51BF00
0x596D3F: mov     [esp+14h+arg_0], eax; a3
0x596D43: fild    [esp+14h+arg_0]
0x596D47: push    ecx
0x596D48: mov     ecx, [esp+18h+var_4]; this
0x596D4C: fstp    [esp+18h+a2]; a3
0x596D4F: push    ebp; a2
0x596D50: call    Tile_SetFloat
0x596D55: add     ebx, 1
0x596D58: cmp     ebx, 7
0x596D5B: jl      short loc_596D04
0x596D5D: mov     ebx, [edi+4]
0x596D60: mov     ecx, esi; this
0x596D62: call    TESObjectREFR_GetParentCell
0x596D67: push    eax
0x596D68: call    sub_52E7E0
0x596D6D: add     esp, 4
0x596D70: push    eax
0x596D71: push    0FB6h
0x596D76: mov     ecx, ebx
0x596D78: call    Tile_SetString
0x596D7D: mov     ebx, [edi+4]
0x596D80: mov     ecx, esi; this
0x596D82: call    TESObjectREFR_GetParentCell
0x596D87: mov     [esp+14h+arg_0], eax
0x596D8B: fild    [esp+14h+arg_0]
0x596D8F: push    ecx
0x596D90: mov     ecx, ebx; this
0x596D92: fstp    [esp+18h+a2]; a3
0x596D95: push    0FC0h; a2
0x596D9A: call    Tile_SetFloat
0x596D9F: mov     ebx, [edi+4]
0x596DA2: mov     ecx, esi
0x596DA4: call    ValueModifierEffect_GetAV
0x596DA9: push    eax
0x596DAA: call    sub_51BE50
0x596DAF: add     esp, 4
0x596DB2: push    eax
0x596DB3: push    0FB7h
0x596DB8: mov     ecx, ebx
0x596DBA: call    Tile_SetString
0x596DBF: mov     ebx, [edi+4]
0x596DC2: mov     ecx, esi
0x596DC4: call    ValueModifierEffect_GetAV
0x596DC9: mov     [esp+14h+arg_0], eax
0x596DCD: fild    [esp+14h+arg_0]
0x596DD1: push    ecx
0x596DD2: mov     ecx, ebx; this
0x596DD4: fstp    [esp+18h+a2]; a3
0x596DD7: push    0FC1h; a2
0x596DDC: call    Tile_SetFloat
0x596DE1: mov     ebx, [edi+4]
0x596DE4: mov     ecx, esi; this
0x596DE6: call    TESObjectREFR_GetNiNode
0x596DEB: push    eax
0x596DEC: call    sub_51BE50
0x596DF1: add     esp, 4
0x596DF4: push    eax
0x596DF5: push    0FB8h
0x596DFA: mov     ecx, ebx
0x596DFC: call    Tile_SetString
0x596E01: mov     ebx, [edi+4]
0x596E04: mov     ecx, esi; this
0x596E06: call    TESObjectREFR_GetNiNode
0x596E0B: mov     [esp+14h+arg_0], eax
0x596E0F: fild    [esp+14h+arg_0]
0x596E13: push    ecx
0x596E14: mov     ecx, ebx; this
0x596E16: fstp    [esp+18h+a2]; a3
0x596E19: push    0FC2h; a2
0x596E1E: call    Tile_SetFloat
0x596E23: mov     esi, [esi+30h]
0x596E26: test    esi, esi
0x596E28: pop     ebp
0x596E29: jnz     short loc_596E30
0x596E2B: mov     esi, offset EmptyString
0x596E30: mov     ecx, [edi+4]
0x596E33: push    esi
0x596E34: push    0FC3h
0x596E39: call    Tile_SetString
0x596E3E: mov     eax, [edi+28h]
0x596E41: mov     ebx, [eax+34h]
0x596E44: test    ebx, ebx
0x596E46: jz      loc_596EE0
0x596E4C: lea     esp, [esp+0]
0x596E50: mov     esi, [ebx+8]
0x596E53: lea     eax, [ebx+8]
0x596E56: mov     ebx, [ebx]
0x596E58: push    0FAAh
0x596E5D: mov     ecx, esi
0x596E5F: call    Tile_GetFloat
0x596E64: fild    dword ptr [edi+44h]
0x596E67: push    ecx
0x596E68: mov     ecx, esi; this
0x596E6A: fucompp
0x596E6C: fnstsw  ax
0x596E6E: test    ah, 44h
0x596E71: jp      short loc_596EC9
0x596E73: fld     dword ptr ds:0A379B4h
0x596E79: fstp    [esp+14h+var_14]; a3
0x596E7C: push    0FB0h; a2
0x596E81: call    Tile_SetFloat
0x596E86: push    1; arg1
0x596E88: push    0; canCreate
0x596E8A: call    InterfaceManager_GetSingleton
0x596E8F: push    1; arg1
0x596E91: push    0; canCreate
0x596E93: call    InterfaceManager_GetSingleton
0x596E98: add     dword ptr [eax+8Ch], 1
0x596E9F: fild    dword ptr [eax+8Ch]
0x596EA5: mov     ecx, [eax+8Ch]
0x596EAB: add     eax, 8Ch ; 'Œ'
0x596EB0: test    ecx, ecx
0x596EB2: jge     short loc_596EBA
0x596EB4: fadd    dword ptr ds:0A2FC78h
0x596EBA: add     esp, 0Ch
0x596EBD: fstp    [esp+14h+var_14]
0x596EC0: push    0FF0h
0x596EC5: mov     ecx, esi
0x596EC7: jmp     short loc_596ED3
0x596EC9: fld1
0x596ECB: fstp    [esp+14h+var_14]; a3
0x596ECE: push    0FB0h; a2
0x596ED3: call    Tile_SetFloat
0x596ED8: test    ebx, ebx
0x596EDA: jnz     loc_596E50
0x596EE0: pop     edi
0x596EE1: pop     esi
0x596EE2: pop     ebx
0x596EE3: pop     ecx
0x596EE4: retn    4
