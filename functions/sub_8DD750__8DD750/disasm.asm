0x8DD750: push    ebp
0x8DD751: mov     ebp, esp
0x8DD753: and     esp, 0FFFFFFF0h
0x8DD756: sub     esp, 1Ch
0x8DD759: push    esi
0x8DD75A: mov     esi, [ebp+arg_4]
0x8DD75D: fld     dword ptr [esi+4Ch]
0x8DD760: fld     [ebp+arg_0]
0x8DD763: fcomp   st(1)
0x8DD765: fnstsw  ax
0x8DD767: test    ah, 41h
0x8DD76A: jz      short loc_8DD771
0x8DD76C: fstp    [ebp+arg_0]
0x8DD76F: jmp     short loc_8DD773
0x8DD771: fstp    st
0x8DD773: movaps  xmm3, xmmword ptr [esi+60h]
0x8DD777: fld     [ebp+arg_0]
0x8DD77A: fsub    dword ptr [esi+4Ch]
0x8DD77D: movaps  xmm4, xmmword ptr [esi+70h]
0x8DD781: lea     ecx, [esi+70h]
0x8DD784: movaps  xmm1, xmm3
0x8DD787: addps   xmm1, xmm4
0x8DD78A: movaps  xmm2, xmm1
0x8DD78D: mulps   xmm2, xmm1
0x8DD790: movaps  xmm0, xmm2
0x8DD793: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD797: addps   xmm0, xmm2
0x8DD79A: movaps  xmm2, xmm0
0x8DD79D: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD7A1: addps   xmm0, xmm2
0x8DD7A4: lea     eax, [esp+20h+var_14]
0x8DD7A8: movss   dword ptr [eax], xmm0
0x8DD7AC: fmul    dword ptr [esi+5Ch]
0x8DD7AF: fld     [esp+20h+var_14]
0x8DD7B3: movaps  xmmword ptr [ecx], xmm1
0x8DD7B6: fmul    dword ptr ds:0A9A480h
0x8DD7BC: fsubr   dword ptr ds:0A41328h
0x8DD7C2: fld     [esp+20h+var_14]
0x8DD7C6: fmul    st, st(1)
0x8DD7C8: fmul    st, st(1)
0x8DD7CA: fmul    dword ptr ds:0A3D65Ch
0x8DD7D0: fsubr   dword ptr ds:0A35AA4h
0x8DD7D6: fmul    st, st(1)
0x8DD7D8: fstp    [esp+20h+var_14]
0x8DD7DC: movss   xmm0, [esp+20h+var_14]
0x8DD7E2: movaps  xmm2, xmm0
0x8DD7E5: fstp    st
0x8DD7E7: shufps  xmm2, xmm0, 0
0x8DD7EB: fcom    dword ptr ds:0A3D65Ch
0x8DD7F1: movaps  xmm0, xmm2
0x8DD7F4: fld     st
0x8DD7F6: mulps   xmm0, xmm1
0x8DD7F9: movaps  xmmword ptr [ecx], xmm0
0x8DD7FC: fadd    st, st(1)
0x8DD7FE: fnstsw  ax
0x8DD800: test    ah, 5
0x8DD803: jp      short loc_8DD82E
0x8DD805: fstp    [esp+20h+var_14]
0x8DD809: movss   xmm1, [esp+20h+var_14]
0x8DD80F: shufps  xmm1, xmm1, 0
0x8DD813: movaps  xmm2, xmm1
0x8DD816: mulps   xmm2, xmm0
0x8DD819: movaps  xmm0, xmmword ptr ds:0A6DFE0h
0x8DD820: subps   xmm0, xmm1
0x8DD823: mulps   xmm0, xmm3
0x8DD826: addps   xmm0, xmm2
0x8DD829: movaps  xmmword ptr [ecx], xmm0
0x8DD82C: jmp     short loc_8DD85B
0x8DD82E: fsub    dword ptr ds:0A2F948h
0x8DD834: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD83B: fstp    [esp+20h+var_14]
0x8DD83F: movss   xmm1, [esp+20h+var_14]
0x8DD845: shufps  xmm1, xmm1, 0
0x8DD849: subps   xmm3, xmm1
0x8DD84C: movaps  xmm2, xmm1
0x8DD84F: mulps   xmm2, xmm4
0x8DD852: mulps   xmm3, xmm0
0x8DD855: addps   xmm3, xmm2
0x8DD858: movaps  xmmword ptr [ecx], xmm3
0x8DD85B: movaps  xmm2, xmmword ptr [ecx]
0x8DD85E: movaps  xmm1, xmm2
0x8DD861: mulps   xmm1, xmm2
0x8DD864: movaps  xmm0, xmm1
0x8DD867: shufps  xmm0, xmm1, 4Eh ; 'N'
0x8DD86B: addps   xmm0, xmm1
0x8DD86E: movaps  xmm1, xmm0
0x8DD871: shufps  xmm1, xmm0, 0B1h ; '±'
0x8DD875: addps   xmm0, xmm1
0x8DD878: movaps  [esp+20h+var_10], xmm0
0x8DD87D: rsqrtss xmm1, xmm0
0x8DD881: mov     edx, [ebp+arg_0]
0x8DD884: movss   dword ptr [esp+20h+var_10], xmm1
0x8DD88A: movaps  xmm1, [esp+20h+var_10]
0x8DD88F: mulss   xmm0, xmm1
0x8DD893: mulss   xmm0, xmm1
0x8DD897: mov     [esp+20h+var_14], 40400000h
0x8DD89F: movss   xmm3, [esp+20h+var_14]
0x8DD8A5: subss   xmm3, xmm0
0x8DD8A9: mov     [esp+20h+var_14], 3F000000h
0x8DD8B1: movss   xmm0, [esp+20h+var_14]
0x8DD8B7: fstp    [esp+20h+var_14]
0x8DD8BB: mulss   xmm0, xmm1
0x8DD8BF: mulss   xmm0, xmm3
0x8DD8C3: movaps  xmm1, xmm0
0x8DD8C6: shufps  xmm1, xmm0, 0
0x8DD8CA: mulps   xmm1, xmm2
0x8DD8CD: movaps  xmmword ptr [ecx], xmm1
0x8DD8D0: movaps  xmm0, xmmword ptr [ecx]
0x8DD8D3: movaps  xmm1, xmmword ptr [esi+50h]
0x8DD8D7: movaps  xmmword ptr [esi+60h], xmm0
0x8DD8DB: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD8E2: movss   xmm0, [esp+20h+var_14]
0x8DD8E8: shufps  xmm0, xmm0, 0
0x8DD8EC: movaps  xmm2, xmm0
0x8DD8EF: subps   xmm3, xmm0
0x8DD8F2: mulps   xmm2, xmm1
0x8DD8F5: movaps  xmm1, xmmword ptr [esi+40h]
0x8DD8F9: movaps  xmm0, xmm3
0x8DD8FC: mulps   xmm0, xmm1
0x8DD8FF: addps   xmm0, xmm2
0x8DD902: push    ecx
0x8DD903: movaps  xmmword ptr [esi+50h], xmm0
0x8DD907: movaps  xmmword ptr [esi+40h], xmm0
0x8DD90B: mov     ecx, esi
0x8DD90D: mov     [esi+4Ch], edx
0x8DD910: mov     dword ptr [esi+5Ch], 0
0x8DD917: call    sub_8B1DD0
0x8DD91C: movaps  xmm0, xmmword ptr [esi+80h]
0x8DD923: movaps  xmm2, xmmword ptr [esi+20h]
0x8DD927: movaps  xmm3, xmmword ptr [esi+10h]
0x8DD92B: movaps  xmm1, xmm0
0x8DD92E: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DD932: mulps   xmm2, xmm1
0x8DD935: movaps  xmm1, xmm0
0x8DD938: shufps  xmm1, xmm0, 55h ; 'U'
0x8DD93C: mulps   xmm3, xmm1
0x8DD93F: movaps  xmm1, xmm0
0x8DD942: shufps  xmm1, xmm0, 0
0x8DD946: movaps  xmm0, xmmword ptr [esi]
0x8DD949: mulps   xmm0, xmm1
0x8DD94C: movaps  xmm1, xmmword ptr [esi+50h]
0x8DD950: addps   xmm0, xmm3
0x8DD953: addps   xmm0, xmm2
0x8DD956: subps   xmm1, xmm0
0x8DD959: movaps  xmmword ptr [esi+30h], xmm1
0x8DD95D: pop     esi
0x8DD95E: mov     esp, ebp
0x8DD960: pop     ebp
0x8DD961: retn
