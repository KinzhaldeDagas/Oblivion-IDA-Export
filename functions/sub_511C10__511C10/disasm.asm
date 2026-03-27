0x511C10: push    0FFFFFFFFh
0x511C12: push    offset SEH_68D380
0x511C17: mov     eax, large fs:0
0x511C1D: push    eax
0x511C1E: sub     esp, 18h
0x511C21: push    ebp
0x511C22: push    esi
0x511C23: push    edi
0x511C24: mov     eax, ds:0B30AACh
0x511C29: xor     eax, esp
0x511C2B: push    eax
0x511C2C: lea     eax, [esp+34h+var_C]
0x511C30: mov     large fs:0, eax
0x511C36: mov     esi, [esp+34h+arg_8]
0x511C3A: test    esi, esi
0x511C3C: jz      loc_511F7E
0x511C42: mov     eax, [esi]
0x511C44: fld     dword ptr ds:0A31C80h
0x511C4A: mov     edx, [eax+154h]
0x511C50: fstp    [esp+34h+var_24]
0x511C54: mov     ecx, esi
0x511C56: call    edx
0x511C58: test    eax, eax
0x511C5A: jz      short loc_511C9A
0x511C5C: mov     eax, [esi]
0x511C5E: mov     edx, [eax+154h]
0x511C64: mov     ecx, esi
0x511C66: call    edx
0x511C68: fld     dword ptr [eax+2Ch]
0x511C6B: fstp    [esp+34h+var_20]
0x511C6F: fld     [esp+34h+var_20]
0x511C73: fmul    qword ptr ds:0A2FAA0h
0x511C79: fstp    [esp+34h+var_20]
0x511C7D: fld     dword ptr ds:0A31C80h
0x511C83: fld     [esp+34h+var_20]
0x511C87: fcom    st(1)
0x511C89: fnstsw  ax
0x511C8B: fstp    st(1)
0x511C8D: test    ah, 5
0x511C90: jp      short loc_511C98
0x511C92: fstp    [esp+34h+var_24]
0x511C96: jmp     short loc_511C9A
0x511C98: fstp    st
0x511C9A: push    48h ; 'H'; Size
0x511C9C: call    FormHeapAlloc
0x511CA1: push    60h ; '`'; Size
0x511CA3: mov     edi, eax
0x511CA5: call    FormHeapAlloc
0x511CAA: mov     esi, eax
0x511CAC: add     esp, 8
0x511CAF: mov     [esp+34h+var_20], esi
0x511CB3: test    esi, esi
0x511CB5: mov     [esp+34h+var_4], 0
0x511CBD: jz      short loc_511CD0
0x511CBF: push    offset sub_47EA50
0x511CC4: push    6
0x511CC6: push    10h
0x511CC8: push    esi
0x511CC9: call    sub_401080
0x511CCE: jmp     short loc_511CD2
0x511CD0: xor     esi, esi
0x511CD2: push    6; Size
0x511CD4: mov     [esp+38h+var_4], 0FFFFFFFFh
0x511CDC: call    FormHeapAlloc
0x511CE1: fld1
0x511CE3: fst     [esp+38h+var_1C]
0x511CE7: mov     ebp, eax
0x511CE9: mov     eax, [esp+38h+var_1C]
0x511CED: fst     [esp+38h+var_18]
0x511CF1: fldz
0x511CF3: mov     ecx, [esp+38h+var_18]
0x511CF7: mov     byte ptr [ebp+0], 1
0x511CFB: fst     [esp+38h+var_14]
0x511CFF: mov     byte ptr [ebp+1], 0
0x511D03: fxch    st(1)
0x511D05: mov     edx, [esp+38h+var_14]
0x511D09: fst     [esp+38h+var_10]
0x511D0D: mov     byte ptr [ebp+2], 1
0x511D11: fst     [esp+38h+var_1C]
0x511D15: mov     byte ptr [ebp+3], 0
0x511D19: fst     [esp+38h+var_18]
0x511D1D: mov     byte ptr [ebp+4], 1
0x511D21: mov     byte ptr [ebp+5], 0
0x511D25: mov     [esi], eax
0x511D27: mov     eax, [esp+38h+var_10]
0x511D2B: fst     [esp+38h+var_10]
0x511D2F: mov     [esi+4], ecx
0x511D32: fxch    st(1)
0x511D34: mov     ecx, [esp+38h+var_1C]
0x511D38: fst     [esp+38h+var_14]
0x511D3C: mov     [esi+10h], ecx
0x511D3F: fxch    st(1)
0x511D41: mov     ecx, [esp+38h+var_10]
0x511D45: fst     [esp+38h+var_1C]
0x511D49: mov     [esi+8], edx
0x511D4C: mov     edx, [esp+38h+var_18]
0x511D50: fst     [esp+38h+var_18]
0x511D54: fst     [esp+38h+var_10]
0x511D58: mov     [esi+0Ch], eax
0x511D5B: mov     eax, [esp+38h+var_14]
0x511D5F: fxch    st(1)
0x511D61: fst     [esp+38h+var_14]
0x511D65: mov     [esi+14h], edx
0x511D68: mov     edx, [esp+38h+var_1C]
0x511D6C: fxch    st(1)
0x511D6E: fst     [esp+38h+var_1C]
0x511D72: mov     [esi+18h], eax
0x511D75: mov     eax, [esp+38h+var_18]
0x511D79: fst     [esp+38h+var_18]
0x511D7D: mov     [esi+20h], edx
0x511D80: mov     edx, [esp+38h+var_10]
0x511D84: fst     [esp+38h+var_10]
0x511D88: mov     [esi+1Ch], ecx
0x511D8B: fxch    st(1)
0x511D8D: mov     ecx, [esp+38h+var_14]
0x511D91: fst     [esp+38h+var_14]
0x511D95: mov     [esi+24h], eax
0x511D98: fxch    st(1)
0x511D9A: mov     eax, [esp+38h+var_1C]
0x511D9E: fst     [esp+38h+var_1C]
0x511DA2: mov     [esi+28h], ecx
0x511DA5: mov     ecx, [esp+38h+var_18]
0x511DA9: fst     [esp+38h+var_18]
0x511DAD: mov     [esi+30h], eax
0x511DB0: mov     eax, [esp+38h+var_10]
0x511DB4: fst     [esp+38h+var_10]
0x511DB8: mov     [esi+2Ch], edx
0x511DBB: fxch    st(1)
0x511DBD: mov     edx, [esp+38h+var_14]
0x511DC1: fst     [esp+38h+var_14]
0x511DC5: mov     [esi+34h], ecx
0x511DC8: fxch    st(1)
0x511DCA: mov     ecx, [esp+38h+var_1C]
0x511DCE: mov     [esi+38h], edx
0x511DD1: mov     edx, [esp+38h+var_18]
0x511DD5: mov     [esi+40h], ecx
0x511DD8: mov     ecx, [esp+38h+var_10]
0x511DDC: mov     [esi+3Ch], eax
0x511DDF: mov     eax, [esp+38h+var_14]
0x511DE3: mov     [esi+44h], edx
0x511DE6: mov     [esi+48h], eax
0x511DE9: mov     [esi+4Ch], ecx
0x511DEC: fst     [esp+38h+var_1C]
0x511DF0: mov     edx, [esp+38h+var_1C]
0x511DF4: fst     [esp+38h+var_18]
0x511DF8: mov     eax, [esp+38h+var_18]
0x511DFC: fstp    [esp+38h+var_10]
0x511E00: mov     [esi+50h], edx
0x511E03: mov     edx, [esp+38h+var_10]
0x511E07: fst     [esp+38h+var_14]
0x511E0B: mov     ecx, [esp+38h+var_14]
0x511E0F: fld     [esp+38h+var_24]
0x511E13: mov     [esi+54h], eax
0x511E16: fld     st
0x511E18: mov     [esi+58h], ecx
0x511E1B: fchs
0x511E1D: mov     [esi+5Ch], edx
0x511E20: fstp    [esp+38h+var_20]
0x511E24: push    0C0h ; 'À'; Size
0x511E29: fld     [esp+3Ch+var_20]
0x511E2D: fst     [esp+3Ch+var_1C]
0x511E31: mov     eax, [esp+3Ch+var_1C]
0x511E35: fxch    st(2)
0x511E37: mov     [edi], eax
0x511E39: fst     [esp+3Ch+var_18]
0x511E3D: mov     ecx, [esp+3Ch+var_18]
0x511E41: fst     [esp+3Ch+var_14]
0x511E45: mov     edx, [esp+3Ch+var_14]
0x511E49: fxch    st(1)
0x511E4B: mov     [edi+4], ecx
0x511E4E: fst     [esp+3Ch+var_1C]
0x511E52: mov     eax, [esp+3Ch+var_1C]
0x511E56: fxch    st(1)
0x511E58: mov     [edi+8], edx
0x511E5B: fst     [esp+3Ch+var_18]
0x511E5F: mov     ecx, [esp+3Ch+var_18]
0x511E63: fst     [esp+3Ch+var_14]
0x511E67: mov     edx, [esp+3Ch+var_14]
0x511E6B: fst     [esp+3Ch+var_1C]
0x511E6F: mov     [edi+0Ch], eax
0x511E72: mov     eax, [esp+3Ch+var_1C]
0x511E76: fst     [esp+3Ch+var_14]
0x511E7A: mov     [edi+10h], ecx
0x511E7D: fxch    st(2)
0x511E7F: fst     [esp+3Ch+var_18]
0x511E83: mov     ecx, [esp+3Ch+var_18]
0x511E87: mov     [edi+14h], edx
0x511E8A: fxch    st(2)
0x511E8C: mov     edx, [esp+3Ch+var_14]
0x511E90: fst     [esp+3Ch+var_1C]
0x511E94: fst     [esp+3Ch+var_14]
0x511E98: mov     [edi+18h], eax
0x511E9B: mov     eax, [esp+3Ch+var_1C]
0x511E9F: fxch    st(1)
0x511EA1: fst     [esp+3Ch+var_18]
0x511EA5: mov     [edi+1Ch], ecx
0x511EA8: mov     ecx, [esp+3Ch+var_18]
0x511EAC: fxch    st(1)
0x511EAE: fst     [esp+3Ch+var_1C]
0x511EB2: mov     [edi+20h], edx
0x511EB5: mov     edx, [esp+3Ch+var_14]
0x511EB9: fst     [esp+3Ch+var_18]
0x511EBD: mov     [edi+24h], eax
0x511EC0: fxch    st(2)
0x511EC2: mov     eax, [esp+3Ch+var_1C]
0x511EC6: fstp    [esp+3Ch+var_14]
0x511ECA: mov     [edi+28h], ecx
0x511ECD: fxch    st(1)
0x511ECF: mov     ecx, [esp+3Ch+var_18]
0x511ED3: fst     [esp+3Ch+var_1C]
0x511ED7: fstp    [esp+3Ch+var_18]
0x511EDB: mov     [edi+2Ch], edx
0x511EDE: mov     edx, [esp+3Ch+var_14]
0x511EE2: mov     [edi+30h], eax
0x511EE5: fstp    [esp+3Ch+var_14]
0x511EE9: mov     eax, [esp+3Ch+var_1C]
0x511EED: mov     [edi+34h], ecx
0x511EF0: mov     ecx, [esp+3Ch+var_18]
0x511EF4: mov     [edi+38h], edx
0x511EF7: mov     edx, [esp+3Ch+var_14]
0x511EFB: mov     [edi+3Ch], eax
0x511EFE: mov     [edi+40h], ecx
0x511F01: mov     [edi+44h], edx
0x511F04: call    FormHeapAlloc
0x511F09: add     esp, 8
0x511F0C: mov     [esp+34h+var_20], eax
0x511F10: test    eax, eax
0x511F12: mov     [esp+34h+var_4], 1
0x511F1A: jz      short loc_511F32
0x511F1C: push    ebp
0x511F1D: push    0
0x511F1F: push    1
0x511F21: push    0
0x511F23: push    esi
0x511F24: push    edi
0x511F25: push    6
0x511F27: mov     ecx, eax
0x511F29: call    sub_7177E0
0x511F2E: mov     esi, eax
0x511F30: jmp     short loc_511F34
0x511F32: xor     esi, esi
0x511F34: mov     [esp+34h+var_4], 0FFFFFFFFh
0x511F3C: call    sub_4E70B0
0x511F41: push    eax; a2
0x511F42: mov     ecx, esi; this
0x511F44: call    sub_405680
0x511F49: mov     ecx, [esp+34h+arg_8]
0x511F4D: mov     eax, [ecx]
0x511F4F: mov     edx, [eax+174h]
0x511F55: call    edx
0x511F57: fld     dword ptr ds:0A417B4h
0x511F5D: mov     ecx, [eax]
0x511F5F: mov     [esi+54h], ecx
0x511F62: mov     edx, [eax+4]
0x511F65: mov     [esi+58h], edx
0x511F68: mov     eax, [eax+8]
0x511F6B: push    ecx
0x511F6C: fstp    [esp+38h+var_38]; float
0x511F6F: mov     [esi+5Ch], eax
0x511F72: mov     ecx, ds:0B333A0h
0x511F78: push    esi; int
0x511F79: call    sub_440E60
0x511F7E: mov     al, 1
0x511F80: mov     ecx, [esp+34h+var_C]
0x511F84: mov     large fs:0, ecx
0x511F8B: pop     ecx
0x511F8C: pop     edi
0x511F8D: pop     esi
0x511F8E: pop     ebp
0x511F8F: add     esp, 24h
0x511F92: retn
