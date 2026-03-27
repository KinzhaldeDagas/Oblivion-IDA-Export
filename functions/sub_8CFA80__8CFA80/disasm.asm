0x8CFA80: push    ebp
0x8CFA81: mov     ebp, esp
0x8CFA83: and     esp, 0FFFFFFF0h
0x8CFA86: sub     esp, 4Ch
0x8CFA89: mov     eax, ds:0B30AACh
0x8CFA8E: xor     eax, esp
0x8CFA90: mov     [esp+4Ch+var_4], eax
0x8CFA94: push    esi
0x8CFA95: mov     esi, [ebp+arg_0]
0x8CFA98: mov     eax, [esi+2A0h]
0x8CFA9E: cmp     eax, 0Bh
0x8CFAA1: jz      short loc_8CFAC5
0x8CFAA3: test    eax, eax
0x8CFAA5: jz      short loc_8CFAAC
0x8CFAA7: cmp     eax, 3
0x8CFAAA: jnz     short loc_8CFAC5
0x8CFAAC: mov     ecx, esi
0x8CFAAE: call    sub_890720
0x8CFAB3: pop     esi
0x8CFAB4: mov     ecx, [esp+4Ch+var_4]
0x8CFAB8: xor     ecx, esp
0x8CFABA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CFABF: mov     esp, ebp
0x8CFAC1: pop     ebp
0x8CFAC2: retn    4
0x8CFAC5: or      dword ptr [esi+1F4h], 2000h
0x8CFACF: mov     eax, [esi]
0x8CFAD1: mov     edx, [eax+58h]
0x8CFAD4: mov     ecx, esi
0x8CFAD6: call    edx
0x8CFAD8: mov     eax, [esi]
0x8CFADA: mov     edx, [eax+58h]
0x8CFADD: mov     ecx, esi
0x8CFADF: call    edx
0x8CFAE1: movaps  xmm0, xmmword ptr [eax+20h]
0x8CFAE5: mov     eax, [esi]
0x8CFAE7: mov     edx, [eax+58h]
0x8CFAEA: mov     ecx, esi
0x8CFAEC: movaps  [esp+50h+var_30], xmm0
0x8CFAF1: call    edx
0x8CFAF3: fld     dword ptr [esi+31Ch]
0x8CFAF9: movss   xmm1, dword ptr [esi+328h]
0x8CFB01: fabs
0x8CFB03: movss   xmm4, dword ptr ds:0A46C30h
0x8CFB0B: fstp    [esp+50h+var_44]
0x8CFB0F: fld     [esp+50h+var_44]
0x8CFB13: xorps   xmm0, xmm0
0x8CFB16: movss   xmm0, xmm1
0x8CFB1A: shufps  xmm0, xmm0, 0
0x8CFB1E: mulps   xmm0, [esp+50h+var_30]
0x8CFB23: movaps  [esp+50h+var_30], xmm0
0x8CFB28: mulps   xmm0, xmm0
0x8CFB2B: movaps  xmm1, xmm0
0x8CFB2E: shufps  xmm1, xmm0, 55h ; 'U'
0x8CFB32: addss   xmm1, xmm0
0x8CFB36: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CFB3A: addss   xmm0, xmm1
0x8CFB3E: movaps  xmm1, xmm0
0x8CFB41: rsqrtss xmm1, xmm1
0x8CFB45: movaps  xmm2, xmm1
0x8CFB48: movaps  xmm1, xmm0
0x8CFB4B: mulss   xmm1, xmm2
0x8CFB4F: mulss   xmm1, xmm2
0x8CFB53: xorps   xmm3, xmm3
0x8CFB56: movss   xmm3, xmm4
0x8CFB5A: movss   xmm4, dword ptr ds:0A3D65Ch
0x8CFB62: subss   xmm3, xmm1
0x8CFB66: xorps   xmm1, xmm1
0x8CFB69: movss   xmm1, xmm4
0x8CFB6D: mulss   xmm1, xmm2
0x8CFB71: mulss   xmm1, xmm3
0x8CFB75: shufps  xmm1, xmm1, 0
0x8CFB79: mulss   xmm0, xmm1
0x8CFB7D: movss   [esp+50h+var_40], xmm0
0x8CFB83: fld     [esp+50h+var_40]
0x8CFB87: fadd    st, st
0x8CFB89: movaps  [esp+50h+var_20], xmm1
0x8CFB8E: fmulp   st(1), st
0x8CFB90: fstp    [esp+50h+var_44]
0x8CFB94: fld     [esp+50h+var_44]
0x8CFB98: call    __CIsqrt
0x8CFB9D: fstp    [esp+50h+var_44]
0x8CFBA1: fld     [esp+50h+var_44]
0x8CFBA5: movss   xmm0, dword ptr ds:0A99E34h
0x8CFBAD: mov     ecx, [esi+8]
0x8CFBB0: fstp    [esp+50h+var_44]
0x8CFBB4: test    ecx, ecx
0x8CFBB6: subss   xmm0, [esp+50h+var_44]
0x8CFBBC: xorps   xmm1, xmm1
0x8CFBBF: movss   xmm1, xmm0
0x8CFBC3: movaps  xmm0, xmm1
0x8CFBC6: movaps  xmm1, [esp+50h+var_20]
0x8CFBCB: mulps   xmm1, [esp+50h+var_30]
0x8CFBD0: shufps  xmm0, xmm0, 0
0x8CFBD4: mulps   xmm0, xmm1
0x8CFBD7: movaps  [esp+50h+var_30], xmm0
0x8CFBDC: jz      short loc_8CFBEA
0x8CFBDE: call    sub_8AC0A0
0x8CFBE3: movaps  xmm0, [esp+50h+var_30]
0x8CFBE8: jmp     short loc_8CFBEF
0x8CFBEA: mov     eax, offset stru_BA7A40
0x8CFBEF: movaps  xmm1, xmmword ptr [eax]
0x8CFBF2: fldz
0x8CFBF4: movaps  [esp+50h+var_30], xmm1
0x8CFBF9: fstp    dword ptr [esp+50h+var_30+8]
0x8CFBFD: movaps  xmm1, [esp+50h+var_30]
0x8CFC02: addps   xmm1, xmm0
0x8CFC05: mov     ecx, esi
0x8CFC07: movaps  xmmword ptr [esi+2E0h], xmm1
0x8CFC0E: mov     dword ptr [esi+2A0h], 2
0x8CFC18: call    sub_890720
0x8CFC1D: and     dword ptr [esi+1F4h], 0FFFDFEFFh
0x8CFC27: mov     eax, [esi+1ECh]
0x8CFC2D: mov     ecx, [esi+1E8h]
0x8CFC33: push    eax
0x8CFC34: call    sub_8BA170
0x8CFC39: mov     edx, [eax]
0x8CFC3B: mov     ecx, eax
0x8CFC3D: mov     eax, [edx+18h]
0x8CFC40: push    esi
0x8CFC41: call    eax
0x8CFC43: mov     ecx, [esp+50h+var_4]
0x8CFC47: pop     esi
0x8CFC48: xor     ecx, esp
0x8CFC4A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CFC4F: mov     esp, ebp
0x8CFC51: pop     ebp
0x8CFC52: retn    4
