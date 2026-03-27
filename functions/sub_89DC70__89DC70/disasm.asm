0x89DC70: push    ebp
0x89DC71: mov     ebp, esp
0x89DC73: and     esp, 0FFFFFFF0h
0x89DC76: sub     esp, 34h
0x89DC79: push    ebx
0x89DC7A: push    esi
0x89DC7B: push    edi
0x89DC7C: movaps  xmm0, xmmword ptr [ecx+60h]
0x89DC80: mov     edx, [ebp+arg_0]
0x89DC83: lea     esi, [ecx+10h]
0x89DC86: movaps  xmmword ptr [esi+40h], xmm0
0x89DC8A: mov     eax, [edx]
0x89DC8C: mov     [esi+4Ch], eax
0x89DC8F: fld     dword ptr [esi+0A4h]
0x89DC95: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x89DC9C: fld     st
0x89DC9E: movaps  xmm0, xmm1
0x89DCA1: fmul    st, st(1)
0x89DCA3: mulps   xmm0, xmm1
0x89DCA6: movaps  xmm2, xmm0
0x89DCA9: shufps  xmm2, xmm0, 55h ; 'U'
0x89DCAD: movaps  xmm3, xmm0
0x89DCB0: lea     eax, [esp+40h+var_2C]
0x89DCB4: addss   xmm2, xmm0
0x89DCB8: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x89DCBC: addss   xmm3, xmm2
0x89DCC0: movss   dword ptr [eax], xmm3
0x89DCC4: fld     [esp+40h+var_2C]
0x89DCC8: fcompp
0x89DCCA: fnstsw  ax
0x89DCCC: fstp    st
0x89DCCE: test    ah, 41h
0x89DCD1: jnz     short loc_89DCFA
0x89DCD3: fld     [esp+40h+var_2C]
0x89DCD7: fsqrt
0x89DCD9: fdivr   dword ptr [esi+0A4h]
0x89DCDF: fstp    [esp+40h+var_28]
0x89DCE3: movss   xmm0, [esp+40h+var_28]
0x89DCE9: movaps  xmm2, xmm0
0x89DCEC: shufps  xmm2, xmm0, 0
0x89DCF0: mulps   xmm2, xmm1
0x89DCF3: movaps  xmmword ptr [ecx+0D0h], xmm2
0x89DCFA: mov     eax, [edx+8]
0x89DCFD: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x89DD04: mov     [esp+40h+var_28], eax
0x89DD08: movss   xmm0, [esp+40h+var_28]
0x89DD0E: movaps  xmm2, xmm0
0x89DD11: shufps  xmm2, xmm0, 0
0x89DD15: movaps  xmm0, xmmword ptr [esi+50h]
0x89DD19: mulps   xmm2, xmm1
0x89DD1C: addps   xmm0, xmm2
0x89DD1F: movaps  xmmword ptr [esi+50h], xmm0
0x89DD23: mov     eax, [edx+0Ch]
0x89DD26: mov     [esi+5Ch], eax
0x89DD29: lea     edi, [esi+70h]
0x89DD2C: mov     eax, edi
0x89DD2E: mov     ebx, [eax]
0x89DD30: mov     dword ptr [esp+40h+var_20], ebx
0x89DD34: mov     ebx, [eax+4]
0x89DD37: mov     dword ptr [esp+40h+var_20+4], ebx
0x89DD3B: mov     ebx, [eax+8]
0x89DD3E: mov     eax, [eax+0Ch]
0x89DD41: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x89DD45: mov     dword ptr [esp+40h+var_20+8], ebx
0x89DD49: movaps  xmm0, [esp+40h+var_20]
0x89DD4E: movaps  xmmword ptr [esi+60h], xmm0
0x89DD52: fld     dword ptr [edx+8]
0x89DD55: fmul    dword ptr ds:0A3D65Ch
0x89DD5B: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x89DD62: lea     eax, [esp+40h+var_28]
0x89DD66: fstp    [esp+40h+var_28]
0x89DD6A: movss   xmm0, [esp+40h+var_28]
0x89DD70: movaps  xmm1, xmm0
0x89DD73: shufps  xmm1, xmm0, 0
0x89DD77: mulps   xmm1, xmm2
0x89DD7A: movaps  xmm0, xmm1
0x89DD7D: mulps   xmm0, xmm1
0x89DD80: movaps  xmm3, xmm0
0x89DD83: shufps  xmm3, xmm0, 55h ; 'U'
0x89DD87: movaps  xmm4, xmm0
0x89DD8A: addss   xmm3, xmm0
0x89DD8E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x89DD92: addss   xmm4, xmm3
0x89DD96: movss   dword ptr [eax], xmm4
0x89DD9A: fld     [esp+40h+var_28]
0x89DD9E: fmul    dword ptr ds:0A96F74h
0x89DDA4: movaps  [esp+40h+var_10], xmm1
0x89DDA9: fstp    [esp+40h+var_2C]
0x89DDAD: fld     dword ptr [esi+0A8h]
0x89DDB3: fmul    dword ptr [edx+8]
0x89DDB6: fld     dword ptr ds:0A37450h
0x89DDBC: fcomp   st(1)
0x89DDBE: fnstsw  ax
0x89DDC0: test    ah, 5
0x89DDC3: jp      short loc_89DDCD
0x89DDC5: fstp    st
0x89DDC7: fld     dword ptr ds:0A37450h
0x89DDCD: fld     st
0x89DDCF: fmul    st, st(1)
0x89DDD1: fstp    [esp+40h+var_28]
0x89DDD5: fld     [esp+40h+var_2C]
0x89DDD9: fcomp   [esp+40h+var_28]
0x89DDDD: fnstsw  ax
0x89DDDF: test    ah, 41h
0x89DDE2: jp      short loc_89DDE8
0x89DDE4: fstp    st
0x89DDE6: jmp     short loc_89DE22
0x89DDE8: fld     [esp+40h+var_2C]
0x89DDEC: fsqrt
0x89DDEE: fdivp   st(1), st
0x89DDF0: fstp    [esp+40h+var_24]
0x89DDF4: movss   xmm0, [esp+40h+var_24]
0x89DDFA: movaps  xmm3, xmm0
0x89DDFD: shufps  xmm3, xmm0, 0
0x89DE01: mulps   xmm3, xmm2
0x89DE04: movaps  xmmword ptr [ecx+0E0h], xmm3
0x89DE0B: mov     ecx, [esp+40h+var_28]
0x89DE0F: movaps  xmm2, xmm0
0x89DE12: shufps  xmm2, xmm0, 0
0x89DE16: mulps   xmm2, xmm1
0x89DE19: movaps  [esp+40h+var_10], xmm2
0x89DE1E: mov     [esp+40h+var_2C], ecx
0x89DE22: fld     [esp+40h+var_2C]
0x89DE26: lea     edx, [esp+40h+var_20]
0x89DE2A: fmul    [esp+40h+var_2C]
0x89DE2E: push    edx
0x89DE2F: fld     [esp+44h+var_2C]
0x89DE33: lea     eax, [esp+44h+var_10]
0x89DE37: fmul    dword ptr ds:0A96F70h
0x89DE3D: push    eax
0x89DE3E: lea     ecx, [esp+48h+var_20]
0x89DE42: fsubr   dword ptr ds:0A2F948h
0x89DE48: fld     st(1)
0x89DE4A: fmul    dword ptr ds:0A96F6Ch
0x89DE50: fsubp   st(1), st
0x89DE52: fxch    st(1)
0x89DE54: fmul    [esp+48h+var_2C]
0x89DE58: fmul    dword ptr ds:0A96F68h
0x89DE5E: fsubp   st(1), st
0x89DE60: fstp    dword ptr [esp+48h+var_10+0Ch]
0x89DE64: call    sub_889470
0x89DE69: lea     ecx, [esp+40h+var_20]
0x89DE6D: call    sub_4D6830
0x89DE72: fld     [esp+40h+var_2C]
0x89DE76: fsqrt
0x89DE78: movaps  xmm0, [esp+40h+var_10]
0x89DE7D: movaps  xmm1, xmm0
0x89DE80: addps   xmm1, xmm0
0x89DE83: movaps  xmm0, [esp+40h+var_20]
0x89DE88: lea     ecx, [esi+70h]
0x89DE8B: movaps  xmmword ptr [esi+90h], xmm1
0x89DE92: push    ecx
0x89DE93: mov     ecx, esi
0x89DE95: fmul    dword ptr ds:0A96F64h
0x89DE9B: fstp    dword ptr [esi+9Ch]
0x89DEA1: movaps  xmmword ptr [edi], xmm0
0x89DEA4: call    sub_8B1DD0
0x89DEA9: movaps  xmm0, xmmword ptr [esi+80h]
0x89DEB0: movaps  xmm2, xmmword ptr [esi+20h]
0x89DEB4: movaps  xmm3, xmmword ptr [esi+10h]
0x89DEB8: movaps  xmm1, xmm0
0x89DEBB: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x89DEBF: mulps   xmm2, xmm1
0x89DEC2: movaps  xmm1, xmm0
0x89DEC5: shufps  xmm1, xmm0, 55h ; 'U'
0x89DEC9: mulps   xmm3, xmm1
0x89DECC: movaps  xmm1, xmm0
0x89DECF: shufps  xmm1, xmm0, 0
0x89DED3: movaps  xmm0, xmmword ptr [esi]
0x89DED6: mulps   xmm0, xmm1
0x89DED9: movaps  xmm1, xmmword ptr [esi+50h]
0x89DEDD: addps   xmm0, xmm3
0x89DEE0: addps   xmm0, xmm2
0x89DEE3: pop     edi
0x89DEE4: subps   xmm1, xmm0
0x89DEE7: movaps  xmmword ptr [esi+30h], xmm1
0x89DEEB: pop     esi
0x89DEEC: pop     ebx
0x89DEED: mov     esp, ebp
0x89DEEF: pop     ebp
0x89DEF0: retn    4
