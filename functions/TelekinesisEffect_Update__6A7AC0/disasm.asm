0x6A7AC0: push    ebp
0x6A7AC1: mov     ebp, esp
0x6A7AC3: and     esp, 0FFFFFFF8h
0x6A7AC6: sub     esp, 1Ch
0x6A7AC9: fld     dword ptr [ebp+8]
0x6A7ACC: push    ebx
0x6A7ACD: push    esi
0x6A7ACE: push    edi
0x6A7ACF: push    ecx
0x6A7AD0: fstp    [esp+2Ch+var_2C]
0x6A7AD3: mov     esi, ecx
0x6A7AD5: call    ValueModifierEffect_UpdateEffect
0x6A7ADA: mov     ecx, ds:0B333C4h
0x6A7AE0: mov     eax, [ecx+574h]
0x6A7AE6: test    eax, eax
0x6A7AE8: mov     dword ptr [esp+1Ch+var_C], eax
0x6A7AEC: jz      short loc_6A7AFA
0x6A7AEE: mov     eax, [eax+8]
0x6A7AF1: test    eax, eax
0x6A7AF3: jz      short loc_6A7AFA
0x6A7AF5: mov     eax, [eax+18h]
0x6A7AF8: jmp     short loc_6A7AFC
0x6A7AFA: xor     eax, eax
0x6A7AFC: test    eax, eax
0x6A7AFE: jz      loc_6A7E5B
0x6A7B04: cmp     dword ptr [eax+0Ch], 0
0x6A7B08: jz      loc_6A7E5B
0x6A7B0E: cmp     dword ptr [esi+24h], 0
0x6A7B12: jz      short loc_6A7B55
0x6A7B14: mov     ecx, [ecx+578h]; this
0x6A7B1A: call    TESObjectREFR_GetParentCell
0x6A7B1F: test    eax, eax
0x6A7B21: jz      short loc_6A7B55
0x6A7B23: mov     ecx, [esi+24h]
0x6A7B26: mov     eax, [ecx]
0x6A7B28: mov     edx, [eax+20h]
0x6A7B2B: call    edx
0x6A7B2D: mov     ecx, eax; this
0x6A7B2F: call    TESObjectREFR_GetParentCell
0x6A7B34: mov     edi, eax
0x6A7B36: mov     ecx, edi; this
0x6A7B38: call    TESObjectCELL_IsInterior
0x6A7B3D: test    al, al
0x6A7B3F: jz      short loc_6A7B4D
0x6A7B41: lea     ecx, [edi+28h]
0x6A7B44: call    sub_424180
0x6A7B49: mov     ebx, eax
0x6A7B4B: jmp     short loc_6A7B57
0x6A7B4D: mov     ebx, ds:0B35C24h
0x6A7B53: jmp     short loc_6A7B57
0x6A7B55: xor     ebx, ebx
0x6A7B57: mov     eax, ds:0B333C4h
0x6A7B5C: mov     ecx, [eax+578h]; this
0x6A7B62: test    ecx, ecx
0x6A7B64: jz      short loc_6A7B9E
0x6A7B66: call    TESObjectREFR_GetParentCell
0x6A7B6B: test    eax, eax
0x6A7B6D: jz      short loc_6A7B9E
0x6A7B6F: mov     ecx, ds:0B333C4h
0x6A7B75: mov     ecx, [ecx+578h]; this
0x6A7B7B: call    TESObjectREFR_GetParentCell
0x6A7B80: mov     edi, eax
0x6A7B82: mov     ecx, edi; this
0x6A7B84: call    TESObjectCELL_IsInterior
0x6A7B89: test    al, al
0x6A7B8B: jz      short loc_6A7B97
0x6A7B8D: lea     ecx, [edi+28h]
0x6A7B90: call    sub_424180
0x6A7B95: jmp     short loc_6A7BA0
0x6A7B97: mov     eax, ds:0B35C24h
0x6A7B9C: jmp     short loc_6A7BA0
0x6A7B9E: xor     eax, eax
0x6A7BA0: cmp     dword ptr [esp+1Ch+var_C], 0
0x6A7BA5: jz      loc_6A7E5B
0x6A7BAB: mov     edx, [esi+48h]
0x6A7BAE: mov     ecx, ds:0B333C4h
0x6A7BB4: cmp     edx, [ecx+578h]
0x6A7BBA: jnz     loc_6A7E5B
0x6A7BC0: cmp     dword ptr [ecx+57Ch], 3
0x6A7BC7: jnz     loc_6A7E5B
0x6A7BCD: cmp     ebx, eax
0x6A7BCF: jnz     loc_6A7E5B
0x6A7BD5: mov     eax, ds:0B33398h
0x6A7BDA: mov     ecx, [eax+20h]; this
0x6A7BDD: push    0; a3
0x6A7BDF: push    6; a2
0x6A7BE1: call    InputGlobals__QueryControlState
0x6A7BE6: test    eax, eax
0x6A7BE8: jz      short loc_6A7C4A
0x6A7BEA: mov     ecx, ds:0B33398h
0x6A7BF0: mov     ecx, [ecx+20h]; this
0x6A7BF3: push    0; a3
0x6A7BF5: push    4; a2
0x6A7BF7: call    InputGlobals__QueryControlState
0x6A7BFC: test    eax, eax
0x6A7BFE: jz      short loc_6A7C4A
0x6A7C00: fld     dword ptr [esi+44h]
0x6A7C03: mov     ecx, offset fMagicTelekinesisMoveAccelerate
0x6A7C08: fstp    qword ptr [esp+18h]
0x6A7C0C: call    GameSetting_GetSafeFloatPointer
0x6A7C11: fld     dword ptr [eax]
0x6A7C13: mov     ecx, offset fMagicTelekinesisMoveBase
0x6A7C18: fmul    qword ptr ds:0A2FC80h
0x6A7C1E: fstp    [esp+1Ch+var_C]
0x6A7C22: call    GameSetting_GetSafeFloatPointer
0x6A7C27: fld     dword ptr [eax]
0x6A7C29: fadd    [esp+1Ch+var_C]
0x6A7C2D: fcomp   qword ptr [esp+18h]
0x6A7C31: fnstsw  ax
0x6A7C33: test    ah, 5
0x6A7C36: jp      short loc_6A7C3C
0x6A7C38: mov     byte ptr [esi+4Ch], 1
0x6A7C3C: push    0
0x6A7C3E: mov     ecx, esi
0x6A7C40: call    ActiveEffect_Base_Remove
0x6A7C45: jmp     loc_6A7D77
0x6A7C4A: mov     edx, ds:0B33398h
0x6A7C50: mov     ecx, [edx+20h]; this
0x6A7C53: push    0; a3
0x6A7C55: push    4; a2
0x6A7C57: call    InputGlobals__QueryControlState
0x6A7C5C: test    eax, eax
0x6A7C5E: jz      short loc_6A7CD8
0x6A7C60: fld     dword ptr [esi+44h]
0x6A7C63: mov     ecx, offset fMagicTelekinesisMoveBase
0x6A7C68: fstp    qword ptr [esp+18h]
0x6A7C6C: call    GameSetting_GetSafeFloatPointer
0x6A7C71: fld     dword ptr [eax]
0x6A7C73: fcomp   qword ptr [esp+18h]
0x6A7C77: fnstsw  ax
0x6A7C79: test    ah, 41h
0x6A7C7C: jnz     short loc_6A7C8D
0x6A7C7E: mov     ecx, offset fMagicTelekinesisMoveBase
0x6A7C83: call    GameSetting_GetSafeFloatPointer
0x6A7C88: fld     dword ptr [eax]
0x6A7C8A: fstp    dword ptr [esi+44h]
0x6A7C8D: mov     ecx, offset fMagicTelekinesisMoveAccelerate
0x6A7C92: call    GameSetting_GetSafeFloatPointer
0x6A7C97: fld     dword ptr [eax]
0x6A7C99: fmul    dword ptr [ebp+8]
0x6A7C9C: mov     ecx, offset fMagicTelekinesisMoveMax
0x6A7CA1: fadd    dword ptr [esi+44h]
0x6A7CA4: fstp    dword ptr [esp+1Ch+var_C]
0x6A7CA8: fld     dword ptr [esp+1Ch+var_C]
0x6A7CAC: fstp    dword ptr [esi+44h]
0x6A7CAF: call    GameSetting_GetSafeFloatPointer
0x6A7CB4: fld     dword ptr [esp+1Ch+var_C]
0x6A7CB8: fld     dword ptr [eax]
0x6A7CBA: fcompp
0x6A7CBC: fnstsw  ax
0x6A7CBE: test    ah, 5
0x6A7CC1: jp      loc_6A7D77
0x6A7CC7: mov     ecx, offset fMagicTelekinesisMoveMax
0x6A7CCC: call    GameSetting_GetSafeFloatPointer
0x6A7CD1: fld     dword ptr [eax]
0x6A7CD3: jmp     loc_6A7D74
0x6A7CD8: mov     eax, ds:0B33398h
0x6A7CDD: mov     ecx, [eax+20h]; this
0x6A7CE0: push    0; a3
0x6A7CE2: push    6; a2
0x6A7CE4: call    InputGlobals__QueryControlState
0x6A7CE9: test    eax, eax
0x6A7CEB: jz      loc_6A7D72
0x6A7CF1: fld     dword ptr [esi+44h]
0x6A7CF4: mov     ecx, offset fMagicTelekinesisMoveBase
0x6A7CF9: fstp    qword ptr [esp+18h]
0x6A7CFD: call    GameSetting_GetSafeFloatPointer
0x6A7D02: fld     dword ptr [eax]
0x6A7D04: fchs
0x6A7D06: fcomp   qword ptr [esp+18h]
0x6A7D0A: fnstsw  ax
0x6A7D0C: test    ah, 5
0x6A7D0F: jp      short loc_6A7D22
0x6A7D11: mov     ecx, offset fMagicTelekinesisMoveBase
0x6A7D16: call    GameSetting_GetSafeFloatPointer
0x6A7D1B: fld     dword ptr [eax]
0x6A7D1D: fchs
0x6A7D1F: fstp    dword ptr [esi+44h]
0x6A7D22: fld     dword ptr [esi+44h]
0x6A7D25: mov     ecx, offset fMagicTelekinesisMoveAccelerate
0x6A7D2A: fstp    qword ptr [esp+18h]
0x6A7D2E: call    GameSetting_GetSafeFloatPointer
0x6A7D33: fld     dword ptr [eax]
0x6A7D35: mov     ecx, offset fMagicTelekinesisMoveMax
0x6A7D3A: fmul    dword ptr [ebp+8]
0x6A7D3D: fsubr   qword ptr [esp+18h]
0x6A7D41: fstp    dword ptr [esp+1Ch+var_C]
0x6A7D45: fld     dword ptr [esp+1Ch+var_C]
0x6A7D49: fstp    dword ptr [esi+44h]
0x6A7D4C: call    GameSetting_GetSafeFloatPointer
0x6A7D51: fld     dword ptr [esp+1Ch+var_C]
0x6A7D55: fld     dword ptr [eax]
0x6A7D57: fchs
0x6A7D59: fcompp
0x6A7D5B: fnstsw  ax
0x6A7D5D: test    ah, 41h
0x6A7D60: jnz     short loc_6A7D77
0x6A7D62: mov     ecx, offset fMagicTelekinesisMoveMax
0x6A7D67: call    GameSetting_GetSafeFloatPointer
0x6A7D6C: fld     dword ptr [eax]
0x6A7D6E: fchs
0x6A7D70: jmp     short loc_6A7D74
0x6A7D72: fldz
0x6A7D74: fstp    dword ptr [esi+44h]
0x6A7D77: fld     dword ptr [esi+44h]
0x6A7D7A: mov     ecx, ds:0B333C4h
0x6A7D80: fmul    dword ptr [ebp+8]
0x6A7D83: fadd    dword ptr [ecx+584h]
0x6A7D89: mov     ecx, offset fMagicTelekinesisDistanceMin
0x6A7D8E: fstp    dword ptr [esp+1Ch+var_C]
0x6A7D92: fld     dword ptr [esp+1Ch+var_C]
0x6A7D96: fstp    dword ptr [esi+40h]
0x6A7D99: call    GameSetting_GetSafeFloatPointer
0x6A7D9E: fld     dword ptr [esp+1Ch+var_C]
0x6A7DA2: fld     dword ptr [eax]
0x6A7DA4: fcompp
0x6A7DA6: fnstsw  ax
0x6A7DA8: test    ah, 41h
0x6A7DAB: jnz     short loc_6A7DBC
0x6A7DAD: mov     ecx, offset fMagicTelekinesisDistanceMin
0x6A7DB2: call    GameSetting_GetSafeFloatPointer
0x6A7DB7: fld     dword ptr [eax]
0x6A7DB9: fstp    dword ptr [esi+40h]
0x6A7DBC: fld     dword ptr [esi+18h]
0x6A7DBF: mov     ecx, offset fMagicUnitsPerFoot
0x6A7DC4: fstp    dword ptr [esp+1Ch+var_C]
0x6A7DC8: fld     dword ptr [esi+40h]
0x6A7DCB: fstp    qword ptr [esp+20h]
0x6A7DCF: call    GameSetting_GetSafeFloatPointer
0x6A7DD4: fld     dword ptr [eax]
0x6A7DD6: mov     ecx, offset fMagicTelekinesiDistanceMult
0x6A7DDB: fmul    dword ptr [esp+1Ch+var_C]
0x6A7DDF: fstp    qword ptr [esp+18h]
0x6A7DE3: call    GameSetting_GetSafeFloatPointer
0x6A7DE8: fld     dword ptr [eax]
0x6A7DEA: fmul    qword ptr [esp+18h]
0x6A7DEE: fcomp   qword ptr [esp+20h]
0x6A7DF2: fnstsw  ax
0x6A7DF4: test    ah, 5
0x6A7DF7: jp      short loc_6A7E27
0x6A7DF9: fld     dword ptr [esi+18h]
0x6A7DFC: mov     ecx, offset fMagicUnitsPerFoot
0x6A7E01: fstp    dword ptr [esp+1Ch+var_C]
0x6A7E05: call    GameSetting_GetSafeFloatPointer
0x6A7E0A: fld     dword ptr [esp+1Ch+var_C]
0x6A7E0E: mov     ecx, offset fMagicTelekinesiDistanceMult
0x6A7E13: fmul    dword ptr [eax]
0x6A7E15: fstp    qword ptr [esp+20h]
0x6A7E19: call    GameSetting_GetSafeFloatPointer
0x6A7E1E: fld     dword ptr [eax]
0x6A7E20: fmul    qword ptr [esp+20h]
0x6A7E24: fstp    dword ptr [esi+40h]
0x6A7E27: fld     dword ptr [esi+40h]
0x6A7E2A: mov     edx, ds:0B333C4h
0x6A7E30: fstp    dword ptr [edx+584h]
0x6A7E36: cmp     byte ptr [esi+4Dh], 0
0x6A7E3A: jnz     short loc_6A7E4E
0x6A7E3C: fld     dword ptr [ebp+8]
0x6A7E3F: push    ecx
0x6A7E40: mov     ecx, ds:0B333C4h
0x6A7E46: fstp    [esp+20h+var_20]
0x6A7E49: call    sub_66D930
0x6A7E4E: mov     byte ptr [esi+4Dh], 0
0x6A7E52: pop     edi
0x6A7E53: pop     esi
0x6A7E54: pop     ebx
0x6A7E55: mov     esp, ebp
0x6A7E57: pop     ebp
0x6A7E58: retn    4
0x6A7E5B: push    0
0x6A7E5D: mov     ecx, esi
0x6A7E5F: call    ActiveEffect_Base_Remove
0x6A7E64: pop     edi
0x6A7E65: pop     esi
0x6A7E66: pop     ebx
0x6A7E67: mov     esp, ebp
0x6A7E69: pop     ebp
0x6A7E6A: retn    4
