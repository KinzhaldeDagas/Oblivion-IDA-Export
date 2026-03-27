0x916400: push    ebp
0x916401: mov     ebp, esp
0x916403: and     esp, 0FFFFFFF0h
0x916406: sub     esp, 0D4h
0x91640C: fld     dword ptr ds:0A2F948h
0x916412: push    ebx
0x916413: push    esi
0x916414: push    edi
0x916415: mov     edi, ecx
0x916417: fild    dword ptr [edi+88h]
0x91641D: movaps  xmm0, xmmword ptr [edi+70h]
0x916421: movaps  xmm1, xmmword ptr [edi+60h]
0x916425: subps   xmm1, xmm0
0x916428: fdivr   st, st(1)
0x91642A: movaps  xmm0, xmm1
0x91642D: mulps   xmm0, xmm1
0x916430: movaps  xmm2, xmm0
0x916433: shufps  xmm2, xmm0, 55h ; 'U'
0x916437: addss   xmm2, xmm0
0x91643B: movaps  xmm3, xmm0
0x91643E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x916442: movaps  xmm0, xmm3
0x916445: addss   xmm0, xmm2
0x916449: movaps  [esp+0E0h+var_A0], xmm0
0x91644E: sqrtss  xmm0, xmm0
0x916452: movss   dword ptr [esp+0E0h+var_A0], xmm0
0x916458: movaps  xmm0, [esp+0E0h+var_A0]
0x91645D: lea     eax, [esp+0E0h+var_88]
0x916461: movss   dword ptr [eax], xmm0
0x916465: fstp    [esp+0E0h+var_CC]
0x916469: movss   xmm0, [esp+0E0h+var_CC]
0x91646F: movaps  xmm2, xmm0
0x916472: shufps  xmm2, xmm0, 0
0x916476: mulps   xmm2, xmm1
0x916479: movaps  xmm0, xmm2
0x91647C: mulps   xmm0, xmm2
0x91647F: movaps  xmm1, xmm0
0x916482: shufps  xmm1, xmm0, 55h ; 'U'
0x916486: addss   xmm1, xmm0
0x91648A: movaps  xmm3, xmm0
0x91648D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x916491: movaps  xmm0, xmm3
0x916494: addss   xmm0, xmm1
0x916498: movaps  [esp+0E0h+var_A0], xmm0
0x91649D: rsqrtss xmm1, xmm0
0x9164A1: movss   dword ptr [esp+0E0h+var_A0], xmm1
0x9164A7: movaps  xmm1, [esp+0E0h+var_A0]
0x9164AC: mulss   xmm0, xmm1
0x9164B0: mulss   xmm0, xmm1
0x9164B4: mov     [esp+0E0h+var_CC], 40400000h
0x9164BC: movss   xmm3, [esp+0E0h+var_CC]
0x9164C2: subss   xmm3, xmm0
0x9164C6: mov     [esp+0E0h+var_CC], 3F000000h
0x9164CE: movss   xmm0, [esp+0E0h+var_CC]
0x9164D4: mulss   xmm0, xmm1
0x9164D8: mulss   xmm0, xmm3
0x9164DC: movaps  xmm1, xmm0
0x9164DF: shufps  xmm1, xmm0, 0
0x9164E3: movaps  xmm0, xmm1
0x9164E6: mulps   xmm0, xmm2
0x9164E9: movaps  [esp+0E0h+var_80], xmm0
0x9164EE: fld     dword ptr [esp+0E0h+var_80]
0x9164F2: fabs
0x9164F4: movaps  [esp+0E0h+var_60], xmm2
0x9164FC: fcomp   dword ptr ds:0A3D65Ch
0x916502: fnstsw  ax
0x916504: test    ah, 41h
0x916507: jnz     short loc_91652C
0x916509: fstp    dword ptr [esp+0E0h+var_A0+4]
0x91650D: mov     dword ptr [esp+0E0h+var_A0], 0
0x916515: mov     dword ptr [esp+0E0h+var_A0+8], 0
0x91651D: mov     dword ptr [esp+0E0h+var_A0+0Ch], 0
0x916525: movaps  xmm1, [esp+0E0h+var_A0]
0x91652A: jmp     short loc_9165A2
0x91652C: fld     dword ptr [esp+0E0h+var_80+4]
0x916530: fabs
0x916532: fcomp   dword ptr ds:0A3D65Ch
0x916538: fnstsw  ax
0x91653A: test    ah, 41h
0x91653D: jnz     short loc_916562
0x91653F: fstp    dword ptr [esp+0E0h+var_A0+8]
0x916543: mov     dword ptr [esp+0E0h+var_A0], 0
0x91654B: mov     dword ptr [esp+0E0h+var_A0+4], 0
0x916553: mov     dword ptr [esp+0E0h+var_A0+0Ch], 0
0x91655B: movaps  xmm1, [esp+0E0h+var_A0]
0x916560: jmp     short loc_9165A2
0x916562: fld     dword ptr [esp+0E0h+var_80+8]
0x916566: fabs
0x916568: fcomp   dword ptr ds:0A3D65Ch
0x91656E: fnstsw  ax
0x916570: test    ah, 41h
0x916573: jnz     short loc_916598
0x916575: fstp    dword ptr [esp+0E0h+var_A0]
0x916579: mov     dword ptr [esp+0E0h+var_A0+4], 0
0x916581: mov     dword ptr [esp+0E0h+var_A0+8], 0
0x916589: mov     dword ptr [esp+0E0h+var_A0+0Ch], 0
0x916591: movaps  xmm1, [esp+0E0h+var_A0]
0x916596: jmp     short loc_9165A2
0x916598: movaps  xmm1, [esp+0E0h+var_50]
0x9165A0: fstp    st
0x9165A2: fild    dword ptr [edi+84h]
0x9165A8: mov     ecx, [edi+80h]
0x9165AE: movaps  xmm3, xmm1
0x9165B1: shufps  xmm3, xmm1, 0C9h ; 'É'
0x9165B5: fdivr   dword ptr ds:0A46B14h
0x9165BB: movaps  xmm4, xmm0
0x9165BE: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x9165C2: mulps   xmm4, xmm3
0x9165C5: movaps  xmm3, xmm1
0x9165C8: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x9165CC: movaps  xmm1, xmm0
0x9165CF: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9165D3: mov     [esp+0E0h+var_CC], ecx
0x9165D7: movss   xmm2, [esp+0E0h+var_CC]
0x9165DD: push    ecx
0x9165DE: mulps   xmm1, xmm3
0x9165E1: movaps  xmm0, xmm2
0x9165E4: lea     edx, [esp+0E4h+var_80]
0x9165E8: subps   xmm1, xmm4
0x9165EB: shufps  xmm0, xmm2, 0
0x9165EF: mulps   xmm0, xmm1
0x9165F2: lea     ecx, [esp+0E4h+var_20]
0x9165F9: movaps  [esp+0E4h+var_40], xmm0
0x916601: fstp    [esp+0E4h+var_E4]; float
0x916604: push    edx; int
0x916605: call    sub_8B1B00
0x91660A: xor     ebx, ebx
0x91660C: push    ebx; float
0x91660D: lea     eax, [esp+0E4h+var_80]
0x916611: push    eax; int
0x916612: lea     ecx, [esp+0E8h+var_C0]
0x916616: call    sub_8B1B00
0x91661B: mov     ecx, ds:0BA7D98h
0x916621: mov     edx, [ecx]
0x916623: push    24h ; '$'
0x916625: push    18h
0x916627: call    dword ptr [edx+10h]
0x91662A: cmp     eax, ebx
0x91662C: jz      short loc_916646
0x91662E: mov     [eax], ebx
0x916630: mov     [eax+4], ebx
0x916633: mov     ecx, 80000000h
0x916638: mov     [eax+8], ecx
0x91663B: mov     [eax+0Ch], ebx
0x91663E: mov     [eax+10h], ebx
0x916641: mov     [eax+14h], ecx
0x916644: mov     ebx, eax
0x916646: mov     [edi+50h], ebx
0x916649: mov     esi, [ebx+4]
0x91664C: mov     eax, [ebx+8]
0x91664F: lea     ecx, [esi+1]
0x916652: and     eax, 3FFFFFFFh
0x916657: cmp     eax, ecx
0x916659: jge     short loc_91666F
0x91665B: add     eax, eax
0x91665D: cmp     ecx, eax
0x91665F: jl      short loc_916663
0x916661: mov     eax, ecx
0x916663: push    10h
0x916665: push    eax
0x916666: push    ebx
0x916667: call    sub_8A6E40
0x91666C: add     esp, 0Ch
0x91666F: lea     eax, [esi+1]
0x916672: mov     [ebx+4], eax
0x916675: mov     eax, [ebx]
0x916677: movaps  xmm0, xmmword ptr [edi+70h]
0x91667B: shl     esi, 4
0x91667E: movaps  xmmword ptr [esi+eax], xmm0
0x916682: fild    dword ptr [edi+88h]
0x916688: mov     ebx, [edi+50h]
0x91668B: movaps  xmm1, xmmword ptr [edi+70h]
0x91668F: add     esi, eax
0x916691: fstp    [esp+0E0h+var_CC]
0x916695: movss   xmm0, [esp+0E0h+var_CC]
0x91669B: mov     esi, [ebx+4]
0x91669E: mov     eax, [ebx+8]
0x9166A1: movaps  xmm2, xmm0
0x9166A4: shufps  xmm2, xmm0, 0
0x9166A8: movaps  xmm0, xmm2
0x9166AB: mulps   xmm0, [esp+0E0h+var_60]
0x9166B3: lea     ecx, [esi+1]
0x9166B6: and     eax, 3FFFFFFFh
0x9166BB: cmp     eax, ecx
0x9166BD: addps   xmm0, xmm1
0x9166C0: movaps  [esp+0E0h+var_70], xmm0
0x9166C5: jge     short loc_9166E0
0x9166C7: add     eax, eax
0x9166C9: cmp     ecx, eax
0x9166CB: jl      short loc_9166CF
0x9166CD: mov     eax, ecx
0x9166CF: push    10h
0x9166D1: push    eax
0x9166D2: push    ebx
0x9166D3: call    sub_8A6E40
0x9166D8: movaps  xmm0, [esp+0ECh+var_70]
0x9166DD: add     esp, 0Ch
0x9166E0: mov     ecx, [ebx]
0x9166E2: lea     eax, [esi+1]
0x9166E5: shl     esi, 4
0x9166E8: add     esi, ecx
0x9166EA: mov     [ebx+4], eax
0x9166ED: movaps  xmmword ptr [esi], xmm0
0x9166F0: mov     eax, [edi+84h]
0x9166F6: test    eax, eax
0x9166F8: mov     [esp+0E0h+var_A4], 0
0x916700: jle     loc_9168FF
0x916706: movaps  xmm4, [esp+0E0h+var_40]
0x91670E: movaps  xmm5, xmm4
0x916711: movaps  xmm6, xmm4
0x916714: shufps  xmm5, xmm4, 0C9h ; 'É'
0x916718: shufps  xmm6, xmm4, 0D2h ; 'Ò'
0x91671C: movaps  [esp+0E0h+var_30], xmm5
0x916724: movaps  xmmword ptr [esp+0E0h+var_18+8], xmm6
0x91672C: jmp     short loc_916750
0x91672E: movaps  xmm5, [esp+0E0h+var_30]
0x916736: movaps  xmm6, xmmword ptr [esp+0E0h+var_18+8]
0x91673E: movaps  xmm4, [esp+0E0h+var_40]
0x916746: jmp     short loc_916750
0x916748: align 10h
0x916750: fld     dword ptr [esp+0E0h+var_C0+0Ch]
0x916754: movaps  xmm0, [esp+0E0h+var_C0]
0x916759: fmul    dword ptr [esp+0E0h+var_C0+0Ch]
0x91675D: movaps  [esp+0E0h+var_70], xmm0
0x916762: mov     dword ptr [esp+0E0h+var_70+0Ch], 0
0x91676A: movaps  xmm1, [esp+0E0h+var_70]
0x91676F: fadd    st, st
0x916771: movaps  xmm0, xmm1
0x916774: mulps   xmm0, xmm4
0x916777: movaps  xmm3, xmm0
0x91677A: fsub    dword ptr ds:0A2F948h
0x916780: shufps  xmm3, xmm0, 55h ; 'U'
0x916784: addss   xmm3, xmm0
0x916788: movaps  xmm7, xmm0
0x91678B: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x91678F: fstp    [esp+0E0h+var_CC]
0x916793: movss   xmm2, [esp+0E0h+var_CC]
0x916799: addss   xmm7, xmm3
0x91679D: lea     eax, [esp+0E0h+var_C4]
0x9167A1: movss   dword ptr [eax], xmm7
0x9167A5: fld     [esp+0E0h+var_C4]
0x9167A9: mov     eax, [edi+88h]
0x9167AF: fadd    st, st
0x9167B1: test    eax, eax
0x9167B3: movaps  xmm7, xmm1
0x9167B6: fstp    [esp+0E0h+var_CC]
0x9167BA: shufps  xmm7, xmm1, 0D2h ; 'Ò'
0x9167BE: fld     dword ptr [esp+0E0h+var_C0+0Ch]
0x9167C2: movss   xmm0, [esp+0E0h+var_CC]
0x9167C8: fadd    st, st
0x9167CA: mulps   xmm7, xmm5
0x9167CD: movaps  xmm5, xmm1
0x9167D0: shufps  xmm5, xmm1, 0C9h ; 'É'
0x9167D4: mulps   xmm5, xmm6
0x9167D7: fstp    [esp+0E0h+var_CC]
0x9167DB: movss   xmm3, [esp+0E0h+var_CC]
0x9167E1: movaps  xmm6, xmm3
0x9167E4: shufps  xmm6, xmm3, 0
0x9167E8: movaps  xmm3, xmm0
0x9167EB: shufps  xmm3, xmm0, 0
0x9167EF: movaps  xmm0, xmm2
0x9167F2: shufps  xmm0, xmm2, 0
0x9167F6: mulps   xmm0, xmm4
0x9167F9: mulps   xmm3, xmm1
0x9167FC: addps   xmm0, xmm3
0x9167FF: subps   xmm5, xmm7
0x916802: mulps   xmm6, xmm5
0x916805: addps   xmm0, xmm6
0x916808: movaps  xmm1, xmm0
0x91680B: movaps  xmm0, xmmword ptr [edi+70h]
0x91680F: addps   xmm0, xmm1
0x916812: movaps  [esp+0E0h+var_A0], xmm0
0x916817: mov     [esp+0E0h+var_C8], 0
0x91681F: jle     short loc_916884
0x916821: mov     ebx, [edi+50h]
0x916824: mov     esi, [ebx+4]
0x916827: mov     eax, [ebx+8]
0x91682A: lea     ecx, [esi+1]
0x91682D: and     eax, 3FFFFFFFh
0x916832: cmp     eax, ecx
0x916834: jge     short loc_91684F
0x916836: add     eax, eax
0x916838: cmp     ecx, eax
0x91683A: jl      short loc_91683E
0x91683C: mov     eax, ecx
0x91683E: push    10h
0x916840: push    eax
0x916841: push    ebx
0x916842: call    sub_8A6E40
0x916847: movaps  xmm0, [esp+0ECh+var_A0]
0x91684C: add     esp, 0Ch
0x91684F: lea     eax, [esi+1]
0x916852: mov     [ebx+4], eax
0x916855: mov     eax, [ebx]
0x916857: shl     esi, 4
0x91685A: add     esi, eax
0x91685C: mov     eax, [esp+0E0h+var_C8]
0x916860: movaps  xmmword ptr [esi], xmm0
0x916863: addps   xmm0, [esp+0E0h+var_60]
0x91686B: mov     ecx, [edi+88h]
0x916871: inc     eax
0x916872: cmp     eax, ecx
0x916874: movaps  [esp+0E0h+var_A0], xmm0
0x916879: movaps  xmm0, [esp+0E0h+var_A0]
0x91687E: mov     [esp+0E0h+var_C8], eax
0x916882: jl      short loc_916821
0x916884: mov     ebx, [edi+50h]
0x916887: mov     esi, [ebx+4]
0x91688A: mov     eax, [ebx+8]
0x91688D: lea     ecx, [esi+1]
0x916890: and     eax, 3FFFFFFFh
0x916895: cmp     eax, ecx
0x916897: jge     short loc_9168B2
0x916899: add     eax, eax
0x91689B: cmp     ecx, eax
0x91689D: jl      short loc_9168A1
0x91689F: mov     eax, ecx
0x9168A1: push    10h
0x9168A3: push    eax
0x9168A4: push    ebx
0x9168A5: call    sub_8A6E40
0x9168AA: movaps  xmm0, [esp+0ECh+var_A0]
0x9168AF: add     esp, 0Ch
0x9168B2: lea     eax, [esi+1]
0x9168B5: mov     [ebx+4], eax
0x9168B8: mov     eax, [ebx]
0x9168BA: shl     esi, 4
0x9168BD: lea     ecx, [esp+0E0h+var_20]
0x9168C4: add     esi, eax
0x9168C6: push    ecx
0x9168C7: lea     edx, [esp+0E4h+var_50]
0x9168CE: movaps  xmmword ptr [esi], xmm0
0x9168D1: movaps  xmm0, [esp+0E4h+var_C0]
0x9168D6: push    edx
0x9168D7: lea     ecx, [esp+0E8h+var_C0]
0x9168DB: movaps  [esp+0E8h+var_50], xmm0
0x9168E3: call    sub_889470
0x9168E8: mov     eax, [esp+0E0h+var_A4]
0x9168EC: mov     ecx, [edi+84h]
0x9168F2: inc     eax
0x9168F3: cmp     eax, ecx
0x9168F5: mov     [esp+0E0h+var_A4], eax
0x9168F9: jl      loc_91672E
0x9168FF: mov     eax, [edi+88h]
0x916905: mov     ecx, [edi+84h]
0x91690B: lea     esi, [eax+1]
0x91690E: mov     edx, esi
0x916910: imul    edx, ecx
0x916913: lea     ebx, [esi+2]
0x916916: mov     [esp+0E0h+var_84], esi
0x91691A: add     edx, 2
0x91691D: add     esi, 3
0x916920: test    ecx, ecx
0x916922: mov     [esp+0E0h+var_A4], edx
0x916926: mov     dword ptr [esp+0E0h+var_C0], 2
0x91692E: mov     dword ptr [esp+0E0h+var_C0+4], ebx
0x916932: mov     dword ptr [esp+0E0h+var_C0+8], 3
0x91693A: mov     dword ptr [esp+0E0h+var_C0+0Ch], esi
0x91693E: mov     [esp+0E0h+var_C4], 0
0x916946: jle     loc_916A90
0x91694C: lea     esp, [esp+0]
0x916950: test    eax, eax
0x916952: mov     [esp+0E0h+var_C8], 0
0x91695A: jle     loc_916A33
0x916960: mov     esi, [edi+50h]
0x916963: mov     ebx, [esi+10h]
0x916966: mov     eax, [esi+14h]
0x916969: add     esi, 0Ch
0x91696C: lea     ecx, [ebx+1]
0x91696F: and     eax, 3FFFFFFFh
0x916974: cmp     eax, ecx
0x916976: jge     short loc_916990
0x916978: add     eax, eax
0x91697A: cmp     ecx, eax
0x91697C: jl      short loc_916980
0x91697E: mov     eax, ecx
0x916980: push    0Ch
0x916982: push    eax
0x916983: push    esi
0x916984: call    sub_8A6E40
0x916989: mov     edx, [esp+0ECh+var_A4]
0x91698D: add     esp, 0Ch
0x916990: mov     ecx, [esi]
0x916992: lea     eax, [ebx+1]
0x916995: mov     [esi+4], eax
0x916998: lea     eax, [ebx+ebx*2]
0x91699B: lea     eax, [ecx+eax*4]
0x91699E: mov     ecx, dword ptr [esp+0E0h+var_C0]
0x9169A2: mov     [eax], ecx
0x9169A4: mov     ecx, dword ptr [esp+0E0h+var_C0+4]
0x9169A8: mov     [eax+4], ecx
0x9169AB: mov     ecx, dword ptr [esp+0E0h+var_C0+8]
0x9169AF: mov     [eax+8], ecx
0x9169B2: mov     esi, [edi+50h]
0x9169B5: mov     ebx, [esi+10h]
0x9169B8: mov     eax, [esi+14h]
0x9169BB: add     esi, 0Ch
0x9169BE: lea     ecx, [ebx+1]
0x9169C1: and     eax, 3FFFFFFFh
0x9169C6: cmp     eax, ecx
0x9169C8: jge     short loc_9169E2
0x9169CA: add     eax, eax
0x9169CC: cmp     ecx, eax
0x9169CE: jl      short loc_9169D2
0x9169D0: mov     eax, ecx
0x9169D2: push    0Ch
0x9169D4: push    eax
0x9169D5: push    esi
0x9169D6: call    sub_8A6E40
0x9169DB: mov     edx, [esp+0ECh+var_A4]
0x9169DF: add     esp, 0Ch
0x9169E2: mov     ecx, [esi]
0x9169E4: lea     eax, [ebx+1]
0x9169E7: mov     [esi+4], eax
0x9169EA: mov     esi, dword ptr [esp+0E0h+var_C0+0Ch]
0x9169EE: lea     eax, [ebx+ebx*2]
0x9169F1: mov     ebx, dword ptr [esp+0E0h+var_C0+8]
0x9169F5: lea     eax, [ecx+eax*4]
0x9169F8: mov     ecx, dword ptr [esp+0E0h+var_C0+4]
0x9169FC: mov     [eax+4], ecx
0x9169FF: mov     [eax], ebx
0x916A01: mov     [eax+8], esi
0x916A04: mov     eax, dword ptr [esp+0E0h+var_C0]
0x916A08: inc     eax
0x916A09: inc     ecx
0x916A0A: inc     ebx
0x916A0B: mov     dword ptr [esp+0E0h+var_C0+4], ecx
0x916A0F: mov     ecx, [esp+0E0h+var_C8]
0x916A13: inc     esi
0x916A14: mov     dword ptr [esp+0E0h+var_C0], eax
0x916A18: mov     eax, [edi+88h]
0x916A1E: inc     ecx
0x916A1F: cmp     ecx, eax
0x916A21: mov     dword ptr [esp+0E0h+var_C0+8], ebx
0x916A25: mov     dword ptr [esp+0E0h+var_C0+0Ch], esi
0x916A29: mov     [esp+0E0h+var_C8], ecx
0x916A2D: jl      loc_916960
0x916A33: mov     ebx, dword ptr [esp+0E0h+var_C0]
0x916A37: mov     esi, dword ptr [esp+0E0h+var_C0+4]
0x916A3B: mov     ecx, dword ptr [esp+0E0h+var_C0+8]
0x916A3F: inc     ebx
0x916A40: inc     esi
0x916A41: inc     ecx
0x916A42: mov     dword ptr [esp+0E0h+var_C0+8], ecx
0x916A46: mov     ecx, dword ptr [esp+0E0h+var_C0+0Ch]
0x916A4A: inc     ecx
0x916A4B: cmp     ecx, edx
0x916A4D: mov     dword ptr [esp+0E0h+var_C0], ebx
0x916A51: mov     dword ptr [esp+0E0h+var_C0+4], esi
0x916A55: mov     dword ptr [esp+0E0h+var_C0+0Ch], ecx
0x916A59: jl      short loc_916A79
0x916A5B: mov     ecx, 2
0x916A60: sub     ecx, edx
0x916A62: add     esi, ecx
0x916A64: mov     dword ptr [esp+0E0h+var_C0+4], esi
0x916A68: mov     esi, dword ptr [esp+0E0h+var_C0+0Ch]
0x916A6C: mov     ecx, 2
0x916A71: sub     ecx, edx
0x916A73: add     esi, ecx
0x916A75: mov     dword ptr [esp+0E0h+var_C0+0Ch], esi
0x916A79: mov     ecx, [esp+0E0h+var_C4]
0x916A7D: mov     esi, [edi+84h]
0x916A83: inc     ecx
0x916A84: cmp     ecx, esi
0x916A86: mov     [esp+0E0h+var_C4], ecx
0x916A8A: jl      loc_916950
0x916A90: xor     ecx, ecx
0x916A92: mov     [esp+0E0h+var_C4], ecx
0x916A96: test    ecx, ecx
0x916A98: jz      short loc_916AA2
0x916A9A: mov     eax, [edi+88h]
0x916AA0: jmp     short loc_916AA4
0x916AA2: xor     eax, eax
0x916AA4: add     eax, 2
0x916AA7: mov     [esp+0E0h+var_8C], eax
0x916AAB: mov     eax, [edi+84h]
0x916AB1: test    eax, eax
0x916AB3: mov     [esp+0E0h+var_CC], 0
0x916ABB: jle     loc_916B97
0x916AC1: mov     eax, [esp+0E0h+var_84]
0x916AC5: mov     edx, [esp+0E0h+var_8C]
0x916AC9: add     edx, eax
0x916ACB: mov     eax, [esp+0E0h+var_A4]
0x916ACF: cmp     edx, eax
0x916AD1: mov     [esp+0E0h+var_C8], edx
0x916AD5: jl      short loc_916AE4
0x916AD7: mov     esi, 2
0x916ADC: sub     esi, eax
0x916ADE: add     edx, esi
0x916AE0: mov     [esp+0E0h+var_C8], edx
0x916AE4: mov     esi, [edi+50h]
0x916AE7: mov     eax, [esi+14h]
0x916AEA: add     esi, 0Ch
0x916AED: and     eax, 3FFFFFFFh
0x916AF2: test    ecx, ecx
0x916AF4: mov     ecx, [esi+4]
0x916AF7: lea     ebx, [ecx+1]
0x916AFA: mov     [esp+0E0h+var_88], ecx
0x916AFE: jz      short loc_916B3D
0x916B00: cmp     eax, ebx
0x916B02: jge     short loc_916B20
0x916B04: add     eax, eax
0x916B06: cmp     ebx, eax
0x916B08: jl      short loc_916B0C
0x916B0A: mov     eax, ebx
0x916B0C: push    0Ch
0x916B0E: push    eax
0x916B0F: push    esi
0x916B10: call    sub_8A6E40
0x916B15: mov     edx, [esp+0ECh+var_C8]
0x916B19: mov     ecx, [esp+0ECh+var_88]
0x916B1D: add     esp, 0Ch
0x916B20: mov     eax, [esi]
0x916B22: lea     ecx, [ecx+ecx*2]
0x916B25: lea     eax, [eax+ecx*4]
0x916B28: mov     ecx, [esp+0E0h+var_C4]
0x916B2C: mov     [esi+4], ebx
0x916B2F: mov     [eax], ecx
0x916B31: mov     ecx, [esp+0E0h+var_8C]
0x916B35: mov     [eax+4], ecx
0x916B38: mov     [eax+8], edx
0x916B3B: jmp     short loc_916B78
0x916B3D: cmp     eax, ebx
0x916B3F: jge     short loc_916B5D
0x916B41: add     eax, eax
0x916B43: cmp     ebx, eax
0x916B45: jl      short loc_916B49
0x916B47: mov     eax, ebx
0x916B49: push    0Ch
0x916B4B: push    eax
0x916B4C: push    esi
0x916B4D: call    sub_8A6E40
0x916B52: mov     edx, [esp+0ECh+var_C8]
0x916B56: mov     ecx, [esp+0ECh+var_88]
0x916B5A: add     esp, 0Ch
0x916B5D: lea     eax, [ecx+ecx*2]
0x916B60: mov     ecx, [esi]
0x916B62: lea     eax, [ecx+eax*4]
0x916B65: mov     ecx, [esp+0E0h+var_8C]
0x916B69: mov     [esi+4], ebx
0x916B6C: mov     dword ptr [eax], 0
0x916B72: mov     [eax+4], edx
0x916B75: mov     [eax+8], ecx
0x916B78: mov     eax, [esp+0E0h+var_CC]
0x916B7C: mov     ecx, [edi+84h]
0x916B82: inc     eax
0x916B83: cmp     eax, ecx
0x916B85: mov     ecx, [esp+0E0h+var_C4]
0x916B89: mov     [esp+0E0h+var_8C], edx
0x916B8D: mov     [esp+0E0h+var_CC], eax
0x916B91: jl      loc_916AC1
0x916B97: inc     ecx
0x916B98: cmp     ecx, 2
0x916B9B: mov     [esp+0E0h+var_C4], ecx
0x916B9F: jl      loc_916A96
0x916BA5: pop     edi
0x916BA6: pop     esi
0x916BA7: pop     ebx
0x916BA8: mov     esp, ebp
0x916BAA: pop     ebp
0x916BAB: retn
