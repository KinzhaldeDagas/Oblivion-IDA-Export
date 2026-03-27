0x640AC9: mov     [ebx+4], ebp; jumptable 00640A2E default case
0x640ACC: mov     eax, [edi]
0x640ACE: mov     edx, [eax+330h]
0x640AD4: mov     ecx, edi
0x640AD6: call    edx
0x640AD8: test    eax, eax
0x640ADA: jz      loc_640B82
0x640AE0: mov     eax, [edi]
0x640AE2: mov     edx, [eax+330h]
0x640AE8: mov     ecx, edi
0x640AEA: call    edx
0x640AEC: mov     ecx, eax
0x640AEE: call    sub_6135F0
0x640AF3: mov     ebx, eax
0x640AF5: mov     eax, [edi]
0x640AF7: mov     edx, [eax+330h]
0x640AFD: mov     ecx, edi
0x640AFF: call    edx
0x640B01: cmp     byte ptr [eax+4Dh], 0
0x640B05: jnz     short loc_640B82
0x640B07: cmp     ebx, esi
0x640B09: jnz     short loc_640B82
0x640B0B: mov     ecx, offset flt_B36778
0x640B10: call    GameSetting_GetSafeFloatPointer
0x640B15: fild    [esp+arg_10]
0x640B19: fld     dword ptr [eax]
0x640B1B: fcompp
0x640B1D: fnstsw  ax
0x640B1F: test    ah, 1
0x640B22: jnz     short loc_640B76
0x640B24: mov     eax, [esp+arg_C]
0x640B28: fld     dword ptr [eax+1B8h]
0x640B2E: mov     ecx, offset fFightAbleToDetectTimer
0x640B33: fadd    dword ptr ds:0B33E9Ch
0x640B39: fstp    [esp+arg_28]
0x640B3D: fld     [esp+arg_28]
0x640B41: fstp    dword ptr [eax+1B8h]
0x640B47: call    GameSetting_GetSafeFloatPointer
0x640B4C: fld     [esp+arg_28]
0x640B50: fld     dword ptr [eax]
0x640B52: fcompp
0x640B54: fnstsw  ax
0x640B56: test    ah, 41h
0x640B59: jp      short loc_640B82
0x640B5B: mov     eax, [edi]
0x640B5D: mov     edx, [eax+340h]
0x640B63: push    esi
0x640B64: mov     ecx, edi
0x640B66: call    edx
0x640B68: fldz
0x640B6A: mov     eax, [esp+4+arg_8]
0x640B6E: fstp    dword ptr [eax+1B8h]
0x640B74: jmp     short loc_640B82
0x640B76: fldz
0x640B78: mov     ecx, [esp+arg_C]
0x640B7C: fstp    dword ptr [ecx+1B8h]
0x640B82: fild    [esp+4+arg_C]
0x640B86: fld     dword ptr ds:0B36778h
0x640B8C: fcompp
0x640B8E: fnstsw  ax
0x640B90: test    ah, 5
0x640B93: jp      loc_6411C0
0x640B99: mov     edx, [esi]
0x640B9B: mov     eax, [edx+198h]
0x640BA1: xor     ebx, ebx
0x640BA3: push    ebx
0x640BA4: mov     ecx, esi
0x640BA6: call    eax
0x640BA8: test    al, al
0x640BAA: jz      short loc_640BE9
0x640BAC: mov     edx, [esi]
0x640BAE: mov     eax, [edx+1F8h]
0x640BB4: mov     ecx, esi
0x640BB6: call    eax
0x640BB8: test    al, al
0x640BBA: jnz     short loc_640BE9
0x640BBC: mov     ecx, [esi+58h]
0x640BBF: mov     edx, [ecx]
0x640BC1: mov     eax, [edx+200h]
0x640BC7: call    eax
0x640BC9: test    al, al
0x640BCB: jnz     short loc_640BE9
0x640BCD: fldz
0x640BCF: fcomp   dword ptr [esi+84h]
0x640BD5: fnstsw  ax
0x640BD7: test    ah, 1
0x640BDA: jnz     short loc_640BE9
0x640BDC: mov     ebp, [esp+8+arg_4]
0x640BE0: mov     byte ptr [ebp+1D0h], 1
0x640BE7: jmp     short loc_640BED
0x640BE9: mov     ebp, [esp+8+arg_4]
0x640BED: mov     edx, [esi]
0x640BEF: mov     eax, [edx+198h]
0x640BF5: push    ebx
0x640BF6: mov     ecx, esi
0x640BF8: call    eax
0x640BFA: test    al, al
0x640BFC: jnz     loc_6411C0
0x640C02: mov     edx, [esi]
0x640C04: mov     eax, [edx+330h]
0x640C0A: mov     [esp+0Ch+arg_14], ebx
0x640C0E: mov     [esp+0Ch+arg_1C], ebx
0x640C12: xor     bl, bl
0x640C14: mov     ecx, esi
0x640C16: mov     byte ptr [esp+0Ch+arg_C], bl
0x640C1A: call    eax
0x640C1C: test    eax, eax
0x640C1E: jz      short loc_640C26
0x640C20: mov     bl, 1
0x640C22: mov     byte ptr [esp+0Ch+arg_C], bl
0x640C26: test    bl, bl
0x640C28: mov     byte ptr [esp+0Ch+arg_8], 0
0x640C2D: mov     [esp+0Ch+arg_4], 0
0x640C35: jz      loc_640DB1
0x640C3B: mov     ecx, esi
0x640C3D: call    sub_5E8A90
0x640C42: test    al, al
0x640C44: jz      short loc_640C55
0x640C46: mov     ecx, ds:0B333C4h
0x640C4C: call    sub_5E8A90
0x640C51: test    al, al
0x640C53: jnz     short loc_640C98
0x640C55: mov     ecx, [esi+58h]
0x640C58: mov     edx, [ecx]
0x640C5A: mov     eax, [edx+148h]
0x640C60: call    eax
0x640C62: test    al, al
0x640C64: jz      short loc_640C98
0x640C66: mov     ecx, edi; this
0x640C68: call    sub_5E6C60
0x640C6D: test    al, al
0x640C6F: jz      short loc_640C98
0x640C71: cmp     esi, ds:0B333C4h
0x640C77: jz      short loc_640C98
0x640C79: mov     edx, [ebp+0]
0x640C7C: mov     eax, [edx+228h]
0x640C82: push    1
0x640C84: push    0
0x640C86: push    0
0x640C88: push    0
0x640C8A: push    0
0x640C8C: push    0
0x640C8E: push    0
0x640C90: push    0
0x640C92: push    esi
0x640C93: push    edi
0x640C94: mov     ecx, ebp
0x640C96: call    eax
0x640C98: xor     ebx, ebx
0x640C9A: cmp     ds:0B333B8h, bl
0x640CA0: mov     [esp+34h+var_4], ebx
0x640CA4: jnz     short loc_640CE5
0x640CA6: mov     edx, [esi]
0x640CA8: mov     eax, [edx+330h]
0x640CAE: lea     ecx, [esp+34h+var_4]
0x640CB2: push    ecx
0x640CB3: push    edi
0x640CB4: mov     ecx, esi
0x640CB6: call    eax
0x640CB8: mov     ecx, eax
0x640CBA: call    sub_6144D0
0x640CBF: mov     [esp+34h+var_8], eax
0x640CC3: mov     eax, [esp+34h+var_4]
0x640CC7: cmp     eax, ebx
0x640CC9: jz      loc_640DB1
0x640CCF: push    eax
0x640CD0: mov     ecx, edi
0x640CD2: call    sub_5E9D40
0x640CD7: test    al, al
0x640CD9: jnz     short loc_640D4F
0x640CDB: mov     [esp+34h+var_8], 0
0x640CE3: jmp     short loc_640D4F
0x640CE5: push    ebx; a2
0x640CE6: mov     ecx, esi; this
0x640CE8: call    Actor_GetActorBaseForm
0x640CED: mov     ecx, eax
0x640CEF: add     ecx, 24h ; '$'
0x640CF2: call    TESActorBaseData_AllFactionsAreEvil
0x640CF7: test    al, al
0x640CF9: jz      short loc_640D17
0x640CFB: push    ebx; a2
0x640CFC: mov     ecx, edi; this
0x640CFE: call    Actor_GetActorBaseForm
0x640D03: mov     ecx, eax
0x640D05: add     ecx, 24h ; '$'
0x640D08: call    TESActorBaseData_AllFactionsAreEvil
0x640D0D: test    al, al
0x640D0F: jz      short loc_640D17
0x640D11: mov     [esp+34h+var_8], ebx
0x640D15: jmp     short loc_640D4F
0x640D17: push    ebx; a2
0x640D18: mov     ecx, esi; this
0x640D1A: call    Actor_GetActorBaseForm
0x640D1F: mov     ecx, eax
0x640D21: add     ecx, 24h ; '$'
0x640D24: call    TESActorBaseData_AllFactionsAreEvil
0x640D29: test    al, al
0x640D2B: jnz     short loc_640D47
0x640D2D: push    ebx; a2
0x640D2E: mov     ecx, edi; this
0x640D30: call    Actor_GetActorBaseForm
0x640D35: mov     ecx, eax
0x640D37: add     ecx, 24h ; '$'
0x640D3A: call    TESActorBaseData_AllFactionsAreEvil
0x640D3F: test    al, al
0x640D41: mov     [esp+34h+var_8], ebx
0x640D45: jz      short loc_640D4F
0x640D47: mov     [esp+34h+var_8], 64h ; 'd'
0x640D4F: mov     eax, [esp+34h+var_4]
0x640D53: test    eax, eax
0x640D55: jz      short loc_640DB1
0x640D57: push    eax
0x640D58: push    0Ch
0x640D5A: mov     ecx, offset dword_B3BDB0
0x640D5F: call    sub_67CF50
0x640D64: mov     ebp, eax
0x640D66: test    ebp, ebp
0x640D68: mov     ebx, ebp
0x640D6A: jz      short loc_640DA8
0x640D6C: lea     esp, [esp+0]
0x640D70: mov     ecx, [ebp+0]
0x640D73: test    ecx, ecx
0x640D75: jz      short loc_640DA1
0x640D77: mov     edx, [esp+34h+var_4]
0x640D7B: push    0
0x640D7D: push    edx
0x640D7E: call    sub_67B6B0
0x640D83: test    eax, eax
0x640D85: jz      short loc_640D8D
0x640D87: cmp     byte ptr [eax+4], 0
0x640D8B: jnz     short loc_640D96
0x640D8D: mov     ebp, [ebp+4]
0x640D90: test    ebp, ebp
0x640D92: jnz     short loc_640D70
0x640D94: jmp     short loc_640DA1
0x640D96: mov     eax, [eax]
0x640D98: mov     byte ptr [esp+34h+var_1C], 1
0x640D9D: mov     [esp+34h+var_20], eax
0x640DA1: mov     ecx, ebx
0x640DA3: call    BSSimpleList_Clear
0x640DA8: push    ebx
0x640DA9: call    FormHeapFree
0x640DAE: add     esp, 4
0x640DB1: mov     ecx, [esi+58h]
0x640DB4: test    ecx, ecx
0x640DB6: mov     ebp, edi
0x640DB8: jz      short loc_640DD9
0x640DBA: mov     edx, [ecx]
0x640DBC: mov     eax, [edx+3D0h]
0x640DC2: call    eax
0x640DC4: test    eax, eax
0x640DC6: jz      short loc_640DD9
0x640DC8: mov     ecx, [esi+58h]
0x640DCB: mov     edx, [ecx]
0x640DCD: mov     eax, [edx+3D0h]
0x640DD3: call    eax
0x640DD5: mov     ebx, eax
0x640DD7: jmp     short loc_640DDB
0x640DD9: mov     ebx, esi
0x640DDB: mov     ecx, [esp+34h+var_24]
0x640DDF: mov     edx, [ecx]
0x640DE1: mov     eax, [edx+3D0h]
0x640DE7: call    eax
0x640DE9: test    eax, eax
0x640DEB: jz      short loc_640E0A
0x640DED: mov     ecx, [esp+34h+var_24]
0x640DF1: mov     edx, [ecx]
0x640DF3: mov     eax, [edx+3D0h]
0x640DF9: call    eax
0x640DFB: mov     edi, eax
0x640DFD: mov     eax, ds:0B333C4h
0x640E02: cmp     edi, eax
0x640E04: jnz     short loc_640E0A
0x640E06: mov     edi, ebx
0x640E08: mov     ebx, eax
0x640E0A: cmp     byte ptr [esp+34h+var_1C], 0
0x640E0F: jz      short loc_640E53
0x640E11: cmp     [esp+34h+var_20], 0
0x640E16: jz      short loc_640E53
0x640E18: mov     ecx, edi; this
0x640E1A: call    sub_5E6C60
0x640E1F: test    al, al
0x640E21: jz      short loc_640E53
0x640E23: mov     ecx, [esp+34h+var_20]
0x640E27: cmp     ecx, ds:0B333C4h
0x640E2D: jz      short loc_640E53
0x640E2F: mov     ecx, [esp+34h+var_24]
0x640E33: mov     eax, [esp+34h+var_20]
0x640E37: mov     edx, [ecx]
0x640E39: mov     edx, [edx+228h]
0x640E3F: push    1
0x640E41: push    0
0x640E43: push    0
0x640E45: push    0
0x640E47: push    0
0x640E49: push    0
0x640E4B: push    0
0x640E4D: push    0
0x640E4F: push    eax
0x640E50: push    edi
0x640E51: call    edx
0x640E53: mov     eax, [edi]
0x640E55: mov     edx, [eax+284h]
0x640E5B: push    24h ; '$'
0x640E5D: mov     ecx, edi
0x640E5F: call    edx
0x640E61: push    eax
0x640E62: mov     eax, [esp+64h+var_48]
0x640E66: push    eax
0x640E67: mov     ecx, edi; this
0x640E69: call    Actor_IsCreature
0x640E6E: mov     ecx, dword ptr [esp+68h+a7]
0x640E72: push    eax; responsibility
0x640E73: push    ecx; a7
0x640E74: push    0; unk000
0x640E76: push    ebx; a2
0x640E77: mov     ecx, edi; this
0x640E79: call    TesObjectREF_GetDistance
0x640E7E: mov     edx, [edi]
0x640E80: mov     eax, [edx+284h]
0x640E86: push    ecx
0x640E87: fstp    [esp+74h+a6]; a6
0x640E8A: push    21h ; '!'; a5
0x640E8C: mov     ecx, edi
0x640E8E: call    eax
0x640E90: mov     ecx, [esp+78h+aggressionStat]
0x640E94: mov     edx, [edi]
0x640E96: push    eax; distanceToTarget
0x640E97: mov     eax, [edx+224h]
0x640E9D: push    ecx; aggressionStat
0x640E9E: push    ebx; friendlyFight?
0x640E9F: mov     ecx, edi
0x640EA1: call    eax
0x640EA3: push    eax; disposition
0x640EA4: call    shouldActorFight
0x640EA9: add     esp, 20h
0x640EAC: mov     ecx, edi; this
0x640EAE: mov     [esp+68h+var_3C], eax
0x640EB2: call    Actor_IsGhost
0x640EB7: test    al, al
0x640EB9: jnz     short loc_640ECA
0x640EBB: mov     ecx, ebx; this
0x640EBD: call    Actor_IsGhost
0x640EC2: test    al, al
0x640EC4: jnz     short loc_640ECA
0x640EC6: cmp     edi, ebx
0x640EC8: jnz     short loc_640ED4
0x640ECA: mov     [esp+68h+var_3C], 0
0x640ED2: jmp     short loc_640EDF
0x640ED4: cmp     [esp+68h+var_3C], 0
0x640ED9: jg      loc_640FA3
0x640EDF: mov     ecx, offset unk_B36C48
0x640EE4: call    GameSetting_GetSafeFloatPointer
0x640EE9: fld     dword ptr [eax]
0x640EEB: call    Double_To_SInt32
0x640EF0: mov     ecx, esi; this
0x640EF2: mov     [esp+68h+aggressionStat], eax
0x640EF6: call    TESObjectREFR_GetParentCell
0x640EFB: test    eax, eax
0x640EFD: jz      short loc_640F26
0x640EFF: mov     ecx, esi; this
0x640F01: call    TESObjectREFR_GetParentCell
0x640F06: mov     ecx, eax; this
0x640F08: call    TESObjectCELL_IsInterior
0x640F0D: test    al, al
0x640F0F: jz      short loc_640F26
0x640F11: mov     ecx, offset unk_B36C50
0x640F16: call    GameSetting_GetSafeFloatPointer
0x640F1B: fld     dword ptr [eax]
0x640F1D: call    Double_To_SInt32
0x640F22: mov     [esp+68h+aggressionStat], eax
0x640F26: mov     edx, [ebp+0]
0x640F29: mov     eax, [edx+334h]
0x640F2F: push    0
0x640F31: mov     ecx, ebp
0x640F33: call    eax
0x640F35: test    al, al
0x640F37: jnz     short loc_640FA3
0x640F39: mov     edx, [esi]
0x640F3B: mov     eax, [edx+330h]
0x640F41: mov     ecx, esi
0x640F43: call    eax
0x640F45: test    eax, eax
0x640F47: jz      short loc_640FA3
0x640F49: mov     edx, [esi]
0x640F4B: mov     eax, [edx+330h]
0x640F51: push    ebp
0x640F52: mov     ecx, esi
0x640F54: call    eax
0x640F56: mov     ecx, eax
0x640F58: call    sub_613670
0x640F5D: test    al, al
0x640F5F: jz      short loc_640FA3
0x640F61: push    0; unk000
0x640F63: push    esi; a2
0x640F64: mov     ecx, ebp; this
0x640F66: call    TesObjectREF_GetDistance
0x640F6B: fild    [esp+6Ch+var_3C]
0x640F6F: fcompp
0x640F71: fnstsw  ax
0x640F73: test    ah, 1
0x640F76: jnz     short loc_640FA3
0x640F78: push    0
0x640F7A: mov     ecx, esi
0x640F7C: call    sub_5E6CD0
0x640F81: test    al, al
0x640F83: jnz     short loc_640FA3
0x640F85: mov     edx, [esi]
0x640F87: mov     eax, [edx+350h]
0x640F8D: mov     ecx, esi
0x640F8F: call    eax
0x640F91: test    al, al
0x640F93: jnz     short loc_640FA3
0x640F95: mov     ebx, [esp+6Ch+var_5C]
0x640F99: push    esi
0x640F9A: mov     ecx, ebx
0x640F9C: call    sub_633C50
0x640FA1: jmp     short loc_640FA7
0x640FA3: mov     ebx, [esp+6Ch+var_5C]
0x640FA7: mov     ecx, ebp; this
0x640FA9: call    Actor_IsCreature
0x640FAE: test    al, al
0x640FB0: jnz     short loc_640FE1
0x640FB2: mov     ecx, esi; this
0x640FB4: call    Actor_IsNPC
0x640FB9: test    al, al
0x640FBB: jz      short loc_640FE1
0x640FBD: mov     ecx, esi
0x640FBF: call    Actor__GetRaceIfNPC
0x640FC4: test    byte ptr [eax+70h], 1
0x640FC8: jz      short loc_640FE1
0x640FCA: push    0; a2
0x640FCC: mov     ecx, esi; this
0x640FCE: call    Actor_GetActorBaseForm
0x640FD3: mov     ecx, eax
0x640FD5: add     ecx, 24h ; '$'
0x640FD8: call    TESActorBaseData_AllFactionsAreEvil
0x640FDD: test    al, al
0x640FDF: jz      short loc_641047
0x640FE1: cmp     [esp+6Ch+var_40], 0
0x640FE6: jle     short loc_641047
0x640FE8: mov     ecx, ebp; this
0x640FEA: call    sub_5E6C60
0x640FEF: push    0; a2
0x640FF1: mov     ecx, ebp; this
0x640FF3: call    Actor_GetActorBaseForm
0x640FF8: mov     ecx, eax
0x640FFA: add     ecx, 24h ; '$'
0x640FFD: call    TESActorBaseData_AllFactionsAreEvil
0x641002: test    al, al
0x641004: jz      short loc_64100D
0x641006: mov     byte ptr [esp+6Ch+var_40], 1
0x64100B: jmp     short loc_641021
0x64100D: push    esi
0x64100E: mov     ecx, offset dword_B3BDB0
0x641013: call    sub_67CB50
0x641018: test    al, al
0x64101A: setz    cl
0x64101D: mov     byte ptr [esp+6Ch+var_40], cl
0x641021: mov     eax, [esp+6Ch+var_40]
0x641025: mov     edx, [ebx]
0x641027: mov     edx, [edx+228h]
0x64102D: push    1
0x64102F: push    0
0x641031: push    0
0x641033: push    0
0x641035: push    eax
0x641036: push    0
0x641038: push    0
0x64103A: push    0
0x64103C: push    esi
0x64103D: push    ebp
0x64103E: mov     ecx, ebx
0x641040: call    edx
0x641042: jmp     loc_6411AD
0x641047: mov     ecx, ebp; this
0x641049: call    sub_5E6C60
0x64104E: test    al, al
0x641050: jz      short loc_6410C9
0x641052: mov     ecx, esi; this
0x641054: call    Actor_IsNPC
0x641059: test    al, al
0x64105B: jz      short loc_6410C9
0x64105D: mov     eax, [esi]
0x64105F: mov     edx, [eax+334h]
0x641065: push    0
0x641067: mov     ecx, esi
0x641069: call    edx
0x64106B: test    al, al
0x64106D: jnz     short loc_6410C9
0x64106F: mov     eax, [ebp+0]
0x641072: mov     edx, [eax+334h]
0x641078: push    0
0x64107A: mov     ecx, ebp
0x64107C: call    edx
0x64107E: test    al, al
0x641080: jnz     short loc_6410C9
0x641082: mov     eax, [esi]
0x641084: mov     edx, [eax+250h]
0x64108A: mov     ecx, esi
0x64108C: call    edx
0x64108E: fild    dword ptr ds:0B36A60h
0x641094: fcompp
0x641096: fnstsw  ax
0x641098: test    ah, 41h
0x64109B: jp      short loc_6410C9
0x64109D: mov     ecx, ds:0B333C4h; this
0x6410A3: cmp     esi, ecx
0x6410A5: jnz     short loc_6410B0
0x6410A7: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x6410AC: test    al, al
0x6410AE: jnz     short loc_6410C9
0x6410B0: mov     eax, [ebp+0]
0x6410B3: mov     edx, [eax+310h]
0x6410B9: push    esi
0x6410BA: push    0
0x6410BC: push    0
0x6410BE: push    0
0x6410C0: mov     ecx, ebp
0x6410C2: call    edx
0x6410C4: jmp     loc_6411AD
0x6410C9: mov     ecx, ebp; this
0x6410CB: call    sub_5E6C60
0x6410D0: test    al, al
0x6410D2: jnz     loc_6411AD
0x6410D8: cmp     [esp+74h+var_48], 0
0x6410DD: jle     loc_6411AD
0x6410E3: mov     eax, [esi]
0x6410E5: mov     edx, [eax+330h]
0x6410EB: mov     ecx, esi
0x6410ED: call    edx
0x6410EF: test    eax, eax
0x6410F1: jz      short loc_64110A
0x6410F3: mov     eax, [esi]
0x6410F5: mov     edx, [eax+330h]
0x6410FB: mov     ecx, esi
0x6410FD: call    edx
0x6410FF: mov     ecx, eax
0x641101: call    sub_6135F0
0x641106: mov     edi, eax
0x641108: jmp     short loc_64110E
0x64110A: mov     edi, [esp+74h+var_50]
0x64110E: mov     ecx, esi
0x641110: call    sub_5E8A90
0x641115: test    al, al
0x641117: jz      short loc_64112C
0x641119: test    edi, edi
0x64111B: jz      short loc_64112C
0x64111D: mov     ecx, edi
0x64111F: call    sub_5E8A90
0x641124: test    al, al
0x641126: jnz     loc_6411AD
0x64112C: mov     ecx, ebp; this
0x64112E: call    sub_5E6C60
0x641133: push    0; a2
0x641135: mov     ecx, ebp; this
0x641137: call    Actor_GetActorBaseForm
0x64113C: mov     ecx, eax
0x64113E: add     ecx, 24h ; '$'
0x641141: call    TESActorBaseData_AllFactionsAreEvil
0x641146: test    al, al
0x641148: jz      short loc_641151
0x64114A: mov     byte ptr [esp+74h+var_48], 1
0x64114F: jmp     short loc_641183
0x641151: push    0; a2
0x641153: mov     ecx, esi; this
0x641155: call    Actor_GetActorBaseForm
0x64115A: mov     ecx, eax
0x64115C: add     ecx, 24h ; '$'
0x64115F: call    TESActorBaseData_AllFactionsAreEvil
0x641164: test    al, al
0x641166: jz      short loc_64116F
0x641168: mov     byte ptr [esp+74h+var_48], 0
0x64116D: jmp     short loc_641183
0x64116F: push    esi
0x641170: mov     ecx, offset dword_B3BDB0
0x641175: call    sub_67CB50
0x64117A: test    al, al
0x64117C: setz    al
0x64117F: mov     byte ptr [esp+74h+var_48], al
0x641183: mov     eax, [esp+74h+var_48]
0x641187: mov     edx, [ebx]
0x641189: push    1
0x64118B: push    0
0x64118D: push    0
0x64118F: push    0
0x641191: push    eax
0x641192: push    0
0x641194: push    0
0x641196: push    eax
0x641197: mov     eax, [edx+228h]
0x64119D: push    esi
0x64119E: push    ebp
0x64119F: mov     ecx, ebx
0x6411A1: call    eax
0x6411A3: test    al, al
0x6411A5: jz      short loc_6411AD
0x6411A7: mov     [ebx+1A4h], esi
0x6411AD: mov     ecx, [esp+94h+var_60]
0x6411B1: mov     edx, [esp+94h+var_78]
0x6411B5: push    ecx
0x6411B6: push    edx
0x6411B7: push    esi
0x6411B8: push    ebp
0x6411B9: mov     ecx, ebx
0x6411BB: call    sub_63F950
0x6411C0: pop     edi
0x6411C1: pop     ebp
0x6411C2: pop     ebx
0x6411C3: pop     esi
0x6411C4: add     esp, 18h
0x6411C7: retn    0Ch
