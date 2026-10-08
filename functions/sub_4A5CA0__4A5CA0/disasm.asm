0x4A5CA0: sub     esp, 30h; Verified: called via TESRegionGrassObject vtable +0x08; this is the Grass region object's cell-placement evaluation callback. Receives coordinates/worldspace/position-style values and returns a double-like density/eligibility result. Detailed caller-visible parameter names remain Candidate.
0x4A5CA3: push    ebx
0x4A5CA4: push    esi
0x4A5CA5: mov     esi, ecx
0x4A5CA7: push    edi
0x4A5CA8: lea     ecx, [esp+3Ch+var_20]
0x4A5CAC: call    sub_4A6920
0x4A5CB1: mov     ebx, [esi+4]
0x4A5CB4: test    ebx, ebx
0x4A5CB6: jz      def_4A5DB4
0x4A5CBC: mov     eax, [esp+3Ch+arg_C]
0x4A5CC0: fld     [esp+3Ch+arg_4]
0x4A5CC4: mov     ecx, ds:0B33A98h
0x4A5CCA: push    0; int
0x4A5CCC: push    eax; int
0x4A5CCD: sub     esp, 8
0x4A5CD0: fstp    [esp+4Ch+var_48]; float
0x4A5CD4: fld     [esp+4Ch+arg_0]
0x4A5CD8: fstp    [esp+4Ch+var_4C]; float
0x4A5CDB: call    sub_44A270
0x4A5CE0: mov     edi, eax
0x4A5CE2: test    edi, edi
0x4A5CE4: jz      def_4A5DB4
0x4A5CEA: mov     ecx, edi; this
0x4A5CEC: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4A5CF1: test    al, al
0x4A5CF3: jnz     def_4A5DB4
0x4A5CF9: mov     edx, [ebx]
0x4A5CFB: mov     eax, [edx+120h]
0x4A5D01: mov     ecx, ebx
0x4A5D03: call    eax
0x4A5D05: movzx   ecx, al
0x4A5D08: mov     [esp+3Ch+arg_C], ecx
0x4A5D0C: mov     edx, [esi]
0x4A5D0E: fild    [esp+3Ch+arg_C]
0x4A5D12: mov     eax, [edx+0Ch]
0x4A5D15: mov     ecx, esi
0x4A5D17: fdiv    qword ptr ds:0A309F0h
0x4A5D1D: fstp    [esp+3Ch+var_24]
0x4A5D21: fld     [esp+3Ch+arg_0]
0x4A5D25: fstp    [esp+3Ch+var_20]
0x4A5D29: fld     [esp+3Ch+arg_4]
0x4A5D2D: fstp    [esp+3Ch+var_1C]
0x4A5D31: call    eax
0x4A5D33: test    eax, eax
0x4A5D35: jz      short loc_4A5D63
0x4A5D37: lea     ecx, [esp+3Ch+arg_0]
0x4A5D3B: push    ecx
0x4A5D3C: mov     ecx, edi; this
0x4A5D3E: call    sub_4CE3C0
0x4A5D43: mov     ecx, eax
0x4A5D45: call    sub_4C5AA0
0x4A5D4A: test    eax, eax
0x4A5D4C: jz      def_4A5DB4
0x4A5D52: mov     edx, [esi]
0x4A5D54: mov     ebx, [eax+0Ch]
0x4A5D57: mov     eax, [edx+0Ch]
0x4A5D5A: mov     ecx, esi
0x4A5D5C: call    eax
0x4A5D5E: cmp     ebx, [eax+0Ch]
0x4A5D61: jnz     short def_4A5DB4
0x4A5D63: mov     ecx, [esi+4]
0x4A5D66: mov     edx, [ecx]
0x4A5D68: mov     eax, [edx+140h]
0x4A5D6E: call    eax
0x4A5D70: movzx   ecx, ax
0x4A5D73: mov     dword ptr [esp+3Ch+var_2C], ecx
0x4A5D77: mov     ecx, edi
0x4A5D79: fild    dword ptr [esp+3Ch+var_2C]
0x4A5D7D: fstp    dword ptr [esp+3Ch+var_2C]
0x4A5D81: call    TESObjectCELL_GetWaterHeight
0x4A5D86: lea     edx, [esp+3Ch+arg_C]
0x4A5D8A: fstp    [esp+3Ch+var_30]
0x4A5D8E: push    edx
0x4A5D8F: lea     eax, [esp+40h+arg_0]
0x4A5D93: push    eax
0x4A5D94: mov     ecx, edi; this
0x4A5D96: call    sub_4CE3C0
0x4A5D9B: mov     ecx, eax
0x4A5D9D: call    sub_4C5B50
0x4A5DA2: mov     ecx, [esi+4]
0x4A5DA5: mov     edx, [ecx]
0x4A5DA7: mov     eax, [edx+148h]
0x4A5DAD: call    eax
0x4A5DAF: cmp     eax, 7; switch 8 cases
0x4A5DB2: ja      short def_4A5DB4
0x4A5DB4: jmp     ds:jpt_4A5DB4[eax*4]; switch jump
0x4A5DBB: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 0
0x4A5DBF: fld     [esp+3Ch+var_30]
0x4A5DC3: fadd    dword ptr [esp+3Ch+var_2C]
0x4A5DC7: fcompp
0x4A5DC9: fnstsw  ax
0x4A5DCB: test    ah, 41h
0x4A5DCE: jnz     loc_4A5EE9
0x4A5DDF: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 1
0x4A5DE3: fld     [esp+3Ch+var_30]
0x4A5DE7: fcom    st(1)
0x4A5DE9: fnstsw  ax
0x4A5DEB: test    ah, 41h
0x4A5DEE: jz      short loc_4A5E0C
0x4A5DF0: fadd    dword ptr [esp+3Ch+var_2C]
0x4A5DF4: fcompp
0x4A5DF6: fnstsw  ax
0x4A5DF8: test    ah, 5
0x4A5DFB: jp      loc_4A5EE9
0x4A5E01: fldz
0x4A5E03: pop     edi
0x4A5E04: pop     esi
0x4A5E05: pop     ebx
0x4A5E06: add     esp, 30h
0x4A5E09: retn    14h
0x4A5E0C: fstp    st(1)
0x4A5E0E: fstp    st
0x4A5E10: fldz
0x4A5E12: pop     edi
0x4A5E13: pop     esi
0x4A5E14: pop     ebx
0x4A5E15: add     esp, 30h
0x4A5E18: retn    14h
0x4A5E1B: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 2
0x4A5E1F: fld     [esp+3Ch+var_30]
0x4A5E23: fsub    dword ptr [esp+3Ch+var_2C]
0x4A5E27: fcompp
0x4A5E29: fnstsw  ax
0x4A5E2B: test    ah, 5
0x4A5E2E: jp      loc_4A5EE9
0x4A5E34: fldz
0x4A5E36: pop     edi
0x4A5E37: pop     esi
0x4A5E38: pop     ebx
0x4A5E39: add     esp, 30h
0x4A5E3C: retn    14h
0x4A5E3F: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 3
0x4A5E43: fld     [esp+3Ch+var_30]
0x4A5E47: fcom    st(1)
0x4A5E49: fnstsw  ax
0x4A5E4B: test    ah, 5
0x4A5E4E: jnp     short loc_4A5E0C
0x4A5E50: fsub    dword ptr [esp+3Ch+var_2C]
0x4A5E54: fcompp
0x4A5E56: jmp     loc_4A5DC9
0x4A5E5B: fld     [esp+3Ch+var_30]; jumptable 004A5DB4 case 4
0x4A5E5F: fsub    [esp+3Ch+arg_C]
0x4A5E63: fstp    [esp+3Ch+arg_C]
0x4A5E67: fld     [esp+3Ch+arg_C]
0x4A5E6B: fabs
0x4A5E6D: fstp    [esp+3Ch+arg_C]
0x4A5E71: fld     [esp+3Ch+arg_C]
0x4A5E75: fld     dword ptr [esp+3Ch+var_2C]
0x4A5E79: jmp     loc_4A5DC7
0x4A5E7E: fld     [esp+3Ch+var_30]; jumptable 004A5DB4 case 5
0x4A5E82: fsub    [esp+3Ch+arg_C]
0x4A5E86: fstp    [esp+3Ch+arg_C]
0x4A5E8A: fld     [esp+3Ch+arg_C]
0x4A5E8E: fabs
0x4A5E90: fstp    [esp+3Ch+arg_C]
0x4A5E94: fld     [esp+3Ch+arg_C]
0x4A5E98: fld     dword ptr [esp+3Ch+var_2C]
0x4A5E9C: fcompp
0x4A5E9E: fnstsw  ax
0x4A5EA0: test    ah, 5
0x4A5EA3: jp      short loc_4A5EE9
0x4A5EA5: fldz
0x4A5EA7: pop     edi
0x4A5EA8: pop     esi
0x4A5EA9: pop     ebx
0x4A5EAA: add     esp, 30h
0x4A5EAD: retn    14h
0x4A5EB0: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 6
0x4A5EB4: fld     [esp+3Ch+var_30]
0x4A5EB8: fadd    dword ptr [esp+3Ch+var_2C]
0x4A5EBC: fcompp
0x4A5EBE: fnstsw  ax
0x4A5EC0: test    ah, 5
0x4A5EC3: jp      short loc_4A5EE9
0x4A5EC5: fldz
0x4A5EC7: pop     edi
0x4A5EC8: pop     esi
0x4A5EC9: pop     ebx
0x4A5ECA: add     esp, 30h
0x4A5ECD: retn    14h
0x4A5ED0: fld     [esp+3Ch+arg_C]; jumptable 004A5DB4 case 7
0x4A5ED4: fld     [esp+3Ch+var_30]
0x4A5ED8: fsub    dword ptr [esp+3Ch+var_2C]
0x4A5EDC: fcompp
0x4A5EDE: fnstsw  ax
0x4A5EE0: test    ah, 41h
0x4A5EE3: jz      def_4A5DB4
0x4A5EE9: lea     ecx, [esp+3Ch+var_C]
0x4A5EED: push    ecx
0x4A5EEE: lea     edx, [esp+40h+var_18]
0x4A5EF2: push    edx
0x4A5EF3: lea     eax, [esp+44h+arg_0]
0x4A5EF7: push    eax
0x4A5EF8: mov     ecx, edi; this
0x4A5EFA: call    sub_4CE3C0
0x4A5EFF: mov     ecx, eax
0x4A5F01: call    sub_4C3C00
0x4A5F06: test    al, al
0x4A5F08: jz      short loc_4A5F77
0x4A5F0A: mov     ecx, [esp+3Ch+var_18]
0x4A5F0E: mov     edx, [esp+3Ch+var_14]
0x4A5F12: sub     esp, 0Ch
0x4A5F15: mov     eax, esp
0x4A5F17: mov     [eax], ecx
0x4A5F19: mov     ecx, [esp+48h+var_10]
0x4A5F1D: mov     [eax+4], edx
0x4A5F20: mov     [eax+8], ecx
0x4A5F23: call    sub_4A6810
0x4A5F28: fstp    [esp+48h+arg_C]
0x4A5F2C: mov     ecx, [esi+4]
0x4A5F2F: fld     [esp+48h+arg_C]
0x4A5F33: mov     edx, [ecx]
0x4A5F35: fstp    [esp+48h+var_2C]
0x4A5F39: mov     eax, [edx+13Ch]
0x4A5F3F: add     esp, 0Ch
0x4A5F42: call    eax
0x4A5F44: fcomp   [esp+3Ch+var_2C]
0x4A5F48: fnstsw  ax
0x4A5F4A: test    ah, 5
0x4A5F4D: jnp     def_4A5DB4
0x4A5F53: mov     ecx, [esi+4]
0x4A5F56: fld     [esp+3Ch+arg_C]
0x4A5F5A: mov     edx, [ecx]
0x4A5F5C: fstp    [esp+3Ch+var_2C]
0x4A5F60: mov     eax, [edx+138h]
0x4A5F66: call    eax
0x4A5F68: fcomp   [esp+3Ch+var_2C]
0x4A5F6C: fnstsw  ax
0x4A5F6E: test    ah, 41h
0x4A5F71: jz      def_4A5DB4
0x4A5F77: cmp     byte ptr [esp+3Ch+arg_10], 0
0x4A5F7C: jz      short loc_4A5F95
0x4A5F7E: push    esi
0x4A5F7F: push    6
0x4A5F81: lea     ecx, [esp+44h+var_20]
0x4A5F85: push    ecx
0x4A5F86: mov     ecx, edi
0x4A5F88: call    sub_4CC1A0
0x4A5F8D: fmul    [esp+3Ch+var_24]
0x4A5F91: fstp    [esp+3Ch+var_24]
0x4A5F95: fld     [esp+3Ch+var_24]
0x4A5F99: pop     edi
0x4A5F9A: pop     esi
0x4A5F9B: pop     ebx
0x4A5F9C: add     esp, 30h
0x4A5F9F: retn    14h
