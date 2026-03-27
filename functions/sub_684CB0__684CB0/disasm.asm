0x684CB0: sub     esp, 54h
0x684CB3: push    ebx
0x684CB4: mov     ebx, [esp+58h+arg_0]
0x684CB8: test    ebx, ebx
0x684CBA: jz      loc_684EB9
0x684CC0: mov     ecx, ebx
0x684CC2: call    sub_5E3290
0x684CC7: test    al, al
0x684CC9: jz      loc_684EB9
0x684CCF: push    ebp
0x684CD0: mov     ecx, ebx; this
0x684CD2: call    MobileObject_GetCharProxy
0x684CD7: mov     ebp, eax
0x684CD9: test    ebp, ebp
0x684CDB: jz      loc_684EB1
0x684CE1: test    byte ptr [ebp+1F4h], 1
0x684CE8: jz      loc_684EB1
0x684CEE: mov     ecx, [ebx+30h]
0x684CF1: mov     eax, [ebx+2Ch]
0x684CF4: mov     edx, [ebx+34h]
0x684CF7: push    esi
0x684CF8: mov     [esp+60h+var_44], ecx
0x684CFC: push    edi
0x684CFD: mov     ecx, ebp
0x684CFF: mov     [esp+64h+var_48], eax
0x684D03: mov     [esp+64h+var_40], edx
0x684D07: call    sub_8913C0
0x684D0C: fstp    [esp+64h+arg_0]
0x684D10: fldz
0x684D12: mov     eax, [esp+64h+arg_8]
0x684D16: fst     [esp+64h+var_30]
0x684D1A: mov     byte ptr [eax], 1
0x684D1D: fld     [esp+64h+arg_0]
0x684D21: mov     edx, [ebx]
0x684D23: fmul    qword ptr ds:0A372E0h
0x684D29: mov     eax, [edx+1E0h]
0x684D2F: mov     ecx, 9
0x684D34: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x684D39: lea     edi, [esp+64h+var_24]
0x684D3D: fstp    [esp+64h+arg_0]
0x684D41: rep movsd
0x684D43: fld     [esp+64h+arg_0]
0x684D47: fmul    qword ptr ds:0A38618h
0x684D4D: fstp    [esp+64h+var_2C]
0x684D51: fstp    [esp+64h+var_28]
0x684D55: mov     ecx, ebx
0x684D57: call    eax
0x684D59: push    ecx
0x684D5A: fadd    qword ptr ds:0A4D918h
0x684D60: lea     ecx, [esp+68h+var_24]
0x684D64: fstp    [esp+68h+arg_0]
0x684D68: fld     [esp+68h+arg_0]
0x684D6C: fstp    [esp+68h+var_68]; float
0x684D6F: call    NiMatrix33_InitRotationTransform
0x684D74: lea     ecx, [esp+64h+var_54]
0x684D78: push    ecx
0x684D79: lea     edx, [esp+68h+var_30]
0x684D7D: push    edx
0x684D7E: push    1
0x684D80: lea     eax, [esp+70h+var_24]
0x684D84: push    offset Vector3_InitValue?
0x684D89: push    eax
0x684D8A: call    sub_710580
0x684D8F: fld     [esp+78h+var_48]
0x684D93: fadd    [esp+78h+var_54]
0x684D97: add     esp, 14h
0x684D9A: push    0
0x684D9C: push    0
0x684D9E: fstp    [esp+6Ch+var_3C]
0x684DA2: mov     ecx, [esp+6Ch+var_3C]
0x684DA6: fld     [esp+6Ch+var_50]
0x684DAA: mov     [esp+6Ch+var_54], ecx
0x684DAE: fadd    [esp+6Ch+var_44]
0x684DB2: push    1
0x684DB4: lea     ecx, [esp+70h+var_54]
0x684DB8: push    ecx
0x684DB9: fstp    [esp+74h+var_38]
0x684DBD: mov     edx, [esp+74h+var_38]
0x684DC1: fld     [esp+74h+var_4C]
0x684DC5: mov     ecx, ebp
0x684DC7: fadd    [esp+74h+var_40]
0x684DCB: mov     [esp+74h+var_50], edx
0x684DCF: fstp    [esp+74h+var_34]
0x684DD3: mov     eax, [esp+74h+var_34]
0x684DD7: mov     [esp+74h+var_4C], eax
0x684DDB: call    sub_8949C0
0x684DE0: test    al, al
0x684DE2: jnz     short loc_684DEA
0x684DE4: mov     edx, [esp+64h+arg_8]
0x684DE8: mov     [edx], al
0x684DEA: mov     esi, [esp+64h+arg_4]
0x684DEE: mov     byte ptr [esi], 1
0x684DF1: mov     eax, [ebx]
0x684DF3: mov     edx, [eax+1E0h]
0x684DF9: mov     ecx, ebx
0x684DFB: call    edx
0x684DFD: fsub    qword ptr ds:0A4D918h
0x684E03: push    ecx
0x684E04: lea     ecx, [esp+68h+var_24]
0x684E08: fstp    [esp+68h+arg_0]
0x684E0C: fld     [esp+68h+arg_0]
0x684E10: fstp    [esp+68h+var_68]; float
0x684E13: call    NiMatrix33_InitRotationTransform
0x684E18: lea     eax, [esp+64h+var_54]
0x684E1C: push    eax
0x684E1D: lea     ecx, [esp+68h+var_30]
0x684E21: push    ecx
0x684E22: push    1
0x684E24: lea     edx, [esp+70h+var_24]
0x684E28: push    offset Vector3_InitValue?
0x684E2D: push    edx
0x684E2E: call    sub_710580
0x684E33: fld     [esp+78h+var_48]
0x684E37: fadd    [esp+78h+var_54]
0x684E3B: add     esp, 14h
0x684E3E: push    0
0x684E40: push    0
0x684E42: fstp    [esp+6Ch+var_3C]
0x684E46: mov     eax, [esp+6Ch+var_3C]
0x684E4A: fld     [esp+6Ch+var_50]
0x684E4E: mov     [esp+6Ch+var_54], eax
0x684E52: fadd    [esp+6Ch+var_44]
0x684E56: push    1
0x684E58: lea     eax, [esp+70h+var_54]
0x684E5C: push    eax
0x684E5D: fstp    [esp+74h+var_38]
0x684E61: mov     ecx, [esp+74h+var_38]
0x684E65: fld     [esp+74h+var_4C]
0x684E69: mov     [esp+74h+var_50], ecx
0x684E6D: fadd    [esp+74h+var_40]
0x684E71: mov     ecx, ebp
0x684E73: fstp    [esp+74h+var_34]
0x684E77: mov     edx, [esp+74h+var_34]
0x684E7B: mov     [esp+74h+var_4C], edx
0x684E7F: call    sub_8949C0
0x684E84: test    al, al
0x684E86: jnz     short loc_684E8C
0x684E88: mov     [esi], al
0x684E8A: jmp     short loc_684E91
0x684E8C: cmp     byte ptr [esi], 0
0x684E8F: jnz     short loc_684EA4
0x684E91: mov     ecx, [esp+64h+arg_8]
0x684E95: cmp     byte ptr [ecx], 0
0x684E98: jnz     short loc_684EA4
0x684E9A: pop     edi
0x684E9B: pop     esi
0x684E9C: pop     ebp
0x684E9D: xor     eax, eax
0x684E9F: pop     ebx
0x684EA0: add     esp, 54h
0x684EA3: retn
0x684EA4: pop     edi
0x684EA5: pop     esi
0x684EA6: pop     ebp
0x684EA7: mov     eax, 1
0x684EAC: pop     ebx
0x684EAD: add     esp, 54h
0x684EB0: retn
0x684EB1: pop     ebp
0x684EB2: mov     al, 1
0x684EB4: pop     ebx
0x684EB5: add     esp, 54h
0x684EB8: retn
0x684EB9: mov     al, 1
0x684EBB: pop     ebx
0x684EBC: add     esp, 54h
0x684EBF: retn
