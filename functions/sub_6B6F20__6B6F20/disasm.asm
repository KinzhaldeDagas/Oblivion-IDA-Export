0x6B6F20: push    esi
0x6B6F21: mov     esi, ecx
0x6B6F23: push    edi
0x6B6F24: mov     edi, [esi+50h]
0x6B6F27: test    edi, edi
0x6B6F29: jz      loc_6B703A
0x6B6F2F: fld     [esp+8+arg_0]
0x6B6F33: fst     dword ptr [esi+3Ch]
0x6B6F36: mov     eax, ds:0B33398h
0x6B6F3B: fld1
0x6B6F3D: mov     ecx, [eax+24h]
0x6B6F40: fcom    st(1)
0x6B6F42: fnstsw  ax
0x6B6F44: test    ah, 5
0x6B6F47: jp      short loc_6B6F51
0x6B6F49: fstp    st(1)
0x6B6F4B: fstp    [esp+8+arg_0]
0x6B6F4F: jmp     short loc_6B6F68
0x6B6F51: fstp    st
0x6B6F53: fldz
0x6B6F55: fcom    st(1)
0x6B6F57: fnstsw  ax
0x6B6F59: fstp    st(1)
0x6B6F5B: test    ah, 41h
0x6B6F5E: jnz     short loc_6B6F66
0x6B6F60: fstp    [esp+8+arg_0]
0x6B6F64: jmp     short loc_6B6F68
0x6B6F66: fstp    st
0x6B6F68: test    ecx, ecx
0x6B6F6A: jz      short loc_6B6FA2
0x6B6F6C: fld     dword ptr [ecx+0B8h]
0x6B6F72: mov     eax, [esi]
0x6B6F74: test    al, 8
0x6B6F76: fmul    [esp+8+arg_0]
0x6B6F7A: fstp    [esp+8+arg_0]
0x6B6F7E: jz      short loc_6B6F88
0x6B6F80: fld     dword ptr [ecx+0BCh]
0x6B6F86: jmp     short loc_6B6F9A
0x6B6F88: test    al, 4
0x6B6F8A: jz      short loc_6B6F94
0x6B6F8C: fld     dword ptr [ecx+0C0h]
0x6B6F92: jmp     short loc_6B6F9A
0x6B6F94: fld     dword ptr [ecx+0C4h]
0x6B6F9A: fmul    [esp+8+arg_0]
0x6B6F9E: fstp    [esp+8+arg_0]
0x6B6FA2: fld     [esp+8+arg_0]
0x6B6FA6: fld     qword ptr ds:0A785E8h
0x6B6FAC: fcom    st(1)
0x6B6FAE: fnstsw  ax
0x6B6FB0: test    ah, 41h
0x6B6FB3: jnz     short loc_6B6FB9
0x6B6FB5: fstp    st(1)
0x6B6FB7: jmp     short loc_6B6FBB
0x6B6FB9: fstp    st
0x6B6FBB: fstp    [esp+8+arg_0]
0x6B6FBF: fld     [esp+8+arg_0]
0x6B6FC3: call    __CIlog10
0x6B6FC8: fstp    [esp+8+arg_0]
0x6B6FCC: fld     [esp+8+arg_0]
0x6B6FD0: fmul    qword ptr ds:0A77098h
0x6B6FD6: call    Double_To_SInt32
0x6B6FDB: cmp     byte ptr [esi+4Ah], 0
0x6B6FDF: jnz     short loc_6B7028
0x6B6FE1: movzx   ecx, word ptr [esi+48h]
0x6B6FE5: movzx   edx, word ptr [esi+46h]
0x6B6FE9: sub     eax, ecx
0x6B6FEB: movzx   ecx, word ptr [esi+44h]
0x6B6FEF: sub     eax, edx
0x6B6FF1: sub     eax, ecx
0x6B6FF3: cmp     eax, 0FFFFD8F0h
0x6B6FF8: jle     short loc_6B7005
0x6B6FFA: test    eax, eax
0x6B6FFC: jge     short loc_6B7018
0x6B6FFE: cmp     eax, 0FFFFD8F0h
0x6B7003: jg      short loc_6B701A
0x6B7005: mov     edx, [edi]
0x6B7007: mov     eax, 0FFFFD8F0h
0x6B700C: push    eax
0x6B700D: mov     eax, [edx+3Ch]
0x6B7010: push    edi
0x6B7011: call    eax
0x6B7013: pop     edi
0x6B7014: pop     esi
0x6B7015: retn    4
0x6B7018: xor     eax, eax
0x6B701A: mov     edx, [edi]
0x6B701C: push    eax
0x6B701D: mov     eax, [edx+3Ch]
0x6B7020: push    edi
0x6B7021: call    eax
0x6B7023: pop     edi
0x6B7024: pop     esi
0x6B7025: retn    4
0x6B7028: mov     ecx, [edi]
0x6B702A: mov     edx, [ecx+3Ch]
0x6B702D: push    0FFFFD8F0h
0x6B7032: push    edi
0x6B7033: call    edx
0x6B7035: pop     edi
0x6B7036: pop     esi
0x6B7037: retn    4
0x6B703A: pop     edi
0x6B703B: mov     eax, 80004005h
0x6B7040: pop     esi
0x6B7041: retn    4
