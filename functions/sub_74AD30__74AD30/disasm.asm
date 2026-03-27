0x74AD30: sub     esp, 18h
0x74AD33: push    ebx
0x74AD34: push    ebp
0x74AD35: push    esi
0x74AD36: mov     ebx, ecx
0x74AD38: call    _rand
0x74AD3D: mov     ebp, [esp+24h+arg_0]
0x74AD41: mov     esi, [ebp+0B4h]
0x74AD47: movzx   ecx, word ptr [esi+8]
0x74AD4B: cdq
0x74AD4C: idiv    ecx
0x74AD4E: mov     ecx, [esi+1Ch]
0x74AD51: test    ecx, ecx
0x74AD53: mov     esi, [esi+20h]
0x74AD56: jnz     short loc_74AD63
0x74AD58: pop     esi
0x74AD59: pop     ebp
0x74AD5A: xor     al, al
0x74AD5C: pop     ebx
0x74AD5D: add     esp, 18h
0x74AD60: retn    0Ch
0x74AD63: lea     eax, [edx+edx*2]
0x74AD66: add     eax, eax
0x74AD68: add     eax, eax
0x74AD6A: mov     edx, [eax+ecx]
0x74AD6D: push    edi
0x74AD6E: mov     edi, [esp+28h+arg_4]
0x74AD72: mov     [edi], edx
0x74AD74: mov     edx, [eax+ecx+4]
0x74AD78: mov     [edi+4], edx
0x74AD7B: mov     ecx, [eax+ecx+8]
0x74AD7F: mov     [edi+8], ecx
0x74AD82: cmp     dword ptr [ebx+70h], 0
0x74AD86: mov     edx, [eax+esi]
0x74AD89: mov     ecx, [eax+esi+4]
0x74AD8D: mov     [esp+28h+var_18], edx
0x74AD91: mov     edx, [eax+esi+8]
0x74AD95: mov     esi, [esp+28h+arg_8]
0x74AD99: mov     [esp+28h+var_14], ecx
0x74AD9D: mov     [esp+28h+var_10], edx
0x74ADA1: jnz     short loc_74AE18
0x74ADA3: mov     eax, [ebp+0B4h]
0x74ADA9: cmp     dword ptr [eax+20h], 0
0x74ADAD: jz      short loc_74AE18
0x74ADAF: fld     dword ptr [esi+4]
0x74ADB2: fld     dword ptr [esi]
0x74ADB4: fld     dword ptr [esi+8]
0x74ADB7: fld     st(1)
0x74ADB9: fmulp   st(2), st
0x74ADBB: fld     st(2)
0x74ADBD: fmulp   st(3), st
0x74ADBF: fxch    st(1)
0x74ADC1: faddp   st(2), st
0x74ADC3: fmul    st, st
0x74ADC5: faddp   st(1), st
0x74ADC7: fstp    [esp+28h+arg_0]
0x74ADCB: fld     [esp+28h+arg_0]
0x74ADCF: call    __CIsqrt
0x74ADD4: fstp    [esp+28h+arg_0]
0x74ADD8: fld     [esp+28h+arg_0]
0x74ADDC: fstp    [esp+28h+arg_0]
0x74ADE0: fld     [esp+28h+var_18]
0x74ADE4: fld     [esp+28h+arg_0]
0x74ADE8: fld     st
0x74ADEA: fmulp   st(2), st
0x74ADEC: fxch    st(1)
0x74ADEE: fstp    [esp+28h+var_C]
0x74ADF2: mov     ecx, [esp+28h+var_C]
0x74ADF6: fld     [esp+28h+var_14]
0x74ADFA: mov     [esi], ecx
0x74ADFC: fmul    st, st(1)
0x74ADFE: fstp    [esp+28h+var_8]
0x74AE02: mov     edx, [esp+28h+var_8]
0x74AE06: mov     [esi+4], edx
0x74AE09: fmul    [esp+28h+var_10]
0x74AE0D: fstp    [esp+28h+var_4]
0x74AE11: mov     eax, [esp+28h+var_4]
0x74AE15: mov     [esi+8], eax
0x74AE18: push    esi
0x74AE19: push    edi
0x74AE1A: push    ebp
0x74AE1B: mov     ecx, ebx
0x74AE1D: call    sub_74A0A0
0x74AE22: pop     edi
0x74AE23: pop     esi
0x74AE24: pop     ebp
0x74AE25: mov     al, 1
0x74AE27: pop     ebx
0x74AE28: add     esp, 18h
0x74AE2B: retn    0Ch
