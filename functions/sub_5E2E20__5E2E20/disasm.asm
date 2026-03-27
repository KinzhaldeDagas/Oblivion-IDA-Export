0x5E2E20: sub     esp, 18h
0x5E2E23: push    ebx
0x5E2E24: push    ebp
0x5E2E25: push    esi
0x5E2E26: mov     esi, [esp+24h+arg_10]
0x5E2E2A: test    esi, esi
0x5E2E2C: push    edi
0x5E2E2D: mov     ebx, ecx
0x5E2E2F: jz      loc_5E3079
0x5E2E35: mov     ecx, esi
0x5E2E37: call    sub_4AF170
0x5E2E3C: test    eax, eax
0x5E2E3E: jz      loc_5E302B
0x5E2E44: mov     eax, [esp+28h+arg_1C]
0x5E2E48: push    0
0x5E2E4A: push    eax
0x5E2E4B: lea     ecx, [esp+30h+a2]
0x5E2E4F: push    ebx
0x5E2E50: push    ecx
0x5E2E51: call    sub_67D820
0x5E2E56: mov     esi, eax
0x5E2E58: add     esp, 10h
0x5E2E5B: test    esi, esi
0x5E2E5D: jz      loc_5E300D
0x5E2E63: mov     ecx, esi
0x5E2E65: call    sub_4E7DE0
0x5E2E6A: test    eax, eax
0x5E2E6C: jz      loc_5E2FC3
0x5E2E72: cmp     dword ptr [eax+4], 0
0x5E2E76: jnz     short loc_5E2E81
0x5E2E78: cmp     dword ptr [eax], 0
0x5E2E7B: jz      loc_5E2FC3
0x5E2E81: mov     edi, [eax]
0x5E2E83: test    edi, edi
0x5E2E85: jz      loc_5E300D
0x5E2E8B: cmp     byte ptr [esp+28h+a3], 0
0x5E2E90: jz      short loc_5E2ED6
0x5E2E92: mov     ecx, edi
0x5E2E94: call    sub_4BEF40
0x5E2E99: fld     dword ptr [eax+8]
0x5E2E9C: mov     edx, [ebx]
0x5E2E9E: fstp    [esp+28h+var_18]
0x5E2EA2: mov     eax, [edx+174h]
0x5E2EA8: mov     ecx, ebx
0x5E2EAA: call    eax
0x5E2EAC: fld     dword ptr [eax+8]
0x5E2EAF: fsubr   [esp+28h+var_18]
0x5E2EB3: fstp    [esp+28h+a3]
0x5E2EB7: fld     [esp+28h+a3]
0x5E2EBB: fabs
0x5E2EBD: fstp    [esp+28h+a3]
0x5E2EC1: fld     [esp+28h+a3]
0x5E2EC5: fcomp   dword ptr ds:0A6B324h
0x5E2ECB: fnstsw  ax
0x5E2ECD: test    ah, 5
0x5E2ED0: jp      loc_5E300D
0x5E2ED6: mov     ecx, edi
0x5E2ED8: call    sub_4BEF40
0x5E2EDD: mov     edi, [eax]
0x5E2EDF: mov     ebx, [eax+4]
0x5E2EE2: mov     ebp, [eax+8]
0x5E2EE5: mov     ecx, esi
0x5E2EE7: mov     [esp+28h+var_C], edi
0x5E2EEB: mov     [esp+28h+var_8], ebx
0x5E2EEF: mov     [esp+28h+var_4], ebp
0x5E2EF3: call    sub_4BEF40
0x5E2EF8: fld     [esp+28h+var_C]
0x5E2EFC: fsub    dword ptr [eax]
0x5E2EFE: lea     ecx, [esp+28h+var_18]
0x5E2F02: fstp    dword ptr [esp+28h+var_18]
0x5E2F06: fld     [esp+28h+var_8]
0x5E2F0A: fsub    dword ptr [eax+4]
0x5E2F0D: fstp    dword ptr [esp+28h+var_18+4]
0x5E2F11: fld     [esp+28h+var_4]
0x5E2F15: fsub    dword ptr [eax+8]
0x5E2F18: fstp    [esp+28h+var_10]
0x5E2F1C: call    sub_43F350
0x5E2F21: push    0; Seed
0x5E2F23: fstp    [esp+2Ch+arg_14]
0x5E2F27: call    GetRandomLargeInteger?
0x5E2F2C: cdq
0x5E2F2D: mov     ecx, 3E8h
0x5E2F32: idiv    ecx
0x5E2F34: add     esp, 4
0x5E2F37: mov     [esp+28h+a3], edx
0x5E2F3B: fild    [esp+28h+a3]
0x5E2F3F: fdiv    qword ptr ds:0A2FC70h
0x5E2F45: fld     [esp+28h+arg_14]
0x5E2F49: fld     st
0x5E2F4B: fmulp   st(2), st
0x5E2F4D: fxch    st(1)
0x5E2F4F: fstp    [esp+28h+a3]
0x5E2F53: fld     [esp+28h+a3]
0x5E2F57: fcom    st(1)
0x5E2F59: fnstsw  ax
0x5E2F5B: fstp    st(1)
0x5E2F5D: test    ah, 41h
0x5E2F60: jnz     short loc_5E2F6F
0x5E2F62: fstp    st
0x5E2F64: mov     esi, edi
0x5E2F66: mov     edx, ebx
0x5E2F68: mov     ecx, ebp
0x5E2F6A: jmp     loc_5E3085
0x5E2F6F: fld     dword ptr [esp+28h+var_18]
0x5E2F73: mov     ecx, esi
0x5E2F75: fmul    st, st(1)
0x5E2F77: fstp    [esp+28h+var_C]
0x5E2F7B: fld     dword ptr [esp+28h+var_18+4]
0x5E2F7F: fmul    st, st(1)
0x5E2F81: fstp    [esp+28h+var_8]
0x5E2F85: fmul    [esp+28h+var_10]
0x5E2F89: fstp    [esp+28h+var_4]
0x5E2F8D: call    sub_4BEF40
0x5E2F92: fld     dword ptr [eax]
0x5E2F94: fadd    [esp+28h+var_C]
0x5E2F98: fstp    dword ptr [esp+28h+var_18]
0x5E2F9C: mov     esi, dword ptr [esp+28h+var_18]
0x5E2FA0: fld     dword ptr [eax+4]
0x5E2FA3: fadd    [esp+28h+var_8]
0x5E2FA7: fstp    dword ptr [esp+28h+var_18+4]
0x5E2FAB: mov     edx, dword ptr [esp+28h+var_18+4]
0x5E2FAF: fld     dword ptr [eax+8]
0x5E2FB2: fadd    [esp+28h+var_4]
0x5E2FB6: fstp    [esp+28h+var_10]
0x5E2FBA: mov     ecx, [esp+28h+var_10]
0x5E2FBE: jmp     loc_5E3085
0x5E2FC3: cmp     byte ptr [esp+28h+a3], 0
0x5E2FC8: jz      short loc_5E2FF2
0x5E2FCA: mov     ecx, esi
0x5E2FCC: call    sub_4BEF40
0x5E2FD1: fld     dword ptr [eax+8]
0x5E2FD4: mov     edx, [ebx]
0x5E2FD6: fstp    [esp+28h+var_18]
0x5E2FDA: mov     eax, [edx+174h]
0x5E2FE0: mov     ecx, ebx
0x5E2FE2: call    eax
0x5E2FE4: fld     dword ptr [eax+8]
0x5E2FE7: fcomp   [esp+28h+var_18]
0x5E2FEB: fnstsw  ax
0x5E2FED: test    ah, 44h
0x5E2FF0: jp      short loc_5E300D
0x5E2FF2: mov     ecx, esi
0x5E2FF4: call    sub_4BEF40
0x5E2FF9: mov     ecx, [eax]
0x5E2FFB: mov     [esp+28h+a2], ecx
0x5E2FFF: mov     edx, [eax+4]
0x5E3002: mov     [esp+28h+arg_8], edx
0x5E3006: mov     eax, [eax+8]
0x5E3009: mov     [esp+28h+arg_C], eax
0x5E300D: mov     eax, [ebx]
0x5E300F: mov     edx, [eax+174h]
0x5E3015: mov     ecx, ebx
0x5E3017: call    edx
0x5E3019: mov     esi, [eax]
0x5E301B: mov     [esp+28h+a2], esi
0x5E301F: mov     edx, [eax+4]
0x5E3022: mov     [esp+28h+arg_8], edx
0x5E3026: mov     ecx, [eax+8]
0x5E3029: jmp     short loc_5E3085
0x5E302B: mov     ecx, esi; this
0x5E302D: call    TESObjectCELL_IsInterior
0x5E3032: test    al, al
0x5E3034: jnz     short loc_5E3079
0x5E3036: lea     ecx, [esp+28h+a3]
0x5E303A: push    ecx; a3
0x5E303B: mov     ecx, ds:0B333A0h; this
0x5E3041: lea     edx, [esp+2Ch+a2]
0x5E3045: push    edx; a2
0x5E3046: call    GetTerrainHeight
0x5E304B: fld     [esp+28h+a3]
0x5E304F: cmp     byte ptr [esp+28h+arg_14], 0
0x5E3054: fadd    qword ptr ds:0A46970h
0x5E305A: fstp    [esp+28h+a3]
0x5E305E: fld     [esp+28h+a3]
0x5E3062: jnz     short loc_5E3071
0x5E3064: fld     [esp+28h+arg_C]
0x5E3068: fcomp   st(1)
0x5E306A: fnstsw  ax
0x5E306C: test    ah, 5
0x5E306F: jp      short loc_5E3077
0x5E3071: fstp    [esp+28h+arg_C]
0x5E3075: jmp     short loc_5E3079
0x5E3077: fstp    st
0x5E3079: mov     esi, [esp+28h+a2]
0x5E307D: mov     edx, [esp+28h+arg_8]
0x5E3081: mov     ecx, [esp+28h+arg_C]
0x5E3085: mov     eax, [esp+28h+arg_0]
0x5E3089: pop     edi
0x5E308A: mov     [eax], esi
0x5E308C: pop     esi
0x5E308D: pop     ebp
0x5E308E: mov     [eax+4], edx
0x5E3091: mov     [eax+8], ecx
0x5E3094: pop     ebx
0x5E3095: add     esp, 18h
0x5E3098: retn    20h ; ' '
