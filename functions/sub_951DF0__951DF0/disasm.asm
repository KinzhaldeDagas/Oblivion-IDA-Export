0x951DF0: push    ebp
0x951DF1: mov     ebp, esp
0x951DF3: and     esp, 0FFFFFFF0h
0x951DF6: sub     esp, 64h
0x951DF9: movaps  xmm0, xmmword ptr ds:0A965C0h
0x951E00: push    ebx
0x951E01: mov     ebx, [ebp+arg_0]
0x951E04: movaps  xmm1, xmmword ptr [ebx]
0x951E07: push    esi
0x951E08: push    edi
0x951E09: lea     eax, [esp+70h+var_40]
0x951E0D: push    eax
0x951E0E: xorps   xmm1, xmm0
0x951E11: push    ebx
0x951E12: mov     edi, ecx
0x951E14: movaps  [esp+78h+var_50], xmm1
0x951E19: call    sub_951D00
0x951E1E: mov     esi, [ebp+arg_8]
0x951E21: push    esi
0x951E22: lea     ecx, [esp+74h+var_50]
0x951E26: push    ecx
0x951E27: mov     ecx, edi
0x951E29: call    sub_951D00
0x951E2E: mov     edx, [ebp+arg_4]
0x951E31: movaps  xmm1, xmmword ptr [edx]
0x951E34: movaps  xmm2, [esp+70h+var_40]
0x951E39: movaps  xmm3, xmmword ptr [ebx]
0x951E3C: movaps  xmm0, xmm2
0x951E3F: subps   xmm0, xmm1
0x951E42: mulps   xmm0, xmm3
0x951E45: movaps  xmm3, xmm0
0x951E48: shufps  xmm3, xmm0, 55h ; 'U'
0x951E4C: addss   xmm3, xmm0
0x951E50: movaps  xmm4, xmm0
0x951E53: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x951E57: movaps  xmm0, xmmword ptr [esi]
0x951E5A: addss   xmm4, xmm3
0x951E5E: movaps  xmm3, [esp+70h+var_50]
0x951E63: subps   xmm0, xmm1
0x951E66: mulps   xmm0, xmm3
0x951E69: lea     eax, [esp+70h+var_58]
0x951E6D: movaps  xmm1, xmm0
0x951E70: movss   dword ptr [eax], xmm4
0x951E74: fld     [esp+70h+var_58]
0x951E78: shufps  xmm1, xmm0, 55h ; 'U'
0x951E7C: movaps  xmm3, xmm0
0x951E7F: addss   xmm1, xmm0
0x951E83: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x951E87: lea     ecx, [esp+70h+var_54]
0x951E8B: addss   xmm3, xmm1
0x951E8F: movss   dword ptr [ecx], xmm3
0x951E93: fcomp   [esp+70h+var_54]
0x951E97: fnstsw  ax
0x951E99: test    ah, 1
0x951E9C: jnz     short loc_951ECC
0x951E9E: movaps  xmm0, [esp+70h+var_30]
0x951EA3: fld     [esp+70h+var_58]
0x951EA7: mov     edx, [esp+70h+var_10]
0x951EAB: mov     eax, [ebp+arg_C]
0x951EAE: movaps  xmmword ptr [esi], xmm2
0x951EB1: movaps  xmmword ptr [esi+10h], xmm0
0x951EB5: movaps  xmm0, [esp+70h+var_20]
0x951EBA: movaps  xmmword ptr [esi+20h], xmm0
0x951EBE: mov     [esi+30h], edx
0x951EC1: fstp    dword ptr [eax]
0x951EC3: pop     edi
0x951EC4: pop     esi
0x951EC5: pop     ebx
0x951EC6: mov     esp, ebp
0x951EC8: pop     ebp
0x951EC9: retn    10h
0x951ECC: fld     [esp+70h+var_54]
0x951ED0: mov     ecx, [ebp+arg_C]
0x951ED3: pop     edi
0x951ED4: fstp    dword ptr [ecx]
0x951ED6: pop     esi
0x951ED7: pop     ebx
0x951ED8: mov     esp, ebp
0x951EDA: pop     ebp
0x951EDB: retn    10h
