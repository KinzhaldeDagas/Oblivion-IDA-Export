0x8A5C10: push    ebp
0x8A5C11: mov     ebp, esp
0x8A5C13: and     esp, 0FFFFFFF0h
0x8A5C16: push    0FFFFFFFFh
0x8A5C18: push    offset SEH_8A5C10
0x8A5C1D: mov     eax, large fs:0
0x8A5C23: push    eax
0x8A5C24: sub     esp, 1A8h
0x8A5C2A: mov     eax, ds:0B30AACh
0x8A5C2F: xor     eax, esp
0x8A5C31: mov     [esp+1B4h+var_14], eax
0x8A5C38: push    ebx
0x8A5C39: push    esi
0x8A5C3A: push    edi
0x8A5C3B: mov     eax, ds:0B30AACh
0x8A5C40: xor     eax, esp
0x8A5C42: push    eax
0x8A5C43: lea     eax, [esp+1C4h+var_C]
0x8A5C4A: mov     large fs:0, eax
0x8A5C50: mov     esi, [ebp+arg_0]
0x8A5C53: xor     ebx, ebx
0x8A5C55: push    esi
0x8A5C56: mov     [esp+1C8h+var_1B0], ecx
0x8A5C5A: mov     [esp+1C8h+var_1A4], ebx
0x8A5C5E: call    sub_8B0080
0x8A5C63: mov     eax, ds:0BA7D84h
0x8A5C68: push    eax; ArgList
0x8A5C69: call    TESOutput_PrintString
0x8A5C6E: movzx   edi, word ptr [esi+0Ah]
0x8A5C72: movzx   ecx, word ptr [esi+8]
0x8A5C76: add     esp, 4
0x8A5C79: cmp     edi, ecx
0x8A5C7B: mov     [esp+1C4h+var_1A8], eax
0x8A5C7F: jb      short loc_8A5C8F
0x8A5C81: movzx   edx, word ptr [esi+0Eh]
0x8A5C85: add     edx, edi
0x8A5C87: push    edx
0x8A5C88: mov     ecx, esi
0x8A5C8A: call    NiTArray_SetSize
0x8A5C8F: lea     eax, [esp+1C4h+var_1A8]
0x8A5C93: push    eax
0x8A5C94: push    edi
0x8A5C95: mov     ecx, esi
0x8A5C97: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5C9C: lea     ecx, [esp+1C4h+var_180]
0x8A5CA0: call    sub_8A5790
0x8A5CA5: mov     [esp+1C4h+var_4], ebx
0x8A5CAC: mov     ebx, [esp+1C4h+var_1B0]
0x8A5CB0: lea     ecx, [esp+1C4h+var_180]
0x8A5CB4: push    ecx
0x8A5CB5: mov     ecx, ebx
0x8A5CB7: call    sub_8A2DE0
0x8A5CBC: lea     edx, [esp+1C4h+var_150]
0x8A5CC0: push    edx
0x8A5CC1: lea     eax, [esp+1C8h+var_1A0]
0x8A5CC5: push    eax
0x8A5CC6: call    sub_43F3E0
0x8A5CCB: fld     [esp+1CCh+var_140]
0x8A5CD2: fstp    [esp+1CCh+var_18C]
0x8A5CD6: add     esp, 8
0x8A5CD9: fld     [esp+1C4h+var_13C]
0x8A5CE0: push    offset aPosition; "Position"
0x8A5CE5: fstp    [esp+1C8h+var_188]
0x8A5CE9: lea     ecx, [esp+1C8h+var_1A0]
0x8A5CED: fld     [esp+1C8h+var_138]
0x8A5CF4: fstp    [esp+1C8h+var_184]
0x8A5CF8: fld     [esp+1C8h+var_134]
0x8A5CFF: fstp    [esp+1C8h+var_190]
0x8A5D03: call    sub_707280
0x8A5D08: movzx   edi, word ptr [esi+0Ah]
0x8A5D0C: movzx   ecx, word ptr [esi+8]
0x8A5D10: cmp     edi, ecx
0x8A5D12: mov     [esp+1C4h+var_1B0], eax
0x8A5D16: jb      short loc_8A5D26
0x8A5D18: movzx   edx, word ptr [esi+0Eh]
0x8A5D1C: add     edx, edi
0x8A5D1E: push    edx
0x8A5D1F: mov     ecx, esi
0x8A5D21: call    NiTArray_SetSize
0x8A5D26: lea     eax, [esp+1C4h+var_1B0]
0x8A5D2A: push    eax
0x8A5D2B: push    edi
0x8A5D2C: mov     ecx, esi
0x8A5D2E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5D33: push    offset aRotation; "Rotation"
0x8A5D38: lea     ecx, [esp+1C8h+var_190]
0x8A5D3C: call    sub_7153C0
0x8A5D41: movzx   edi, word ptr [esi+0Ah]
0x8A5D45: movzx   ecx, word ptr [esi+8]
0x8A5D49: cmp     edi, ecx
0x8A5D4B: mov     [esp+1C4h+var_1B0], eax
0x8A5D4F: jb      short loc_8A5D5F
0x8A5D51: movzx   edx, word ptr [esi+0Eh]
0x8A5D55: add     edx, edi
0x8A5D57: push    edx
0x8A5D58: mov     ecx, esi
0x8A5D5A: call    NiTArray_SetSize
0x8A5D5F: lea     eax, [esp+1C4h+var_1B0]
0x8A5D63: push    eax
0x8A5D64: push    edi
0x8A5D65: mov     ecx, esi
0x8A5D67: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5D6C: lea     ecx, [esp+1C4h+var_E0]
0x8A5D73: push    ecx
0x8A5D74: lea     edx, [esp+1C8h+var_1A0]
0x8A5D78: push    edx
0x8A5D79: call    sub_43F3E0
0x8A5D7E: add     esp, 8
0x8A5D81: push    offset off_A97548; ArgList
0x8A5D86: lea     ecx, [esp+1C8h+var_1A0]
0x8A5D8A: call    sub_707280
0x8A5D8F: movzx   edi, word ptr [esi+0Ah]
0x8A5D93: mov     [esp+1C4h+var_1B0], eax
0x8A5D97: movzx   eax, word ptr [esi+8]
0x8A5D9B: cmp     edi, eax
0x8A5D9D: jb      short loc_8A5DAD
0x8A5D9F: movzx   ecx, word ptr [esi+0Eh]
0x8A5DA3: add     ecx, edi
0x8A5DA5: push    ecx
0x8A5DA6: mov     ecx, esi
0x8A5DA8: call    NiTArray_SetSize
0x8A5DAD: lea     edx, [esp+1C4h+var_1B0]
0x8A5DB1: push    edx
0x8A5DB2: push    edi
0x8A5DB3: mov     ecx, esi
0x8A5DB5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5DBA: fld     [esp+1C4h+var_D0]
0x8A5DC1: push    ecx
0x8A5DC2: fstp    [esp+1C8h+var_1C8]; float
0x8A5DC5: push    offset aMass; "MASS"
0x8A5DCA: call    TESOutput_PrintLabeledFloat
0x8A5DCF: movzx   edi, word ptr [esi+0Ah]
0x8A5DD3: mov     [esp+1CCh+var_1B0], eax
0x8A5DD7: movzx   eax, word ptr [esi+8]
0x8A5DDB: add     esp, 8
0x8A5DDE: cmp     edi, eax
0x8A5DE0: jb      short loc_8A5DF0
0x8A5DE2: movzx   ecx, word ptr [esi+0Eh]
0x8A5DE6: add     ecx, edi
0x8A5DE8: push    ecx
0x8A5DE9: mov     ecx, esi
0x8A5DEB: call    NiTArray_SetSize
0x8A5DF0: lea     edx, [esp+1C4h+var_1B0]
0x8A5DF4: push    edx
0x8A5DF5: push    edi
0x8A5DF6: mov     ecx, esi
0x8A5DF8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5DFD: fld     [esp+1C4h+var_CC]
0x8A5E04: push    ecx
0x8A5E05: fstp    [esp+1C8h+var_1C8]; float
0x8A5E08: push    offset aLindamp; "LINDAMP"
0x8A5E0D: call    TESOutput_PrintLabeledFloat
0x8A5E12: movzx   edi, word ptr [esi+0Ah]
0x8A5E16: mov     [esp+1CCh+var_1B0], eax
0x8A5E1A: movzx   eax, word ptr [esi+8]
0x8A5E1E: add     esp, 8
0x8A5E21: cmp     edi, eax
0x8A5E23: jb      short loc_8A5E33
0x8A5E25: movzx   ecx, word ptr [esi+0Eh]
0x8A5E29: add     ecx, edi
0x8A5E2B: push    ecx
0x8A5E2C: mov     ecx, esi
0x8A5E2E: call    NiTArray_SetSize
0x8A5E33: lea     edx, [esp+1C4h+var_1B0]
0x8A5E37: push    edx
0x8A5E38: push    edi
0x8A5E39: mov     ecx, esi
0x8A5E3B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5E40: fld     [esp+1C4h+var_C8]
0x8A5E47: push    ecx
0x8A5E48: fstp    [esp+1C8h+var_1C8]; float
0x8A5E4B: push    offset aAngdamp; "ANGDAMP"
0x8A5E50: call    TESOutput_PrintLabeledFloat
0x8A5E55: movzx   edi, word ptr [esi+0Ah]
0x8A5E59: mov     [esp+1CCh+var_1B0], eax
0x8A5E5D: movzx   eax, word ptr [esi+8]
0x8A5E61: add     esp, 8
0x8A5E64: cmp     edi, eax
0x8A5E66: jb      short loc_8A5E76
0x8A5E68: movzx   ecx, word ptr [esi+0Eh]
0x8A5E6C: add     ecx, edi
0x8A5E6E: push    ecx
0x8A5E6F: mov     ecx, esi
0x8A5E71: call    NiTArray_SetSize
0x8A5E76: lea     edx, [esp+1C4h+var_1B0]
0x8A5E7A: push    edx
0x8A5E7B: push    edi
0x8A5E7C: mov     ecx, esi
0x8A5E7E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5E83: fld     [esp+1C4h+var_C4]
0x8A5E8A: push    ecx
0x8A5E8B: fstp    [esp+1C8h+var_1C8]; float
0x8A5E8E: push    offset aFriction; "FRICTION"
0x8A5E93: call    TESOutput_PrintLabeledFloat
0x8A5E98: movzx   edi, word ptr [esi+0Ah]
0x8A5E9C: mov     [esp+1CCh+var_1B0], eax
0x8A5EA0: movzx   eax, word ptr [esi+8]
0x8A5EA4: add     esp, 8
0x8A5EA7: cmp     edi, eax
0x8A5EA9: jb      short loc_8A5EB9
0x8A5EAB: movzx   ecx, word ptr [esi+0Eh]
0x8A5EAF: add     ecx, edi
0x8A5EB1: push    ecx
0x8A5EB2: mov     ecx, esi
0x8A5EB4: call    NiTArray_SetSize
0x8A5EB9: lea     edx, [esp+1C4h+var_1B0]
0x8A5EBD: push    edx
0x8A5EBE: push    edi
0x8A5EBF: mov     ecx, esi
0x8A5EC1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5EC6: fld     [esp+1C4h+var_C0]
0x8A5ECD: push    ecx
0x8A5ECE: fstp    [esp+1C8h+var_1C8]; float
0x8A5ED1: push    offset aRest; "REST"
0x8A5ED6: call    TESOutput_PrintLabeledFloat
0x8A5EDB: movzx   edi, word ptr [esi+0Ah]
0x8A5EDF: mov     [esp+1CCh+var_1B0], eax
0x8A5EE3: movzx   eax, word ptr [esi+8]
0x8A5EE7: add     esp, 8
0x8A5EEA: cmp     edi, eax
0x8A5EEC: jb      short loc_8A5EFC
0x8A5EEE: movzx   ecx, word ptr [esi+0Eh]
0x8A5EF2: add     ecx, edi
0x8A5EF4: push    ecx
0x8A5EF5: mov     ecx, esi
0x8A5EF7: call    NiTArray_SetSize
0x8A5EFC: lea     edx, [esp+1C4h+var_1B0]
0x8A5F00: push    edx
0x8A5F01: push    edi
0x8A5F02: mov     ecx, esi
0x8A5F04: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5F09: movsx   eax, [esp+1C4h+var_B0]
0x8A5F11: push    eax
0x8A5F12: push    esi
0x8A5F13: call    sub_8A5280
0x8A5F18: add     esp, 4
0x8A5F1B: fld     [esp+1C8h+var_BC]
0x8A5F22: fstp    [esp+1C8h+var_1C8]; float
0x8A5F25: push    offset aMaxlinvel; "MAXLINVEL"
0x8A5F2A: call    TESOutput_PrintLabeledFloat
0x8A5F2F: movzx   edi, word ptr [esi+0Ah]
0x8A5F33: movzx   ecx, word ptr [esi+8]
0x8A5F37: add     esp, 8
0x8A5F3A: cmp     edi, ecx
0x8A5F3C: mov     [esp+1C4h+var_1B0], eax
0x8A5F40: jb      short loc_8A5F50
0x8A5F42: movzx   edx, word ptr [esi+0Eh]
0x8A5F46: add     edx, edi
0x8A5F48: push    edx
0x8A5F49: mov     ecx, esi
0x8A5F4B: call    NiTArray_SetSize
0x8A5F50: lea     eax, [esp+1C4h+var_1B0]
0x8A5F54: push    eax
0x8A5F55: push    edi
0x8A5F56: mov     ecx, esi
0x8A5F58: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5F5D: fld     [esp+1C4h+var_B8]
0x8A5F64: push    ecx
0x8A5F65: fstp    [esp+1C8h+var_1C8]; float
0x8A5F68: push    offset aMaxangvel; "MAXANGVEL"
0x8A5F6D: call    TESOutput_PrintLabeledFloat
0x8A5F72: movzx   edi, word ptr [esi+0Ah]
0x8A5F76: movzx   ecx, word ptr [esi+8]
0x8A5F7A: add     esp, 8
0x8A5F7D: cmp     edi, ecx
0x8A5F7F: mov     [esp+1C4h+var_1B0], eax
0x8A5F83: jb      short loc_8A5F93
0x8A5F85: movzx   edx, word ptr [esi+0Eh]
0x8A5F89: add     edx, edi
0x8A5F8B: push    edx
0x8A5F8C: mov     ecx, esi
0x8A5F8E: call    NiTArray_SetSize
0x8A5F93: lea     eax, [esp+1C4h+var_1B0]
0x8A5F97: push    eax
0x8A5F98: push    edi
0x8A5F99: mov     ecx, esi
0x8A5F9B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5FA0: lea     ecx, [esp+1C4h+var_130]
0x8A5FA7: push    ecx
0x8A5FA8: lea     edx, [esp+1C8h+var_1A0]
0x8A5FAC: push    edx
0x8A5FAD: call    sub_43F3E0
0x8A5FB2: add     esp, 8
0x8A5FB5: push    offset aLinvel; "LinVel"
0x8A5FBA: lea     ecx, [esp+1C8h+var_1A0]
0x8A5FBE: call    sub_707280
0x8A5FC3: movzx   edi, word ptr [esi+0Ah]
0x8A5FC7: mov     [esp+1C4h+var_1B0], eax
0x8A5FCB: movzx   eax, word ptr [esi+8]
0x8A5FCF: cmp     edi, eax
0x8A5FD1: jb      short loc_8A5FE1
0x8A5FD3: movzx   ecx, word ptr [esi+0Eh]
0x8A5FD7: add     ecx, edi
0x8A5FD9: push    ecx
0x8A5FDA: mov     ecx, esi
0x8A5FDC: call    NiTArray_SetSize
0x8A5FE1: lea     edx, [esp+1C4h+var_1B0]
0x8A5FE5: push    edx
0x8A5FE6: push    edi
0x8A5FE7: mov     ecx, esi
0x8A5FE9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5FEE: lea     eax, [esp+1C4h+var_120]
0x8A5FF5: push    eax
0x8A5FF6: lea     ecx, [esp+1C8h+var_1A0]
0x8A5FFA: push    ecx
0x8A5FFB: call    sub_43F3E0
0x8A6000: add     esp, 8
0x8A6003: push    offset aAngvel; "AngVel"
0x8A6008: lea     ecx, [esp+1C8h+var_1A0]
0x8A600C: call    sub_707280
0x8A6011: movzx   edi, word ptr [esi+0Ah]
0x8A6015: movzx   edx, word ptr [esi+8]
0x8A6019: cmp     edi, edx
0x8A601B: mov     [esp+1C4h+var_1B0], eax
0x8A601F: jb      short loc_8A602F
0x8A6021: movzx   eax, word ptr [esi+0Eh]
0x8A6025: add     eax, edi
0x8A6027: push    eax
0x8A6028: mov     ecx, esi
0x8A602A: call    NiTArray_SetSize
0x8A602F: lea     ecx, [esp+1C4h+var_1B0]
0x8A6033: push    ecx
0x8A6034: push    edi
0x8A6035: mov     ecx, esi
0x8A6037: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A603C: fld     [esp+1C4h+var_B4]
0x8A6043: push    ecx
0x8A6044: fstp    [esp+1C8h+var_1C8]; float
0x8A6047: push    offset aPendepth; "PENDEPTH"
0x8A604C: call    TESOutput_PrintLabeledFloat
0x8A6051: movzx   edi, word ptr [esi+0Ah]
0x8A6055: movzx   edx, word ptr [esi+8]
0x8A6059: add     esp, 8
0x8A605C: cmp     edi, edx
0x8A605E: mov     [esp+1C4h+var_1B0], eax
0x8A6062: jb      short loc_8A6072
0x8A6064: movzx   eax, word ptr [esi+0Eh]
0x8A6068: add     eax, edi
0x8A606A: push    eax
0x8A606B: mov     ecx, esi
0x8A606D: call    NiTArray_SetSize
0x8A6072: lea     ecx, [esp+1C4h+var_1B0]
0x8A6076: push    ecx
0x8A6077: push    edi
0x8A6078: mov     ecx, esi
0x8A607A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A607F: lea     ecx, [esp+1C4h+var_180]
0x8A6083: call    sub_8A3200
0x8A6088: push    eax; int
0x8A6089: push    offset aQualitytype; "QUALITYTYPE"
0x8A608E: call    TESOutput_PrintLabeledString
0x8A6093: movzx   edi, word ptr [esi+0Ah]
0x8A6097: movzx   edx, word ptr [esi+8]
0x8A609B: add     esp, 8
0x8A609E: cmp     edi, edx
0x8A60A0: mov     [esp+1C4h+var_1B0], eax
0x8A60A4: jb      short loc_8A60B4
0x8A60A6: movzx   eax, word ptr [esi+0Eh]
0x8A60AA: add     eax, edi
0x8A60AC: push    eax
0x8A60AD: mov     ecx, esi
0x8A60AF: call    NiTArray_SetSize
0x8A60B4: lea     ecx, [esp+1C4h+var_1B0]
0x8A60B8: push    ecx
0x8A60B9: push    edi
0x8A60BA: mov     ecx, esi
0x8A60BC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A60C1: mov     ecx, ebx
0x8A60C3: call    sub_8A4740
0x8A60C8: push    eax; int
0x8A60C9: push    offset aActconcount; "ACTCONCOUNT"
0x8A60CE: call    TESOutput_PrintLabeledUnsignedInt
0x8A60D3: movzx   edi, word ptr [esi+0Ah]
0x8A60D7: movzx   edx, word ptr [esi+8]
0x8A60DB: add     esp, 8
0x8A60DE: cmp     edi, edx
0x8A60E0: mov     [esp+1C4h+var_1B0], eax
0x8A60E4: jb      short loc_8A60F4
0x8A60E6: movzx   eax, word ptr [esi+0Eh]
0x8A60EA: add     eax, edi
0x8A60EC: push    eax
0x8A60ED: mov     ecx, esi
0x8A60EF: call    NiTArray_SetSize
0x8A60F4: lea     ecx, [esp+1C4h+var_1B0]
0x8A60F8: push    ecx
0x8A60F9: push    edi
0x8A60FA: mov     ecx, esi
0x8A60FC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A6101: add     ebx, 10h
0x8A6104: mov     [esp+1C4h+var_1A8], ebx
0x8A6108: test    ebx, ebx
0x8A610A: jz      short loc_8A6127
0x8A610C: lea     edx, [esp+1C4h+var_1B0]
0x8A6110: push    edx
0x8A6111: mov     ecx, ebx
0x8A6113: call    sub_677C70
0x8A6118: or      [esp+1C4h+var_1A4], 1
0x8A611D: cmp     dword ptr [eax], 0
0x8A6120: mov     [esp+1C4h+var_1A9], 1
0x8A6125: jnz     short loc_8A612C
0x8A6127: mov     [esp+1C4h+var_1A9], 0
0x8A612C: test    byte ptr [esp+1C4h+var_1A4], 1
0x8A6131: jz      short loc_8A615C
0x8A6133: mov     edi, [esp+1C4h+var_1B0]
0x8A6137: and     [esp+1C4h+var_1A4], 0FFFFFFFEh
0x8A613C: test    edi, edi
0x8A613E: jz      short loc_8A615C
0x8A6140: lea     eax, [edi+4]
0x8A6143: push    eax; lpAddend
0x8A6144: call    dword ptr ds:0A2807Ch
0x8A614A: test    eax, eax
0x8A614C: jnz     short loc_8A615C
0x8A614E: test    edi, edi
0x8A6150: jz      short loc_8A615C
0x8A6152: mov     edx, [edi]
0x8A6154: mov     eax, [edx]
0x8A6156: push    1
0x8A6158: mov     ecx, edi
0x8A615A: call    eax
0x8A615C: cmp     [esp+1C4h+var_1A9], 0
0x8A6161: jz      loc_8A6240
0x8A6167: lea     ecx, [esp+1C4h+var_194]
0x8A616B: push    ecx
0x8A616C: mov     ecx, ebx
0x8A616E: call    sub_677C70
0x8A6173: mov     edi, [eax]
0x8A6175: mov     eax, [esp+1C4h+var_194]
0x8A6179: test    eax, eax
0x8A617B: jz      short loc_8A619B
0x8A617D: mov     ebx, eax
0x8A617F: add     eax, 4
0x8A6182: push    eax; lpAddend
0x8A6183: call    dword ptr ds:0A2807Ch
0x8A6189: test    eax, eax
0x8A618B: jnz     short loc_8A619B
0x8A618D: test    ebx, ebx
0x8A618F: jz      short loc_8A619B
0x8A6191: mov     edx, [ebx]
0x8A6193: mov     eax, [edx]
0x8A6195: push    1
0x8A6197: mov     ecx, ebx
0x8A6199: call    eax
0x8A619B: mov     edx, [edi]
0x8A619D: mov     eax, [edx+4]
0x8A61A0: mov     ecx, edi
0x8A61A2: call    eax
0x8A61A4: mov     ecx, [eax]
0x8A61A6: push    edi
0x8A61A7: push    ecx
0x8A61A8: lea     edx, [esp+1CCh+var_98]
0x8A61AF: push    offset aS0x8x; "%s: 0x%8X"
0x8A61B4: push    edx
0x8A61B5: call    __sprintf
0x8A61BA: lea     eax, [esp+1D4h+var_98]
0x8A61C1: push    eax; int
0x8A61C2: push    offset aActcon; "ACTCON"
0x8A61C7: call    TESOutput_PrintLabeledString
0x8A61CC: movzx   edi, word ptr [esi+0Ah]
0x8A61D0: movzx   ecx, word ptr [esi+8]
0x8A61D4: add     esp, 18h
0x8A61D7: cmp     edi, ecx
0x8A61D9: mov     ebx, eax
0x8A61DB: jb      short loc_8A61EB
0x8A61DD: movzx   edx, word ptr [esi+0Eh]
0x8A61E1: add     edx, edi
0x8A61E3: push    edx
0x8A61E4: mov     ecx, esi
0x8A61E6: call    NiTArray_SetSize
0x8A61EB: movzx   eax, word ptr [esi+0Ah]
0x8A61EF: cmp     edi, eax
0x8A61F1: jb      short loc_8A6205
0x8A61F3: test    ebx, ebx
0x8A61F5: lea     ecx, [edi+1]
0x8A61F8: mov     [esi+0Ah], cx
0x8A61FC: jz      short loc_8A6228
0x8A61FE: add     word ptr [esi+0Ch], 1
0x8A6203: jmp     short loc_8A6228
0x8A6205: test    ebx, ebx
0x8A6207: jz      short loc_8A6219
0x8A6209: mov     edx, [esi+4]
0x8A620C: cmp     dword ptr [edx+edi*4], 0
0x8A6210: jnz     short loc_8A6228
0x8A6212: add     word ptr [esi+0Ch], 1
0x8A6217: jmp     short loc_8A6228
0x8A6219: mov     eax, [esi+4]
0x8A621C: cmp     dword ptr [eax+edi*4], 0
0x8A6220: jz      short loc_8A6228
0x8A6222: add     word ptr [esi+0Ch], 0FFFFh
0x8A6228: mov     ecx, [esi+4]
0x8A622B: mov     edx, [esp+1C4h+var_1A8]
0x8A622F: mov     [ecx+edi*4], ebx
0x8A6232: mov     eax, [edx+4]
0x8A6235: mov     [esp+1C4h+var_1A8], eax
0x8A6239: mov     ebx, eax
0x8A623B: jmp     loc_8A6108
0x8A6240: mov     eax, [esp+1C4h+var_16C]
0x8A6244: test    eax, eax
0x8A6246: mov     [esp+1C4h+var_4], 0FFFFFFFFh
0x8A6251: js      short loc_8A628B
0x8A6253: mov     ecx, ds:0BA9DE4h
0x8A6259: mov     edx, large fs:2Ch
0x8A6260: mov     ecx, [edx+ecx*4]
0x8A6263: mov     ecx, [ecx+19Ch]
0x8A6269: test    ecx, ecx
0x8A626B: jnz     short loc_8A6273
0x8A626D: mov     ecx, ds:0BA7D9Ch
0x8A6273: mov     edx, [esp+1C4h+var_174]
0x8A6277: and     eax, 3FFFFFFFh
0x8A627C: add     eax, eax
0x8A627E: add     eax, eax
0x8A6280: push    14h
0x8A6282: add     eax, eax
0x8A6284: push    eax
0x8A6285: push    edx
0x8A6286: call    sub_8A75D0
0x8A628B: mov     ecx, dword ptr [esp+1C4h+var_C]
0x8A6292: mov     large fs:0, ecx
0x8A6299: pop     ecx
0x8A629A: pop     edi
0x8A629B: pop     esi
0x8A629C: pop     ebx
0x8A629D: mov     ecx, [esp+1B4h+var_14]
0x8A62A4: xor     ecx, esp
0x8A62A6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A62AB: mov     esp, ebp
0x8A62AD: pop     ebp
0x8A62AE: retn    4
