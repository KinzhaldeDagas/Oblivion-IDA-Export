0x6D1CD0: push    0FFFFFFFFh
0x6D1CD2: push    offset SEH_6D1CD0
0x6D1CD7: mov     eax, large fs:0
0x6D1CDD: push    eax
0x6D1CDE: sub     esp, 18h
0x6D1CE1: push    ebp
0x6D1CE2: push    esi
0x6D1CE3: push    edi
0x6D1CE4: mov     eax, ds:0B30AACh
0x6D1CE9: xor     eax, esp
0x6D1CEB: push    eax
0x6D1CEC: lea     eax, [esp+34h+var_C]
0x6D1CF0: mov     large fs:0, eax
0x6D1CF6: mov     ebp, ecx
0x6D1CF8: mov     [esp+34h+var_1C], ebp
0x6D1CFC: mov     esi, [esp+34h+arg_0]
0x6D1D00: push    esi
0x6D1D01: call    sub_6ECB70
0x6D1D06: mov     eax, [esi+21Ch]
0x6D1D0C: push    1
0x6D1D0E: lea     ecx, [esp+38h+arg_0]
0x6D1D12: push    ecx
0x6D1D13: push    4
0x6D1D15: lea     edx, [ebp+54h]
0x6D1D18: push    edx
0x6D1D19: push    eax
0x6D1D1A: mov     eax, [eax+4]
0x6D1D1D: mov     [esp+48h+arg_0], 4
0x6D1D25: call    eax
0x6D1D27: add     esp, 14h
0x6D1D2A: cmp     dword ptr [esi+0D8h], 0A010068h
0x6D1D34: jnb     loc_6D1F41
0x6D1D3A: mov     eax, [esi+21Ch]
0x6D1D40: push    1
0x6D1D42: lea     ecx, [esp+38h+arg_0]
0x6D1D46: push    ecx
0x6D1D47: push    4
0x6D1D49: lea     edx, [esp+40h+var_20]
0x6D1D4D: push    edx
0x6D1D4E: push    eax
0x6D1D4F: mov     eax, [eax+4]
0x6D1D52: mov     [esp+48h+arg_0], 4
0x6D1D5A: call    eax
0x6D1D5C: mov     eax, [esi+21Ch]
0x6D1D62: push    1
0x6D1D64: lea     ecx, [esp+4Ch+var_18]
0x6D1D68: push    ecx
0x6D1D69: push    4
0x6D1D6B: lea     edx, [esp+54h+var_14]
0x6D1D6F: push    edx
0x6D1D70: push    eax
0x6D1D71: mov     eax, [eax+4]
0x6D1D74: mov     [esp+5Ch+var_18], 4
0x6D1D7C: call    eax
0x6D1D7E: add     esp, 28h
0x6D1D81: mov     ecx, esi
0x6D1D83: call    sub_712AE0
0x6D1D88: push    18h; Size
0x6D1D8A: mov     esi, eax
0x6D1D8C: call    FormHeapAlloc
0x6D1D91: mov     edi, eax
0x6D1D93: add     esp, 4
0x6D1D96: mov     [esp+34h+arg_0], edi
0x6D1D9A: xor     eax, eax
0x6D1D9C: cmp     edi, eax
0x6D1D9E: mov     [esp+34h+var_4], eax
0x6D1DA2: jz      short loc_6D1DC5
0x6D1DA4: mov     ecx, edi
0x6D1DA6: call    NiObject_constr
0x6D1DAB: xor     eax, eax
0x6D1DAD: mov     dword ptr [edi], offset ??_7NiFloatData@@6B@; const NiFloatData::`vftable'
0x6D1DB3: mov     [edi+8], eax
0x6D1DB6: mov     [edi+0Ch], eax
0x6D1DB9: mov     [edi+10h], eax
0x6D1DBC: mov     [edi+14h], al
0x6D1DBF: mov     [esp+34h+var_24], edi
0x6D1DC3: jmp     short loc_6D1DC9
0x6D1DC5: mov     [esp+34h+var_24], eax
0x6D1DC9: test    esi, esi
0x6D1DCB: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6D1DD3: jbe     loc_6D1EB6
0x6D1DD9: xor     ecx, ecx
0x6D1DDB: lea     ebp, [esi+1]
0x6D1DDE: mov     eax, ebp
0x6D1DE0: mov     edx, 8
0x6D1DE5: mul     edx
0x6D1DE7: seto    cl
0x6D1DEA: neg     ecx
0x6D1DEC: or      ecx, eax
0x6D1DEE: xor     eax, eax
0x6D1DF0: add     ecx, 4
0x6D1DF3: setb    al
0x6D1DF6: neg     eax
0x6D1DF8: or      eax, ecx
0x6D1DFA: push    eax; Size
0x6D1DFB: call    FormHeapAlloc
0x6D1E00: add     esp, 4
0x6D1E03: mov     [esp+34h+arg_0], eax
0x6D1E07: test    eax, eax
0x6D1E09: mov     [esp+34h+var_4], 1
0x6D1E11: jz      short loc_6D1E2F
0x6D1E13: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6D1E18: push    offset sub_7616D0; a4
0x6D1E1D: push    ebp; size
0x6D1E1E: lea     edi, [eax+4]
0x6D1E21: push    8; a2
0x6D1E23: push    edi; a1
0x6D1E24: mov     [eax], ebp
0x6D1E26: call    ArrayConstructor
0x6D1E2B: mov     ecx, edi
0x6D1E2D: jmp     short loc_6D1E31
0x6D1E2F: xor     ecx, ecx
0x6D1E31: fld     [esp+34h+var_20]
0x6D1E35: xor     eax, eax
0x6D1E37: test    esi, esi
0x6D1E39: fstp    [esp+34h+arg_0]
0x6D1E3D: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6D1E45: jbe     short loc_6D1E75
0x6D1E47: fld     [esp+34h+arg_0]
0x6D1E4B: mov     edx, eax
0x6D1E4D: test    edx, edx
0x6D1E4F: fst     dword ptr [ecx+eax*8]
0x6D1E52: mov     [esp+34h+arg_0], edx
0x6D1E56: fild    [esp+34h+arg_0]
0x6D1E5A: jge     short loc_6D1E62
0x6D1E5C: fadd    dword ptr ds:0A2FC78h
0x6D1E62: fstp    dword ptr [ecx+eax*8+4]
0x6D1E66: add     eax, 1
0x6D1E69: cmp     eax, esi
0x6D1E6B: fadd    [esp+34h+var_14]
0x6D1E6F: fstp    [esp+34h+arg_0]
0x6D1E73: jb      short loc_6D1E47
0x6D1E75: fld     [esp+34h+arg_0]
0x6D1E79: lea     eax, [esi-1]
0x6D1E7C: test    eax, eax
0x6D1E7E: fstp    dword ptr [ecx+esi*8]
0x6D1E81: mov     [esp+34h+var_10], eax
0x6D1E85: fild    [esp+34h+var_10]
0x6D1E89: jge     short loc_6D1E91
0x6D1E8B: fadd    dword ptr ds:0A2FC78h
0x6D1E91: push    5
0x6D1E93: fstp    dword ptr [ecx+esi*8+4]
0x6D1E97: push    ebp
0x6D1E98: push    ecx
0x6D1E99: mov     ecx, [esp+40h+var_24]
0x6D1E9D: call    sub_6E3540
0x6D1EA2: fld     [esp+34h+var_20]
0x6D1EA6: mov     eax, [esp+34h+var_1C]
0x6D1EAA: fstp    dword ptr [eax+14h]
0x6D1EAD: mov     ebp, eax
0x6D1EAF: fld     [esp+34h+arg_0]
0x6D1EB3: fstp    dword ptr [eax+18h]
0x6D1EB6: push    18h; Size
0x6D1EB8: call    FormHeapAlloc
0x6D1EBD: add     esp, 4
0x6D1EC0: mov     [esp+34h+arg_0], eax
0x6D1EC4: test    eax, eax
0x6D1EC6: mov     [esp+34h+var_4], 2
0x6D1ECE: jz      short loc_6D1EE0
0x6D1ED0: mov     ecx, [esp+34h+var_24]
0x6D1ED4: push    ecx
0x6D1ED5: mov     ecx, eax
0x6D1ED7: call    sub_6D2990
0x6D1EDC: mov     edi, eax
0x6D1EDE: jmp     short loc_6D1EE2
0x6D1EE0: xor     edi, edi
0x6D1EE2: mov     esi, [ebp+3Ch]
0x6D1EE5: cmp     esi, edi
0x6D1EE7: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6D1EEF: jz      short loc_6D1F22
0x6D1EF1: test    esi, esi
0x6D1EF3: jz      short loc_6D1F11
0x6D1EF5: lea     edx, [esi+4]
0x6D1EF8: push    edx; lpAddend
0x6D1EF9: call    dword ptr ds:0A2807Ch
0x6D1EFF: test    eax, eax
0x6D1F01: jnz     short loc_6D1F11
0x6D1F03: test    esi, esi
0x6D1F05: jz      short loc_6D1F11
0x6D1F07: mov     eax, [esi]
0x6D1F09: mov     edx, [eax]
0x6D1F0B: push    1
0x6D1F0D: mov     ecx, esi
0x6D1F0F: call    edx
0x6D1F11: test    edi, edi
0x6D1F13: mov     [ebp+3Ch], edi
0x6D1F16: jz      short loc_6D1F22
0x6D1F18: add     edi, 4
0x6D1F1B: push    edi; lpAddend
0x6D1F1C: call    dword ptr ds:0A28078h
0x6D1F22: mov     ecx, [ebp+3Ch]
0x6D1F25: mov     eax, [ecx]
0x6D1F27: mov     edx, [eax+7Ch]
0x6D1F2A: call    edx
0x6D1F2C: mov     ecx, [esp+34h+var_C]
0x6D1F30: mov     large fs:0, ecx
0x6D1F37: pop     ecx
0x6D1F38: pop     edi
0x6D1F39: pop     esi
0x6D1F3A: pop     ebp
0x6D1F3B: add     esp, 24h
0x6D1F3E: retn    4
0x6D1F41: mov     ecx, esi
0x6D1F43: call    sub_712AE0
0x6D1F48: mov     ecx, [esp+34h+var_C]
0x6D1F4C: mov     large fs:0, ecx
0x6D1F53: pop     ecx
0x6D1F54: pop     edi
0x6D1F55: pop     esi
0x6D1F56: pop     ebp
0x6D1F57: add     esp, 24h
0x6D1F5A: retn    4
