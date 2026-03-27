0x794AE0: sub     esp, 3Ch
0x794AE3: push    esi
0x794AE4: mov     esi, ecx
0x794AE6: xor     al, al
0x794AE8: cmp     [esi+12h], al
0x794AEB: jnz     loc_794DF8
0x794AF1: mov     eax, [esi+6Ch]
0x794AF4: test    eax, eax
0x794AF6: jnz     short loc_794AFC
0x794AF8: xor     ecx, ecx
0x794AFA: jmp     short loc_794B04
0x794AFC: mov     ecx, [esi+70h]
0x794AFF: sub     ecx, eax
0x794B01: sar     ecx, 2
0x794B04: mov     eax, 0AAAAAAABh
0x794B09: mul     ecx
0x794B0B: push    ebx
0x794B0C: push    ebp
0x794B0D: shr     edx, 1
0x794B0F: cmp     dword ptr [esi+0Ch], 0
0x794B13: push    edi
0x794B14: movzx   edi, dx
0x794B17: jnz     short loc_794B28
0x794B19: movzx   eax, di
0x794B1C: push    eax; Size
0x794B1D: call    FormHeapAlloc
0x794B22: add     esp, 4
0x794B25: mov     [esi+0Ch], eax
0x794B28: movzx   ecx, di
0x794B2B: xor     eax, eax
0x794B2D: test    ecx, ecx
0x794B2F: jle     short loc_794B3F
0x794B31: mov     edx, [esi+0Ch]
0x794B34: mov     byte ptr [eax+edx], 0
0x794B38: add     eax, 1
0x794B3B: cmp     eax, ecx
0x794B3D: jl      short loc_794B31
0x794B3F: fldz
0x794B41: xor     ebp, ebp
0x794B43: fst     [esp+4Ch+var_1C]
0x794B47: fst     [esp+4Ch+var_20]
0x794B4B: fstp    [esp+4Ch+var_24]
0x794B4F: mov     bx, [esp+4Ch+arg_0]
0x794B54: cmp     bx, 0FFFFh
0x794B58: mov     [esp+4Ch+var_38], ebp
0x794B5C: jle     short loc_794B93
0x794B5E: mov     ecx, [esi+4Ch]
0x794B61: test    ecx, ecx
0x794B63: movsx   edi, bx
0x794B66: jz      short loc_794B74
0x794B68: mov     eax, [esi+50h]
0x794B6B: sub     eax, ecx
0x794B6D: sar     eax, 4
0x794B70: cmp     edi, eax
0x794B72: jb      short loc_794B79
0x794B74: call    __invalid_parameter_noinfo
0x794B79: shl     edi, 4
0x794B7C: add     edi, [esi+4Ch]
0x794B7F: mov     eax, [edi+4]
0x794B82: test    eax, eax
0x794B84: jz      short loc_794B93
0x794B86: mov     ecx, [edi+8]
0x794B89: sub     ecx, eax
0x794B8B: sar     ecx, 2
0x794B8E: movzx   eax, cx
0x794B91: jmp     short loc_794B95
0x794B93: xor     eax, eax
0x794B95: movzx   edx, ax
0x794B98: cmp     ebp, edx
0x794B9A: jge     loc_794DEF
0x794BA0: mov     [esp+4Ch+var_3C], 0
0x794BA8: mov     ecx, [esi+3Ch]
0x794BAB: test    ecx, ecx
0x794BAD: jz      short loc_794BBE
0x794BAF: mov     eax, [esi+40h]
0x794BB2: sub     eax, ecx
0x794BB4: movzx   ecx, bx
0x794BB7: sar     eax, 4
0x794BBA: cmp     ecx, eax
0x794BBC: jb      short loc_794BC3
0x794BBE: call    __invalid_parameter_noinfo
0x794BC3: movzx   ebx, bx
0x794BC6: mov     edi, ebx
0x794BC8: shl     edi, 4
0x794BCB: add     edi, [esi+3Ch]
0x794BCE: mov     ecx, [edi+4]
0x794BD1: test    ecx, ecx
0x794BD3: jz      short loc_794BE0
0x794BD5: mov     eax, [edi+8]
0x794BD8: sub     eax, ecx
0x794BDA: sar     eax, 1
0x794BDC: cmp     ebp, eax
0x794BDE: jb      short loc_794BE5
0x794BE0: call    __invalid_parameter_noinfo
0x794BE5: mov     eax, [edi+4]
0x794BE8: movzx   ecx, word ptr [eax+ebp*2]
0x794BEC: cmp     [esp+4Ch+var_3C], ecx
0x794BF0: jge     loc_794DE7
0x794BF6: mov     ecx, [esi+4Ch]
0x794BF9: test    ecx, ecx
0x794BFB: jz      short loc_794C09
0x794BFD: mov     eax, [esi+50h]
0x794C00: sub     eax, ecx
0x794C02: sar     eax, 4
0x794C05: cmp     ebx, eax
0x794C07: jb      short loc_794C0E
0x794C09: call    __invalid_parameter_noinfo
0x794C0E: mov     edi, ebx
0x794C10: shl     edi, 4
0x794C13: add     edi, [esi+4Ch]
0x794C16: mov     ecx, [edi+4]
0x794C19: test    ecx, ecx
0x794C1B: jz      short loc_794C29
0x794C1D: mov     eax, [edi+8]
0x794C20: sub     eax, ecx
0x794C22: sar     eax, 2
0x794C25: cmp     ebp, eax
0x794C27: jb      short loc_794C2E
0x794C29: call    __invalid_parameter_noinfo
0x794C2E: mov     edx, [edi+4]
0x794C31: mov     eax, [edx+ebp*4]
0x794C34: mov     ecx, [esp+4Ch+var_3C]
0x794C38: movzx   eax, word ptr [eax+ecx*2]
0x794C3C: mov     edx, [esi+0Ch]
0x794C3F: movzx   ebx, ax
0x794C42: cmp     byte ptr [ebx+edx], 0
0x794C46: jnz     loc_794DD8
0x794C4C: mov     ecx, [esi+0FCh]
0x794C52: test    ecx, ecx
0x794C54: jz      short loc_794C65
0x794C56: mov     eax, [esi+100h]
0x794C5C: sub     eax, ecx
0x794C5E: sar     eax, 2
0x794C61: cmp     ebx, eax
0x794C63: jb      short loc_794C6A
0x794C65: call    __invalid_parameter_noinfo
0x794C6A: mov     eax, [esi+0FCh]
0x794C70: fld     dword ptr [eax+ebx*4]
0x794C73: mov     eax, [esi+7Ch]
0x794C76: test    eax, eax
0x794C78: fstp    [esp+4Ch+var_30]
0x794C7C: jz      short loc_794C8B
0x794C7E: mov     ecx, [esi+80h]
0x794C84: sub     ecx, eax
0x794C86: sar     ecx, 2
0x794C89: jnz     short loc_794C90
0x794C8B: call    __invalid_parameter_noinfo
0x794C90: mov     edi, [esi+7Ch]
0x794C93: mov     ecx, [esi+10Ch]
0x794C99: lea     ebp, [ebx+ebx*2]
0x794C9C: add     ebp, ebp
0x794C9E: add     ebp, ebp
0x794CA0: fld     dword ptr [edi+ebp]
0x794CA3: add     edi, ebp
0x794CA5: test    ecx, ecx
0x794CA7: fstp    [esp+4Ch+var_18]
0x794CAB: fld     dword ptr [edi+4]
0x794CAE: fstp    [esp+4Ch+var_14]
0x794CB2: fld     dword ptr [edi+8]
0x794CB5: fstp    [esp+4Ch+var_10]
0x794CB9: jz      short loc_794CC7
0x794CBB: mov     eax, [esi+110h]
0x794CC1: sub     eax, ecx
0x794CC3: cmp     ebx, eax
0x794CC5: jb      short loc_794CCC
0x794CC7: call    __invalid_parameter_noinfo
0x794CCC: mov     edx, [esi+10Ch]
0x794CD2: movzx   eax, byte ptr [edx+ebx]
0x794CD6: shl     eax, 6
0x794CD9: add     eax, ds:0B42A14h
0x794CDF: fld     dword ptr [eax+10h]
0x794CE2: fld     [esp+4Ch+var_14]
0x794CE6: fld     st
0x794CE8: fmulp   st(2), st
0x794CEA: fld     dword ptr [eax]
0x794CEC: fld     [esp+4Ch+var_18]
0x794CF0: fld     st
0x794CF2: fmulp   st(2), st
0x794CF4: fxch    st(3)
0x794CF6: faddp   st(1), st
0x794CF8: fld     dword ptr [eax+20h]
0x794CFB: fld     [esp+4Ch+var_10]
0x794CFF: fld     st
0x794D01: fmulp   st(2), st
0x794D03: fxch    st(2)
0x794D05: faddp   st(1), st
0x794D07: fadd    dword ptr [eax+30h]
0x794D0A: fstp    [esp+4Ch+var_C]
0x794D0E: fld     dword ptr [eax+14h]
0x794D11: fmul    st, st(2)
0x794D13: fld     dword ptr [eax+4]
0x794D16: fmul    st, st(4)
0x794D18: faddp   st(1), st
0x794D1A: fld     dword ptr [eax+24h]
0x794D1D: fmul    st, st(2)
0x794D1F: faddp   st(1), st
0x794D21: fadd    dword ptr [eax+34h]
0x794D24: fstp    [esp+4Ch+var_8]
0x794D28: fld     dword ptr [eax+18h]
0x794D2B: fmulp   st(2), st
0x794D2D: fld     dword ptr [eax+8]
0x794D30: fmulp   st(3), st
0x794D32: fxch    st(1)
0x794D34: faddp   st(2), st
0x794D36: fmul    dword ptr [eax+28h]
0x794D39: faddp   st(1), st
0x794D3B: fadd    dword ptr [eax+38h]
0x794D3E: mov     eax, [esi+6Ch]
0x794D41: test    eax, eax
0x794D43: fstp    [esp+4Ch+var_4]
0x794D47: fld     dword ptr [edi+8]
0x794D4A: fstp    [esp+4Ch+var_28]
0x794D4E: fld     dword ptr [edi+4]
0x794D51: fstp    [esp+4Ch+var_2C]
0x794D55: fld     dword ptr [edi]
0x794D57: fstp    [esp+4Ch+var_34]
0x794D5B: fld     [esp+4Ch+var_C]
0x794D5F: fld     [esp+4Ch+var_34]
0x794D63: fld     st
0x794D65: fsubp   st(2), st
0x794D67: fld     [esp+4Ch+var_30]
0x794D6B: fld     st
0x794D6D: fmulp   st(3), st
0x794D6F: fxch    st(2)
0x794D71: faddp   st(1), st
0x794D73: fstp    [esp+4Ch+var_24]
0x794D77: fld     [esp+4Ch+var_8]
0x794D7B: fld     [esp+4Ch+var_2C]
0x794D7F: fld     st
0x794D81: fsubp   st(2), st
0x794D83: fld     st(2)
0x794D85: fmulp   st(2), st
0x794D87: faddp   st(1), st
0x794D89: fstp    [esp+4Ch+var_20]
0x794D8D: fld     [esp+4Ch+var_4]
0x794D91: fld     [esp+4Ch+var_28]
0x794D95: fld     st
0x794D97: fsubp   st(2), st
0x794D99: fxch    st(1)
0x794D9B: fmulp   st(2), st
0x794D9D: faddp   st(1), st
0x794D9F: fstp    [esp+4Ch+var_1C]
0x794DA3: jz      short loc_794DAF
0x794DA5: mov     ecx, [esi+70h]
0x794DA8: sub     ecx, eax
0x794DAA: sar     ecx, 2
0x794DAD: jnz     short loc_794DB4
0x794DAF: call    __invalid_parameter_noinfo
0x794DB4: mov     eax, [esi+6Ch]
0x794DB7: mov     edx, [esp+4Ch+var_24]
0x794DBB: mov     ecx, [esp+4Ch+var_20]
0x794DBF: add     eax, ebp
0x794DC1: mov     ebp, [esp+4Ch+var_38]
0x794DC5: mov     [eax], edx
0x794DC7: mov     edx, [esp+4Ch+var_1C]
0x794DCB: mov     [eax+4], ecx
0x794DCE: mov     [eax+8], edx
0x794DD1: mov     eax, [esi+0Ch]
0x794DD4: mov     byte ptr [ebx+eax], 1
0x794DD8: add     [esp+4Ch+var_3C], 1
0x794DDD: mov     bx, [esp+4Ch+arg_0]
0x794DE2: jmp     loc_794BA8
0x794DE7: add     ebp, 1
0x794DEA: jmp     loc_794B4F
0x794DEF: pop     edi
0x794DF0: pop     ebp
0x794DF1: mov     byte ptr [esi+12h], 1
0x794DF5: mov     al, 1
0x794DF7: pop     ebx
0x794DF8: pop     esi
0x794DF9: add     esp, 3Ch
0x794DFC: retn    4
