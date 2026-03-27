0x94FC90: push    ebp
0x94FC91: mov     ebp, esp
0x94FC93: and     esp, 0FFFFFFF0h
0x94FC96: sub     esp, 34h
0x94FC99: push    ebx
0x94FC9A: mov     ebx, [ebp+arg_8]
0x94FC9D: push    esi
0x94FC9E: mov     esi, [ebp+arg_0]
0x94FCA1: push    edi
0x94FCA2: mov     edi, [ebp+arg_C]
0x94FCA5: lea     eax, [esp+40h+var_30]
0x94FCA9: push    eax
0x94FCAA: push    edi
0x94FCAB: push    ebx
0x94FCAC: push    esi
0x94FCAD: call    sub_94FB80
0x94FCB2: fld     dword ptr [esp+50h+var_30]
0x94FCB6: mov     ecx, [ebp+arg_4]
0x94FCB9: fcomp   dword ptr [ecx+18h]
0x94FCBC: add     esp, 10h
0x94FCBF: fnstsw  ax
0x94FCC1: test    ah, 41h
0x94FCC4: jnz     short loc_94FCE7
0x94FCC6: fld     dword ptr [ecx+18h]
0x94FCC9: mov     edx, [ecx+18h]
0x94FCCC: fcomp   dword ptr [ecx+1Ch]
0x94FCCF: mov     dword ptr [esp+40h+var_30], edx
0x94FCD3: fnstsw  ax
0x94FCD5: test    ah, 1
0x94FCD8: jnz     short loc_94FCE7
0x94FCDA: fld     dword ptr ds:0A2FAA8h
0x94FCE0: pop     edi
0x94FCE1: pop     esi
0x94FCE2: pop     ebx
0x94FCE3: mov     esp, ebp
0x94FCE5: pop     ebp
0x94FCE6: retn
0x94FCE7: fld     dword ptr [ecx+14h]
0x94FCEA: movaps  xmm1, [esp+40h+var_30]
0x94FCEF: fadd    dword ptr ds:0A2F948h
0x94FCF5: movaps  xmm0, xmmword ptr ds:0A965C0h
0x94FCFC: movaps  xmm2, xmmword ptr [esi+160h]
0x94FD03: movaps  xmm3, xmmword ptr [esi+150h]
0x94FD0A: movaps  xmm4, xmmword ptr [esi+140h]
0x94FD11: xorps   xmm1, xmm0
0x94FD14: movaps  [esp+40h+var_30], xmm1
0x94FD19: fmul    dword ptr [esp+40h+var_30]
0x94FD1D: fadd    dword ptr [ecx+1Ch]
0x94FD20: fstp    dword ptr [esp+40h+var_30]
0x94FD24: movaps  xmm0, [esp+40h+var_30]
0x94FD29: fld     dword ptr [ecx+10h]
0x94FD2C: movaps  xmm1, xmm0
0x94FD2F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x94FD33: mulps   xmm2, xmm1
0x94FD36: movaps  xmm1, xmm0
0x94FD39: shufps  xmm1, xmm0, 55h ; 'U'
0x94FD3D: mulps   xmm3, xmm1
0x94FD40: movaps  xmm1, xmm0
0x94FD43: shufps  xmm1, xmm0, 0
0x94FD47: mulps   xmm4, xmm1
0x94FD4A: movaps  xmm1, xmm4
0x94FD4D: addps   xmm1, xmm3
0x94FD50: addps   xmm1, xmm2
0x94FD53: movaps  xmm2, xmm1
0x94FD56: mulps   xmm2, xmm1
0x94FD59: movaps  [esp+40h+var_10], xmm2
0x94FD5E: fld     dword ptr [esp+40h+var_10+8]
0x94FD62: fadd    dword ptr [esp+40h+var_10+4]
0x94FD66: movaps  [esp+40h+var_20], xmm1
0x94FD6B: fld     st(1)
0x94FD6D: fmul    st, st(2)
0x94FD6F: fmul    dword ptr [esp+40h+var_10]
0x94FD73: fcompp
0x94FD75: fnstsw  ax
0x94FD77: fstp    st
0x94FD79: test    ah, 5
0x94FD7C: jp      loc_94FEB8
0x94FD82: fld     dword ptr [esp+40h+var_20+8]
0x94FD86: movaps  xmm2, xmmword ptr [esi+110h]
0x94FD8D: fabs
0x94FD8F: xorps   xmm1, xmm1
0x94FD92: fld     dword ptr [esp+40h+var_20+4]
0x94FD96: fabs
0x94FD98: fxch    st(1)
0x94FD9A: movaps  [esp+40h+var_20], xmm1
0x94FD9F: fxch    st(1)
0x94FDA1: faddp   st(1), st
0x94FDA3: fld     dword ptr [esp+40h+var_30]
0x94FDA7: fmul    dword ptr [esi+11Ch]
0x94FDAD: fld     dword ptr [esp+40h+var_20]
0x94FDB1: fadd    st, st(1)
0x94FDB3: fstp    dword ptr [esp+40h+var_20]
0x94FDB7: fstp    [esp+40h+var_34]
0x94FDBB: movss   xmm1, [esp+40h+var_34]
0x94FDC1: movaps  xmm3, xmm1
0x94FDC4: shufps  xmm3, xmm1, 0
0x94FDC8: mulps   xmm3, xmm2
0x94FDCB: subps   xmm0, xmm3
0x94FDCE: movaps  [esp+40h+var_30], xmm0
0x94FDD3: fld     dword ptr [esp+40h+var_30+8]
0x94FDD7: fmul    dword ptr [esi+134h]
0x94FDDD: fstp    [esp+40h+var_34]
0x94FDE1: fld     dword ptr [esp+40h+var_30+4]
0x94FDE5: fmul    dword ptr [esi+124h]
0x94FDEB: fsub    [esp+40h+var_34]
0x94FDEF: fmul    dword ptr [esi+12Ch]
0x94FDF5: fld     dword ptr [esp+40h+var_30+8]
0x94FDF9: fmul    dword ptr [esi+138h]
0x94FDFF: fsub    [esp+40h+var_34]
0x94FE03: fmul    dword ptr [esi+12Ch]
0x94FE09: fld     st
0x94FE0B: fmul    st, st(1)
0x94FE0D: fld     st(2)
0x94FE0F: fmul    st, st(3)
0x94FE11: faddp   st(1), st
0x94FE13: fld     dword ptr [esp+40h+var_20]
0x94FE17: fmul    dword ptr [ecx+10h]
0x94FE1A: fld     st
0x94FE1C: fmulp   st(1), st
0x94FE1E: fld     st(1)
0x94FE20: fcomp   st(1)
0x94FE22: fnstsw  ax
0x94FE24: test    ah, 41h
0x94FE27: jnz     short loc_94FE35
0x94FE29: fdivrp  st(1), st
0x94FE2B: fsqrt
0x94FE2D: fld     st
0x94FE2F: fmulp   st(3), st
0x94FE31: fmulp   st(1), st
0x94FE33: jmp     short loc_94FE39
0x94FE35: fstp    st
0x94FE37: fstp    st
0x94FE39: movaps  xmm3, xmmword ptr [esi+130h]
0x94FE40: fld     st(1)
0x94FE42: fstp    dword ptr [esp+40h+var_20+4]
0x94FE46: fst     dword ptr [esp+40h+var_20+8]
0x94FE4A: fxch    st(1)
0x94FE4C: fstp    [esp+40h+var_34]
0x94FE50: movss   xmm1, [esp+40h+var_34]
0x94FE56: fstp    [esp+40h+var_34]
0x94FE5A: movss   xmm2, [esp+40h+var_34]
0x94FE60: movaps  xmm4, xmm2
0x94FE63: shufps  xmm4, xmm2, 0
0x94FE67: movaps  xmm2, xmmword ptr [esi+120h]
0x94FE6E: mulps   xmm4, xmm3
0x94FE71: movaps  xmm3, xmm1
0x94FE74: shufps  xmm3, xmm1, 0
0x94FE78: mulps   xmm3, xmm2
0x94FE7B: subps   xmm0, xmm3
0x94FE7E: subps   xmm0, xmm4
0x94FE81: movaps  [esp+40h+var_30], xmm0
0x94FE86: fld     dword ptr [esp+40h+var_30]
0x94FE8A: fmul    dword ptr [esi+11Ch]
0x94FE90: fld     dword ptr ds:0A2FAA8h
0x94FE96: fcomp   st(1)
0x94FE98: fnstsw  ax
0x94FE9A: test    ah, 41h
0x94FE9D: jnz     short loc_94FEA7
0x94FE9F: fstp    st
0x94FEA1: fld     dword ptr ds:0A2FAA8h
0x94FEA7: fadd    dword ptr [esp+40h+var_20]
0x94FEAB: fxch    st(1)
0x94FEAD: fmul    dword ptr [ecx+20h]
0x94FEB0: fadd    st, st(1)
0x94FEB2: fstp    dword ptr [esp+40h+var_20]
0x94FEB6: fstp    st
0x94FEB8: push    edi
0x94FEB9: push    ebx
0x94FEBA: lea     eax, [esp+48h+var_20]
0x94FEBE: push    eax
0x94FEBF: push    esi
0x94FEC0: call    sub_94FA50
0x94FEC5: fld     dword ptr [esp+50h+var_20]
0x94FEC9: add     esp, 10h
0x94FECC: pop     edi
0x94FECD: pop     esi
0x94FECE: pop     ebx
0x94FECF: mov     esp, ebp
0x94FED1: pop     ebp
0x94FED2: retn
