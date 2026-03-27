0x8D1DB0: push    ebp
0x8D1DB1: mov     ebp, esp
0x8D1DB3: and     esp, 0FFFFFFF0h
0x8D1DB6: sub     esp, 20h
0x8D1DB9: mov     eax, [ebp+arg_0]
0x8D1DBC: movaps  xmm2, xmmword ptr [eax+10h]
0x8D1DC0: movaps  xmm0, xmmword ptr [eax]
0x8D1DC3: movaps  xmm1, xmmword ptr [eax+20h]
0x8D1DC7: subps   xmm0, xmm2
0x8D1DCA: subps   xmm1, xmm2
0x8D1DCD: movaps  xmm2, xmm0
0x8D1DD0: mulps   xmm2, xmm0
0x8D1DD3: movaps  xmm3, xmm2
0x8D1DD6: shufps  xmm3, xmm2, 55h ; 'U'
0x8D1DDA: addss   xmm3, xmm2
0x8D1DDE: movaps  xmm4, xmm2
0x8D1DE1: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x8D1DE5: addss   xmm4, xmm3
0x8D1DE9: movaps  xmm2, xmm1
0x8D1DEC: mulps   xmm2, xmm1
0x8D1DEF: movaps  xmm3, xmm2
0x8D1DF2: shufps  xmm3, xmm2, 55h ; 'U'
0x8D1DF6: addss   xmm3, xmm2
0x8D1DFA: lea     eax, [esp+20h+var_18]
0x8D1DFE: movss   dword ptr [eax], xmm4
0x8D1E02: movaps  xmm4, xmm2
0x8D1E05: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x8D1E09: addss   xmm4, xmm3
0x8D1E0D: movaps  xmm2, xmm1
0x8D1E10: mulps   xmm2, xmm0
0x8D1E13: movaps  xmm3, xmm2
0x8D1E16: shufps  xmm3, xmm2, 55h ; 'U'
0x8D1E1A: addss   xmm3, xmm2
0x8D1E1E: lea     ecx, [esp+20h+var_14]
0x8D1E22: movss   dword ptr [ecx], xmm4
0x8D1E26: fld     [esp+20h+var_14]
0x8D1E2A: fmul    [esp+20h+var_18]
0x8D1E2E: movaps  xmm4, xmm2
0x8D1E31: shufps  xmm4, xmm2, 0AAh ; 'ª'
0x8D1E35: addss   xmm4, xmm3
0x8D1E39: lea     edx, [esp+20h+var_1C]
0x8D1E3D: movss   dword ptr [edx], xmm4
0x8D1E41: fld     [esp+20h+var_1C]
0x8D1E45: fmul    [esp+20h+var_1C]
0x8D1E49: mov     eax, [ebp+arg_4]
0x8D1E4C: movaps  xmm3, xmm0
0x8D1E4F: fsubp   st(1), st
0x8D1E51: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8D1E55: movaps  xmm2, xmm1
0x8D1E58: fdivr   dword ptr ds:0A2F948h
0x8D1E5E: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8D1E62: mulps   xmm3, xmm2
0x8D1E65: movaps  xmm2, xmm1
0x8D1E68: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8D1E6C: movaps  xmm1, xmm0
0x8D1E6F: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D1E73: movaps  xmm0, xmm1
0x8D1E76: mulps   xmm0, xmm2
0x8D1E79: subps   xmm0, xmm3
0x8D1E7C: mulps   xmm0, xmm0
0x8D1E7F: movaps  xmm1, xmm0
0x8D1E82: shufps  xmm1, xmm0, 55h ; 'U'
0x8D1E86: movaps  xmm2, xmm0
0x8D1E89: addss   xmm1, xmm0
0x8D1E8D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D1E91: movaps  xmm0, xmm2
0x8D1E94: addss   xmm0, xmm1
0x8D1E98: movaps  [esp+20h+var_10], xmm0
0x8D1E9D: sqrtss  xmm0, xmm0
0x8D1EA1: movss   dword ptr [esp+20h+var_10], xmm0
0x8D1EA7: movaps  xmm0, [esp+20h+var_10]
0x8D1EAC: fld     [esp+20h+var_18]
0x8D1EB0: fmul    st, st(1)
0x8D1EB2: fstp    dword ptr [eax]
0x8D1EB4: fld     [esp+20h+var_14]
0x8D1EB8: fmul    st, st(1)
0x8D1EBA: fstp    dword ptr [eax+4]
0x8D1EBD: fld     [esp+20h+var_1C]
0x8D1EC1: fmul    st, st(1)
0x8D1EC3: fstp    dword ptr [eax+8]
0x8D1EC6: fstp    st
0x8D1EC8: fld     dword ptr ds:0A2F948h
0x8D1ECE: lea     ecx, [esp+20h+var_14]
0x8D1ED2: movss   dword ptr [ecx], xmm0
0x8D1ED6: fdiv    [esp+20h+var_14]
0x8D1EDA: fstp    dword ptr [eax+0Ch]
0x8D1EDD: mov     esp, ebp
0x8D1EDF: pop     ebp
0x8D1EE0: retn
