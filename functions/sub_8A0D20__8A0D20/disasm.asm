0x8A0D20: sub     esp, 28h
0x8A0D23: mov     eax, ds:0B30AACh
0x8A0D28: xor     eax, esp
0x8A0D2A: mov     [esp+28h+var_4], eax
0x8A0D2E: push    ebx
0x8A0D2F: push    esi
0x8A0D30: mov     esi, [esp+30h+arg_0]
0x8A0D34: push    edi
0x8A0D35: mov     edi, ecx
0x8A0D37: cmp     dword ptr [edi+4], 0
0x8A0D3B: jz      short loc_8A0D86
0x8A0D3D: mov     ecx, [edi+4]
0x8A0D40: mov     eax, [ecx]
0x8A0D42: mov     edx, [eax+0Ch]
0x8A0D45: call    edx
0x8A0D47: push    eax
0x8A0D48: call    sub_8E7D80
0x8A0D4D: push    eax; int
0x8A0D4E: push    offset aType; "Type"
0x8A0D53: call    TESOutput_PrintLabeledString
0x8A0D58: movzx   ebx, word ptr [esi+0Ah]
0x8A0D5C: mov     [esp+40h+var_28], eax
0x8A0D60: movzx   eax, word ptr [esi+8]
0x8A0D64: add     esp, 0Ch
0x8A0D67: cmp     ebx, eax
0x8A0D69: jb      short loc_8A0D79
0x8A0D6B: movzx   ecx, word ptr [esi+0Eh]
0x8A0D6F: add     ecx, ebx
0x8A0D71: push    ecx
0x8A0D72: mov     ecx, esi
0x8A0D74: call    NiTArray_SetSize
0x8A0D79: lea     edx, [esp+34h+var_28]
0x8A0D7D: push    edx
0x8A0D7E: push    ebx
0x8A0D7F: mov     ecx, esi
0x8A0D81: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A0D86: mov     eax, [edi+0Ch]
0x8A0D89: push    eax
0x8A0D8A: lea     ecx, [esp+38h+var_24]
0x8A0D8E: push    offset a0x8x; "0x%8X"
0x8A0D93: push    ecx
0x8A0D94: call    __sprintf
0x8A0D99: lea     edx, [esp+40h+var_24]
0x8A0D9D: push    edx; int
0x8A0D9E: push    offset aHkentitya; "hkEntityA"
0x8A0DA3: call    TESOutput_PrintLabeledString
0x8A0DA8: movzx   ebx, word ptr [esi+0Ah]
0x8A0DAC: mov     [esp+48h+var_28], eax
0x8A0DB0: movzx   eax, word ptr [esi+8]
0x8A0DB4: add     esp, 14h
0x8A0DB7: cmp     ebx, eax
0x8A0DB9: jb      short loc_8A0DC9
0x8A0DBB: movzx   ecx, word ptr [esi+0Eh]
0x8A0DBF: add     ecx, ebx
0x8A0DC1: push    ecx
0x8A0DC2: mov     ecx, esi
0x8A0DC4: call    NiTArray_SetSize
0x8A0DC9: lea     edx, [esp+34h+var_28]
0x8A0DCD: push    edx
0x8A0DCE: push    ebx
0x8A0DCF: mov     ecx, esi
0x8A0DD1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A0DD6: mov     eax, [edi+10h]
0x8A0DD9: push    eax
0x8A0DDA: lea     ecx, [esp+38h+var_24]
0x8A0DDE: push    offset a0x8x; "0x%8X"
0x8A0DE3: push    ecx
0x8A0DE4: call    __sprintf
0x8A0DE9: lea     edx, [esp+40h+var_24]
0x8A0DED: push    edx; int
0x8A0DEE: push    offset aHkentityb; "hkEntityB"
0x8A0DF3: call    TESOutput_PrintLabeledString
0x8A0DF8: movzx   ebx, word ptr [esi+0Ah]
0x8A0DFC: mov     [esp+48h+var_28], eax
0x8A0E00: movzx   eax, word ptr [esi+8]
0x8A0E04: add     esp, 14h
0x8A0E07: cmp     ebx, eax
0x8A0E09: jb      short loc_8A0E19
0x8A0E0B: movzx   ecx, word ptr [esi+0Eh]
0x8A0E0F: add     ecx, ebx
0x8A0E11: push    ecx
0x8A0E12: mov     ecx, esi
0x8A0E14: call    NiTArray_SetSize
0x8A0E19: lea     edx, [esp+34h+var_28]
0x8A0E1D: push    edx
0x8A0E1E: push    ebx
0x8A0E1F: mov     ecx, esi
0x8A0E21: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A0E26: mov     eax, [edi+8]
0x8A0E29: push    eax; int
0x8A0E2A: push    offset aEpriority; "ePriority"
0x8A0E2F: call    TESOutput_PrintLabeledSignedInt
0x8A0E34: movzx   edi, word ptr [esi+0Ah]
0x8A0E38: movzx   ecx, word ptr [esi+8]
0x8A0E3C: add     esp, 8
0x8A0E3F: cmp     edi, ecx
0x8A0E41: mov     [esp+34h+var_28], eax
0x8A0E45: jb      short loc_8A0E55
0x8A0E47: movzx   edx, word ptr [esi+0Eh]
0x8A0E4B: add     edx, edi
0x8A0E4D: push    edx
0x8A0E4E: mov     ecx, esi
0x8A0E50: call    NiTArray_SetSize
0x8A0E55: lea     eax, [esp+34h+var_28]
0x8A0E59: push    eax
0x8A0E5A: push    edi
0x8A0E5B: mov     ecx, esi
0x8A0E5D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A0E62: mov     ecx, [esp+34h+var_4]
0x8A0E66: pop     edi
0x8A0E67: pop     esi
0x8A0E68: pop     ebx
0x8A0E69: xor     ecx, esp
0x8A0E6B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A0E70: add     esp, 28h
0x8A0E73: retn    4
