0x8F37A0: push    ebp
0x8F37A1: mov     ebp, esp
0x8F37A3: and     esp, 0FFFFFFF0h
0x8F37A6: sub     esp, 10h
0x8F37A9: mov     eax, [ebp+arg_4]
0x8F37AC: movaps  xmm2, xmmword ptr [eax]
0x8F37AF: mov     ecx, [ebp+arg_8]
0x8F37B2: movaps  xmm3, xmmword ptr [ecx]
0x8F37B5: mov     edx, [ebp+arg_0]
0x8F37B8: movaps  xmm0, xmmword ptr [edx]
0x8F37BB: movaps  xmm1, xmm3
0x8F37BE: subps   xmm1, xmm2
0x8F37C1: movaps  xmm4, xmm2
0x8F37C4: subps   xmm4, xmm0
0x8F37C7: movaps  xmm0, xmm1
0x8F37CA: mulps   xmm0, xmm4
0x8F37CD: movaps  xmm4, xmm0
0x8F37D0: shufps  xmm4, xmm0, 55h ; 'U'
0x8F37D4: addss   xmm4, xmm0
0x8F37D8: movaps  xmm5, xmm0
0x8F37DB: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F37DF: addss   xmm5, xmm4
0x8F37E3: lea     eax, [esp+10h+var_8]
0x8F37E7: movss   dword ptr [eax], xmm5
0x8F37EB: fld     [esp+10h+var_8]
0x8F37EF: fchs
0x8F37F1: movaps  xmm0, xmm1
0x8F37F4: fst     [esp+10h+var_8]
0x8F37F8: mulps   xmm0, xmm1
0x8F37FB: fcomp   dword ptr ds:0A2FAA8h
0x8F3801: movaps  xmm4, xmm0
0x8F3804: shufps  xmm4, xmm0, 55h ; 'U'
0x8F3808: movaps  xmm5, xmm0
0x8F380B: addss   xmm4, xmm0
0x8F380F: fnstsw  ax
0x8F3811: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F3815: lea     ecx, [esp+10h+var_4]
0x8F3819: test    ah, 41h
0x8F381C: addss   xmm5, xmm4
0x8F3820: movss   dword ptr [ecx], xmm5
0x8F3824: jp      short loc_8F3830
0x8F3826: mov     edx, [ebp+arg_C]
0x8F3829: movaps  xmmword ptr [edx], xmm2
0x8F382C: mov     esp, ebp
0x8F382E: pop     ebp
0x8F382F: retn
0x8F3830: fld     [esp+10h+var_8]
0x8F3834: fcomp   [esp+10h+var_4]
0x8F3838: fnstsw  ax
0x8F383A: test    ah, 1
0x8F383D: jnz     short loc_8F3849
0x8F383F: mov     eax, [ebp+arg_C]
0x8F3842: movaps  xmmword ptr [eax], xmm3
0x8F3845: mov     esp, ebp
0x8F3847: pop     ebp
0x8F3848: retn
0x8F3849: fld     [esp+10h+var_8]
0x8F384D: mov     ecx, [ebp+arg_C]
0x8F3850: fdiv    [esp+10h+var_4]
0x8F3854: fstp    [esp+10h+var_4]
0x8F3858: movss   xmm0, [esp+10h+var_4]
0x8F385E: movaps  xmm3, xmm0
0x8F3861: shufps  xmm3, xmm0, 0
0x8F3865: mulps   xmm3, xmm1
0x8F3868: addps   xmm2, xmm3
0x8F386B: movaps  xmmword ptr [ecx], xmm2
0x8F386E: mov     esp, ebp
0x8F3870: pop     ebp
0x8F3871: retn
