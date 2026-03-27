0x8E9D00: push    ebp
0x8E9D01: mov     ebp, esp
0x8E9D03: and     esp, 0FFFFFFF0h
0x8E9D06: sub     esp, 34h
0x8E9D09: mov     eax, [ebp+arg_4]
0x8E9D0C: push    ebx
0x8E9D0D: push    esi
0x8E9D0E: mov     [esp+3Ch+var_28], eax
0x8E9D12: movss   xmm0, [esp+3Ch+var_28]
0x8E9D18: movaps  xmm2, xmm0
0x8E9D1B: shufps  xmm2, xmm0, 0
0x8E9D1F: push    edi
0x8E9D20: mov     edi, [ebp+arg_8]
0x8E9D23: movaps  xmm1, xmmword ptr [edi+40h]
0x8E9D27: mulps   xmm2, xmm1
0x8E9D2A: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8E9D31: movaps  xmm1, xmmword ptr [edi+50h]
0x8E9D35: movaps  xmm2, xmm0
0x8E9D38: shufps  xmm2, xmm0, 0
0x8E9D3C: mulps   xmm2, xmm1
0x8E9D3F: movaps  xmmword ptr [ecx+0E0h], xmm2
0x8E9D46: mov     dx, [edi+4]
0x8E9D4A: mov     [ecx+0BEh], dx
0x8E9D51: movaps  xmm0, xmmword ptr [ecx+60h]
0x8E9D55: mov     edx, [ebp+arg_0]
0x8E9D58: lea     esi, [ecx+10h]
0x8E9D5B: movaps  xmmword ptr [esi+40h], xmm0
0x8E9D5F: mov     eax, [edx]
0x8E9D61: mov     [esi+4Ch], eax
0x8E9D64: fld     dword ptr [esi+0A4h]
0x8E9D6A: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E9D71: fld     st
0x8E9D73: movaps  xmm0, xmm1
0x8E9D76: fmul    st, st(1)
0x8E9D78: mulps   xmm0, xmm1
0x8E9D7B: movaps  xmm2, xmm0
0x8E9D7E: shufps  xmm2, xmm0, 55h ; 'U'
0x8E9D82: movaps  xmm3, xmm0
0x8E9D85: lea     eax, [esp+40h+var_2C]
0x8E9D89: addss   xmm2, xmm0
0x8E9D8D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E9D91: addss   xmm3, xmm2
0x8E9D95: movss   dword ptr [eax], xmm3
0x8E9D99: fld     [esp+40h+var_2C]
0x8E9D9D: fcompp
0x8E9D9F: fnstsw  ax
0x8E9DA1: fstp    st
0x8E9DA3: test    ah, 41h
0x8E9DA6: jnz     short loc_8E9DCF
0x8E9DA8: fld     [esp+40h+var_2C]
0x8E9DAC: fsqrt
0x8E9DAE: fdivr   dword ptr [esi+0A4h]
0x8E9DB4: fstp    [esp+40h+var_28]
0x8E9DB8: movss   xmm0, [esp+40h+var_28]
0x8E9DBE: movaps  xmm2, xmm0
0x8E9DC1: shufps  xmm2, xmm0, 0
0x8E9DC5: mulps   xmm2, xmm1
0x8E9DC8: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8E9DCF: mov     eax, [edx+8]
0x8E9DD2: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E9DD9: mov     [esp+40h+var_28], eax
0x8E9DDD: movss   xmm0, [esp+40h+var_28]
0x8E9DE3: movaps  xmm2, xmm0
0x8E9DE6: shufps  xmm2, xmm0, 0
0x8E9DEA: movaps  xmm0, xmmword ptr [esi+50h]
0x8E9DEE: mulps   xmm2, xmm1
0x8E9DF1: addps   xmm0, xmm2
0x8E9DF4: movaps  xmmword ptr [esi+50h], xmm0
0x8E9DF8: mov     eax, [edx+0Ch]
0x8E9DFB: mov     [esi+5Ch], eax
0x8E9DFE: lea     eax, [esi+70h]
0x8E9E01: mov     ebx, [eax]
0x8E9E03: mov     dword ptr [esp+40h+var_20], ebx
0x8E9E07: mov     ebx, [eax+4]
0x8E9E0A: mov     dword ptr [esp+40h+var_20+4], ebx
0x8E9E0E: mov     ebx, [eax+8]
0x8E9E11: mov     eax, [eax+0Ch]
0x8E9E14: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8E9E18: mov     dword ptr [esp+40h+var_20+8], ebx
0x8E9E1C: movaps  xmm0, [esp+40h+var_20]
0x8E9E21: movaps  xmmword ptr [esi+60h], xmm0
0x8E9E25: fld     dword ptr [edx+8]
0x8E9E28: fmul    dword ptr ds:0A3D65Ch
0x8E9E2E: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8E9E35: lea     eax, [esp+40h+var_28]
0x8E9E39: fstp    [esp+40h+var_28]
0x8E9E3D: movss   xmm0, [esp+40h+var_28]
0x8E9E43: movaps  xmm1, xmm0
0x8E9E46: shufps  xmm1, xmm0, 0
0x8E9E4A: mulps   xmm1, xmm2
0x8E9E4D: movaps  xmm0, xmm1
0x8E9E50: mulps   xmm0, xmm1
0x8E9E53: movaps  xmm3, xmm0
0x8E9E56: shufps  xmm3, xmm0, 55h ; 'U'
0x8E9E5A: movaps  xmm4, xmm0
0x8E9E5D: addss   xmm3, xmm0
0x8E9E61: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8E9E65: addss   xmm4, xmm3
0x8E9E69: movss   dword ptr [eax], xmm4
0x8E9E6D: fld     [esp+40h+var_28]
0x8E9E71: fmul    dword ptr ds:0A96F74h
0x8E9E77: movaps  [esp+40h+var_10], xmm1
0x8E9E7C: fstp    [esp+40h+var_2C]
0x8E9E80: fld     dword ptr [esi+0A8h]
0x8E9E86: fmul    dword ptr [edx+8]
0x8E9E89: fld     dword ptr ds:0A37450h
0x8E9E8F: fcomp   st(1)
0x8E9E91: fnstsw  ax
0x8E9E93: test    ah, 5
0x8E9E96: jp      short loc_8E9EA0
0x8E9E98: fstp    st
0x8E9E9A: fld     dword ptr ds:0A37450h
0x8E9EA0: fld     st
0x8E9EA2: fmul    st, st(1)
0x8E9EA4: fstp    [esp+40h+var_28]
0x8E9EA8: fld     [esp+40h+var_2C]
0x8E9EAC: fcomp   [esp+40h+var_28]
0x8E9EB0: fnstsw  ax
0x8E9EB2: test    ah, 41h
0x8E9EB5: jp      short loc_8E9EBB
0x8E9EB7: fstp    st
0x8E9EB9: jmp     short loc_8E9EF5
0x8E9EBB: fld     [esp+40h+var_2C]
0x8E9EBF: fsqrt
0x8E9EC1: fdivp   st(1), st
0x8E9EC3: fstp    [esp+40h+var_24]
0x8E9EC7: movss   xmm0, [esp+40h+var_24]
0x8E9ECD: movaps  xmm3, xmm0
0x8E9ED0: shufps  xmm3, xmm0, 0
0x8E9ED4: mulps   xmm3, xmm2
0x8E9ED7: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8E9EDE: mov     ecx, [esp+40h+var_28]
0x8E9EE2: movaps  xmm2, xmm0
0x8E9EE5: shufps  xmm2, xmm0, 0
0x8E9EE9: mulps   xmm2, xmm1
0x8E9EEC: movaps  [esp+40h+var_10], xmm2
0x8E9EF1: mov     [esp+40h+var_2C], ecx
0x8E9EF5: fld     [esp+40h+var_2C]
0x8E9EF9: lea     edx, [esp+40h+var_20]
0x8E9EFD: fmul    [esp+40h+var_2C]
0x8E9F01: push    edx
0x8E9F02: fld     [esp+44h+var_2C]
0x8E9F06: lea     eax, [esp+44h+var_10]
0x8E9F0A: fmul    dword ptr ds:0A96F70h
0x8E9F10: push    eax
0x8E9F11: lea     ecx, [esp+48h+var_20]
0x8E9F15: fsubr   dword ptr ds:0A2F948h
0x8E9F1B: fld     st(1)
0x8E9F1D: fmul    dword ptr ds:0A96F6Ch
0x8E9F23: fsubp   st(1), st
0x8E9F25: fxch    st(1)
0x8E9F27: fmul    [esp+48h+var_2C]
0x8E9F2B: fmul    dword ptr ds:0A96F68h
0x8E9F31: fsubp   st(1), st
0x8E9F33: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8E9F37: call    sub_889470
0x8E9F3C: lea     ecx, [esp+40h+var_20]
0x8E9F40: call    sub_4D6830
0x8E9F45: fld     [esp+40h+var_2C]
0x8E9F49: fsqrt
0x8E9F4B: movaps  xmm0, [esp+40h+var_10]
0x8E9F50: movaps  xmm1, xmm0
0x8E9F53: addps   xmm1, xmm0
0x8E9F56: movaps  xmm0, [esp+40h+var_20]
0x8E9F5B: lea     ecx, [esi+70h]
0x8E9F5E: movaps  xmmword ptr [esi+90h], xmm1
0x8E9F65: push    ecx
0x8E9F66: mov     ecx, esi
0x8E9F68: fmul    dword ptr ds:0A9AD3Ch
0x8E9F6E: fstp    dword ptr [esi+9Ch]
0x8E9F74: movaps  xmmword ptr [esi+70h], xmm0
0x8E9F78: call    sub_8B1DD0
0x8E9F7D: movaps  xmm0, xmmword ptr [esi+80h]
0x8E9F84: movaps  xmm2, xmmword ptr [esi+20h]
0x8E9F88: movaps  xmm3, xmmword ptr [esi+10h]
0x8E9F8C: movaps  xmm1, xmm0
0x8E9F8F: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E9F93: mulps   xmm2, xmm1
0x8E9F96: movaps  xmm1, xmm0
0x8E9F99: shufps  xmm1, xmm0, 55h ; 'U'
0x8E9F9D: mulps   xmm3, xmm1
0x8E9FA0: movaps  xmm1, xmm0
0x8E9FA3: shufps  xmm1, xmm0, 0
0x8E9FA7: movaps  xmm0, xmmword ptr [esi]
0x8E9FAA: mulps   xmm0, xmm1
0x8E9FAD: movaps  xmm1, xmmword ptr [esi+50h]
0x8E9FB1: addps   xmm0, xmm3
0x8E9FB4: addps   xmm0, xmm2
0x8E9FB7: lea     eax, [edi+80h]
0x8E9FBD: pop     edi
0x8E9FBE: subps   xmm1, xmm0
0x8E9FC1: movaps  xmmword ptr [esi+30h], xmm1
0x8E9FC5: pop     esi
0x8E9FC6: pop     ebx
0x8E9FC7: mov     esp, ebp
0x8E9FC9: pop     ebp
0x8E9FCA: retn    0Ch
