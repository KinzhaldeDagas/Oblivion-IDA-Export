0x4D3B10: push    0FFFFFFFFh
0x4D3B12: push    offset ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@QAE@XZ_SEH
0x4D3B17: mov     eax, large fs:0
0x4D3B1D: push    eax
0x4D3B1E: sub     esp, 3Ch
0x4D3B21: push    ebx
0x4D3B22: push    ebp
0x4D3B23: push    esi
0x4D3B24: push    edi
0x4D3B25: mov     eax, ds:0B30AACh
0x4D3B2A: xor     eax, esp
0x4D3B2C: push    eax
0x4D3B2D: lea     eax, [esp+5Ch+var_C]
0x4D3B31: mov     large fs:0, eax
0x4D3B37: mov     esi, ecx
0x4D3B39: mov     [esp+5Ch+var_3C], esi
0x4D3B3D: fld     dword ptr ds:0A46B14h
0x4D3B43: push    ecx
0x4D3B44: fstp    dword ptr [esp+60h+var_64+4]; float
0x4D3B47: call    Rand5
0x4D3B4C: fstp    [esp+60h+var_44]
0x4D3B50: fld     dword ptr ds:0A46B10h
0x4D3B56: fstp    dword ptr [esp+60h+var_64+4]; float
0x4D3B59: call    Rand5
0x4D3B5E: fstp    [esp+60h+var_40]
0x4D3B62: push    ecx
0x4D3B63: fld     [esp+64h+var_40]
0x4D3B67: fstp    [esp+64h+var_64]; double
0x4D3B6A: call    _floor
0x4D3B6F: mov     ecx, [esp+64h+arg_1C]
0x4D3B76: fnstcw  word ptr [esp+64h+var_48]
0x4D3B7A: movzx   eax, word ptr [esp+64h+var_48]
0x4D3B7F: fstp    [esp+64h+var_40]
0x4D3B83: fld     [esp+64h+var_40]
0x4D3B87: or      eax, 0C00h
0x4D3B8C: mov     [esp+64h+var_40], eax
0x4D3B90: xor     edi, edi
0x4D3B92: add     esp, 8
0x4D3B95: cmp     ecx, edi
0x4D3B97: fldcw   word ptr [esp+5Ch+var_40]
0x4D3B9B: fistp   [esp+5Ch+var_40]
0x4D3B9F: mov     al, byte ptr [esp+5Ch+var_40]
0x4D3BA3: mov     byte ptr [esp+5Ch+var_40], al
0x4D3BA7: fldcw   word ptr [esp+5Ch+var_48]
0x4D3BAB: jz      loc_4D3C47
0x4D3BB1: mov     edx, [ecx]
0x4D3BB3: mov     eax, [edx+154h]
0x4D3BB9: call    eax
0x4D3BBB: cmp     eax, edi
0x4D3BBD: jz      loc_4D4187
0x4D3BC3: mov     edx, [eax]
0x4D3BC5: mov     ecx, eax
0x4D3BC7: mov     eax, [edx+8]
0x4D3BCA: call    eax
0x4D3BCC: cmp     eax, edi
0x4D3BCE: jz      loc_4D4187
0x4D3BD4: mov     ecx, [esp+5Ch+var_40]
0x4D3BD8: fld     [esp+5Ch+var_44]
0x4D3BDC: mov     edx, [esp+5Ch+arg_24]
0x4D3BE3: push    ecx
0x4D3BE4: push    ecx
0x4D3BE5: fstp    dword ptr [esp+64h+var_64]
0x4D3BE8: push    edx
0x4D3BE9: mov     edx, [esp+68h+arg_18]
0x4D3BF0: lea     ecx, [esp+68h+arg_20]
0x4D3BF7: push    ecx
0x4D3BF8: mov     ecx, [esp+6Ch+arg_C]
0x4D3BFC: push    eax
0x4D3BFD: push    edx
0x4D3BFE: mov     edx, [esp+74h+arg_10]
0x4D3C05: sub     esp, 0Ch
0x4D3C08: mov     eax, esp
0x4D3C0A: mov     [eax], ecx
0x4D3C0C: mov     ecx, [esp+80h+arg_14]
0x4D3C13: mov     [eax+4], edx
0x4D3C16: mov     edx, [esp+80h+arg_0]
0x4D3C1D: mov     [eax+8], ecx
0x4D3C20: mov     ecx, [esp+80h+arg_4]
0x4D3C27: sub     esp, 0Ch
0x4D3C2A: mov     eax, esp
0x4D3C2C: mov     [eax], edx
0x4D3C2E: mov     edx, [esp+8Ch+arg_8]
0x4D3C35: mov     [eax+4], ecx
0x4D3C38: mov     ecx, esi
0x4D3C3A: mov     [eax+8], edx
0x4D3C3D: call    sub_4CF1A0
0x4D3C42: jmp     loc_4D4187
0x4D3C47: lea     ecx, [esp+5Ch+arg_C]
0x4D3C4B: call    sub_43F350
0x4D3C50: fstp    st
0x4D3C52: cmp     ds:0B35C08h, edi
0x4D3C58: jnz     short loc_4D3CA3
0x4D3C5A: push    1
0x4D3C5C: push    1C0h
0x4D3C61: mov     ecx, offset FormHeap
0x4D3C66: call    j_MemoryHeap_Alloc
0x4D3C6B: mov     dl, al
0x4D3C6D: and     dl, 0Fh
0x4D3C70: mov     cl, 10h
0x4D3C72: sub     cl, dl
0x4D3C74: movzx   edx, cl
0x4D3C77: add     eax, edx
0x4D3C79: mov     [eax-1], cl
0x4D3C7C: mov     [esp+5Ch+arg_1C], eax
0x4D3C80: push    edi; int
0x4D3C81: fld     dword ptr ds:0A427E4h
0x4D3C87: push    ecx
0x4D3C88: mov     ecx, eax
0x4D3C8A: fstp    dword ptr [esp+64h+var_64]; float
0x4D3C8D: mov     [esp+64h+var_4], edi
0x4D3C91: call    sub_533C40
0x4D3C96: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x4D3C9E: mov     ds:0B35C08h, eax
0x4D3CA3: push    edi
0x4D3CA4: push    8
0x4D3CA6: push    1Ch
0x4D3CA8: call    sub_8A7F20
0x4D3CAD: add     esp, 0Ch
0x4D3CB0: test    byte ptr [esi+24h], 1
0x4D3CB4: jz      short loc_4D3CC0
0x4D3CB6: lea     ecx, [esi+28h]
0x4D3CB9: call    sub_424180
0x4D3CBE: jmp     short loc_4D3CC5
0x4D3CC0: mov     eax, ds:0B35C24h
0x4D3CC5: mov     ecx, ds:0B35C08h
0x4D3CCB: push    eax
0x4D3CCC: call    sub_5337E0
0x4D3CD1: fld     [esp+5Ch+arg_C]
0x4D3CD5: fld     qword ptr ds:0A46B08h
0x4D3CDB: push    ecx
0x4D3CDC: fmul    st(1), st
0x4D3CDE: lea     eax, [esp+60h+var_34]
0x4D3CE2: fxch    st(1)
0x4D3CE4: lea     ecx, [esp+60h+arg_0]
0x4D3CE8: fstp    [esp+60h+arg_1C]
0x4D3CEF: fld     [esp+60h+arg_10]
0x4D3CF3: fmul    st, st(1)
0x4D3CF5: fstp    [esp+60h+var_48]
0x4D3CF9: fmul    [esp+60h+arg_14]
0x4D3CFD: fstp    [esp+60h+var_38]
0x4D3D01: fld     [esp+60h+arg_1C]
0x4D3D08: fadd    [esp+60h+arg_0]
0x4D3D0C: fstp    [esp+60h+arg_1C]
0x4D3D13: fld     [esp+60h+arg_4]
0x4D3D17: fadd    [esp+60h+var_48]
0x4D3D1B: fstp    [esp+60h+var_48]
0x4D3D1F: fld     [esp+60h+arg_8]
0x4D3D23: fadd    [esp+60h+var_38]
0x4D3D27: fstp    [esp+60h+var_38]
0x4D3D2B: fld     [esp+60h+arg_1C]
0x4D3D32: fstp    [esp+60h+var_34]
0x4D3D36: fld     [esp+60h+var_48]
0x4D3D3A: fstp    [esp+60h+var_30]
0x4D3D3E: fld     [esp+60h+var_38]
0x4D3D42: fstp    [esp+60h+var_2C]
0x4D3D46: fld     dword ptr ds:0A427E4h
0x4D3D4C: fstp    dword ptr [esp+60h+var_64+4]; float
0x4D3D4F: push    eax; int
0x4D3D50: push    ecx; int
0x4D3D51: mov     ecx, ds:0B35C08h
0x4D3D57: call    sub_533830
0x4D3D5C: cmp     eax, edi
0x4D3D5E: mov     [esp+5Ch+var_48], eax
0x4D3D62: jnz     loc_4D3E9E
0x4D3D68: fld     dword ptr ds:0B258E8h
0x4D3D6E: lea     ecx, [esp+5Ch+var_34]
0x4D3D72: fchs
0x4D3D74: fstp    [esp+5Ch+arg_1C]
0x4D3D78: fld     dword ptr ds:0B258ECh
0x4D3D7E: fchs
0x4D3D80: fstp    [esp+5Ch+var_38]
0x4D3D84: fld     dword ptr ds:0B258F0h
0x4D3D8A: fchs
0x4D3D8C: fstp    [esp+5Ch+var_48]
0x4D3D90: fld     [esp+5Ch+arg_1C]
0x4D3D94: fld     qword ptr ds:0A3D0C0h
0x4D3D9A: fmul    st(1), st
0x4D3D9C: fxch    st(1)
0x4D3D9E: fstp    [esp+5Ch+arg_1C]
0x4D3DA2: fld     [esp+5Ch+var_38]
0x4D3DA6: fmul    st, st(1)
0x4D3DA8: fstp    [esp+5Ch+var_38]
0x4D3DAC: fmul    [esp+5Ch+var_48]
0x4D3DB0: fstp    [esp+5Ch+var_48]
0x4D3DB4: fld     [esp+5Ch+arg_1C]
0x4D3DB8: fadd    [esp+5Ch+arg_C]
0x4D3DBC: fstp    [esp+5Ch+arg_1C]
0x4D3DC0: fld     [esp+5Ch+arg_10]
0x4D3DC4: fadd    [esp+5Ch+var_38]
0x4D3DC8: fstp    [esp+5Ch+var_38]
0x4D3DCC: fld     [esp+5Ch+arg_14]
0x4D3DD0: fadd    [esp+5Ch+var_48]
0x4D3DD4: fstp    [esp+5Ch+var_48]
0x4D3DD8: fld     [esp+5Ch+arg_1C]
0x4D3DDC: fstp    [esp+5Ch+var_34]
0x4D3DE0: fld     [esp+5Ch+var_38]
0x4D3DE4: fstp    [esp+5Ch+var_30]
0x4D3DE8: fld     [esp+5Ch+var_48]
0x4D3DEC: fstp    [esp+5Ch+var_2C]
0x4D3DF0: call    sub_43F350
0x4D3DF5: fstp    st
0x4D3DF7: mov     edx, [esp+5Ch+var_34]
0x4D3DFB: fld     [esp+5Ch+var_34]
0x4D3DFF: mov     eax, [esp+5Ch+var_30]
0x4D3E03: fld     qword ptr ds:0A46B08h
0x4D3E09: mov     ecx, [esp+5Ch+var_2C]
0x4D3E0D: fmul    st(1), st
0x4D3E0F: push    ecx
0x4D3E10: fxch    st(1)
0x4D3E12: mov     [esp+60h+arg_C], edx
0x4D3E16: lea     edx, [esp+60h+var_34]
0x4D3E1A: fstp    [esp+60h+arg_1C]
0x4D3E21: mov     [esp+60h+arg_10], eax
0x4D3E25: fld     [esp+60h+var_30]
0x4D3E29: lea     eax, [esp+60h+arg_0]
0x4D3E2D: fmul    st, st(1)
0x4D3E2F: mov     [esp+60h+arg_14], ecx
0x4D3E33: mov     ecx, ds:0B35C08h
0x4D3E39: fstp    [esp+60h+var_38]
0x4D3E3D: fmul    [esp+60h+var_2C]
0x4D3E41: fstp    [esp+60h+var_48]
0x4D3E45: fld     [esp+60h+arg_1C]
0x4D3E4C: fadd    [esp+60h+arg_0]
0x4D3E50: fstp    [esp+60h+arg_1C]
0x4D3E57: fld     [esp+60h+arg_4]
0x4D3E5B: fadd    [esp+60h+var_38]
0x4D3E5F: fstp    [esp+60h+var_38]
0x4D3E63: fld     [esp+60h+arg_8]
0x4D3E67: fadd    [esp+60h+var_48]
0x4D3E6B: fstp    [esp+60h+var_48]
0x4D3E6F: fld     [esp+60h+arg_1C]
0x4D3E76: fstp    [esp+60h+var_34]
0x4D3E7A: fld     [esp+60h+var_38]
0x4D3E7E: fstp    [esp+60h+var_30]
0x4D3E82: fld     [esp+60h+var_48]
0x4D3E86: fstp    [esp+60h+var_2C]
0x4D3E8A: fld     dword ptr ds:0A427E4h
0x4D3E90: fstp    dword ptr [esp+60h+var_64+4]; float
0x4D3E93: push    edx; int
0x4D3E94: push    eax; int
0x4D3E95: call    sub_533830
0x4D3E9A: mov     [esp+5Ch+var_48], eax
0x4D3E9E: mov     [esp+5Ch+var_10], edi
0x4D3EA2: mov     [esp+5Ch+var_18], edi
0x4D3EA6: mov     [esp+5Ch+var_14], edi
0x4D3EAA: mov     [esp+5Ch+var_1C], offset ??_7?$NiTPointerList@PAVNiAVObject@@@@6B@; const NiTPointerList<NiAVObject *>::`vftable'
0x4D3EB2: cmp     eax, edi
0x4D3EB4: mov     ebp, [esp+5Ch+arg_24]
0x4D3EBB: mov     ebx, [esp+5Ch+arg_18]
0x4D3EBF: mov     [esp+5Ch+var_4], 1
0x4D3EC7: mov     [esp+5Ch+arg_1C], edi
0x4D3ECB: jle     loc_4D3FBA
0x4D3ED1: mov     ecx, [esp+5Ch+arg_1C]
0x4D3ED5: push    ecx
0x4D3ED6: mov     ecx, ds:0B35C08h
0x4D3EDC: call    sub_533930
0x4D3EE1: mov     edi, [esp+5Ch+var_18]
0x4D3EE5: test    edi, edi
0x4D3EE7: mov     esi, eax
0x4D3EE9: mov     eax, edi
0x4D3EEB: jz      short loc_4D3F0A
0x4D3EED: lea     ecx, [ecx+0]
0x4D3EF0: cmp     esi, [eax+8]
0x4D3EF3: lea     ecx, [eax+8]
0x4D3EF6: mov     edx, eax
0x4D3EF8: mov     eax, [eax]
0x4D3EFA: jz      short loc_4D3F02
0x4D3EFC: test    eax, eax
0x4D3EFE: jnz     short loc_4D3EF0
0x4D3F00: jmp     short loc_4D3F0A
0x4D3F02: test    edx, edx
0x4D3F04: jnz     loc_4D3FA5
0x4D3F0A: mov     edx, [esp+5Ch+var_40]
0x4D3F0E: fld     [esp+5Ch+var_44]
0x4D3F12: push    edx
0x4D3F13: mov     edx, [esp+60h+arg_10]
0x4D3F17: push    ecx
0x4D3F18: mov     ecx, [esp+64h+arg_C]
0x4D3F1C: fstp    dword ptr [esp+64h+var_64]
0x4D3F1F: push    ebp
0x4D3F20: lea     eax, [esp+68h+arg_20]
0x4D3F27: push    eax
0x4D3F28: push    esi
0x4D3F29: push    ebx
0x4D3F2A: sub     esp, 0Ch
0x4D3F2D: mov     eax, esp
0x4D3F2F: mov     [eax], ecx
0x4D3F31: mov     ecx, [esp+80h+arg_14]
0x4D3F38: mov     [eax+4], edx
0x4D3F3B: mov     edx, [esp+80h+arg_0]
0x4D3F42: mov     [eax+8], ecx
0x4D3F45: mov     ecx, [esp+80h+arg_4]
0x4D3F4C: sub     esp, 0Ch
0x4D3F4F: mov     eax, esp
0x4D3F51: mov     [eax], edx
0x4D3F53: mov     edx, [esp+8Ch+arg_8]
0x4D3F5A: mov     [eax+4], ecx
0x4D3F5D: mov     ecx, [esp+8Ch+var_3C]
0x4D3F61: mov     [eax+8], edx
0x4D3F64: call    sub_4CF1A0
0x4D3F69: mov     eax, [esp+5Ch+var_1C]
0x4D3F6D: mov     edx, [eax+4]
0x4D3F70: lea     ecx, [esp+5Ch+var_1C]
0x4D3F74: call    edx
0x4D3F76: mov     [eax+8], esi
0x4D3F79: mov     dword ptr [eax], 0
0x4D3F7F: mov     ecx, [esp+5Ch+var_14]
0x4D3F83: mov     [eax+4], ecx
0x4D3F86: mov     ecx, [esp+5Ch+var_14]
0x4D3F8A: test    ecx, ecx
0x4D3F8C: jz      short loc_4D3F96
0x4D3F8E: mov     [ecx], eax
0x4D3F90: mov     edi, [esp+5Ch+var_18]
0x4D3F94: jmp     short loc_4D3F9C
0x4D3F96: mov     edi, eax
0x4D3F98: mov     [esp+5Ch+var_18], edi
0x4D3F9C: add     [esp+5Ch+var_10], 1
0x4D3FA1: mov     [esp+5Ch+var_14], eax
0x4D3FA5: mov     eax, [esp+5Ch+arg_1C]
0x4D3FA9: add     eax, 1
0x4D3FAC: cmp     eax, [esp+5Ch+var_48]
0x4D3FB0: mov     [esp+5Ch+arg_1C], eax
0x4D3FB4: jl      loc_4D3ED1
0x4D3FBA: xor     eax, eax
0x4D3FBC: cmp     edi, eax
0x4D3FBE: mov     esi, edi
0x4D3FC0: jz      short loc_4D3FDA
0x4D3FC2: mov     edx, [esp+5Ch+var_1C]
0x4D3FC6: mov     eax, esi
0x4D3FC8: mov     esi, [esi]
0x4D3FCA: push    eax
0x4D3FCB: mov     eax, [edx+8]
0x4D3FCE: lea     ecx, [esp+60h+var_1C]
0x4D3FD2: call    eax
0x4D3FD4: test    esi, esi
0x4D3FD6: jnz     short loc_4D3FC2
0x4D3FD8: xor     eax, eax
0x4D3FDA: lea     ecx, [esp+5Ch+arg_0]
0x4D3FDE: push    ecx
0x4D3FDF: mov     ecx, ds:0B333A0h
0x4D3FE5: mov     [esp+60h+var_10], eax
0x4D3FE9: mov     [esp+60h+var_18], eax
0x4D3FED: mov     [esp+60h+var_14], eax
0x4D3FF1: call    sub_440880
0x4D3FF6: mov     esi, eax
0x4D3FF8: test    esi, esi
0x4D3FFA: jz      loc_4D414C
0x4D4000: mov     edi, [esp+5Ch+var_40]
0x4D4004: fld     [esp+5Ch+var_44]
0x4D4008: push    edi
0x4D4009: push    ecx
0x4D400A: mov     ecx, [esp+64h+arg_C]
0x4D400E: fstp    dword ptr [esp+64h+var_64]
0x4D4011: push    ebp
0x4D4012: lea     edx, [esp+68h+arg_20]
0x4D4019: push    edx
0x4D401A: mov     edx, [esp+6Ch+arg_10]
0x4D4021: push    esi
0x4D4022: push    ebx
0x4D4023: sub     esp, 0Ch
0x4D4026: mov     eax, esp
0x4D4028: mov     [eax], ecx
0x4D402A: mov     ecx, [esp+80h+arg_14]
0x4D4031: mov     [eax+4], edx
0x4D4034: mov     edx, [esp+80h+arg_0]
0x4D403B: mov     [eax+8], ecx
0x4D403E: mov     ecx, [esp+80h+arg_4]
0x4D4045: sub     esp, 0Ch
0x4D4048: mov     eax, esp
0x4D404A: mov     [eax], edx
0x4D404C: mov     edx, [esp+8Ch+arg_8]
0x4D4053: mov     [eax+4], ecx
0x4D4056: mov     ecx, [esp+8Ch+var_3C]
0x4D405A: mov     [eax+8], edx
0x4D405D: call    sub_4CF1A0
0x4D4062: fld     [esp+5Ch+arg_C]
0x4D4066: fld     qword ptr ds:0A3F428h
0x4D406C: mov     ecx, ds:0B333A0h
0x4D4072: fmul    st(1), st
0x4D4074: lea     eax, [esp+5Ch+var_28]
0x4D4078: fxch    st(1)
0x4D407A: push    eax
0x4D407B: fstp    [esp+60h+arg_24]
0x4D4082: fld     [esp+60h+arg_10]
0x4D4086: fmul    st, st(1)
0x4D4088: fstp    [esp+60h+arg_18]
0x4D408C: fmul    [esp+60h+arg_14]
0x4D4090: fstp    [esp+60h+arg_1C]
0x4D4097: fld     [esp+60h+arg_24]
0x4D409E: fadd    [esp+60h+arg_0]
0x4D40A2: fstp    [esp+60h+arg_24]
0x4D40A9: fld     [esp+60h+arg_4]
0x4D40AD: fadd    [esp+60h+arg_18]
0x4D40B1: fstp    [esp+60h+arg_18]
0x4D40B5: fld     [esp+60h+arg_8]
0x4D40B9: fadd    [esp+60h+arg_1C]
0x4D40C0: fstp    [esp+60h+arg_1C]
0x4D40C7: fld     [esp+60h+arg_24]
0x4D40CE: fstp    [esp+60h+var_28]
0x4D40D2: fld     [esp+60h+arg_18]
0x4D40D6: fstp    [esp+60h+var_24]
0x4D40DA: fld     [esp+60h+arg_1C]
0x4D40E1: fstp    [esp+60h+var_20]
0x4D40E5: call    sub_440880
0x4D40EA: cmp     esi, eax
0x4D40EC: jz      short loc_4D414C
0x4D40EE: fld     [esp+5Ch+var_44]
0x4D40F2: mov     edx, [esp+5Ch+arg_C]
0x4D40F6: push    edi
0x4D40F7: push    ecx
0x4D40F8: fstp    dword ptr [esp+64h+var_64]
0x4D40FB: push    ebp
0x4D40FC: lea     ecx, [esp+68h+arg_20]
0x4D4103: push    ecx
0x4D4104: mov     ecx, [esp+6Ch+arg_10]
0x4D410B: push    eax
0x4D410C: push    ebx
0x4D410D: sub     esp, 0Ch
0x4D4110: mov     eax, esp
0x4D4112: mov     [eax], edx
0x4D4114: mov     edx, [esp+80h+arg_14]
0x4D411B: mov     [eax+4], ecx
0x4D411E: mov     ecx, [esp+80h+arg_0]
0x4D4125: mov     [eax+8], edx
0x4D4128: mov     edx, [esp+80h+arg_4]
0x4D412F: sub     esp, 0Ch
0x4D4132: mov     eax, esp
0x4D4134: mov     [eax], ecx
0x4D4136: mov     ecx, [esp+8Ch+arg_8]
0x4D413D: mov     [eax+4], edx
0x4D4140: mov     [eax+8], ecx
0x4D4143: mov     ecx, [esp+8Ch+var_3C]
0x4D4147: call    sub_4CF1A0
0x4D414C: mov     ecx, ds:0B35C08h
0x4D4152: push    0
0x4D4154: call    sub_5337E0
0x4D4159: mov     [esp+5Ch+var_1C], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVNiAVObject@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiAVObject *>::`vftable'
0x4D4161: mov     esi, [esp+5Ch+var_18]
0x4D4165: test    esi, esi
0x4D4167: mov     [esp+5Ch+var_4], 2
0x4D416F: jz      short loc_4D4187
0x4D4171: mov     edx, [esp+5Ch+var_1C]
0x4D4175: mov     eax, esi
0x4D4177: mov     esi, [esi]
0x4D4179: push    eax
0x4D417A: mov     eax, [edx+8]
0x4D417D: lea     ecx, [esp+60h+var_1C]
0x4D4181: call    eax
0x4D4183: test    esi, esi
0x4D4185: jnz     short loc_4D4171
0x4D4187: mov     ecx, dword ptr [esp+5Ch+var_C]
0x4D418B: mov     large fs:0, ecx
0x4D4192: pop     ecx
0x4D4193: pop     edi
0x4D4194: pop     esi
0x4D4195: pop     ebp
0x4D4196: pop     ebx
0x4D4197: add     esp, 48h
0x4D419A: retn    28h ; '('
