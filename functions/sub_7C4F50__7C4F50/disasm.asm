0x7C4F50: sub     esp, 18h
0x7C4F53: push    ebx
0x7C4F54: mov     ebx, [esp+1Ch+arg_1C]
0x7C4F58: push    ebp
0x7C4F59: push    esi
0x7C4F5A: movzx   eax, bx
0x7C4F5D: add     ds:0B4334Ch, eax
0x7C4F63: push    edi
0x7C4F64: xor     edi, edi
0x7C4F66: xor     ebp, ebp
0x7C4F68: cmp     bx, di
0x7C4F6B: jbe     loc_7C512C
0x7C4F71: mov     ecx, [esp+28h+arg_C]
0x7C4F75: mov     eax, [esp+28h+arg_8]
0x7C4F79: push    ecx
0x7C4F7A: mov     ecx, [esp+2Ch+arg_4]
0x7C4F7E: lea     edx, [esp+2Ch+arg_1C]
0x7C4F82: push    edx; float
0x7C4F83: mov     edx, [esp+30h+arg_10]
0x7C4F87: push    eax; float
0x7C4F88: push    ecx
0x7C4F89: push    edx
0x7C4F8A: mov     [esp+3Ch+arg_1C], edi
0x7C4F8E: call    sub_7C4B50
0x7C4F93: add     esp, 14h
0x7C4F96: cmp     [esp+28h+arg_1C], edi
0x7C4F9A: movzx   eax, ax
0x7C4F9D: jz      loc_7C5185
0x7C4FA3: movzx   eax, ax
0x7C4FA6: cmp     eax, edi
0x7C4FA8: mov     [esp+28h+var_14], eax
0x7C4FAC: jle     loc_7C5118
0x7C4FB2: mov     ecx, [esp+28h+arg_14]
0x7C4FB6: lea     eax, [ebp+ebp*2+0]
0x7C4FBA: lea     esi, [ecx+eax*4]
0x7C4FBD: lea     ecx, [ecx+0]
0x7C4FC0: test    bx, bx
0x7C4FC3: jbe     loc_7C5118
0x7C4FC9: mov     edx, [esi]
0x7C4FCB: mov     ecx, [esi+4]
0x7C4FCE: sub     esp, 0Ch
0x7C4FD1: mov     eax, esp
0x7C4FD3: mov     [eax], edx
0x7C4FD5: mov     edx, [esi+8]
0x7C4FD8: mov     [eax+4], ecx
0x7C4FDB: mov     [eax+8], edx
0x7C4FDE: call    sub_7C2990
0x7C4FE3: push    eax; Seed
0x7C4FE4: call    _srand
0x7C4FE9: fld     dword ptr [esi]
0x7C4FEB: fstp    [esp+38h+var_10]
0x7C4FEF: add     esp, 10h
0x7C4FF2: fld     dword ptr [esi+4]
0x7C4FF5: fstp    [esp+28h+var_C]
0x7C4FF9: fld     dword ptr [esi+8]
0x7C4FFC: fstp    [esp+28h+var_8]
0x7C5000: call    _rand
0x7C5005: mov     [esp+28h+var_18], eax
0x7C5009: fild    [esp+28h+var_18]
0x7C500D: mov     eax, [esp+28h+arg_10]
0x7C5011: fdiv    qword ptr ds:0A903B0h
0x7C5017: fld1
0x7C5019: fsub    st(1), st
0x7C501B: fxch    st(1)
0x7C501D: fstp    [esp+28h+var_18]
0x7C5021: fld     dword ptr [eax+10h]
0x7C5024: fmul    qword ptr ds:0A2FAA0h
0x7C502A: fmul    [esp+28h+var_18]
0x7C502E: fld     dword ptr [eax+10h]
0x7C5031: mov     eax, [esp+28h+arg_18]
0x7C5035: fsubp   st(2), st
0x7C5037: faddp   st(1), st
0x7C5039: fmul    dword ptr [eax+ebp*4]
0x7C503C: fstp    [esp+28h+var_4]
0x7C5040: fld1
0x7C5042: fld     [esp+28h+var_4]
0x7C5046: fcom    st(1)
0x7C5048: fnstsw  ax
0x7C504A: fstp    st(1)
0x7C504C: test    ah, 1
0x7C504F: jnz     short loc_7C505F
0x7C5051: fstp    st
0x7C5053: fld     dword ptr ds:0A65520h
0x7C5059: fstp    [esp+28h+var_4]
0x7C505D: jmp     short loc_7C5074
0x7C505F: fldz
0x7C5061: fcom    st(1)
0x7C5063: fnstsw  ax
0x7C5065: fstp    st(1)
0x7C5067: test    ah, 41h
0x7C506A: jnz     short loc_7C5072
0x7C506C: fstp    [esp+28h+var_4]
0x7C5070: jmp     short loc_7C5074
0x7C5072: fstp    st
0x7C5074: call    _rand
0x7C5079: mov     [esp+28h+var_18], eax
0x7C507D: fild    [esp+28h+var_18]
0x7C5081: mov     ecx, [esp+28h+arg_10]
0x7C5085: fdiv    qword ptr ds:0A3D5A8h
0x7C508B: fadd    st, st
0x7C508D: fld1
0x7C508F: fsub    st(1), st
0x7C5091: fxch    st(1)
0x7C5093: fstp    [esp+28h+var_18]
0x7C5097: fld     dword ptr [ecx+0Ch]
0x7C509A: fmul    [esp+28h+var_18]
0x7C509E: fmul    qword ptr ds:0A309F0h
0x7C50A4: fstp    [esp+28h+var_18]
0x7C50A8: fld     [esp+28h+var_18]
0x7C50AC: fld     st
0x7C50AE: call    Double_To_SInt32
0x7C50B3: mov     [esp+28h+var_18], eax
0x7C50B7: fild    [esp+28h+var_18]
0x7C50BB: fstp    [esp+28h+var_18]
0x7C50BF: fld     [esp+28h+var_18]
0x7C50C3: fld     st
0x7C50C5: fsubp   st(2), st
0x7C50C7: fxch    st(1)
0x7C50C9: fcomp   qword ptr ds:0A2FC68h
0x7C50CF: fnstsw  ax
0x7C50D1: test    ah, 1
0x7C50D4: jnz     short loc_7C50DA
0x7C50D6: fstp    st(1)
0x7C50D8: jmp     short loc_7C50DC
0x7C50DA: fsubrp  st(1), st
0x7C50DC: mov     edx, [esp+28h+arg_0]
0x7C50E0: fstp    [esp+28h+var_18]
0x7C50E4: fld     [esp+28h+var_18]
0x7C50E8: mov     ecx, [esp+28h+arg_1C]
0x7C50EC: fadd    [esp+28h+var_4]
0x7C50F0: push    edx
0x7C50F1: lea     eax, [esp+2Ch+var_10]
0x7C50F5: push    eax
0x7C50F6: fstp    [esp+30h+var_4]
0x7C50FA: call    sub_812510
0x7C50FF: add     edi, 1
0x7C5102: add     ebx, 0FFFFh
0x7C5108: add     ebp, 1
0x7C510B: add     esi, 0Ch
0x7C510E: cmp     edi, [esp+28h+var_14]
0x7C5112: jl      loc_7C4FC0
0x7C5118: mov     ecx, [esp+28h+arg_1C]
0x7C511C: call    sub_8126D0
0x7C5121: xor     edi, edi
0x7C5123: cmp     bx, di
0x7C5126: ja      loc_7C4F71
0x7C512C: mov     ecx, [esp+28h+arg_C]
0x7C5130: mov     edx, [ecx]
0x7C5132: mov     eax, [edx+78h]
0x7C5135: call    eax
0x7C5137: mov     edx, [esp+28h+arg_10]
0x7C513B: mov     eax, [edx+4]
0x7C513E: lea     ecx, [esp+28h+arg_1C]
0x7C5142: push    ecx
0x7C5143: push    eax
0x7C5144: mov     ecx, offset off_B2CBC4
0x7C5149: mov     [esp+30h+arg_1C], edi
0x7C514D: call    NiTMap_GetAt
0x7C5152: mov     esi, [esp+28h+arg_1C]
0x7C5156: mov     eax, [esi+38h]
0x7C5159: cmp     eax, edi
0x7C515B: mov     dl, 1
0x7C515D: jz      short loc_7C5178
0x7C515F: nop
0x7C5160: mov     ebx, [esp+28h+arg_0]
0x7C5164: cmp     [eax+8], ebx
0x7C5167: lea     ecx, [eax+8]
0x7C516A: mov     eax, [eax]
0x7C516C: jnz     short loc_7C5170
0x7C516E: xor     dl, dl
0x7C5170: cmp     eax, edi
0x7C5172: jnz     short loc_7C5160
0x7C5174: test    dl, dl
0x7C5176: jz      short loc_7C5185
0x7C5178: lea     ecx, [esp+28h+arg_0]
0x7C517C: push    ecx
0x7C517D: lea     ecx, [esi+34h]
0x7C5180: call    sub_5B1E20
0x7C5185: pop     edi
0x7C5186: pop     esi
0x7C5187: pop     ebp
0x7C5188: pop     ebx
0x7C5189: add     esp, 18h
0x7C518C: retn
