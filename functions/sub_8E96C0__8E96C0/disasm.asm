0x8E96C0: push    ebp
0x8E96C1: mov     ebp, esp
0x8E96C3: and     esp, 0FFFFFFF0h
0x8E96C6: sub     esp, 34h
0x8E96C9: mov     eax, [ebp+arg_4]
0x8E96CC: movaps  xmm0, xmmword ptr [eax]
0x8E96CF: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E96D6: mov     edx, [ebp+arg_0]
0x8E96D9: addps   xmm1, xmm0
0x8E96DC: movaps  xmmword ptr [ecx+0D0h], xmm1
0x8E96E3: fld     dword ptr [edx+8]
0x8E96E6: fld     st
0x8E96E8: push    ebx
0x8E96E9: fmul    dword ptr [ecx+0C8h]
0x8E96EF: push    esi
0x8E96F0: push    edi
0x8E96F1: fsubr   dword ptr ds:0A2F948h
0x8E96F7: fld     dword ptr ds:0A2FAA8h
0x8E96FD: fcomp   st(1)
0x8E96FF: fnstsw  ax
0x8E9701: test    ah, 41h
0x8E9704: jnz     short loc_8E970E
0x8E9706: fstp    st
0x8E9708: fld     dword ptr ds:0A2FAA8h
0x8E970E: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E9715: fstp    [esp+40h+var_28]
0x8E9719: movss   xmm0, [esp+40h+var_28]
0x8E971F: movaps  xmm2, xmm0
0x8E9722: shufps  xmm2, xmm0, 0
0x8E9726: mulps   xmm2, xmm1
0x8E9729: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8E9730: fmul    dword ptr [ecx+0CCh]
0x8E9736: fsubr   dword ptr ds:0A2F948h
0x8E973C: fld     dword ptr ds:0A2FAA8h
0x8E9742: fcomp   st(1)
0x8E9744: fnstsw  ax
0x8E9746: test    ah, 41h
0x8E9749: jnz     short loc_8E9753
0x8E974B: fstp    st
0x8E974D: fld     dword ptr ds:0A2FAA8h
0x8E9753: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8E975A: fstp    [esp+40h+var_28]
0x8E975E: movss   xmm0, [esp+40h+var_28]
0x8E9764: movaps  xmm2, xmm0
0x8E9767: shufps  xmm2, xmm0, 0
0x8E976B: mulps   xmm2, xmm1
0x8E976E: movaps  xmmword ptr [ecx+0E0h], xmm2
0x8E9775: movaps  xmm0, xmmword ptr [ecx+60h]
0x8E9779: lea     esi, [ecx+10h]
0x8E977C: movaps  xmmword ptr [esi+40h], xmm0
0x8E9780: mov     eax, [edx]
0x8E9782: mov     [esi+4Ch], eax
0x8E9785: fld     dword ptr [esi+0A4h]
0x8E978B: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E9792: fld     st
0x8E9794: movaps  xmm0, xmm1
0x8E9797: fmul    st, st(1)
0x8E9799: mulps   xmm0, xmm1
0x8E979C: movaps  xmm2, xmm0
0x8E979F: shufps  xmm2, xmm0, 55h ; 'U'
0x8E97A3: movaps  xmm3, xmm0
0x8E97A6: lea     eax, [esp+40h+var_2C]
0x8E97AA: addss   xmm2, xmm0
0x8E97AE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8E97B2: addss   xmm3, xmm2
0x8E97B6: movss   dword ptr [eax], xmm3
0x8E97BA: fld     [esp+40h+var_2C]
0x8E97BE: fcompp
0x8E97C0: fnstsw  ax
0x8E97C2: fstp    st
0x8E97C4: test    ah, 41h
0x8E97C7: jnz     short loc_8E97F0
0x8E97C9: fld     [esp+40h+var_2C]
0x8E97CD: fsqrt
0x8E97CF: fdivr   dword ptr [esi+0A4h]
0x8E97D5: fstp    [esp+40h+var_28]
0x8E97D9: movss   xmm0, [esp+40h+var_28]
0x8E97DF: movaps  xmm2, xmm0
0x8E97E2: shufps  xmm2, xmm0, 0
0x8E97E6: mulps   xmm2, xmm1
0x8E97E9: movaps  xmmword ptr [ecx+0D0h], xmm2
0x8E97F0: mov     eax, [edx+8]
0x8E97F3: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8E97FA: mov     [esp+40h+var_28], eax
0x8E97FE: movss   xmm0, [esp+40h+var_28]
0x8E9804: movaps  xmm2, xmm0
0x8E9807: shufps  xmm2, xmm0, 0
0x8E980B: movaps  xmm0, xmmword ptr [esi+50h]
0x8E980F: mulps   xmm2, xmm1
0x8E9812: addps   xmm0, xmm2
0x8E9815: movaps  xmmword ptr [esi+50h], xmm0
0x8E9819: mov     eax, [edx+0Ch]
0x8E981C: mov     [esi+5Ch], eax
0x8E981F: lea     edi, [esi+70h]
0x8E9822: mov     eax, edi
0x8E9824: mov     ebx, [eax]
0x8E9826: mov     dword ptr [esp+40h+var_20], ebx
0x8E982A: mov     ebx, [eax+4]
0x8E982D: mov     dword ptr [esp+40h+var_20+4], ebx
0x8E9831: mov     ebx, [eax+8]
0x8E9834: mov     eax, [eax+0Ch]
0x8E9837: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x8E983B: mov     dword ptr [esp+40h+var_20+8], ebx
0x8E983F: movaps  xmm0, [esp+40h+var_20]
0x8E9844: movaps  xmmword ptr [esi+60h], xmm0
0x8E9848: fld     dword ptr [edx+8]
0x8E984B: fmul    dword ptr ds:0A3D65Ch
0x8E9851: movaps  xmm2, xmmword ptr [ecx+0E0h]
0x8E9858: lea     eax, [esp+40h+var_28]
0x8E985C: fstp    [esp+40h+var_28]
0x8E9860: movss   xmm0, [esp+40h+var_28]
0x8E9866: movaps  xmm1, xmm0
0x8E9869: shufps  xmm1, xmm0, 0
0x8E986D: mulps   xmm1, xmm2
0x8E9870: movaps  xmm0, xmm1
0x8E9873: mulps   xmm0, xmm1
0x8E9876: movaps  xmm3, xmm0
0x8E9879: shufps  xmm3, xmm0, 55h ; 'U'
0x8E987D: movaps  xmm4, xmm0
0x8E9880: addss   xmm3, xmm0
0x8E9884: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8E9888: addss   xmm4, xmm3
0x8E988C: movss   dword ptr [eax], xmm4
0x8E9890: fld     [esp+40h+var_28]
0x8E9894: fmul    dword ptr ds:0A96F74h
0x8E989A: movaps  [esp+40h+var_10], xmm1
0x8E989F: fstp    [esp+40h+var_2C]
0x8E98A3: fld     dword ptr [esi+0A8h]
0x8E98A9: fmul    dword ptr [edx+8]
0x8E98AC: fld     dword ptr ds:0A37450h
0x8E98B2: fcomp   st(1)
0x8E98B4: fnstsw  ax
0x8E98B6: test    ah, 5
0x8E98B9: jp      short loc_8E98C3
0x8E98BB: fstp    st
0x8E98BD: fld     dword ptr ds:0A37450h
0x8E98C3: fld     st
0x8E98C5: fmul    st, st(1)
0x8E98C7: fstp    [esp+40h+var_28]
0x8E98CB: fld     [esp+40h+var_2C]
0x8E98CF: fcomp   [esp+40h+var_28]
0x8E98D3: fnstsw  ax
0x8E98D5: test    ah, 41h
0x8E98D8: jp      short loc_8E98DE
0x8E98DA: fstp    st
0x8E98DC: jmp     short loc_8E9918
0x8E98DE: fld     [esp+40h+var_2C]
0x8E98E2: fsqrt
0x8E98E4: fdivp   st(1), st
0x8E98E6: fstp    [esp+40h+var_24]
0x8E98EA: movss   xmm0, [esp+40h+var_24]
0x8E98F0: movaps  xmm3, xmm0
0x8E98F3: shufps  xmm3, xmm0, 0
0x8E98F7: mulps   xmm3, xmm2
0x8E98FA: movaps  xmmword ptr [ecx+0E0h], xmm3
0x8E9901: mov     ecx, [esp+40h+var_28]
0x8E9905: movaps  xmm2, xmm0
0x8E9908: shufps  xmm2, xmm0, 0
0x8E990C: mulps   xmm2, xmm1
0x8E990F: movaps  [esp+40h+var_10], xmm2
0x8E9914: mov     [esp+40h+var_2C], ecx
0x8E9918: fld     [esp+40h+var_2C]
0x8E991C: lea     edx, [esp+40h+var_20]
0x8E9920: fmul    [esp+40h+var_2C]
0x8E9924: push    edx
0x8E9925: fld     [esp+44h+var_2C]
0x8E9929: lea     eax, [esp+44h+var_10]
0x8E992D: fmul    dword ptr ds:0A96F70h
0x8E9933: push    eax
0x8E9934: lea     ecx, [esp+48h+var_20]
0x8E9938: fsubr   dword ptr ds:0A2F948h
0x8E993E: fld     st(1)
0x8E9940: fmul    dword ptr ds:0A96F6Ch
0x8E9946: fsubp   st(1), st
0x8E9948: fxch    st(1)
0x8E994A: fmul    [esp+48h+var_2C]
0x8E994E: fmul    dword ptr ds:0A96F68h
0x8E9954: fsubp   st(1), st
0x8E9956: fstp    dword ptr [esp+48h+var_10+0Ch]
0x8E995A: call    sub_889470
0x8E995F: lea     ecx, [esp+40h+var_20]
0x8E9963: call    sub_4D6830
0x8E9968: fld     [esp+40h+var_2C]
0x8E996C: fsqrt
0x8E996E: movaps  xmm0, [esp+40h+var_10]
0x8E9973: movaps  xmm1, xmm0
0x8E9976: addps   xmm1, xmm0
0x8E9979: movaps  xmm0, [esp+40h+var_20]
0x8E997E: lea     ecx, [esi+70h]
0x8E9981: movaps  xmmword ptr [esi+90h], xmm1
0x8E9988: push    ecx
0x8E9989: mov     ecx, esi
0x8E998B: fmul    dword ptr ds:0A9AD28h
0x8E9991: fstp    dword ptr [esi+9Ch]
0x8E9997: movaps  xmmword ptr [edi], xmm0
0x8E999A: call    sub_8B1DD0
0x8E999F: movaps  xmm0, xmmword ptr [esi+80h]
0x8E99A6: movaps  xmm2, xmmword ptr [esi+20h]
0x8E99AA: movaps  xmm3, xmmword ptr [esi+10h]
0x8E99AE: movaps  xmm1, xmm0
0x8E99B1: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E99B5: mulps   xmm2, xmm1
0x8E99B8: movaps  xmm1, xmm0
0x8E99BB: shufps  xmm1, xmm0, 55h ; 'U'
0x8E99BF: mulps   xmm3, xmm1
0x8E99C2: movaps  xmm1, xmm0
0x8E99C5: shufps  xmm1, xmm0, 0
0x8E99C9: movaps  xmm0, xmmword ptr [esi]
0x8E99CC: mulps   xmm0, xmm1
0x8E99CF: movaps  xmm1, xmmword ptr [esi+50h]
0x8E99D3: addps   xmm0, xmm3
0x8E99D6: addps   xmm0, xmm2
0x8E99D9: pop     edi
0x8E99DA: subps   xmm1, xmm0
0x8E99DD: movaps  xmmword ptr [esi+30h], xmm1
0x8E99E1: pop     esi
0x8E99E2: pop     ebx
0x8E99E3: mov     esp, ebp
0x8E99E5: pop     ebp
0x8E99E6: retn    8
