0x8B1C60: push    ebp
0x8B1C61: mov     ebp, esp
0x8B1C63: and     esp, 0FFFFFFF0h
0x8B1C66: sub     esp, 28h
0x8B1C69: mov     eax, [ebp+arg_0]
0x8B1C6C: movaps  xmm2, xmmword ptr [eax]
0x8B1C6F: push    esi
0x8B1C70: push    edi
0x8B1C71: mov     edi, [ebp+arg_4]
0x8B1C74: movaps  xmm0, xmmword ptr [edi]
0x8B1C77: movaps  xmm1, xmm2
0x8B1C7A: mulps   xmm1, xmm0
0x8B1C7D: movaps  xmm0, xmm1
0x8B1C80: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8B1C84: addps   xmm0, xmm1
0x8B1C87: movaps  xmm1, xmm0
0x8B1C8A: mov     esi, ecx
0x8B1C8C: shufps  xmm1, xmm0, 0B1h ; '±'
0x8B1C90: lea     ecx, [esp+30h+var_18]
0x8B1C94: addps   xmm0, xmm1
0x8B1C97: movss   dword ptr [ecx], xmm0
0x8B1C9B: fld     [esp+30h+var_18]
0x8B1C9F: fcomp   dword ptr ds:0A2FAA8h
0x8B1CA5: mov     edx, [esp+30h+var_18]
0x8B1CA9: movaps  [esp+30h+var_10], xmm2
0x8B1CAE: mov     [esp+30h+var_1C], edx
0x8B1CB2: mov     [esp+30h+var_14], 3F800000h
0x8B1CBA: fnstsw  ax
0x8B1CBC: test    ah, 5
0x8B1CBF: jp      short loc_8B1CD3
0x8B1CC1: fld     [esp+30h+var_18]
0x8B1CC5: mov     [esp+30h+var_14], 0BF800000h
0x8B1CCD: fchs
0x8B1CCF: fstp    [esp+30h+var_1C]
0x8B1CD3: fld     [esp+30h+var_1C]
0x8B1CD7: fcomp   dword ptr ds:0A3F478h
0x8B1CDD: fnstsw  ax
0x8B1CDF: test    ah, 5
0x8B1CE2: jp      loc_8B1D79
0x8B1CE8: fld     [esp+30h+var_1C]
0x8B1CEC: fabs
0x8B1CEE: fcomp   dword ptr ds:0A2F948h
0x8B1CF4: fnstsw  ax
0x8B1CF6: test    ah, 1
0x8B1CF9: jnz     short loc_8B1D1C
0x8B1CFB: fld     [esp+30h+var_1C]
0x8B1CFF: fcomp   dword ptr ds:0A2FAA8h
0x8B1D05: fnstsw  ax
0x8B1D07: test    ah, 41h
0x8B1D0A: jnz     short loc_8B1D14
0x8B1D0C: fld     dword ptr ds:0A2FAA8h
0x8B1D12: jmp     short loc_8B1D2A
0x8B1D14: fld     dword ptr ds:0A97E28h
0x8B1D1A: jmp     short loc_8B1D2A
0x8B1D1C: fld     [esp+30h+var_1C]
0x8B1D20: call    __CIacos
0x8B1D25: movaps  xmm2, [esp+30h+var_10]
0x8B1D2A: fld     [esp+30h+var_1C]
0x8B1D2E: fmul    [esp+30h+var_1C]
0x8B1D32: fsubr   dword ptr ds:0A2F948h
0x8B1D38: fsqrt
0x8B1D3A: fdivr   dword ptr ds:0A2F948h
0x8B1D40: fld     st(1)
0x8B1D42: fmul    [ebp+arg_8]
0x8B1D45: fxch    st(2)
0x8B1D47: fsub    st, st(2)
0x8B1D49: fsin
0x8B1D4B: fmul    st, st(1)
0x8B1D4D: fstp    [esp+30h+var_18]
0x8B1D51: movss   xmm0, [esp+30h+var_18]
0x8B1D57: fxch    st(1)
0x8B1D59: movaps  xmm1, xmm0
0x8B1D5C: fsin
0x8B1D5E: shufps  xmm1, xmm0, 0
0x8B1D62: movaps  xmm0, xmm1
0x8B1D65: fmul    st, st(1)
0x8B1D67: fmul    [esp+30h+var_14]
0x8B1D6B: fstp    [esp+30h+var_14]
0x8B1D6F: movss   xmm1, [esp+30h+var_14]
0x8B1D75: fstp    st
0x8B1D77: jmp     short loc_8B1DA7
0x8B1D79: fld     dword ptr ds:0A2F948h
0x8B1D7F: fsub    [ebp+arg_8]
0x8B1D82: fstp    [esp+30h+var_18]
0x8B1D86: movss   xmm0, [esp+30h+var_18]
0x8B1D8C: fld     [esp+30h+var_14]
0x8B1D90: movaps  xmm1, xmm0
0x8B1D93: fmul    [ebp+arg_8]
0x8B1D96: shufps  xmm1, xmm0, 0
0x8B1D9A: movaps  xmm0, xmm1
0x8B1D9D: fstp    [esp+30h+var_14]
0x8B1DA1: movss   xmm1, [esp+30h+var_14]
0x8B1DA7: mulps   xmm0, xmm2
0x8B1DAA: movaps  xmmword ptr [esi], xmm0
0x8B1DAD: movaps  xmm2, xmmword ptr [edi]
0x8B1DB0: movaps  xmm3, xmm1
0x8B1DB3: shufps  xmm3, xmm1, 0
0x8B1DB7: mulps   xmm3, xmm2
0x8B1DBA: addps   xmm0, xmm3
0x8B1DBD: mov     ecx, esi
0x8B1DBF: movaps  xmmword ptr [esi], xmm0
0x8B1DC2: call    sub_4D6830
0x8B1DC7: pop     edi
0x8B1DC8: pop     esi
0x8B1DC9: mov     esp, ebp
0x8B1DCB: pop     ebp
0x8B1DCC: retn    0Ch
