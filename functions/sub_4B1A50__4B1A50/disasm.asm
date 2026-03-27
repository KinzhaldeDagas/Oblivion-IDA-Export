0x4B1A50: push    0FFFFFFFFh
0x4B1A52: push    offset SEH_4B1A50
0x4B1A57: mov     eax, large fs:0
0x4B1A5D: push    eax
0x4B1A5E: sub     esp, 2Ch
0x4B1A61: push    ebx
0x4B1A62: push    ebp
0x4B1A63: push    esi
0x4B1A64: push    edi
0x4B1A65: mov     eax, ds:0B30AACh
0x4B1A6A: xor     eax, esp
0x4B1A6C: push    eax
0x4B1A6D: lea     eax, [esp+4Ch+var_C]
0x4B1A71: mov     large fs:0, eax
0x4B1A77: mov     edi, ecx
0x4B1A79: mov     ecx, [edi+7Ch]
0x4B1A7C: mov     esi, [esp+4Ch+arg_0]
0x4B1A80: xor     bl, bl
0x4B1A82: test    cl, 48h
0x4B1A85: mov     [esp+4Ch+var_4], 0
0x4B1A8D: jnz     loc_4B1BE1
0x4B1A93: test    cl, cl
0x4B1A95: fldz
0x4B1A97: mov     edx, [esp+4Ch+arg_8]
0x4B1A9B: js      short loc_4B1ABB
0x4B1A9D: test    ecx, 100h
0x4B1AA3: jnz     short loc_4B1ABB
0x4B1AA5: test    edx, edx
0x4B1AA7: jz      loc_4B1F52
0x4B1AAD: fcom    dword ptr [edx+0Ch]
0x4B1AB0: fnstsw  ax
0x4B1AB2: test    ah, 44h
0x4B1AB5: jp      loc_4B1F52
0x4B1ABB: test    ecx, 100h
0x4B1AC1: fld     dword ptr [esi+0DCh]
0x4B1AC7: fstp    [esp+4Ch+arg_8]
0x4B1ACB: fld     dword ptr ds:0A2FAACh
0x4B1AD1: fstp    [esp+4Ch+var_30]
0x4B1AD5: jz      short loc_4B1AE1
0x4B1AD7: fld     dword ptr ds:0A43328h
0x4B1ADD: fstp    [esp+4Ch+var_30]
0x4B1AE1: fld     dword ptr ds:0B33E9Ch
0x4B1AE7: mov     ebp, [esp+4Ch+arg_4]
0x4B1AEB: fstp    dword ptr [esp+4Ch+var_38]
0x4B1AEF: fld     [esp+4Ch+arg_8]
0x4B1AF3: fld     dword ptr [ebp+0]
0x4B1AF6: fcomp   st(1)
0x4B1AF8: fnstsw  ax
0x4B1AFA: fld     dword ptr [esp+4Ch+var_38]
0x4B1AFE: test    ah, 41h
0x4B1B01: fld     [esp+4Ch+var_30]
0x4B1B05: fld     st
0x4B1B07: fmulp   st(2), st
0x4B1B09: jnz     short loc_4B1B13
0x4B1B0B: fxch    st(1)
0x4B1B0D: faddp   st(2), st
0x4B1B0F: fxch    st(1)
0x4B1B11: jmp     short loc_4B1B17
0x4B1B13: fxch    st(2)
0x4B1B15: fsubrp  st(1), st
0x4B1B17: add     dword ptr [esi+0B8h], 1
0x4B1B1E: fstp    [esp+4Ch+arg_8]
0x4B1B22: fld     [esp+4Ch+arg_8]
0x4B1B26: fst     dword ptr [esi+0DCh]
0x4B1B2C: fsub    dword ptr [ebp+0]
0x4B1B2F: fstp    [esp+4Ch+arg_8]
0x4B1B33: fld     [esp+4Ch+arg_8]
0x4B1B37: fabs
0x4B1B39: fstp    [esp+4Ch+arg_8]
0x4B1B3D: fld     [esp+4Ch+arg_8]
0x4B1B41: fcompp
0x4B1B43: fnstsw  ax
0x4B1B45: test    ah, 5
0x4B1B48: jp      loc_4B1F52
0x4B1B4E: test    edx, edx
0x4B1B50: jz      short loc_4B1B63
0x4B1B52: fcomp   dword ptr [edx+0Ch]
0x4B1B55: fnstsw  ax
0x4B1B57: test    ah, 44h
0x4B1B5A: jp      short loc_4B1B65
0x4B1B5C: mov     bl, 1
0x4B1B5E: jmp     loc_4B1F54
0x4B1B63: fstp    st
0x4B1B65: mov     eax, [edi+7Ch]
0x4B1B68: test    al, 48h
0x4B1B6A: jnz     short loc_4B1BAD
0x4B1B6C: test    al, al
0x4B1B6E: js      short loc_4B1B7B
0x4B1B70: test    eax, 100h
0x4B1B75: jz      loc_4B1F54
0x4B1B7B: fld     dword ptr ds:0A3D65Ch
0x4B1B81: fcomp   dword ptr [ebp+0]
0x4B1B84: fnstsw  ax
0x4B1B86: test    ah, 5
0x4B1B89: jp      short loc_4B1B9F
0x4B1B8B: fld     dword ptr [edi+88h]
0x4B1B91: fmul    qword ptr ds:0A3C770h
0x4B1B97: fstp    dword ptr [ebp+0]
0x4B1B9A: jmp     loc_4B1F54
0x4B1B9F: fld     dword ptr [edi+88h]
0x4B1BA5: fstp    dword ptr [ebp+0]
0x4B1BA8: jmp     loc_4B1F54
0x4B1BAD: push    0; Seed
0x4B1BAF: call    GetRandomLargeInteger?
0x4B1BB4: cdq
0x4B1BB5: mov     ecx, 4Bh ; 'K'
0x4B1BBA: add     esp, 4
0x4B1BBD: idiv    ecx
0x4B1BBF: mov     [esp+4Ch+arg_0], edx
0x4B1BC3: fild    [esp+4Ch+arg_0]
0x4B1BC7: fmul    qword ptr ds:0A3B150h
0x4B1BCD: fadd    qword ptr ds:0A3C770h
0x4B1BD3: fmul    dword ptr [edi+88h]
0x4B1BD9: fstp    dword ptr [ebp+0]
0x4B1BDC: jmp     loc_4B1F54
0x4B1BE1: test    cl, 40h
0x4B1BE4: fld     dword ptr ds:0B33E9Ch
0x4B1BEA: fstp    dword ptr [esp+4Ch+var_38]
0x4B1BEE: fld     dword ptr [esi+108h]
0x4B1BF4: fstp    [esp+4Ch+var_30]
0x4B1BF8: fld     dword ptr [esi+10Ch]
0x4B1BFE: fstp    [esp+4Ch+arg_8]
0x4B1C02: fld     dword ptr [esi+110h]
0x4B1C08: fstp    [esp+4Ch+arg_4]
0x4B1C0C: jz      short loc_4B1C1C
0x4B1C0E: fld     dword ptr [esp+4Ch+var_38]
0x4B1C12: fmul    qword ptr ds:0A2FAA0h
0x4B1C18: fstp    dword ptr [esp+4Ch+var_38]
0x4B1C1C: push    0; Seed
0x4B1C1E: call    GetRandomLargeInteger?
0x4B1C23: mov     [esp+50h+var_2C], eax
0x4B1C27: fild    [esp+50h+var_2C]
0x4B1C2B: push    0; Seed
0x4B1C2D: fdiv    qword ptr ds:0A43320h
0x4B1C33: fadd    qword ptr ds:0A43318h
0x4B1C39: fmul    dword ptr [esp+54h+var_38]
0x4B1C3D: fadd    [esp+54h+var_30]
0x4B1C41: fstp    [esp+54h+var_30]
0x4B1C45: call    GetRandomLargeInteger?
0x4B1C4A: mov     [esp+54h+var_2C], eax
0x4B1C4E: fild    [esp+54h+var_2C]
0x4B1C52: push    0; Seed
0x4B1C54: fdiv    qword ptr ds:0A43320h
0x4B1C5A: fadd    qword ptr ds:0A43310h
0x4B1C60: fmul    dword ptr [esp+58h+var_38]
0x4B1C64: fadd    [esp+58h+arg_8]
0x4B1C68: fstp    [esp+58h+arg_8]
0x4B1C6C: call    GetRandomLargeInteger?
0x4B1C71: mov     [esp+58h+var_2C], eax
0x4B1C75: fild    [esp+58h+var_2C]
0x4B1C79: add     esp, 0Ch
0x4B1C7C: fdiv    qword ptr ds:0A43308h
0x4B1C82: fadd    qword ptr ds:0A43300h
0x4B1C88: fmul    dword ptr [esp+4Ch+var_38]
0x4B1C8C: fadd    [esp+4Ch+arg_4]
0x4B1C90: fstp    [esp+4Ch+arg_4]
0x4B1C94: fld     [esp+4Ch+var_30]
0x4B1C98: fld     qword ptr ds:0A3D5B0h
0x4B1C9E: fcom    st(1)
0x4B1CA0: fnstsw  ax
0x4B1CA2: test    ah, 5
0x4B1CA5: jp      short loc_4B1CB5
0x4B1CA7: fsub    st(1), st
0x4B1CA9: fxch    st(1)
0x4B1CAB: fstp    [esp+4Ch+var_30]
0x4B1CAF: fld     [esp+4Ch+var_30]
0x4B1CB3: fxch    st(1)
0x4B1CB5: fld     [esp+4Ch+arg_8]
0x4B1CB9: fcom    st(1)
0x4B1CBB: fnstsw  ax
0x4B1CBD: test    ah, 41h
0x4B1CC0: jnz     short loc_4B1CCC
0x4B1CC2: fsub    st, st(1)
0x4B1CC4: fstp    [esp+4Ch+arg_8]
0x4B1CC8: fld     [esp+4Ch+arg_8]
0x4B1CCC: fld     [esp+4Ch+arg_4]
0x4B1CD0: fcom    st(2)
0x4B1CD2: fnstsw  ax
0x4B1CD4: test    ah, 41h
0x4B1CD7: jnz     loc_4B1DDC
0x4B1CDD: fsubrp  st(2), st
0x4B1CDF: fxch    st(1)
0x4B1CE1: fstp    [esp+4Ch+arg_4]
0x4B1CE5: fld     [esp+4Ch+arg_4]
0x4B1CE9: fxch    st(1)
0x4B1CEB: fxch    st(2)
0x4B1CED: mov     ebp, 1
0x4B1CF2: add     [esi+0B8h], ebp
0x4B1CF8: fst     dword ptr [esi+108h]
0x4B1CFE: add     [esi+0B8h], ebp
0x4B1D04: fxch    st(2)
0x4B1D06: fstp    dword ptr [esi+10Ch]
0x4B1D0C: add     [esi+0B8h], ebp
0x4B1D12: fstp    dword ptr [esi+110h]
0x4B1D18: fadd    qword ptr ds:0A432F8h
0x4B1D1E: fst     [esp+4Ch+var_20]
0x4B1D22: fadd    st, st
0x4B1D24: fstp    [esp+4Ch+var_2C]
0x4B1D28: fld     [esp+4Ch+var_2C]
0x4B1D2C: call    __CIsin
0x4B1D31: fstp    [esp+4Ch+var_2C]
0x4B1D35: fld     [esp+4Ch+var_2C]
0x4B1D39: fstp    [esp+4Ch+var_2C]
0x4B1D3D: fld     [esp+4Ch+arg_8]
0x4B1D41: fadd    qword ptr ds:0A2FAA0h
0x4B1D47: fst     [esp+4Ch+var_28]
0x4B1D4B: fmul    qword ptr ds:0A432F8h
0x4B1D51: fstp    [esp+4Ch+arg_8]
0x4B1D55: fld     [esp+4Ch+arg_8]
0x4B1D59: call    __CIsin
0x4B1D5E: fstp    [esp+4Ch+arg_8]
0x4B1D62: fld     [esp+4Ch+arg_8]
0x4B1D66: fstp    [esp+4Ch+var_30]
0x4B1D6A: fld     [esp+4Ch+arg_4]
0x4B1D6E: fadd    qword ptr ds:0A432F0h
0x4B1D74: fst     [esp+4Ch+var_38]
0x4B1D78: fmul    qword ptr ds:0A432E8h
0x4B1D7E: fstp    [esp+4Ch+arg_8]
0x4B1D82: fld     [esp+4Ch+arg_8]
0x4B1D86: call    __CIsin
0x4B1D8B: fstp    [esp+4Ch+arg_8]
0x4B1D8F: fld     [esp+4Ch+arg_8]
0x4B1D93: fstp    [esp+4Ch+arg_4]
0x4B1D97: fld     dword ptr ds:0B08150h
0x4B1D9D: fld     st
0x4B1D9F: fld     [esp+4Ch+var_2C]
0x4B1DA3: fld     st
0x4B1DA5: fmulp   st(2), st
0x4B1DA7: fld     [esp+4Ch+var_30]
0x4B1DAB: fld     st
0x4B1DAD: fmulp   st(3), st
0x4B1DAF: fxch    st(2)
0x4B1DB1: fmul    qword ptr ds:0A2FAA0h
0x4B1DB7: fstp    [esp+4Ch+arg_8]
0x4B1DBB: fld     [esp+4Ch+arg_8]
0x4B1DBF: fld     st
0x4B1DC1: faddp   st(4), st
0x4B1DC3: fxch    st(3)
0x4B1DC5: fcomp   qword ptr ds:0A2FC68h
0x4B1DCB: fnstsw  ax
0x4B1DCD: fldz
0x4B1DCF: test    ah, 41h
0x4B1DD2: jnz     short loc_4B1DE3
0x4B1DD4: fxch    st(3)
0x4B1DD6: fstp    [esp+4Ch+arg_8]
0x4B1DDA: jmp     short loc_4B1DED
0x4B1DDC: fstp    st(2)
0x4B1DDE: jmp     loc_4B1CEB
0x4B1DE3: fstp    st(3)
0x4B1DE5: fxch    st(2)
0x4B1DE7: fst     [esp+4Ch+arg_8]
0x4B1DEB: fxch    st(2)
0x4B1DED: fld     [esp+4Ch+arg_8]
0x4B1DF1: push    ebp; a3
0x4B1DF2: fld     st
0x4B1DF4: fmulp   st(2), st
0x4B1DF6: fxch    st(1)
0x4B1DF8: fstp    [esp+50h+var_18]
0x4B1DFC: mov     edx, [esp+50h+var_18]
0x4B1E00: mov     [esi+54h], edx
0x4B1E03: fld     st
0x4B1E05: fmulp   st(2), st
0x4B1E07: fxch    st(1)
0x4B1E09: fstp    [esp+50h+var_14]
0x4B1E0D: mov     eax, [esp+50h+var_14]
0x4B1E11: mov     [esi+58h], eax
0x4B1E14: fmul    [esp+50h+arg_4]
0x4B1E18: fstp    [esp+50h+var_10]
0x4B1E1C: mov     ecx, [esp+50h+var_10]
0x4B1E20: push    ecx
0x4B1E21: mov     [esi+5Ch], ecx
0x4B1E24: fstp    [esp+54h+a2]; a2
0x4B1E27: mov     ecx, esi; this
0x4B1E29: call    NiAVObject_UpdateNiAVObject
0x4B1E2E: fld     [esp+4Ch+var_38]
0x4B1E32: fmul    qword ptr ds:0A30E48h
0x4B1E38: fstp    [esp+4Ch+arg_0]
0x4B1E3C: fld     [esp+4Ch+arg_0]
0x4B1E40: call    __CIsin
0x4B1E45: fstp    [esp+4Ch+arg_0]
0x4B1E49: fld     [esp+4Ch+arg_0]
0x4B1E4D: fstp    [esp+4Ch+arg_4]
0x4B1E51: fld     [esp+4Ch+var_28]
0x4B1E55: fmul    qword ptr ds:0A43300h
0x4B1E5B: fstp    [esp+4Ch+arg_0]
0x4B1E5F: fld     [esp+4Ch+arg_0]
0x4B1E63: call    __CIsin
0x4B1E68: fstp    [esp+4Ch+arg_0]
0x4B1E6C: fld     [esp+4Ch+arg_0]
0x4B1E70: fstp    [esp+4Ch+arg_8]
0x4B1E74: fld     [esp+4Ch+var_20]
0x4B1E78: fmul    qword ptr ds:0A43318h
0x4B1E7E: fstp    [esp+4Ch+arg_0]
0x4B1E82: fld     [esp+4Ch+arg_0]
0x4B1E86: call    __CIsin
0x4B1E8B: fstp    [esp+4Ch+arg_0]
0x4B1E8F: fld     [esp+4Ch+arg_0]
0x4B1E93: fld1
0x4B1E95: fadd    st(1), st
0x4B1E97: fld     [esp+4Ch+arg_8]
0x4B1E9B: fadd    st, st(1)
0x4B1E9D: fld     qword ptr ds:0A2FAA0h
0x4B1EA3: fmul    st(1), st
0x4B1EA5: fxch    st(3)
0x4B1EA7: fmulp   st(1), st
0x4B1EA9: fmul    st, st(2)
0x4B1EAB: fdiv    qword ptr ds:0A30E48h
0x4B1EB1: fld     [esp+4Ch+arg_4]
0x4B1EB5: fdiv    qword ptr ds:0A3F3F0h
0x4B1EBB: faddp   st(1), st
0x4B1EBD: fstp    [esp+4Ch+arg_0]
0x4B1EC1: fld     [esp+4Ch+arg_0]
0x4B1EC5: fcom    st(1)
0x4B1EC7: fnstsw  ax
0x4B1EC9: fld1
0x4B1ECB: test    ah, 41h
0x4B1ECE: jnz     short loc_4B1ED6
0x4B1ED0: fst     [esp+4Ch+arg_0]
0x4B1ED4: jmp     short loc_4B1EDE
0x4B1ED6: fxch    st(1)
0x4B1ED8: fst     [esp+4Ch+arg_0]
0x4B1EDC: fxch    st(1)
0x4B1EDE: fld     [esp+4Ch+arg_0]
0x4B1EE2: fcomp   qword ptr ds:0A3D360h
0x4B1EE8: fnstsw  ax
0x4B1EEA: test    ah, 5
0x4B1EED: jp      short loc_4B1F05
0x4B1EEF: fstp    st(2)
0x4B1EF1: fstp    st
0x4B1EF3: fstp    st
0x4B1EF5: fld     dword ptr ds:0A30634h
0x4B1EFB: fstp    [esp+4Ch+arg_0]
0x4B1EFF: fld     [esp+4Ch+arg_0]
0x4B1F03: jmp     short loc_4B1F1E
0x4B1F05: fxch    st(2)
0x4B1F07: fcomp   st(1)
0x4B1F09: fnstsw  ax
0x4B1F0B: test    ah, 5
0x4B1F0E: jp      short loc_4B1F1C
0x4B1F10: fstp    st
0x4B1F12: fstp    [esp+4Ch+arg_0]
0x4B1F16: fld     [esp+4Ch+arg_0]
0x4B1F1A: jmp     short loc_4B1F1E
0x4B1F1C: fstp    st(1)
0x4B1F1E: fmul    st, st(1)
0x4B1F20: faddp   st(1), st
0x4B1F22: fstp    [esp+4Ch+arg_0]
0x4B1F26: fld     [esp+4Ch+arg_0]
0x4B1F2A: fmul    qword ptr ds:0A432E0h
0x4B1F30: fadd    qword ptr ds:0A432D8h
0x4B1F36: fmul    dword ptr [edi+88h]
0x4B1F3C: add     [esi+0B8h], ebp
0x4B1F42: fstp    [esp+4Ch+arg_0]
0x4B1F46: fld     [esp+4Ch+arg_0]
0x4B1F4A: fstp    dword ptr [esi+0DCh]
0x4B1F50: jmp     short loc_4B1F54
0x4B1F52: fstp    st
0x4B1F54: test    esi, esi
0x4B1F56: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x4B1F5E: jz      short loc_4B1F78
0x4B1F60: lea     edx, [esi+4]
0x4B1F63: push    edx; lpAddend
0x4B1F64: call    dword ptr ds:0A2807Ch
0x4B1F6A: test    eax, eax
0x4B1F6C: jnz     short loc_4B1F78
0x4B1F6E: mov     eax, [esi]
0x4B1F70: mov     edx, [eax]
0x4B1F72: push    1
0x4B1F74: mov     ecx, esi
0x4B1F76: call    edx
0x4B1F78: mov     al, bl
0x4B1F7A: mov     ecx, dword ptr [esp+4Ch+var_C]
0x4B1F7E: mov     large fs:0, ecx
0x4B1F85: pop     ecx
0x4B1F86: pop     edi
0x4B1F87: pop     esi
0x4B1F88: pop     ebp
0x4B1F89: pop     ebx
0x4B1F8A: add     esp, 38h
0x4B1F8D: retn    0Ch
