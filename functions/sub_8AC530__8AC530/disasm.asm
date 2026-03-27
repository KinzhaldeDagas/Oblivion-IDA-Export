0x8AC530: push    ebp
0x8AC531: mov     ebp, esp
0x8AC533: and     esp, 0FFFFFFF0h
0x8AC536: sub     esp, 1Ch
0x8AC539: push    esi
0x8AC53A: mov     edx, [ebp+arg_0]
0x8AC53D: fld     dword ptr ds:0A2F948h
0x8AC543: movaps  xmm1, xmmword ptr [edx]
0x8AC546: movaps  xmm0, xmm1
0x8AC549: mulps   xmm0, xmm1
0x8AC54C: movaps  xmm2, xmm0
0x8AC54F: shufps  xmm2, xmm0, 55h ; 'U'
0x8AC553: addss   xmm2, xmm0
0x8AC557: movaps  xmm3, xmm0
0x8AC55A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8AC55E: movaps  xmm0, xmm3
0x8AC561: addss   xmm0, xmm2
0x8AC565: movaps  [esp+20h+var_10], xmm0
0x8AC56A: sqrtss  xmm0, xmm0
0x8AC56E: movss   dword ptr [esp+20h+var_10], xmm0
0x8AC574: movaps  xmm0, [esp+20h+var_10]
0x8AC579: lea     eax, [esp+20h+var_18]
0x8AC57D: movss   dword ptr [eax], xmm0
0x8AC581: fdiv    [esp+20h+var_18]
0x8AC585: mov     eax, [ebp+arg_4]
0x8AC588: mov     eax, [eax+10h]
0x8AC58B: movaps  xmm0, xmmword ptr [eax+10h]
0x8AC58F: mulps   xmm1, xmm0
0x8AC592: movaps  xmm0, xmm1
0x8AC595: shufps  xmm0, xmm1, 55h ; 'U'
0x8AC599: movaps  xmm2, xmm1
0x8AC59C: addss   xmm0, xmm1
0x8AC5A0: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x8AC5A4: lea     esi, [esp+20h+var_14]
0x8AC5A8: addss   xmm2, xmm0
0x8AC5AC: movss   dword ptr [esi], xmm2
0x8AC5B0: fld     [esp+20h+var_14]
0x8AC5B4: fmul    st, st(1)
0x8AC5B6: fdivr   dword ptr ds:0A30634h
0x8AC5BC: fmul    dword ptr [ecx+58h]
0x8AC5BF: fmul    st, st(1)
0x8AC5C1: fsubr   dword ptr [eax+0Ch]
0x8AC5C4: fstp    [esp+20h+var_18]
0x8AC5C8: fstp    st
0x8AC5CA: fld     [esp+20h+var_18]
0x8AC5CE: fcomp   dword ptr ds:0A2F948h
0x8AC5D4: fnstsw  ax
0x8AC5D6: test    ah, 5
0x8AC5D9: jp      short loc_8AC635
0x8AC5DB: fld     [esp+20h+var_18]
0x8AC5DF: fld     dword ptr ds:0A2FAA8h
0x8AC5E5: fcomp   [esp+20h+var_18]
0x8AC5E9: fnstsw  ax
0x8AC5EB: test    ah, 41h
0x8AC5EE: jnz     short loc_8AC5F8
0x8AC5F0: fstp    st
0x8AC5F2: fld     dword ptr ds:0A2FAA8h
0x8AC5F8: mov     ecx, [ebp+arg_8]
0x8AC5FB: fst     [esp+20h+var_14]
0x8AC5FF: movss   xmm0, [esp+20h+var_14]
0x8AC605: movaps  xmm1, xmmword ptr [ecx]
0x8AC608: mov     eax, [ebp+arg_C]
0x8AC60B: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8AC612: shufps  xmm0, xmm0, 0
0x8AC616: movaps  xmm2, xmm0
0x8AC619: mulps   xmm2, xmm1
0x8AC61C: movaps  xmm1, xmmword ptr [eax]
0x8AC61F: subps   xmm3, xmm0
0x8AC622: mulps   xmm3, xmm1
0x8AC625: addps   xmm3, xmm2
0x8AC628: movaps  xmmword ptr [eax], xmm3
0x8AC62B: fmul    dword ptr [edx+20h]
0x8AC62E: pop     esi
0x8AC62F: mov     esp, ebp
0x8AC631: pop     ebp
0x8AC632: retn    10h
0x8AC635: fld     dword ptr ds:0A2F948h
0x8AC63B: jmp     short loc_8AC5F8
