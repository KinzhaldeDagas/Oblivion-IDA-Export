0x8F8380: push    ebp
0x8F8381: mov     ebp, esp
0x8F8383: and     esp, 0FFFFFFF0h
0x8F8386: sub     esp, 114h
0x8F838C: mov     edx, ds:0BA9DE4h
0x8F8392: push    ebx
0x8F8393: mov     [esp+118h+var_10C], ecx
0x8F8397: mov     ecx, large fs:2Ch
0x8F839E: mov     eax, [ecx+edx*4]
0x8F83A1: push    esi
0x8F83A2: mov     esi, [eax+1A4h]
0x8F83A8: push    edi
0x8F83A9: cmp     esi, [eax+1A8h]
0x8F83AF: jnb     short loc_8F83D5
0x8F83B1: mov     esi, eax
0x8F83B3: mov     ecx, [esi+1A4h]
0x8F83B9: mov     dword ptr [ecx], offset aTtmultispher_0; "TtMultiSphereTriangle"
0x8F83BF: rdtsc
0x8F83C1: mov     [esp+120h+var_110], eax
0x8F83C5: mov     eax, [esp+120h+var_110]
0x8F83C9: mov     [ecx+4], eax
0x8F83CC: add     ecx, 0Ch
0x8F83CF: mov     [esi+1A4h], ecx
0x8F83D5: mov     eax, [ebp+arg_4]
0x8F83D8: mov     edx, [eax]
0x8F83DA: mov     eax, [eax+8]
0x8F83DD: movaps  xmm1, xmmword ptr [eax]
0x8F83E0: movaps  xmm2, xmmword ptr [eax+10h]
0x8F83E4: movaps  xmm3, xmmword ptr [eax+20h]
0x8F83E8: movaps  xmm4, xmmword ptr [eax+30h]
0x8F83EC: mov     ebx, [ebp+arg_0]
0x8F83EF: mov     ecx, [ebx]
0x8F83F1: mov     [esp+120h+var_104], edx
0x8F83F5: add     edx, 10h
0x8F83F8: lea     eax, [esp+120h+var_B0]
0x8F83FC: sub     eax, edx
0x8F83FE: mov     esi, 3
0x8F8403: movaps  xmm0, xmmword ptr [edx]
0x8F8406: movaps  xmm5, xmm0
0x8F8409: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F840D: movaps  xmm6, xmm3
0x8F8410: mulps   xmm6, xmm5
0x8F8413: movaps  xmm5, xmm0
0x8F8416: shufps  xmm5, xmm0, 55h ; 'U'
0x8F841A: movaps  xmm7, xmm2
0x8F841D: mulps   xmm7, xmm5
0x8F8420: movaps  xmm5, xmm0
0x8F8423: shufps  xmm5, xmm0, 0
0x8F8427: movaps  xmm0, xmm1
0x8F842A: mulps   xmm0, xmm5
0x8F842D: addps   xmm6, xmm4
0x8F8430: addps   xmm0, xmm7
0x8F8433: addps   xmm0, xmm6
0x8F8436: movaps  xmmword ptr [eax+edx], xmm0
0x8F843A: add     edx, 10h
0x8F843D: dec     esi
0x8F843E: jnz     short loc_8F8403
0x8F8440: mov     eax, [ebx+8]
0x8F8443: movaps  xmm1, xmmword ptr [eax]
0x8F8446: movaps  xmm2, xmmword ptr [eax+10h]
0x8F844A: movaps  xmm3, xmmword ptr [eax+20h]
0x8F844E: movaps  xmm4, xmmword ptr [eax+30h]
0x8F8452: lea     edi, [ecx+10h]
0x8F8455: mov     ecx, [ecx+0Ch]
0x8F8458: lea     eax, [esp+120h+var_80]
0x8F845F: mov     esi, ecx
0x8F8461: mov     edx, edi
0x8F8463: sub     eax, edi
0x8F8465: movaps  xmm0, xmmword ptr [edx]
0x8F8468: movaps  xmm5, xmm0
0x8F846B: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F846F: movaps  xmm6, xmm3
0x8F8472: mulps   xmm6, xmm5
0x8F8475: movaps  xmm5, xmm0
0x8F8478: shufps  xmm5, xmm0, 55h ; 'U'
0x8F847C: movaps  xmm7, xmm2
0x8F847F: mulps   xmm7, xmm5
0x8F8482: movaps  xmm5, xmm0
0x8F8485: shufps  xmm5, xmm0, 0
0x8F8489: movaps  xmm0, xmm1
0x8F848C: mulps   xmm0, xmm5
0x8F848F: addps   xmm6, xmm4
0x8F8492: addps   xmm0, xmm7
0x8F8495: addps   xmm0, xmm6
0x8F8498: movaps  xmmword ptr [eax+edx], xmm0
0x8F849C: add     edx, 10h
0x8F849F: dec     esi
0x8F84A0: test    esi, esi
0x8F84A2: jg      short loc_8F8465
0x8F84A4: test    ecx, ecx
0x8F84A6: mov     edx, [ebp+arg_4]
0x8F84A9: mov     [esp+120h+var_E0], ebx
0x8F84AD: mov     [esp+120h+var_DC], edx
0x8F84B1: jle     loc_8F8568
0x8F84B7: mov     ebx, [esp+120h+var_10C]
0x8F84BB: add     ebx, 0Ch
0x8F84BE: lea     esi, [esp+120h+var_80]
0x8F84C5: add     edi, 0Ch
0x8F84C8: mov     [esp+120h+var_110], ecx
0x8F84CC: lea     esp, [esp+0]
0x8F84D0: fld     dword ptr [edi]
0x8F84D2: mov     eax, [esp+120h+var_104]
0x8F84D6: fadd    dword ptr [eax+0Ch]
0x8F84D9: lea     ecx, [esp+120h+var_D0]
0x8F84DD: push    ecx
0x8F84DE: push    ebx
0x8F84DF: lea     edx, [esp+128h+var_B0]
0x8F84E3: fstp    [esp+128h+var_10C]
0x8F84E7: push    edx
0x8F84E8: push    esi
0x8F84E9: call    sub_8D20C0
0x8F84EE: fld     [esp+130h+var_10C]
0x8F84F2: mov     eax, [ebp+arg_8]
0x8F84F5: fadd    dword ptr [eax+8]
0x8F84F8: add     esp, 10h
0x8F84FB: fcomp   [esp+120h+var_C0]
0x8F84FF: fnstsw  ax
0x8F8501: test    ah, 41h
0x8F8504: jnz     short loc_8F8553
0x8F8506: mov     ecx, [esp+120h+var_104]
0x8F850A: fld     dword ptr [ecx+0Ch]
0x8F850D: movaps  xmm1, [esp+120h+var_D0]
0x8F8512: fsub    [esp+120h+var_C0]
0x8F8516: mov     ecx, [ebp+arg_C]
0x8F8519: mov     edx, [ecx]
0x8F851B: lea     eax, [esp+120h+var_100]
0x8F851F: fstp    [esp+120h+var_108]
0x8F8523: movss   xmm0, [esp+120h+var_108]
0x8F8529: fld     [esp+120h+var_C0]
0x8F852D: movaps  xmm2, xmm0
0x8F8530: fsub    [esp+120h+var_10C]
0x8F8534: shufps  xmm2, xmm0, 0
0x8F8538: movaps  xmm0, xmmword ptr [esi]
0x8F853B: mulps   xmm2, xmm1
0x8F853E: addps   xmm0, xmm2
0x8F8541: movaps  [esp+120h+var_F0], xmm1
0x8F8546: fstp    dword ptr [esp+120h+var_F0+0Ch]
0x8F854A: push    eax
0x8F854B: movaps  [esp+124h+var_100], xmm0
0x8F8550: call    dword ptr [edx+4]
0x8F8553: mov     eax, [esp+120h+var_110]
0x8F8557: add     esi, 10h
0x8F855A: add     edi, 10h
0x8F855D: dec     eax
0x8F855E: mov     [esp+120h+var_110], eax
0x8F8562: jnz     loc_8F84D0
0x8F8568: mov     ecx, large fs:2Ch
0x8F856F: mov     edx, ds:0BA9DE4h
0x8F8575: mov     eax, [ecx+edx*4]
0x8F8578: mov     esi, [eax+1A4h]
0x8F857E: cmp     esi, [eax+1A8h]
0x8F8584: jnb     short loc_8F85AA
0x8F8586: mov     esi, eax
0x8F8588: mov     ecx, [esi+1A4h]
0x8F858E: mov     dword ptr [ecx], offset aEt; "Et"
0x8F8594: rdtsc
0x8F8596: mov     [esp+120h+var_108], eax
0x8F859A: mov     edx, [esp+120h+var_108]
0x8F859E: mov     [ecx+4], edx
0x8F85A1: add     ecx, 0Ch
0x8F85A4: mov     [esi+1A4h], ecx
0x8F85AA: pop     edi
0x8F85AB: pop     esi
0x8F85AC: pop     ebx
0x8F85AD: mov     esp, ebp
0x8F85AF: pop     ebp
0x8F85B0: retn    10h
