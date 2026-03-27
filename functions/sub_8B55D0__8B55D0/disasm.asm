0x8B55D0: push    ebp
0x8B55D1: mov     ebp, esp
0x8B55D3: and     esp, 0FFFFFFF0h
0x8B55D6: sub     esp, 124h
0x8B55DC: fld     [ebp+arg_C]
0x8B55DF: push    ebx
0x8B55E0: fcomp   dword ptr ds:0A2FAA8h
0x8B55E6: push    esi
0x8B55E7: push    edi
0x8B55E8: fnstsw  ax
0x8B55EA: test    ah, 41h
0x8B55ED: jnp     short loc_8B55FF
0x8B55EF: fld     [ebp+arg_10]
0x8B55F2: fcomp   dword ptr ds:0A2FAA8h
0x8B55F8: fnstsw  ax
0x8B55FA: test    ah, 5
0x8B55FD: jp      short loc_8B560B
0x8B55FF: mov     eax, 1
0x8B5604: pop     edi
0x8B5605: pop     esi
0x8B5606: pop     ebx
0x8B5607: mov     esp, ebp
0x8B5609: pop     ebp
0x8B560A: retn
0x8B560B: mov     edx, [ebp+arg_8]
0x8B560E: fld     [ebp+arg_10]
0x8B5611: mov     esi, [ebp+arg_0]
0x8B5614: fcomp   dword ptr ds:0A3C778h
0x8B561A: mov     ecx, [ebp+arg_4]
0x8B561D: movaps  xmm2, xmmword ptr [ecx]
0x8B5620: movaps  xmm5, xmmword ptr [edx]
0x8B5623: movaps  xmm1, xmmword ptr [esi]
0x8B5626: movaps  xmm0, xmm5
0x8B5629: subps   xmm0, xmm2
0x8B562C: movaps  xmm3, xmm1
0x8B562F: subps   xmm3, xmm2
0x8B5632: movaps  xmm4, xmm3
0x8B5635: shufps  xmm4, xmm3, 0C9h ; 'É'
0x8B5639: movaps  xmm6, xmm0
0x8B563C: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8B5640: mulps   xmm6, xmm4
0x8B5643: movaps  xmm4, xmm3
0x8B5646: shufps  xmm4, xmm3, 0D2h ; 'Ò'
0x8B564A: movaps  xmm3, xmm0
0x8B564D: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8B5651: mulps   xmm3, xmm4
0x8B5654: subps   xmm3, xmm6
0x8B5657: movaps  xmm0, xmm3
0x8B565A: mulps   xmm0, xmm3
0x8B565D: movaps  xmm4, xmm0
0x8B5660: shufps  xmm4, xmm0, 55h ; 'U'
0x8B5664: addss   xmm4, xmm0
0x8B5668: movaps  xmm6, xmm4
0x8B566B: movaps  xmm4, xmm0
0x8B566E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8B5672: addss   xmm4, xmm6
0x8B5676: movaps  [esp+130h+var_120], xmm4
0x8B567B: sqrtss  xmm4, xmm4
0x8B567F: lea     eax, [esp+130h+var_F4]
0x8B5683: movss   dword ptr [esp+130h+var_120], xmm4
0x8B5689: movaps  xmm4, [esp+130h+var_120]
0x8B568E: movss   dword ptr [eax], xmm4
0x8B5692: fnstsw  ax
0x8B5694: test    ah, 5
0x8B5697: jp      loc_8B583E
0x8B569D: fld     dword ptr [ecx]
0x8B569F: mov     [esp+130h+var_F8], 3EAAAAABh
0x8B56A7: movss   xmm0, [esp+130h+var_F8]
0x8B56AD: fld     dword ptr [edx]
0x8B56AF: fld     dword ptr [esi]
0x8B56B1: addps   xmm1, xmm2
0x8B56B4: movaps  xmm2, xmm0
0x8B56B7: shufps  xmm2, xmm0, 0
0x8B56BB: addps   xmm1, xmm5
0x8B56BE: movaps  xmm0, xmm2
0x8B56C1: mulps   xmm0, xmm1
0x8B56C4: movaps  [esp+130h+var_120], xmm0
0x8B56C9: fld     dword ptr [esp+130h+var_120]
0x8B56CD: fmul    dword ptr [esp+130h+var_120]
0x8B56D1: fmul    dword ptr ds:0A97F58h
0x8B56D7: fld     st(1)
0x8B56D9: fmul    st, st(2)
0x8B56DB: faddp   st(1), st
0x8B56DD: fld     st(2)
0x8B56DF: fmul    st, st(3)
0x8B56E1: faddp   st(1), st
0x8B56E3: fld     st(3)
0x8B56E5: fmul    st, st(4)
0x8B56E7: faddp   st(1), st
0x8B56E9: fmul    [ebp+arg_C]
0x8B56EC: fmul    dword ptr ds:0A8C5F8h
0x8B56F2: fstp    st(3)
0x8B56F4: fstp    st
0x8B56F6: fstp    st
0x8B56F8: fld     dword ptr [esi+4]
0x8B56FB: fld     dword ptr [ecx+4]
0x8B56FE: fld     dword ptr [edx+4]
0x8B5701: fld     dword ptr [esp+130h+var_120+4]
0x8B5705: fmul    dword ptr [esp+130h+var_120+4]
0x8B5709: fmul    dword ptr ds:0A97F58h
0x8B570F: fld     st(1)
0x8B5711: fmul    st, st(2)
0x8B5713: faddp   st(1), st
0x8B5715: fld     st(2)
0x8B5717: fmul    st, st(3)
0x8B5719: faddp   st(1), st
0x8B571B: fld     st(3)
0x8B571D: fmul    st, st(4)
0x8B571F: faddp   st(1), st
0x8B5721: fmul    [ebp+arg_C]
0x8B5724: fmul    dword ptr ds:0A8C5F8h
0x8B572A: fstp    st(3)
0x8B572C: fstp    st
0x8B572E: fstp    st
0x8B5730: fld     dword ptr [esi+8]
0x8B5733: fld     dword ptr [ecx+8]
0x8B5736: fld     dword ptr [edx+8]
0x8B5739: fld     dword ptr [esp+130h+var_120+8]
0x8B573D: fmul    dword ptr [esp+130h+var_120+8]
0x8B5741: fmul    dword ptr ds:0A97F58h
0x8B5747: fld     st(1)
0x8B5749: fmul    st, st(2)
0x8B574B: faddp   st(1), st
0x8B574D: fld     st(2)
0x8B574F: fmul    st, st(3)
0x8B5751: faddp   st(1), st
0x8B5753: fld     st(3)
0x8B5755: fmul    st, st(4)
0x8B5757: faddp   st(1), st
0x8B5759: fmul    [ebp+arg_C]
0x8B575C: fmul    dword ptr ds:0A8C5F8h
0x8B5762: fstp    st(3)
0x8B5764: fstp    st
0x8B5766: fstp    st
0x8B5768: fld     st
0x8B576A: fadd    st, st(2)
0x8B576C: fstp    dword ptr [esp+130h+var_F0]
0x8B5770: fadd    st, st(2)
0x8B5772: fstp    dword ptr [esp+130h+var_E0+4]
0x8B5776: fadd    st, st(1)
0x8B5778: fstp    dword ptr [esp+130h+var_D0+8]
0x8B577C: fstp    st
0x8B577E: fld     dword ptr [esp+130h+var_120+4]
0x8B5782: fmul    dword ptr [esp+130h+var_120]
0x8B5786: lea     eax, [esp+130h+var_120]
0x8B578A: fmul    dword ptr ds:0A97F58h
0x8B5790: fld     dword ptr [edx+4]
0x8B5793: fmul    dword ptr [edx]
0x8B5795: faddp   st(1), st
0x8B5797: fld     dword ptr [esi]
0x8B5799: fmul    dword ptr [esi+4]
0x8B579C: faddp   st(1), st
0x8B579E: fld     dword ptr [ecx]
0x8B57A0: fmul    dword ptr [ecx+4]
0x8B57A3: faddp   st(1), st
0x8B57A5: fmul    [ebp+arg_C]
0x8B57A8: fmul    dword ptr ds:0A8C5F8h
0x8B57AE: fchs
0x8B57B0: fst     dword ptr [esp+130h+var_F0+4]
0x8B57B4: fstp    dword ptr [esp+130h+var_E0]
0x8B57B8: fld     dword ptr [esp+130h+var_120+8]
0x8B57BC: fmul    dword ptr [esp+130h+var_120]
0x8B57C0: fmul    dword ptr ds:0A97F58h
0x8B57C6: fld     dword ptr [edx+8]
0x8B57C9: fmul    dword ptr [edx]
0x8B57CB: faddp   st(1), st
0x8B57CD: fld     dword ptr [esi]
0x8B57CF: fmul    dword ptr [esi+8]
0x8B57D2: faddp   st(1), st
0x8B57D4: fld     dword ptr [ecx]
0x8B57D6: fmul    dword ptr [ecx+8]
0x8B57D9: faddp   st(1), st
0x8B57DB: fmul    [ebp+arg_C]
0x8B57DE: fmul    dword ptr ds:0A8C5F8h
0x8B57E4: fchs
0x8B57E6: fst     dword ptr [esp+130h+var_F0+8]
0x8B57EA: fstp    dword ptr [esp+130h+var_D0]
0x8B57EE: fld     dword ptr [esp+130h+var_120+8]
0x8B57F2: fmul    dword ptr [esp+130h+var_120+4]
0x8B57F6: fmul    dword ptr ds:0A97F58h
0x8B57FC: fld     dword ptr [esi+8]
0x8B57FF: fmul    dword ptr [esi+4]
0x8B5802: faddp   st(1), st
0x8B5804: fld     dword ptr [ecx+8]
0x8B5807: fmul    dword ptr [ecx+4]
0x8B580A: lea     ecx, [esp+130h+var_F0]
0x8B580E: push    ecx; int
0x8B580F: faddp   st(1), st
0x8B5811: fld     dword ptr [edx+8]
0x8B5814: fmul    dword ptr [edx+4]
0x8B5817: mov     edx, [ebp+arg_C]
0x8B581A: push    edx; float
0x8B581B: push    eax; int
0x8B581C: faddp   st(1), st
0x8B581E: fmul    [ebp+arg_C]
0x8B5821: fmul    dword ptr ds:0A8C5F8h
0x8B5827: fchs
0x8B5829: fst     dword ptr [esp+13Ch+var_D0+4]
0x8B582D: fstp    dword ptr [esp+13Ch+var_E0+8]
0x8B5831: call    sub_8B36D0
0x8B5836: add     esp, 0Ch
0x8B5839: jmp     loc_8B5DDA
0x8B583E: fld     [esp+130h+var_F4]
0x8B5842: fcomp   dword ptr ds:0A3C778h
0x8B5848: fnstsw  ax
0x8B584A: test    ah, 5
0x8B584D: jp      loc_8B58F6
0x8B5853: mov     [esp+130h+var_F8], 3EAAAAABh
0x8B585B: movss   xmm0, [esp+130h+var_F8]
0x8B5861: addps   xmm1, xmm2
0x8B5864: movaps  xmm2, xmm0
0x8B5867: shufps  xmm2, xmm0, 0
0x8B586B: addps   xmm1, xmm5
0x8B586E: movaps  xmm0, xmm2
0x8B5871: mulps   xmm0, xmm1
0x8B5874: movaps  [esp+130h+var_120], xmm0
0x8B5879: fld     dword ptr [esp+130h+var_120+8]
0x8B587D: fmul    dword ptr [esp+130h+var_120+8]
0x8B5881: fld     dword ptr [esp+130h+var_120+4]
0x8B5885: fmul    dword ptr [esp+130h+var_120+4]
0x8B5889: fld     st(1)
0x8B588B: fadd    st, st(1)
0x8B588D: fmul    [ebp+arg_C]
0x8B5890: fstp    dword ptr [esp+130h+var_F0]
0x8B5894: fld     dword ptr [esp+130h+var_120]
0x8B5898: fmul    dword ptr [esp+130h+var_120]
0x8B589C: fxch    st(2)
0x8B589E: fadd    st, st(2)
0x8B58A0: fmul    [ebp+arg_C]
0x8B58A3: fstp    dword ptr [esp+130h+var_E0+4]
0x8B58A7: fadd    st, st(1)
0x8B58A9: fmul    [ebp+arg_C]
0x8B58AC: fstp    dword ptr [esp+130h+var_D0+8]
0x8B58B0: fstp    st
0x8B58B2: fld     dword ptr [esp+130h+var_120+4]
0x8B58B6: fmul    dword ptr [esp+130h+var_120]
0x8B58BA: fmul    [ebp+arg_C]
0x8B58BD: fchs
0x8B58BF: fst     dword ptr [esp+130h+var_E0]
0x8B58C3: fstp    dword ptr [esp+130h+var_F0+4]
0x8B58C7: fld     dword ptr [esp+130h+var_120+8]
0x8B58CB: fmul    dword ptr [esp+130h+var_120]
0x8B58CF: fmul    [ebp+arg_C]
0x8B58D2: fchs
0x8B58D4: fst     dword ptr [esp+130h+var_D0]
0x8B58D8: fstp    dword ptr [esp+130h+var_F0+8]
0x8B58DC: fld     dword ptr [esp+130h+var_120+8]
0x8B58E0: fmul    dword ptr [esp+130h+var_120+4]
0x8B58E4: fmul    [ebp+arg_C]
0x8B58E7: fchs
0x8B58E9: fst     dword ptr [esp+130h+var_E0+8]
0x8B58ED: fstp    dword ptr [esp+130h+var_D0+4]
0x8B58F1: jmp     loc_8B5DDA
0x8B58F6: fld     [ebp+arg_10]
0x8B58F9: movaps  xmm4, xmm0
0x8B58FC: fmul    dword ptr ds:0A3D65Ch
0x8B5902: shufps  xmm4, xmm0, 55h ; 'U'
0x8B5906: addss   xmm4, xmm0
0x8B590A: movaps  xmm6, xmm0
0x8B590D: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8B5911: movaps  xmm0, xmm6
0x8B5914: addss   xmm0, xmm4
0x8B5918: movaps  [esp+130h+var_120], xmm0
0x8B591D: rsqrtss xmm4, xmm0
0x8B5921: movss   dword ptr [esp+130h+var_120], xmm4
0x8B5927: movaps  xmm4, [esp+130h+var_120]
0x8B592C: mulss   xmm0, xmm4
0x8B5930: mulss   xmm0, xmm4
0x8B5934: mov     [esp+130h+var_F8], 40400000h
0x8B593C: movss   xmm6, [esp+130h+var_F8]
0x8B5942: subss   xmm6, xmm0
0x8B5946: mov     [esp+130h+var_F8], 3F000000h
0x8B594E: movss   xmm0, [esp+130h+var_F8]
0x8B5954: fstp    [esp+130h+var_F8]
0x8B5958: fld     [ebp+arg_10]
0x8B595B: mulss   xmm0, xmm4
0x8B595F: fmul    dword ptr ds:0A45E4Ch
0x8B5965: mulss   xmm0, xmm6
0x8B5969: movaps  xmm6, xmm1
0x8B596C: movaps  xmm4, xmm0
0x8B596F: shufps  xmm4, xmm0, 0
0x8B5973: movaps  xmm0, xmm4
0x8B5976: mulps   xmm0, xmm3
0x8B5979: movss   xmm3, [esp+130h+var_F8]
0x8B597F: fstp    [esp+130h+var_F8]
0x8B5983: movaps  xmm4, xmm3
0x8B5986: shufps  xmm4, xmm3, 0
0x8B598A: mulps   xmm4, xmm0
0x8B598D: addps   xmm6, xmm4
0x8B5990: movss   xmm4, [esp+130h+var_F8]
0x8B5996: movaps  [esp+130h+var_60], xmm6
0x8B599E: movaps  xmm6, xmm4
0x8B59A1: shufps  xmm6, xmm4, 0
0x8B59A5: mulps   xmm6, xmm0
0x8B59A8: addps   xmm1, xmm6
0x8B59AB: movaps  [esp+130h+var_50], xmm1
0x8B59B3: movaps  xmm6, xmm2
0x8B59B6: movaps  xmm1, xmm3
0x8B59B9: shufps  xmm1, xmm3, 0
0x8B59BD: mulps   xmm1, xmm0
0x8B59C0: addps   xmm6, xmm1
0x8B59C3: movaps  xmm1, xmm4
0x8B59C6: shufps  xmm1, xmm4, 0
0x8B59CA: mulps   xmm1, xmm0
0x8B59CD: addps   xmm2, xmm1
0x8B59D0: movaps  [esp+130h+var_30], xmm2
0x8B59D8: movaps  xmm1, xmm3
0x8B59DB: shufps  xmm1, xmm3, 0
0x8B59DF: mulps   xmm1, xmm0
0x8B59E2: movaps  xmm2, xmm5
0x8B59E5: addps   xmm2, xmm1
0x8B59E8: movaps  xmm1, xmm4
0x8B59EB: shufps  xmm1, xmm4, 0
0x8B59EF: mulps   xmm1, xmm0
0x8B59F2: xorps   xmm0, xmm0
0x8B59F5: xor     ebx, ebx
0x8B59F7: lea     ecx, [esp+130h+var_60]
0x8B59FE: mov     eax, 80000000h
0x8B5A03: addps   xmm5, xmm1
0x8B5A06: mov     [esp+130h+var_70], ecx
0x8B5A0D: mov     [esp+130h+var_68], 80000006h
0x8B5A18: mov     [esp+130h+var_6C], 6
0x8B5A23: movaps  [esp+130h+var_40], xmm6
0x8B5A2B: movaps  [esp+130h+var_20], xmm2
0x8B5A33: movaps  [esp+130h+var_10], xmm5
0x8B5A3B: mov     [esp+130h+var_C0], 0
0x8B5A43: mov     [esp+130h+var_BC], 0
0x8B5A4B: movaps  [esp+130h+var_B0], xmm0
0x8B5A53: movaps  [esp+130h+var_A0], xmm0
0x8B5A5B: movaps  [esp+130h+var_90], xmm0
0x8B5A63: movaps  [esp+130h+var_80], xmm0
0x8B5A6B: mov     dword ptr [esp+130h+var_120], ebx
0x8B5A6F: mov     dword ptr [esp+130h+var_120+4], ebx
0x8B5A73: mov     dword ptr [esp+130h+var_120+8], eax
0x8B5A77: mov     edx, ds:0BA9DE4h
0x8B5A7D: mov     [esp+130h+var_10C], eax
0x8B5A81: mov     eax, large fs:2Ch
0x8B5A87: mov     eax, [eax+edx*4]
0x8B5A8A: mov     [esp+130h+var_F8], eax
0x8B5A8E: mov     eax, [eax+19Ch]
0x8B5A94: cmp     eax, ebx
0x8B5A96: mov     dword ptr [esp+130h+var_120+0Ch], ebx
0x8B5A9A: mov     [esp+130h+var_110], ebx
0x8B5A9E: jnz     short loc_8B5AA5
0x8B5AA0: mov     eax, ds:0BA7D9Ch
0x8B5AA5: push    14h
0x8B5AA7: push    60h ; '`'
0x8B5AA9: mov     ecx, eax
0x8B5AAB: call    sub_8A7560
0x8B5AB0: mov     ecx, dword ptr [esp+130h+var_120+8]
0x8B5AB4: mov     edx, [esp+130h+var_6C]
0x8B5ABB: and     ecx, 40000000h
0x8B5AC1: or      ecx, edx
0x8B5AC3: cmp     edx, ebx
0x8B5AC5: mov     dword ptr [esp+130h+var_120], eax
0x8B5AC9: mov     dword ptr [esp+130h+var_120+8], ecx
0x8B5ACD: mov     dword ptr [esp+130h+var_120+4], edx
0x8B5AD1: jle     short loc_8B5AEF
0x8B5AD3: mov     ecx, eax
0x8B5AD5: mov     eax, [esp+130h+var_70]
0x8B5ADC: lea     esp, [esp+0]
0x8B5AE0: movaps  xmm0, xmmword ptr [eax]
0x8B5AE3: movaps  xmmword ptr [ecx], xmm0
0x8B5AE6: add     eax, 10h
0x8B5AE9: add     ecx, 10h
0x8B5AEC: dec     edx
0x8B5AED: jnz     short loc_8B5AE0
0x8B5AEF: mov     edi, [esp+130h+var_110]
0x8B5AF3: mov     eax, [esp+130h+var_10C]
0x8B5AF7: lea     esi, [edi+1]
0x8B5AFA: and     eax, 3FFFFFFFh
0x8B5AFF: cmp     eax, esi
0x8B5B01: jge     short loc_8B5B1B
0x8B5B03: add     eax, eax
0x8B5B05: cmp     esi, eax
0x8B5B07: jl      short loc_8B5B0B
0x8B5B09: mov     eax, esi
0x8B5B0B: push    0Ch
0x8B5B0D: push    eax
0x8B5B0E: lea     edx, [esp+138h+var_120+0Ch]
0x8B5B12: push    edx
0x8B5B13: call    sub_8A6E40
0x8B5B18: add     esp, 0Ch
0x8B5B1B: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5B1F: mov     [esp+130h+var_110], esi
0x8B5B23: lea     eax, [edi+edi*2]
0x8B5B26: lea     eax, [ecx+eax*4]
0x8B5B29: mov     [eax], ebx
0x8B5B2B: mov     dword ptr [eax+4], 2
0x8B5B32: mov     ebx, 4
0x8B5B37: mov     [eax+8], ebx
0x8B5B3A: mov     edi, [esp+130h+var_110]
0x8B5B3E: mov     eax, [esp+130h+var_10C]
0x8B5B42: lea     esi, [edi+1]
0x8B5B45: and     eax, 3FFFFFFFh
0x8B5B4A: cmp     eax, esi
0x8B5B4C: jge     short loc_8B5B66
0x8B5B4E: add     eax, eax
0x8B5B50: cmp     esi, eax
0x8B5B52: jl      short loc_8B5B56
0x8B5B54: mov     eax, esi
0x8B5B56: push    0Ch
0x8B5B58: push    eax
0x8B5B59: lea     edx, [esp+138h+var_120+0Ch]
0x8B5B5D: push    edx
0x8B5B5E: call    sub_8A6E40
0x8B5B63: add     esp, 0Ch
0x8B5B66: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5B6A: mov     [esp+130h+var_110], esi
0x8B5B6E: lea     eax, [edi+edi*2]
0x8B5B71: lea     eax, [ecx+eax*4]
0x8B5B74: mov     dword ptr [eax], 1
0x8B5B7A: mov     dword ptr [eax+4], 5
0x8B5B81: mov     dword ptr [eax+8], 3
0x8B5B88: mov     edi, [esp+130h+var_110]
0x8B5B8C: mov     eax, [esp+130h+var_10C]
0x8B5B90: lea     esi, [edi+1]
0x8B5B93: and     eax, 3FFFFFFFh
0x8B5B98: cmp     eax, esi
0x8B5B9A: jge     short loc_8B5BB4
0x8B5B9C: add     eax, eax
0x8B5B9E: cmp     esi, eax
0x8B5BA0: jl      short loc_8B5BA4
0x8B5BA2: mov     eax, esi
0x8B5BA4: push    0Ch
0x8B5BA6: push    eax
0x8B5BA7: lea     edx, [esp+138h+var_120+0Ch]
0x8B5BAB: push    edx
0x8B5BAC: call    sub_8A6E40
0x8B5BB1: add     esp, 0Ch
0x8B5BB4: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5BB8: mov     [esp+130h+var_110], esi
0x8B5BBC: lea     eax, [edi+edi*2]
0x8B5BBF: lea     eax, [ecx+eax*4]
0x8B5BC2: mov     dword ptr [eax], 0
0x8B5BC8: mov     dword ptr [eax+4], 3
0x8B5BCF: mov     dword ptr [eax+8], 2
0x8B5BD6: mov     edi, [esp+130h+var_110]
0x8B5BDA: mov     eax, [esp+130h+var_10C]
0x8B5BDE: lea     esi, [edi+1]
0x8B5BE1: and     eax, 3FFFFFFFh
0x8B5BE6: cmp     eax, esi
0x8B5BE8: jge     short loc_8B5C02
0x8B5BEA: add     eax, eax
0x8B5BEC: cmp     esi, eax
0x8B5BEE: jl      short loc_8B5BF2
0x8B5BF0: mov     eax, esi
0x8B5BF2: push    0Ch
0x8B5BF4: push    eax
0x8B5BF5: lea     edx, [esp+138h+var_120+0Ch]
0x8B5BF9: push    edx
0x8B5BFA: call    sub_8A6E40
0x8B5BFF: add     esp, 0Ch
0x8B5C02: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5C06: mov     [esp+130h+var_110], esi
0x8B5C0A: lea     eax, [edi+edi*2]
0x8B5C0D: lea     eax, [ecx+eax*4]
0x8B5C10: mov     dword ptr [eax], 0
0x8B5C16: mov     dword ptr [eax+4], 1
0x8B5C1D: mov     dword ptr [eax+8], 3
0x8B5C24: mov     edi, [esp+130h+var_110]
0x8B5C28: mov     eax, [esp+130h+var_10C]
0x8B5C2C: lea     esi, [edi+1]
0x8B5C2F: and     eax, 3FFFFFFFh
0x8B5C34: cmp     eax, esi
0x8B5C36: jge     short loc_8B5C50
0x8B5C38: add     eax, eax
0x8B5C3A: cmp     esi, eax
0x8B5C3C: jl      short loc_8B5C40
0x8B5C3E: mov     eax, esi
0x8B5C40: push    0Ch
0x8B5C42: push    eax
0x8B5C43: lea     edx, [esp+138h+var_120+0Ch]
0x8B5C47: push    edx
0x8B5C48: call    sub_8A6E40
0x8B5C4D: add     esp, 0Ch
0x8B5C50: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5C54: mov     [esp+130h+var_110], esi
0x8B5C58: lea     eax, [edi+edi*2]
0x8B5C5B: lea     eax, [ecx+eax*4]
0x8B5C5E: mov     dword ptr [eax], 1
0x8B5C64: mov     dword ptr [eax+4], 0
0x8B5C6B: mov     [eax+8], ebx
0x8B5C6E: mov     edi, [esp+130h+var_110]
0x8B5C72: mov     eax, [esp+130h+var_10C]
0x8B5C76: lea     esi, [edi+1]
0x8B5C79: and     eax, 3FFFFFFFh
0x8B5C7E: cmp     eax, esi
0x8B5C80: jge     short loc_8B5C9A
0x8B5C82: add     eax, eax
0x8B5C84: cmp     esi, eax
0x8B5C86: jl      short loc_8B5C8A
0x8B5C88: mov     eax, esi
0x8B5C8A: push    0Ch
0x8B5C8C: push    eax
0x8B5C8D: lea     edx, [esp+138h+var_120+0Ch]
0x8B5C91: push    edx
0x8B5C92: call    sub_8A6E40
0x8B5C97: add     esp, 0Ch
0x8B5C9A: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5C9E: mov     [esp+130h+var_110], esi
0x8B5CA2: lea     eax, [edi+edi*2]
0x8B5CA5: lea     eax, [ecx+eax*4]
0x8B5CA8: mov     dword ptr [eax], 1
0x8B5CAE: mov     [eax+4], ebx
0x8B5CB1: mov     dword ptr [eax+8], 5
0x8B5CB8: mov     edi, [esp+130h+var_110]
0x8B5CBC: mov     eax, [esp+130h+var_10C]
0x8B5CC0: lea     esi, [edi+1]
0x8B5CC3: and     eax, 3FFFFFFFh
0x8B5CC8: cmp     eax, esi
0x8B5CCA: jge     short loc_8B5CE4
0x8B5CCC: add     eax, eax
0x8B5CCE: cmp     esi, eax
0x8B5CD0: jl      short loc_8B5CD4
0x8B5CD2: mov     eax, esi
0x8B5CD4: push    0Ch
0x8B5CD6: push    eax
0x8B5CD7: lea     edx, [esp+138h+var_120+0Ch]
0x8B5CDB: push    edx
0x8B5CDC: call    sub_8A6E40
0x8B5CE1: add     esp, 0Ch
0x8B5CE4: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5CE8: mov     [esp+130h+var_110], esi
0x8B5CEC: lea     eax, [edi+edi*2]
0x8B5CEF: lea     eax, [ecx+eax*4]
0x8B5CF2: mov     dword ptr [eax], 2
0x8B5CF8: mov     dword ptr [eax+4], 5
0x8B5CFF: mov     [eax+8], ebx
0x8B5D02: mov     edi, [esp+130h+var_110]
0x8B5D06: mov     eax, [esp+130h+var_10C]
0x8B5D0A: lea     esi, [edi+1]
0x8B5D0D: and     eax, 3FFFFFFFh
0x8B5D12: cmp     eax, esi
0x8B5D14: jge     short loc_8B5D2E
0x8B5D16: add     eax, eax
0x8B5D18: cmp     esi, eax
0x8B5D1A: jl      short loc_8B5D1E
0x8B5D1C: mov     eax, esi
0x8B5D1E: push    0Ch
0x8B5D20: push    eax
0x8B5D21: lea     edx, [esp+138h+var_120+0Ch]
0x8B5D25: push    edx
0x8B5D26: call    sub_8A6E40
0x8B5D2B: add     esp, 0Ch
0x8B5D2E: mov     ecx, dword ptr [esp+130h+var_120+0Ch]
0x8B5D32: mov     [esp+130h+var_110], esi
0x8B5D36: lea     eax, [edi+edi*2]
0x8B5D39: lea     eax, [ecx+eax*4]
0x8B5D3C: lea     edx, [esp+130h+var_C0]
0x8B5D40: mov     dword ptr [eax], 2
0x8B5D46: mov     dword ptr [eax+4], 3
0x8B5D4D: mov     dword ptr [eax+8], 5
0x8B5D54: mov     eax, [ebp+arg_C]
0x8B5D57: push    edx; int
0x8B5D58: push    eax; float
0x8B5D59: lea     ecx, [esp+138h+var_120]
0x8B5D5D: push    ecx; int
0x8B5D5E: call    sub_8B43E0
0x8B5D63: add     esp, 0Ch
0x8B5D66: lea     ecx, [esp+130h+var_120]
0x8B5D6A: call    sub_8B44C0
0x8B5D6F: movaps  xmm0, [esp+130h+var_B0]
0x8B5D77: mov     eax, [esp+130h+var_68]
0x8B5D7E: test    eax, eax
0x8B5D80: movaps  [esp+130h+var_120], xmm0
0x8B5D85: movaps  xmm0, [esp+130h+var_A0]
0x8B5D8D: movaps  [esp+130h+var_F0], xmm0
0x8B5D92: movaps  xmm0, [esp+130h+var_90]
0x8B5D9A: movaps  [esp+130h+var_E0], xmm0
0x8B5D9F: movaps  xmm0, [esp+130h+var_80]
0x8B5DA7: movaps  [esp+130h+var_D0], xmm0
0x8B5DAC: js      short loc_8B5DDA
0x8B5DAE: mov     edx, [esp+130h+var_F8]
0x8B5DB2: mov     ecx, [edx+19Ch]
0x8B5DB8: test    ecx, ecx
0x8B5DBA: jnz     short loc_8B5DC2
0x8B5DBC: mov     ecx, ds:0BA7D9Ch
0x8B5DC2: and     eax, 3FFFFFFFh
0x8B5DC7: push    14h
0x8B5DC9: shl     eax, 4
0x8B5DCC: push    eax
0x8B5DCD: mov     eax, [esp+138h+var_70]
0x8B5DD4: push    eax
0x8B5DD5: call    sub_8A75D0
0x8B5DDA: mov     eax, [ebp+arg_14]
0x8B5DDD: fld     [ebp+arg_C]
0x8B5DE0: movaps  xmm0, [esp+130h+var_F0]
0x8B5DE5: fstp    dword ptr [eax+4]
0x8B5DE8: fld     [esp+130h+var_F4]
0x8B5DEC: movaps  xmmword ptr [eax+20h], xmm0
0x8B5DF0: fmul    [ebp+arg_10]
0x8B5DF3: movaps  xmm0, [esp+130h+var_E0]
0x8B5DF8: movaps  xmmword ptr [eax+30h], xmm0
0x8B5DFC: movaps  xmm0, [esp+130h+var_D0]
0x8B5E01: fmul    dword ptr ds:0A3D65Ch
0x8B5E07: movaps  xmmword ptr [eax+40h], xmm0
0x8B5E0B: movaps  xmm0, [esp+130h+var_120]
0x8B5E10: pop     edi
0x8B5E11: pop     esi
0x8B5E12: fstp    dword ptr [eax]
0x8B5E14: movaps  xmmword ptr [eax+10h], xmm0
0x8B5E18: xor     eax, eax
0x8B5E1A: pop     ebx
0x8B5E1B: mov     esp, ebp
0x8B5E1D: pop     ebp
0x8B5E1E: retn
