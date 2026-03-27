0x9202A0: push    ebp
0x9202A1: mov     ebp, esp
0x9202A3: and     esp, 0FFFFFFF0h
0x9202A6: sub     esp, 0A4h
0x9202AC: mov     eax, [ebp+arg_0]
0x9202AF: mov     edx, [eax+8]
0x9202B2: mov     ecx, [eax+4]
0x9202B5: push    ebx
0x9202B6: mov     [esp+0A8h+var_78], edx
0x9202BA: mov     edx, [ebp+arg_C]
0x9202BD: push    esi
0x9202BE: mov     [esp+0ACh+var_80], ecx
0x9202C2: mov     ecx, [ebp+arg_4]
0x9202C5: push    edi
0x9202C6: mov     [esp+0B0h+var_94], edx
0x9202CA: lea     ebx, [ebx+0]
0x9202D0: mov     edi, [ecx+0Ch]; jumptable 009202FC case 1
0x9202D3: mov     ebx, [ecx+10h]
0x9202D6: mov     esi, [ecx+4]
0x9202D9: add     ecx, 18h
0x9202DC: mov     [esp+0B0h+var_90], ecx
0x9202E0: lea     eax, [esi+40h]
0x9202E3: mov     [esp+0B0h+var_98], eax
0x9202E7: jmp     short loc_9202F0
0x9202E9: align 10h
0x9202F0: movsx   eax, byte ptr [ecx]
0x9202F3: cmp     eax, 10h; switch 17 cases
0x9202F6: ja      def_9202FC; jumptable 009202FC default case
0x9202FC: jmp     ds:jpt_9202FC[eax*4]; switch jump
0x920303: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 3
0x920307: movaps  xmm1, xmmword ptr [edi+10h]
0x92030B: mov     eax, [esp+0B0h+var_98]
0x92030F: movaps  xmm2, xmmword ptr [esi]
0x920312: movaps  xmm3, xmmword ptr [ebx+20h]
0x920316: movaps  xmm4, xmmword ptr [edi+20h]
0x92031A: subps   xmm1, xmm0
0x92031D: movaps  xmm0, xmm1
0x920320: mulps   xmm0, xmm2
0x920323: movaps  xmm5, xmm0
0x920326: movaps  xmm0, xmmword ptr [eax-20h]
0x92032A: movaps  xmm6, xmm3
0x92032D: mulps   xmm6, xmm0
0x920330: movaps  xmm0, xmmword ptr [eax-30h]
0x920334: movaps  xmm7, xmm4
0x920337: mulps   xmm7, xmm0
0x92033A: movaps  xmm0, xmm7
0x92033D: addps   xmm0, xmm6
0x920340: addps   xmm0, xmm5
0x920343: movaps  xmm5, xmm0
0x920346: shufps  xmm5, xmm0, 55h ; 'U'
0x92034A: addss   xmm5, xmm0
0x92034E: movaps  xmm6, xmm0
0x920351: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x920355: lea     eax, [esp+0B0h+var_28]
0x92035C: addss   xmm6, xmm5
0x920360: movss   dword ptr [eax], xmm6
0x920364: mov     eax, [esp+0B0h+var_98]
0x920368: movaps  xmm0, xmmword ptr [eax+10h]
0x92036C: movaps  xmm5, xmmword ptr [eax-10h]
0x920370: mulps   xmm3, xmm0
0x920373: movaps  xmm0, xmmword ptr [eax]
0x920376: mulps   xmm4, xmm0
0x920379: addps   xmm4, xmm3
0x92037C: mulps   xmm1, xmm5
0x92037F: movaps  xmm0, xmm4
0x920382: addps   xmm0, xmm1
0x920385: movaps  xmm1, xmm0
0x920388: shufps  xmm1, xmm0, 55h ; 'U'
0x92038C: movaps  xmm3, xmm0
0x92038F: lea     eax, [esp+0B0h+var_38]
0x920393: addss   xmm1, xmm0
0x920397: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92039B: addss   xmm3, xmm1
0x92039F: movss   dword ptr [eax], xmm3
0x9203A3: mov     eax, [esp+0B0h+var_98]
0x9203A7: fld     dword ptr [eax-34h]
0x9203AA: mov     eax, [ebp+arg_0]
0x9203AD: fmul    dword ptr [eax+4]
0x9203B0: fld     [esp+0B0h+var_28]
0x9203B7: fmul    dword ptr [eax+8]
0x9203BA: mov     eax, [esp+0B0h+var_98]
0x9203BE: fsubp   st(1), st
0x9203C0: fld     dword ptr [eax-4]
0x9203C3: mov     eax, [ebp+arg_0]
0x9203C6: fmul    dword ptr [eax+4]
0x9203C9: fld     [esp+0B0h+var_38]
0x9203CD: fmul    dword ptr [eax+8]
0x9203D0: mov     eax, [esp+0B0h+var_98]
0x9203D4: fsubp   st(1), st
0x9203D6: fld     st(1)
0x9203D8: fmul    dword ptr [eax-14h]
0x9203DB: fld     st(1)
0x9203DD: fmul    dword ptr [ecx+4]
0x9203E0: faddp   st(1), st
0x9203E2: fstp    [esp+0B0h+var_94]
0x9203E6: fld     st
0x9203E8: fmul    dword ptr [eax+1Ch]
0x9203EB: fld     st(2)
0x9203ED: fmul    dword ptr [ecx+4]
0x9203F0: faddp   st(1), st
0x9203F2: fstp    [esp+0B0h+var_90]
0x9203F6: fxch    st(1)
0x9203F8: fmul    dword ptr [eax-24h]
0x9203FB: fstp    [esp+0B0h+var_8C]
0x9203FF: fmul    dword ptr [eax+0Ch]
0x920402: fstp    [esp+0B0h+var_9C]
0x920406: fld     [esp+0B0h+var_94]
0x92040A: fcomp   dword ptr ds:0A2FAA8h
0x920410: fnstsw  ax
0x920412: test    ah, 41h
0x920415: jnz     loc_92051A
0x92041B: fld     [esp+0B0h+var_90]
0x92041F: fcomp   dword ptr ds:0A2FAA8h
0x920425: fnstsw  ax
0x920427: test    ah, 41h
0x92042A: jnz     loc_92052F
0x920430: mov     eax, [esp+0B0h+var_94]
0x920434: fld     [esp+0B0h+var_94]
0x920438: movaps  xmm3, xmmword ptr [edi+30h]
0x92043C: mov     [esp+0B0h+var_68], eax
0x920440: movss   xmm1, [esp+0B0h+var_68]
0x920446: mov     eax, [esp+0B0h+var_98]
0x92044A: movaps  xmm0, xmm1
0x92044D: shufps  xmm0, xmm1, 0
0x920451: mulps   xmm0, xmm3
0x920454: movaps  xmm3, xmmword ptr [ebx+30h]
0x920458: movaps  xmm4, xmm1
0x92045B: shufps  xmm4, xmm1, 0
0x92045F: movaps  xmm1, xmm4
0x920462: mulps   xmm1, xmm3
0x920465: movaps  xmm4, xmm0
0x920468: shufps  xmm4, xmm0, 0FFh
0x92046C: mulps   xmm4, xmm2
0x92046F: movaps  xmm3, xmm1
0x920472: shufps  xmm3, xmm1, 0FFh
0x920476: mulps   xmm3, xmm2
0x920479: movaps  xmm2, xmmword ptr [edi+10h]
0x92047D: addps   xmm2, xmm4
0x920480: movaps  xmmword ptr [edi+10h], xmm2
0x920484: movaps  xmm2, xmmword ptr [ebx+10h]
0x920488: subps   xmm2, xmm3
0x92048B: movaps  xmmword ptr [ebx+10h], xmm2
0x92048F: movaps  xmm2, xmmword ptr [eax-20h]
0x920493: mulps   xmm1, xmm2
0x920496: movaps  xmm2, xmmword ptr [eax-30h]
0x92049A: mov     eax, [esp+0B0h+var_90]
0x92049E: mulps   xmm0, xmm2
0x9204A1: movaps  xmm2, xmmword ptr [edi+20h]
0x9204A5: addps   xmm2, xmm0
0x9204A8: movaps  xmmword ptr [edi+20h], xmm2
0x9204AC: movaps  xmm0, xmmword ptr [ebx+20h]
0x9204B0: addps   xmm0, xmm1
0x9204B3: movaps  xmmword ptr [ebx+20h], xmm0
0x9204B7: fadd    dword ptr [edx]
0x9204B9: mov     [esp+0B0h+var_10], eax
0x9204C0: movss   xmm1, [esp+0B0h+var_10]
0x9204C9: mov     eax, [esp+0B0h+var_98]
0x9204CD: fstp    dword ptr [edx]
0x9204CF: movaps  xmm2, xmmword ptr [edi+30h]
0x9204D3: fld     [esp+0B0h+var_90]
0x9204D7: movaps  xmm0, xmm1
0x9204DA: shufps  xmm0, xmm1, 0
0x9204DE: mulps   xmm0, xmm2
0x9204E1: movaps  xmm2, xmmword ptr [ebx+30h]
0x9204E5: movaps  xmm3, xmm1
0x9204E8: shufps  xmm3, xmm1, 0
0x9204EC: movaps  xmm1, xmm3
0x9204EF: movaps  xmm3, xmmword ptr [eax-10h]
0x9204F3: mulps   xmm1, xmm2
0x9204F6: movaps  xmm2, xmm1
0x9204F9: movaps  xmm4, xmm0
0x9204FC: shufps  xmm2, xmm1, 0FFh
0x920500: mulps   xmm2, xmm3
0x920503: shufps  xmm4, xmm0, 0FFh
0x920507: mulps   xmm4, xmm3
0x92050A: movaps  xmm3, xmmword ptr [edi+10h]
0x92050E: addps   xmm3, xmm4
0x920511: movaps  xmmword ptr [edi+10h], xmm3
0x920515: jmp     loc_92062A
0x92051A: fld     [esp+0B0h+var_9C]
0x92051E: fcomp   dword ptr ds:0A2FAA8h
0x920524: fnstsw  ax
0x920526: test    ah, 41h
0x920529: jp      loc_9205D0
0x92052F: fld     [esp+0B0h+var_8C]
0x920533: fcomp   dword ptr ds:0A2FAA8h
0x920539: fnstsw  ax
0x92053B: test    ah, 41h
0x92053E: jnz     loc_92065E
0x920544: mov     eax, [esp+0B0h+var_8C]
0x920548: fld     [esp+0B0h+var_8C]
0x92054C: movaps  xmm3, xmmword ptr [edi+30h]
0x920550: mov     [esp+0B0h+var_60], eax
0x920554: movss   xmm1, [esp+0B0h+var_60]
0x92055A: mov     eax, [esp+0B0h+var_98]
0x92055E: movaps  xmm0, xmm1
0x920561: shufps  xmm0, xmm1, 0
0x920565: mulps   xmm0, xmm3
0x920568: movaps  xmm3, xmmword ptr [ebx+30h]
0x92056C: movaps  xmm4, xmm1
0x92056F: shufps  xmm4, xmm1, 0
0x920573: movaps  xmm1, xmm4
0x920576: mulps   xmm1, xmm3
0x920579: movaps  xmm4, xmm0
0x92057C: shufps  xmm4, xmm0, 0FFh
0x920580: mulps   xmm4, xmm2
0x920583: movaps  xmm3, xmm1
0x920586: shufps  xmm3, xmm1, 0FFh
0x92058A: mulps   xmm3, xmm2
0x92058D: movaps  xmm2, xmmword ptr [edi+10h]
0x920591: addps   xmm2, xmm4
0x920594: movaps  xmmword ptr [edi+10h], xmm2
0x920598: movaps  xmm2, xmmword ptr [ebx+10h]
0x92059C: subps   xmm2, xmm3
0x92059F: movaps  xmmword ptr [ebx+10h], xmm2
0x9205A3: movaps  xmm2, xmmword ptr [eax-20h]
0x9205A7: mulps   xmm1, xmm2
0x9205AA: movaps  xmm2, xmmword ptr [eax-30h]
0x9205AE: mulps   xmm0, xmm2
0x9205B1: movaps  xmm2, xmmword ptr [edi+20h]
0x9205B5: addps   xmm2, xmm0
0x9205B8: movaps  xmmword ptr [edi+20h], xmm2
0x9205BC: movaps  xmm0, xmmword ptr [ebx+20h]
0x9205C0: addps   xmm0, xmm1
0x9205C3: movaps  xmmword ptr [ebx+20h], xmm0
0x9205C7: fadd    dword ptr [edx]
0x9205C9: fstp    dword ptr [edx]
0x9205CB: jmp     loc_92065E
0x9205D0: mov     eax, [esp+0B0h+var_9C]
0x9205D4: fld     [esp+0B0h+var_9C]
0x9205D8: movaps  xmm2, xmmword ptr [edi+30h]
0x9205DC: movaps  xmm4, xmmword ptr [edi+10h]
0x9205E0: mov     [esp+0B0h+var_30], eax
0x9205E7: movss   xmm1, [esp+0B0h+var_30]
0x9205F0: mov     eax, [esp+0B0h+var_98]
0x9205F4: movaps  xmm0, xmm1
0x9205F7: movaps  xmm3, xmm1
0x9205FA: shufps  xmm3, xmm1, 0
0x9205FE: shufps  xmm0, xmm1, 0
0x920602: mulps   xmm0, xmm2
0x920605: movaps  xmm2, xmmword ptr [ebx+30h]
0x920609: movaps  xmm1, xmm3
0x92060C: mulps   xmm1, xmm2
0x92060F: movaps  xmm3, xmm0
0x920612: shufps  xmm3, xmm0, 0FFh
0x920616: movaps  xmm2, xmm1
0x920619: mulps   xmm3, xmm5
0x92061C: shufps  xmm2, xmm1, 0FFh
0x920620: addps   xmm4, xmm3
0x920623: mulps   xmm2, xmm5
0x920626: movaps  xmmword ptr [edi+10h], xmm4
0x92062A: movaps  xmm3, xmmword ptr [ebx+10h]
0x92062E: subps   xmm3, xmm2
0x920631: movaps  xmmword ptr [ebx+10h], xmm3
0x920635: movaps  xmm2, xmmword ptr [eax+10h]
0x920639: mulps   xmm1, xmm2
0x92063C: movaps  xmm2, xmmword ptr [eax]
0x92063F: mulps   xmm0, xmm2
0x920642: movaps  xmm2, xmmword ptr [edi+20h]
0x920646: addps   xmm2, xmm0
0x920649: movaps  xmmword ptr [edi+20h], xmm2
0x92064D: movaps  xmm0, xmmword ptr [ebx+20h]
0x920651: addps   xmm0, xmm1
0x920654: movaps  xmmword ptr [ebx+20h], xmm0
0x920658: fadd    dword ptr [edx+4]
0x92065B: fstp    dword ptr [edx+4]
0x92065E: mov     eax, [esp+0B0h+var_98]
0x920662: add     eax, 60h ; '`'
0x920665: add     ecx, 8
0x920668: mov     [esp+0B0h+var_98], eax
0x92066C: mov     al, [ecx]
0x92066E: add     edx, 8
0x920671: add     esi, 60h ; '`'
0x920674: cmp     al, 3
0x920676: mov     [esp+0B0h+var_94], edx
0x92067A: mov     [esp+0B0h+var_90], ecx
0x92067E: jnz     loc_9202F0
0x920684: movaps  xmm0, xmmword ptr [ebx+10h]
0x920688: fld     dword ptr [esi+0Ch]
0x92068B: movaps  xmm1, xmmword ptr [edi+10h]
0x92068F: movaps  xmm3, xmmword ptr [esi]
0x920692: movaps  xmm2, xmmword ptr [ebx+20h]
0x920696: movaps  xmm4, xmmword ptr [edi+20h]
0x92069A: subps   xmm1, xmm0
0x92069D: movaps  xmm0, xmm1
0x9206A0: mulps   xmm0, xmm3
0x9206A3: movaps  xmm5, xmm0
0x9206A6: movaps  xmm0, xmmword ptr [esi+20h]
0x9206AA: movaps  xmm6, xmm2
0x9206AD: mulps   xmm6, xmm0
0x9206B0: movaps  xmm0, xmmword ptr [esi+10h]
0x9206B4: movaps  xmm7, xmm4
0x9206B7: mulps   xmm7, xmm0
0x9206BA: movaps  xmm0, xmm7
0x9206BD: addps   xmm0, xmm6
0x9206C0: addps   xmm0, xmm5
0x9206C3: movaps  xmm5, xmm0
0x9206C6: shufps  xmm5, xmm0, 55h ; 'U'
0x9206CA: movaps  xmm6, xmm0
0x9206CD: addss   xmm5, xmm0
0x9206D1: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x9206D5: movaps  xmm0, xmmword ptr [esi+30h]
0x9206D9: mulps   xmm1, xmm0
0x9206DC: movaps  xmm0, xmmword ptr [esi+50h]
0x9206E0: mulps   xmm2, xmm0
0x9206E3: movaps  xmm0, xmmword ptr [esi+40h]
0x9206E7: mulps   xmm4, xmm0
0x9206EA: addps   xmm4, xmm2
0x9206ED: lea     eax, [esp+0B0h+var_18]
0x9206F4: movaps  xmm0, xmm4
0x9206F7: addps   xmm0, xmm1
0x9206FA: addss   xmm6, xmm5
0x9206FE: movss   dword ptr [eax], xmm6
0x920702: movaps  xmm1, xmm0
0x920705: shufps  xmm1, xmm0, 55h ; 'U'
0x920709: movaps  xmm2, xmm0
0x92070C: lea     eax, [esp+0B0h+var_50]
0x920710: addss   xmm1, xmm0
0x920714: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x920718: addss   xmm2, xmm1
0x92071C: movss   dword ptr [eax], xmm2
0x920720: mov     eax, [ebp+arg_0]
0x920723: fmul    dword ptr [eax+4]
0x920726: fld     [esp+0B0h+var_18]
0x92072D: fmul    dword ptr [eax+8]
0x920730: fsubp   st(1), st
0x920732: fld     dword ptr [esi+3Ch]
0x920735: fmul    dword ptr [eax+4]
0x920738: fld     [esp+0B0h+var_50]
0x92073C: fmul    dword ptr [eax+8]
0x92073F: fsubp   st(1), st
0x920741: fld     st(1)
0x920743: fmul    dword ptr [esi+2Ch]
0x920746: fld     st(1)
0x920748: fmul    dword ptr [ecx+4]
0x92074B: faddp   st(1), st
0x92074D: fstp    [esp+0B0h+var_9C]
0x920751: fld     st
0x920753: fmul    dword ptr [esi+5Ch]
0x920756: fld     st(2)
0x920758: fmul    dword ptr [ecx+4]
0x92075B: faddp   st(1), st
0x92075D: fstp    [esp+0B0h+var_8C]
0x920761: fxch    st(1)
0x920763: fmul    dword ptr [esi+1Ch]
0x920766: fstp    [esp+0B0h+var_98]
0x92076A: fmul    dword ptr [esi+4Ch]
0x92076D: fstp    [esp+0B0h+var_94]
0x920771: fld     [esp+0B0h+var_9C]
0x920775: fcomp   dword ptr ds:0A2FAA8h
0x92077B: fnstsw  ax
0x92077D: test    ah, 41h
0x920780: jnz     loc_920945
0x920786: fld     [esp+0B0h+var_8C]
0x92078A: fcomp   dword ptr ds:0A2FAA8h
0x920790: fnstsw  ax
0x920792: test    ah, 41h
0x920795: jnz     loc_92095A
0x92079B: mov     eax, [esp+0B0h+var_9C]
0x92079F: fld     [esp+0B0h+var_9C]
0x9207A3: movaps  xmm2, xmmword ptr [edi+30h]
0x9207A7: mov     [esp+0B0h+var_74], eax
0x9207AB: movss   xmm1, [esp+0B0h+var_74]
0x9207B1: mov     eax, [esp+0B0h+var_8C]
0x9207B5: movaps  xmm0, xmm1
0x9207B8: shufps  xmm0, xmm1, 0
0x9207BC: mulps   xmm0, xmm2
0x9207BF: movaps  xmm2, xmmword ptr [ebx+30h]
0x9207C3: movaps  xmm4, xmm1
0x9207C6: shufps  xmm4, xmm1, 0
0x9207CA: movaps  xmm1, xmm4
0x9207CD: mulps   xmm1, xmm2
0x9207D0: movaps  xmm4, xmm0
0x9207D3: movaps  xmm2, xmm1
0x9207D6: shufps  xmm2, xmm1, 0FFh
0x9207DA: mulps   xmm2, xmm3
0x9207DD: shufps  xmm4, xmm0, 0FFh
0x9207E1: mulps   xmm4, xmm3
0x9207E4: movaps  xmm3, xmmword ptr [edi+10h]
0x9207E8: addps   xmm3, xmm4
0x9207EB: movaps  xmmword ptr [edi+10h], xmm3
0x9207EF: movaps  xmm3, xmmword ptr [ebx+10h]
0x9207F3: subps   xmm3, xmm2
0x9207F6: movaps  xmmword ptr [ebx+10h], xmm3
0x9207FA: movaps  xmm2, xmmword ptr [esi+20h]
0x9207FE: mulps   xmm1, xmm2
0x920801: movaps  xmm2, xmmword ptr [esi+10h]
0x920805: mulps   xmm0, xmm2
0x920808: movaps  xmm2, xmmword ptr [edi+20h]
0x92080C: addps   xmm2, xmm0
0x92080F: movaps  xmmword ptr [edi+20h], xmm2
0x920813: movaps  xmm0, xmmword ptr [ebx+20h]
0x920817: addps   xmm0, xmm1
0x92081A: movaps  xmmword ptr [ebx+20h], xmm0
0x92081E: fadd    dword ptr [edx]
0x920820: mov     [esp+0B0h+var_48], eax
0x920824: movss   xmm1, [esp+0B0h+var_48]
0x92082A: fstp    dword ptr [edx]
0x92082C: fld     [esp+0B0h+var_8C]
0x920830: jmp     loc_920A0F
0x920835: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 2
0x920839: fld     dword ptr [esi+0Ch]
0x92083C: movaps  xmm1, xmmword ptr [edi+10h]
0x920840: movaps  xmm2, xmmword ptr [ebx+20h]
0x920844: movaps  xmm4, xmmword ptr [edi+20h]
0x920848: movaps  xmm3, xmmword ptr [esi]
0x92084B: subps   xmm1, xmm0
0x92084E: movaps  xmm0, xmmword ptr [esi+20h]
0x920852: mulps   xmm2, xmm0
0x920855: movaps  xmm0, xmmword ptr [esi+10h]
0x920859: mulps   xmm4, xmm0
0x92085C: mulps   xmm1, xmm3
0x92085F: movaps  xmm0, xmm4
0x920862: addps   xmm0, xmm2
0x920865: addps   xmm0, xmm1
0x920868: movaps  xmm1, xmm0
0x92086B: shufps  xmm1, xmm0, 55h ; 'U'
0x92086F: movaps  xmm2, xmm0
0x920872: lea     eax, [esp+0B0h+var_58]
0x920876: addss   xmm1, xmm0
0x92087A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92087E: addss   xmm2, xmm1
0x920882: movss   dword ptr [eax], xmm2
0x920886: mov     eax, [ebp+arg_0]
0x920889: fmul    dword ptr [eax+4]
0x92088C: fld     [esp+0B0h+var_58]
0x920890: fmul    dword ptr [eax+8]
0x920893: fsubp   st(1), st
0x920895: fcom    dword ptr ds:0A2FAA8h
0x92089B: fnstsw  ax
0x92089D: test    ah, 41h
0x9208A0: jnz     loc_920926
0x9208A6: fmul    dword ptr [esi+1Ch]
0x9208A9: movaps  xmm2, xmmword ptr [edi+30h]
0x9208AD: fst     [esp+0B0h+var_9C]
0x9208B1: movss   xmm1, [esp+0B0h+var_9C]
0x9208B7: movaps  xmm0, xmm1
0x9208BA: shufps  xmm0, xmm1, 0
0x9208BE: mulps   xmm0, xmm2
0x9208C1: movaps  xmm2, xmmword ptr [ebx+30h]
0x9208C5: movaps  xmm4, xmm1
0x9208C8: shufps  xmm4, xmm1, 0
0x9208CC: movaps  xmm1, xmm4
0x9208CF: mulps   xmm1, xmm2
0x9208D2: movaps  xmm4, xmm0
0x9208D5: shufps  xmm4, xmm0, 0FFh
0x9208D9: movaps  xmm2, xmm1
0x9208DC: shufps  xmm2, xmm1, 0FFh
0x9208E0: mulps   xmm2, xmm3
0x9208E3: mulps   xmm4, xmm3
0x9208E6: movaps  xmm3, xmmword ptr [edi+10h]
0x9208EA: addps   xmm3, xmm4
0x9208ED: movaps  xmmword ptr [edi+10h], xmm3
0x9208F1: movaps  xmm3, xmmword ptr [ebx+10h]
0x9208F5: subps   xmm3, xmm2
0x9208F8: movaps  xmmword ptr [ebx+10h], xmm3
0x9208FC: movaps  xmm2, xmmword ptr [esi+20h]
0x920900: mulps   xmm1, xmm2
0x920903: movaps  xmm2, xmmword ptr [esi+10h]
0x920907: mulps   xmm0, xmm2
0x92090A: movaps  xmm2, xmmword ptr [edi+20h]
0x92090E: addps   xmm2, xmm0
0x920911: movaps  xmmword ptr [edi+20h], xmm2
0x920915: movaps  xmm0, xmmword ptr [ebx+20h]
0x920919: addps   xmm0, xmm1
0x92091C: movaps  xmmword ptr [ebx+20h], xmm0
0x920920: fadd    dword ptr [edx]
0x920922: fstp    dword ptr [edx]
0x920924: jmp     short loc_920928
0x920926: fstp    st
0x920928: mov     al, [ecx+4]
0x92092B: add     ecx, 4
0x92092E: add     esi, 30h ; '0'
0x920931: add     edx, 4
0x920934: cmp     al, 2
0x920936: jz      loc_920835; jumptable 009202FC case 2
0x92093C: mov     [esp+0B0h+var_94], edx
0x920940: jmp     loc_9202DC
0x920945: fld     [esp+0B0h+var_94]
0x920949: fcomp   dword ptr ds:0A2FAA8h
0x92094F: fnstsw  ax
0x920951: test    ah, 41h
0x920954: jp      loc_9209FD
0x92095A: fld     [esp+0B0h+var_98]
0x92095E: fcomp   dword ptr ds:0A2FAA8h
0x920964: fnstsw  ax
0x920966: test    ah, 41h
0x920969: jnz     loc_920A86
0x92096F: mov     eax, [esp+0B0h+var_98]
0x920973: fld     [esp+0B0h+var_98]
0x920977: movaps  xmm2, xmmword ptr [edi+30h]
0x92097B: mov     [esp+0B0h+var_8], eax
0x920982: movss   xmm1, [esp+0B0h+var_8]
0x92098B: movaps  xmm0, xmm1
0x92098E: shufps  xmm0, xmm1, 0
0x920992: mulps   xmm0, xmm2
0x920995: movaps  xmm2, xmmword ptr [ebx+30h]
0x920999: movaps  xmm4, xmm1
0x92099C: shufps  xmm4, xmm1, 0
0x9209A0: movaps  xmm1, xmm4
0x9209A3: mulps   xmm1, xmm2
0x9209A6: movaps  xmm4, xmm0
0x9209A9: shufps  xmm4, xmm0, 0FFh
0x9209AD: movaps  xmm2, xmm1
0x9209B0: shufps  xmm2, xmm1, 0FFh
0x9209B4: mulps   xmm2, xmm3
0x9209B7: mulps   xmm4, xmm3
0x9209BA: movaps  xmm3, xmmword ptr [edi+10h]
0x9209BE: addps   xmm3, xmm4
0x9209C1: movaps  xmmword ptr [edi+10h], xmm3
0x9209C5: movaps  xmm3, xmmword ptr [ebx+10h]
0x9209C9: subps   xmm3, xmm2
0x9209CC: movaps  xmmword ptr [ebx+10h], xmm3
0x9209D0: movaps  xmm2, xmmword ptr [esi+20h]
0x9209D4: mulps   xmm1, xmm2
0x9209D7: movaps  xmm2, xmmword ptr [esi+10h]
0x9209DB: mulps   xmm0, xmm2
0x9209DE: movaps  xmm2, xmmword ptr [edi+20h]
0x9209E2: addps   xmm2, xmm0
0x9209E5: movaps  xmmword ptr [edi+20h], xmm2
0x9209E9: movaps  xmm0, xmmword ptr [ebx+20h]
0x9209ED: addps   xmm0, xmm1
0x9209F0: movaps  xmmword ptr [ebx+20h], xmm0
0x9209F4: fadd    dword ptr [edx]
0x9209F6: fstp    dword ptr [edx]
0x9209F8: jmp     loc_920A86
0x9209FD: mov     eax, [esp+0B0h+var_94]
0x920A01: fld     [esp+0B0h+var_94]
0x920A05: mov     [esp+0B0h+var_40], eax
0x920A09: movss   xmm1, [esp+0B0h+var_40]
0x920A0F: movaps  xmm2, xmmword ptr [edi+30h]
0x920A13: movaps  xmm0, xmm1
0x920A16: shufps  xmm0, xmm1, 0
0x920A1A: mulps   xmm0, xmm2
0x920A1D: movaps  xmm2, xmmword ptr [ebx+30h]
0x920A21: movaps  xmm3, xmm1
0x920A24: shufps  xmm3, xmm1, 0
0x920A28: movaps  xmm1, xmm3
0x920A2B: movaps  xmm3, xmmword ptr [esi+30h]
0x920A2F: mulps   xmm1, xmm2
0x920A32: movaps  xmm4, xmm0
0x920A35: shufps  xmm4, xmm0, 0FFh
0x920A39: movaps  xmm2, xmm1
0x920A3C: shufps  xmm2, xmm1, 0FFh
0x920A40: mulps   xmm2, xmm3
0x920A43: mulps   xmm4, xmm3
0x920A46: movaps  xmm3, xmmword ptr [edi+10h]
0x920A4A: addps   xmm3, xmm4
0x920A4D: movaps  xmmword ptr [edi+10h], xmm3
0x920A51: movaps  xmm3, xmmword ptr [ebx+10h]
0x920A55: subps   xmm3, xmm2
0x920A58: movaps  xmmword ptr [ebx+10h], xmm3
0x920A5C: movaps  xmm2, xmmword ptr [esi+50h]
0x920A60: mulps   xmm1, xmm2
0x920A63: movaps  xmm2, xmmword ptr [esi+40h]
0x920A67: mulps   xmm0, xmm2
0x920A6A: movaps  xmm2, xmmword ptr [edi+20h]
0x920A6E: addps   xmm2, xmm0
0x920A71: movaps  xmmword ptr [edi+20h], xmm2
0x920A75: movaps  xmm0, xmmword ptr [ebx+20h]
0x920A79: addps   xmm0, xmm1
0x920A7C: movaps  xmmword ptr [ebx+20h], xmm0
0x920A80: fadd    dword ptr [edx+4]
0x920A83: fstp    dword ptr [edx+4]
0x920A86: mov     al, [ecx+8]
0x920A89: add     ecx, 8
0x920A8C: add     edx, 8
0x920A8F: add     esi, 60h ; '`'
0x920A92: cmp     al, 8
0x920A94: mov     [esp+0B0h+var_94], edx
0x920A98: mov     [esp+0B0h+var_90], ecx
0x920A9C: jnz     loc_9202E0
0x920AA2: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 8
0x920AA6: fld     dword ptr [esi+7Ch]
0x920AA9: movaps  xmm1, xmmword ptr [edi+10h]
0x920AAD: movaps  xmm2, xmmword ptr [ebx+20h]
0x920AB1: movaps  xmm3, xmmword ptr [edi+20h]
0x920AB5: subps   xmm1, xmm0
0x920AB8: movaps  xmm0, xmmword ptr [esi]
0x920ABB: movaps  xmm4, xmm1
0x920ABE: mulps   xmm4, xmm0
0x920AC1: movaps  xmm0, xmmword ptr [esi+20h]
0x920AC5: movaps  xmm5, xmm2
0x920AC8: mulps   xmm5, xmm0
0x920ACB: movaps  xmm0, xmmword ptr [esi+10h]
0x920ACF: movaps  xmm6, xmm3
0x920AD2: mulps   xmm6, xmm0
0x920AD5: movaps  xmm0, xmm6
0x920AD8: addps   xmm0, xmm5
0x920ADB: addps   xmm0, xmm4
0x920ADE: movaps  xmm4, xmm0
0x920AE1: shufps  xmm4, xmm0, 55h ; 'U'
0x920AE5: addss   xmm4, xmm0
0x920AE9: movaps  xmm5, xmm0
0x920AEC: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x920AF0: movaps  xmm0, xmmword ptr [esi+30h]
0x920AF4: mulps   xmm1, xmm0
0x920AF7: movaps  xmm0, xmmword ptr [esi+50h]
0x920AFB: addss   xmm5, xmm4
0x920AFF: movaps  xmm4, xmm2
0x920B02: mulps   xmm4, xmm0
0x920B05: movaps  xmm0, xmmword ptr [esi+40h]
0x920B09: lea     eax, [esp+0B0h+var_70]
0x920B0D: movss   dword ptr [eax], xmm5
0x920B11: movaps  xmm5, xmm3
0x920B14: mulps   xmm5, xmm0
0x920B17: movaps  xmm0, xmm5
0x920B1A: addps   xmm0, xmm4
0x920B1D: addps   xmm0, xmm1
0x920B20: movaps  xmm1, xmm0
0x920B23: shufps  xmm1, xmm0, 55h ; 'U'
0x920B27: addss   xmm1, xmm0
0x920B2B: movaps  xmm4, xmm0
0x920B2E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x920B32: movaps  xmm0, xmmword ptr [esi+70h]
0x920B36: mulps   xmm2, xmm0
0x920B39: movaps  xmm0, xmmword ptr [esi+60h]
0x920B3D: addss   xmm4, xmm1
0x920B41: mulps   xmm3, xmm0
0x920B44: lea     eax, [esp+0B0h+var_6C]
0x920B48: movss   dword ptr [eax], xmm4
0x920B4C: movaps  xmm0, xmm3
0x920B4F: addps   xmm0, xmm2
0x920B52: movaps  xmm1, xmm0
0x920B55: shufps  xmm1, xmm0, 55h ; 'U'
0x920B59: movaps  xmm2, xmm0
0x920B5C: lea     eax, [esp+0B0h+var_20]
0x920B63: addss   xmm1, xmm0
0x920B67: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x920B6B: addss   xmm2, xmm1
0x920B6F: movss   dword ptr [eax], xmm2
0x920B73: mov     eax, [ebp+arg_0]
0x920B76: fmul    dword ptr [eax+0Ch]
0x920B79: fld     [esp+0B0h+var_20]
0x920B80: fmul    dword ptr [eax+8]
0x920B83: fsubp   st(1), st
0x920B85: fmul    dword ptr [esi+6Ch]
0x920B88: fstp    [esp+0B0h+var_98]
0x920B8C: fld     dword ptr [eax+0Ch]
0x920B8F: fmul    dword ptr [esi+0Ch]
0x920B92: fld     [esp+0B0h+var_70]
0x920B96: fmul    dword ptr [eax+8]
0x920B99: fsubp   st(1), st
0x920B9B: fstp    [esp+0B0h+var_8C]
0x920B9F: fld     dword ptr [esi+3Ch]
0x920BA2: fmul    dword ptr [eax+0Ch]
0x920BA5: fld     [esp+0B0h+var_6C]
0x920BA9: fmul    dword ptr [eax+8]
0x920BAC: mov     eax, [ecx+0Ch]
0x920BAF: mov     [esp+0B0h+var_88], eax
0x920BB3: fsubp   st(1), st
0x920BB5: fstp    [esp+0B0h+var_9C]
0x920BB9: fld     [esp+0B0h+var_8C]
0x920BBD: fmul    dword ptr [esi+2Ch]
0x920BC0: fld     [esp+0B0h+var_9C]
0x920BC4: fmul    dword ptr [ecx+8]
0x920BC7: faddp   st(1), st
0x920BC9: fld     [esp+0B0h+var_9C]
0x920BCD: fmul    dword ptr [esi+5Ch]
0x920BD0: fld     [esp+0B0h+var_8C]
0x920BD4: fmul    dword ptr [ecx+8]
0x920BD7: faddp   st(1), st
0x920BD9: fld     [esp+0B0h+var_98]
0x920BDD: fld     st
0x920BDF: fmul    st, st(1)
0x920BE1: fld     st(2)
0x920BE3: fmul    st, st(3)
0x920BE5: faddp   st(1), st
0x920BE7: fld     st(3)
0x920BE9: fmul    st, st(4)
0x920BEB: faddp   st(1), st
0x920BED: fld     [esp+0B0h+var_88]
0x920BF1: fmul    [esp+0B0h+var_88]
0x920BF5: fld     st(1)
0x920BF7: fcompp
0x920BF9: fnstsw  ax
0x920BFB: test    ah, 41h
0x920BFE: jnz     short loc_920C2B
0x920C00: fsqrt
0x920C02: fdivr   dword ptr [ecx+0Ch]
0x920C05: fld     st
0x920C07: fmulp   st(4), st
0x920C09: fld     st
0x920C0B: fmulp   st(3), st
0x920C0D: fxch    st(1)
0x920C0F: fmul    st, st(1)
0x920C11: fxch    st(1)
0x920C13: fld     st
0x920C15: fmul    dword ptr [esi+0Ch]
0x920C18: fstp    dword ptr [esi+0Ch]
0x920C1B: fld     st
0x920C1D: fmul    dword ptr [esi+3Ch]
0x920C20: fstp    dword ptr [esi+3Ch]
0x920C23: fmul    dword ptr [esi+7Ch]
0x920C26: fstp    dword ptr [esi+7Ch]
0x920C29: jmp     short loc_920C2D
0x920C2B: fstp    st
0x920C2D: fmul    dword ptr [ecx+14h]
0x920C30: movaps  xmm2, xmmword ptr [edi+30h]
0x920C34: fstp    [esp+0B0h+var_98]
0x920C38: fld     st(1)
0x920C3A: mov     eax, [esp+0B0h+var_98]
0x920C3E: fstp    [esp+0B0h+var_9C]
0x920C42: movss   xmm1, [esp+0B0h+var_9C]
0x920C48: fxch    st(1)
0x920C4A: movaps  xmm0, xmm1
0x920C4D: shufps  xmm0, xmm1, 0
0x920C51: mulps   xmm0, xmm2
0x920C54: movaps  xmm2, xmmword ptr [ebx+30h]
0x920C58: movaps  xmm3, xmm1
0x920C5B: shufps  xmm3, xmm1, 0
0x920C5F: movaps  xmm1, xmm3
0x920C62: movaps  xmm3, xmmword ptr [esi]
0x920C65: mulps   xmm1, xmm2
0x920C68: movaps  xmm4, xmm0
0x920C6B: shufps  xmm4, xmm0, 0FFh
0x920C6F: mulps   xmm4, xmm3
0x920C72: movaps  xmm2, xmm1
0x920C75: shufps  xmm2, xmm1, 0FFh
0x920C79: mulps   xmm2, xmm3
0x920C7C: movaps  xmm3, xmmword ptr [edi+10h]
0x920C80: addps   xmm3, xmm4
0x920C83: movaps  xmmword ptr [edi+10h], xmm3
0x920C87: movaps  xmm3, xmmword ptr [ebx+10h]
0x920C8B: subps   xmm3, xmm2
0x920C8E: movaps  xmmword ptr [ebx+10h], xmm3
0x920C92: movaps  xmm2, xmmword ptr [esi+20h]
0x920C96: mulps   xmm1, xmm2
0x920C99: movaps  xmm2, xmmword ptr [esi+10h]
0x920C9D: mulps   xmm0, xmm2
0x920CA0: movaps  xmm2, xmmword ptr [edi+20h]
0x920CA4: addps   xmm2, xmm0
0x920CA7: movaps  xmmword ptr [edi+20h], xmm2
0x920CAB: movaps  xmm0, xmmword ptr [ebx+20h]
0x920CAF: addps   xmm0, xmm1
0x920CB2: movaps  xmmword ptr [ebx+20h], xmm0
0x920CB6: fadd    dword ptr [edx]
0x920CB8: fstp    dword ptr [edx]
0x920CBA: movaps  xmm2, xmmword ptr [edi+30h]
0x920CBE: fst     [esp+0B0h+var_9C]
0x920CC2: movss   xmm1, [esp+0B0h+var_9C]
0x920CC8: movaps  xmm0, xmm1
0x920CCB: shufps  xmm0, xmm1, 0
0x920CCF: mulps   xmm0, xmm2
0x920CD2: movaps  xmm2, xmmword ptr [ebx+30h]
0x920CD6: movaps  xmm3, xmm1
0x920CD9: shufps  xmm3, xmm1, 0
0x920CDD: movaps  xmm1, xmm3
0x920CE0: movaps  xmm3, xmmword ptr [esi+30h]
0x920CE4: mulps   xmm1, xmm2
0x920CE7: movaps  xmm4, xmm0
0x920CEA: shufps  xmm4, xmm0, 0FFh
0x920CEE: movaps  xmm2, xmm1
0x920CF1: shufps  xmm2, xmm1, 0FFh
0x920CF5: mulps   xmm2, xmm3
0x920CF8: mulps   xmm4, xmm3
0x920CFB: movaps  xmm3, xmmword ptr [edi+10h]
0x920CFF: addps   xmm3, xmm4
0x920D02: movaps  xmmword ptr [edi+10h], xmm3
0x920D06: movaps  xmm3, xmmword ptr [ebx+10h]
0x920D0A: subps   xmm3, xmm2
0x920D0D: movaps  xmmword ptr [ebx+10h], xmm3
0x920D11: movaps  xmm2, xmmword ptr [esi+50h]
0x920D15: mulps   xmm1, xmm2
0x920D18: movaps  xmm2, xmmword ptr [esi+40h]
0x920D1C: mulps   xmm0, xmm2
0x920D1F: movaps  xmm2, xmmword ptr [edi+20h]
0x920D23: addps   xmm2, xmm0
0x920D26: movaps  xmmword ptr [edi+20h], xmm2
0x920D2A: movaps  xmm0, xmmword ptr [ebx+20h]
0x920D2E: addps   xmm0, xmm1
0x920D31: movaps  xmmword ptr [ebx+20h], xmm0
0x920D35: fadd    dword ptr [edx+4]
0x920D38: mov     [esp+0B0h+var_64], eax
0x920D3C: movss   xmm0, [esp+0B0h+var_64]
0x920D42: fstp    dword ptr [edx+4]
0x920D45: movaps  xmm2, xmmword ptr [esi+70h]
0x920D49: movaps  xmm1, xmmword ptr [ebx+30h]
0x920D4D: fld     [esp+0B0h+var_98]
0x920D51: movaps  xmm3, xmm0
0x920D54: shufps  xmm3, xmm0, 0
0x920D58: movaps  xmm4, xmm0
0x920D5B: shufps  xmm4, xmm0, 0
0x920D5F: movaps  xmm0, xmmword ptr [edi+20h]
0x920D63: mulps   xmm3, xmm1
0x920D66: movaps  xmm1, xmm3
0x920D69: movaps  xmm3, xmmword ptr [edi+30h]
0x920D6D: mulps   xmm1, xmm2
0x920D70: movaps  xmm2, xmmword ptr [esi+60h]
0x920D74: mulps   xmm4, xmm3
0x920D77: mulps   xmm4, xmm2
0x920D7A: addps   xmm0, xmm4
0x920D7D: movaps  xmmword ptr [edi+20h], xmm0
0x920D81: movaps  xmm0, xmmword ptr [ebx+20h]
0x920D85: addps   xmm0, xmm1
0x920D88: movaps  xmmword ptr [ebx+20h], xmm0
0x920D8C: fadd    dword ptr [edx+8]
0x920D8F: add     ecx, 18h
0x920D92: add     edx, 0Ch
0x920D95: fstp    dword ptr [edx-4]
0x920D98: mov     al, [ecx]
0x920D9A: add     esi, 80h ; '€'
0x920DA0: cmp     al, 1
0x920DA2: mov     [esp+0B0h+var_94], edx
0x920DA6: mov     [esp+0B0h+var_90], ecx
0x920DAA: jnz     loc_9202E0
0x920DB0: jmp     loc_9202D0; jumptable 009202FC case 1
0x920DB5: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 7
0x920DB9: movaps  xmm1, xmmword ptr [edi+10h]
0x920DBD: movaps  xmm2, xmmword ptr [ebx+20h]
0x920DC1: movaps  xmm3, xmmword ptr [edi+20h]
0x920DC5: subps   xmm1, xmm0
0x920DC8: movaps  xmm0, xmmword ptr [esi]
0x920DCB: movaps  xmm4, xmm1
0x920DCE: mulps   xmm4, xmm0
0x920DD1: movaps  xmm0, xmmword ptr [esi+20h]
0x920DD5: movaps  xmm5, xmm2
0x920DD8: mulps   xmm5, xmm0
0x920DDB: movaps  xmm0, xmmword ptr [esi+10h]
0x920DDF: movaps  xmm6, xmm3
0x920DE2: mulps   xmm6, xmm0
0x920DE5: movaps  xmm0, xmm6
0x920DE8: addps   xmm0, xmm5
0x920DEB: addps   xmm0, xmm4
0x920DEE: movaps  xmm4, xmm0
0x920DF1: shufps  xmm4, xmm0, 55h ; 'U'
0x920DF5: movaps  xmm5, xmm0
0x920DF8: addss   xmm4, xmm0
0x920DFC: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x920E00: movaps  xmm0, xmmword ptr [esi+30h]
0x920E04: mulps   xmm1, xmm0
0x920E07: movaps  xmm0, xmmword ptr [esi+50h]
0x920E0B: mulps   xmm2, xmm0
0x920E0E: movaps  xmm0, xmmword ptr [esi+40h]
0x920E12: mulps   xmm3, xmm0
0x920E15: addps   xmm3, xmm2
0x920E18: lea     eax, [esp+0B0h+var_5C]
0x920E1C: movaps  xmm0, xmm3
0x920E1F: addps   xmm0, xmm1
0x920E22: addss   xmm5, xmm4
0x920E26: movss   dword ptr [eax], xmm5
0x920E2A: movaps  xmm1, xmm0
0x920E2D: shufps  xmm1, xmm0, 55h ; 'U'
0x920E31: movaps  xmm2, xmm0
0x920E34: lea     eax, [esp+0B0h+var_54]
0x920E38: addss   xmm1, xmm0
0x920E3C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x920E40: addss   xmm2, xmm1
0x920E44: movss   dword ptr [eax], xmm2
0x920E48: mov     eax, [ebp+arg_0]
0x920E4B: fld     dword ptr [eax+0Ch]
0x920E4E: fmul    dword ptr [esi+0Ch]
0x920E51: fld     [esp+0B0h+var_5C]
0x920E55: fmul    dword ptr [eax+8]
0x920E58: fsubp   st(1), st
0x920E5A: fstp    [esp+0B0h+var_8C]
0x920E5E: fld     dword ptr [esi+3Ch]
0x920E61: fmul    dword ptr [eax+0Ch]
0x920E64: fld     [esp+0B0h+var_54]
0x920E68: fmul    dword ptr [eax+8]
0x920E6B: fsubp   st(1), st
0x920E6D: fstp    [esp+0B0h+var_9C]
0x920E71: fld     dword ptr [ecx+0Ch]
0x920E74: fld     st
0x920E76: fmul    st, st(1)
0x920E78: fstp    [esp+0B0h+var_98]
0x920E7C: fstp    st
0x920E7E: fld     [esp+0B0h+var_8C]
0x920E82: fmul    dword ptr [esi+2Ch]
0x920E85: fld     [esp+0B0h+var_9C]
0x920E89: fmul    dword ptr [ecx+8]
0x920E8C: faddp   st(1), st
0x920E8E: fld     [esp+0B0h+var_9C]
0x920E92: fmul    dword ptr [esi+5Ch]
0x920E95: fld     [esp+0B0h+var_8C]
0x920E99: fmul    dword ptr [ecx+8]
0x920E9C: faddp   st(1), st
0x920E9E: fld     st(1)
0x920EA0: fmul    st, st(2)
0x920EA2: fld     st(1)
0x920EA4: fmul    st, st(2)
0x920EA6: faddp   st(1), st
0x920EA8: fcom    [esp+0B0h+var_98]
0x920EAC: fnstsw  ax
0x920EAE: test    ah, 41h
0x920EB1: jnz     short loc_920ED1
0x920EB3: fdivr   [esp+0B0h+var_98]
0x920EB7: fsqrt
0x920EB9: fld     st
0x920EBB: fmulp   st(3), st
0x920EBD: fld     st
0x920EBF: fmulp   st(2), st
0x920EC1: fld     st
0x920EC3: fmul    dword ptr [esi+0Ch]
0x920EC6: fstp    dword ptr [esi+0Ch]
0x920EC9: fmul    dword ptr [esi+3Ch]
0x920ECC: fstp    dword ptr [esi+3Ch]
0x920ECF: jmp     short loc_920ED3
0x920ED1: fstp    st
0x920ED3: movaps  xmm2, xmmword ptr [edi+30h]
0x920ED7: fld     st(1)
0x920ED9: fstp    [esp+0B0h+var_9C]
0x920EDD: add     ecx, 14h
0x920EE0: movss   xmm1, [esp+0B0h+var_9C]
0x920EE6: fxch    st(1)
0x920EE8: movaps  xmm0, xmm1
0x920EEB: shufps  xmm0, xmm1, 0
0x920EEF: mulps   xmm0, xmm2
0x920EF2: movaps  xmm2, xmmword ptr [ebx+30h]
0x920EF6: movaps  xmm3, xmm1
0x920EF9: shufps  xmm3, xmm1, 0
0x920EFD: movaps  xmm1, xmm3
0x920F00: movaps  xmm3, xmmword ptr [esi]
0x920F03: mulps   xmm1, xmm2
0x920F06: movaps  xmm4, xmm0
0x920F09: shufps  xmm4, xmm0, 0FFh
0x920F0D: mulps   xmm4, xmm3
0x920F10: movaps  xmm2, xmm1
0x920F13: shufps  xmm2, xmm1, 0FFh
0x920F17: mulps   xmm2, xmm3
0x920F1A: movaps  xmm3, xmmword ptr [edi+10h]
0x920F1E: addps   xmm3, xmm4
0x920F21: movaps  xmmword ptr [edi+10h], xmm3
0x920F25: movaps  xmm3, xmmword ptr [ebx+10h]
0x920F29: subps   xmm3, xmm2
0x920F2C: movaps  xmmword ptr [ebx+10h], xmm3
0x920F30: movaps  xmm2, xmmword ptr [esi+20h]
0x920F34: mulps   xmm1, xmm2
0x920F37: movaps  xmm2, xmmword ptr [esi+10h]
0x920F3B: mulps   xmm0, xmm2
0x920F3E: movaps  xmm2, xmmword ptr [edi+20h]
0x920F42: addps   xmm2, xmm0
0x920F45: movaps  xmmword ptr [edi+20h], xmm2
0x920F49: movaps  xmm0, xmmword ptr [ebx+20h]
0x920F4D: addps   xmm0, xmm1
0x920F50: movaps  xmmword ptr [ebx+20h], xmm0
0x920F54: fadd    dword ptr [edx]
0x920F56: add     edx, 8
0x920F59: add     esi, 60h ; '`'
0x920F5C: fstp    dword ptr [edx-8]
0x920F5F: movaps  xmm2, xmmword ptr [edi+30h]
0x920F63: mov     [esp+0B0h+var_94], edx
0x920F67: fst     [esp+0B0h+var_9C]
0x920F6B: mov     [esp+0B0h+var_90], ecx
0x920F6F: movss   xmm1, [esp+0B0h+var_9C]
0x920F75: movaps  xmm0, xmm1
0x920F78: shufps  xmm0, xmm1, 0
0x920F7C: mulps   xmm0, xmm2
0x920F7F: movaps  xmm2, xmmword ptr [ebx+30h]
0x920F83: movaps  xmm3, xmm1
0x920F86: shufps  xmm3, xmm1, 0
0x920F8A: movaps  xmm1, xmm3
0x920F8D: movaps  xmm3, xmmword ptr [esi-30h]
0x920F91: mulps   xmm1, xmm2
0x920F94: movaps  xmm4, xmm0
0x920F97: shufps  xmm4, xmm0, 0FFh
0x920F9B: movaps  xmm2, xmm1
0x920F9E: shufps  xmm2, xmm1, 0FFh
0x920FA2: mulps   xmm2, xmm3
0x920FA5: mulps   xmm4, xmm3
0x920FA8: movaps  xmm3, xmmword ptr [edi+10h]
0x920FAC: addps   xmm3, xmm4
0x920FAF: movaps  xmmword ptr [edi+10h], xmm3
0x920FB3: movaps  xmm3, xmmword ptr [ebx+10h]
0x920FB7: subps   xmm3, xmm2
0x920FBA: movaps  xmmword ptr [ebx+10h], xmm3
0x920FBE: movaps  xmm2, xmmword ptr [esi-10h]
0x920FC2: mulps   xmm1, xmm2
0x920FC5: movaps  xmm2, xmmword ptr [esi-20h]
0x920FC9: mulps   xmm0, xmm2
0x920FCC: movaps  xmm2, xmmword ptr [edi+20h]
0x920FD0: addps   xmm2, xmm0
0x920FD3: movaps  xmmword ptr [edi+20h], xmm2
0x920FD7: movaps  xmm0, xmmword ptr [ebx+20h]
0x920FDB: addps   xmm0, xmm1
0x920FDE: movaps  xmmword ptr [ebx+20h], xmm0
0x920FE2: fadd    dword ptr [edx-4]
0x920FE5: fstp    dword ptr [edx-4]
0x920FE8: mov     al, [ecx]
0x920FEA: cmp     al, 1
0x920FEC: jnz     loc_9202E0
0x920FF2: jmp     loc_9202D0; jumptable 009202FC case 1
0x920FF7: jmp     short loc_921000; jumptable 009202FC case 9
0x920FF9: align 10h
0x921000: movaps  xmm0, xmmword ptr [esi+10h]; jumptable 009202FC case 9
0x921004: fld     dword ptr [esi+1Ch]
0x921007: movaps  xmm1, xmmword ptr [ebx+20h]
0x92100B: movaps  xmm2, xmmword ptr [edi+20h]
0x92100F: mov     eax, [ecx+4]
0x921012: mulps   xmm1, xmm0
0x921015: movaps  xmm0, xmmword ptr [esi]
0x921018: mulps   xmm2, xmm0
0x92101B: movaps  xmm0, xmm2
0x92101E: addps   xmm0, xmm1
0x921021: mov     [esp+0B0h+var_7C], eax
0x921025: movaps  xmm1, xmm0
0x921028: shufps  xmm1, xmm0, 55h ; 'U'
0x92102C: movaps  xmm2, xmm0
0x92102F: lea     eax, [esp+0B0h+var_4C]
0x921033: addss   xmm1, xmm0
0x921037: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92103B: addss   xmm2, xmm1
0x92103F: movss   dword ptr [eax], xmm2
0x921043: mov     eax, [ebp+arg_0]
0x921046: fmul    dword ptr [eax+0Ch]
0x921049: fld     [esp+0B0h+var_4C]
0x92104D: fmul    dword ptr [eax+8]
0x921050: fsubp   st(1), st
0x921052: fmul    dword ptr [esi+0Ch]
0x921055: fld     st
0x921057: fabs
0x921059: fcom    [esp+0B0h+var_7C]
0x92105D: fnstsw  ax
0x92105F: test    ah, 41h
0x921062: jnz     short loc_921074
0x921064: fdivr   [esp+0B0h+var_7C]
0x921068: fld     st
0x92106A: fmulp   st(2), st
0x92106C: fmul    dword ptr [esi+1Ch]
0x92106F: fstp    dword ptr [esi+1Ch]
0x921072: jmp     short loc_921076
0x921074: fstp    st
0x921076: movaps  xmm1, xmmword ptr [ebx+30h]
0x92107A: fst     [esp+0B0h+var_9C]
0x92107E: movss   xmm0, [esp+0B0h+var_9C]
0x921084: movaps  xmm2, xmmword ptr [esi+10h]
0x921088: movaps  xmm3, xmm0
0x92108B: shufps  xmm3, xmm0, 0
0x92108F: movaps  xmm4, xmm0
0x921092: shufps  xmm4, xmm0, 0
0x921096: movaps  xmm0, xmmword ptr [edi+20h]
0x92109A: mulps   xmm3, xmm1
0x92109D: movaps  xmm1, xmm3
0x9210A0: movaps  xmm3, xmmword ptr [edi+30h]
0x9210A4: mulps   xmm1, xmm2
0x9210A7: movaps  xmm2, xmmword ptr [esi]
0x9210AA: mulps   xmm4, xmm3
0x9210AD: mulps   xmm4, xmm2
0x9210B0: addps   xmm0, xmm4
0x9210B3: movaps  xmmword ptr [edi+20h], xmm0
0x9210B7: movaps  xmm0, xmmword ptr [ebx+20h]
0x9210BB: addps   xmm0, xmm1
0x9210BE: movaps  xmmword ptr [ebx+20h], xmm0
0x9210C2: fadd    dword ptr [edx]
0x9210C4: add     ecx, 8
0x9210C7: add     esi, 20h ; ' '
0x9210CA: fstp    dword ptr [edx]
0x9210CC: mov     al, [ecx]
0x9210CE: add     edx, 4
0x9210D1: cmp     al, 9
0x9210D3: jz      loc_921000; jumptable 009202FC case 9
0x9210D9: mov     [esp+0B0h+var_94], edx
0x9210DD: jmp     loc_9202DC
0x9210E2: movaps  xmm2, xmmword ptr [esi+10h]; jumptable 009202FC case 10
0x9210E6: movaps  xmm0, xmmword ptr [ebx+20h]
0x9210EA: movaps  xmm3, xmmword ptr [esi]
0x9210ED: mulps   xmm0, xmm2
0x9210F0: movaps  xmm1, xmm0
0x9210F3: movaps  xmm0, xmmword ptr [edi+20h]
0x9210F7: mulps   xmm0, xmm3
0x9210FA: addps   xmm0, xmm1
0x9210FD: movaps  xmm1, xmm0
0x921100: shufps  xmm1, xmm0, 55h ; 'U'
0x921104: movaps  xmm4, xmm0
0x921107: lea     eax, [esp+0B0h+var_44]
0x92110B: addss   xmm1, xmm0
0x92110F: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x921113: addss   xmm4, xmm1
0x921117: movss   dword ptr [eax], xmm4
0x92111B: fld     [esp+0B0h+var_44]
0x92111F: mov     eax, [ebp+arg_0]
0x921122: fmul    dword ptr [eax+8]
0x921125: fld     dword ptr [esi+1Ch]
0x921128: fsub    dword ptr [ecx+4]
0x92112B: fmul    dword ptr [ecx+0Ch]
0x92112E: fsub    st, st(1)
0x921130: fst     [esp+0B0h+var_9C]
0x921134: fcomp   dword ptr ds:0A2FAA8h
0x92113A: fnstsw  ax
0x92113C: test    ah, 41h
0x92113F: jnz     short loc_921195
0x921141: movaps  xmm1, xmmword ptr [ebx+30h]
0x921145: fstp    st
0x921147: fld     [esp+0B0h+var_9C]
0x92114B: fmul    dword ptr [esi+0Ch]
0x92114E: fst     [esp+0B0h+var_9C]
0x921152: movss   xmm0, [esp+0B0h+var_9C]
0x921158: movaps  xmm4, xmm0
0x92115B: shufps  xmm4, xmm0, 0
0x92115F: mulps   xmm4, xmm1
0x921162: movaps  xmm1, xmm4
0x921165: movaps  xmm4, xmm0
0x921168: shufps  xmm4, xmm0, 0
0x92116C: movaps  xmm0, xmmword ptr [edi+20h]
0x921170: mulps   xmm1, xmm2
0x921173: movaps  xmm2, xmmword ptr [edi+30h]
0x921177: mulps   xmm4, xmm2
0x92117A: mulps   xmm4, xmm3
0x92117D: addps   xmm0, xmm4
0x921180: movaps  xmmword ptr [edi+20h], xmm0
0x921184: movaps  xmm0, xmmword ptr [ebx+20h]
0x921188: addps   xmm0, xmm1
0x92118B: movaps  xmmword ptr [ebx+20h], xmm0
0x92118F: fadd    dword ptr [edx]
0x921191: fstp    dword ptr [edx]
0x921193: jmp     short loc_9211FD
0x921195: fld     dword ptr [esi+1Ch]
0x921198: fsub    dword ptr [ecx+8]
0x92119B: fmul    dword ptr [ecx+0Ch]
0x92119E: fsubrp  st(1), st
0x9211A0: fcom    dword ptr ds:0A2FAA8h
0x9211A6: fnstsw  ax
0x9211A8: test    ah, 5
0x9211AB: jp      short loc_9211FB
0x9211AD: fmul    dword ptr [esi+0Ch]
0x9211B0: movaps  xmm1, xmmword ptr [ebx+30h]
0x9211B4: fst     [esp+0B0h+var_9C]
0x9211B8: movss   xmm0, [esp+0B0h+var_9C]
0x9211BE: movaps  xmm4, xmm0
0x9211C1: shufps  xmm4, xmm0, 0
0x9211C5: mulps   xmm4, xmm1
0x9211C8: movaps  xmm1, xmm4
0x9211CB: movaps  xmm4, xmm0
0x9211CE: shufps  xmm4, xmm0, 0
0x9211D2: movaps  xmm0, xmmword ptr [edi+20h]
0x9211D6: mulps   xmm1, xmm2
0x9211D9: movaps  xmm2, xmmword ptr [edi+30h]
0x9211DD: mulps   xmm4, xmm2
0x9211E0: mulps   xmm4, xmm3
0x9211E3: addps   xmm0, xmm4
0x9211E6: movaps  xmmword ptr [edi+20h], xmm0
0x9211EA: movaps  xmm0, xmmword ptr [ebx+20h]
0x9211EE: addps   xmm0, xmm1
0x9211F1: movaps  xmmword ptr [ebx+20h], xmm0
0x9211F5: fadd    dword ptr [edx]
0x9211F7: fstp    dword ptr [edx]
0x9211F9: jmp     short loc_9211FD
0x9211FB: fstp    st
0x9211FD: mov     al, [ecx+10h]
0x921200: add     ecx, 10h
0x921203: add     esi, 20h ; ' '
0x921206: add     edx, 4
0x921209: cmp     al, 0Ah
0x92120B: jz      loc_9210E2; jumptable 009202FC case 10
0x921211: mov     [esp+0B0h+var_94], edx
0x921215: jmp     loc_9202DC
0x92121A: align 10h
0x921220: movaps  xmm0, xmmword ptr [esi+10h]; jumptable 009202FC case 4
0x921224: fld     dword ptr [ecx+0Ch]
0x921227: fadd    dword ptr [esi+1Ch]
0x92122A: movaps  xmm1, xmmword ptr [ebx+20h]
0x92122E: movaps  xmm2, xmmword ptr [edi+20h]
0x921232: mulps   xmm1, xmm0
0x921235: movaps  xmm0, xmmword ptr [esi]
0x921238: fld     st
0x92123A: fmul    dword ptr [ecx+10h]
0x92123D: mulps   xmm2, xmm0
0x921240: movaps  xmm0, xmm2
0x921243: addps   xmm0, xmm1
0x921246: movaps  xmm1, xmm0
0x921249: shufps  xmm1, xmm0, 55h ; 'U'
0x92124D: movaps  xmm2, xmm0
0x921250: lea     eax, [esp+0B0h+var_3C]
0x921254: addss   xmm1, xmm0
0x921258: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92125C: addss   xmm2, xmm1
0x921260: movss   dword ptr [eax], xmm2
0x921264: fld     [esp+0B0h+var_3C]
0x921268: fmul    dword ptr [ecx+14h]
0x92126B: fsubp   st(1), st
0x92126D: fmul    dword ptr [esi+0Ch]
0x921270: fst     [esp+0B0h+var_98]
0x921274: fcomp   dword ptr [ecx+4]
0x921277: fnstsw  ax
0x921279: test    ah, 41h
0x92127C: jnz     short loc_921293
0x92127E: mov     eax, [ecx+18h]
0x921281: test    eax, eax
0x921283: jz      short loc_92128E
0x921285: fld     dword ptr [ecx+4]
0x921288: fdiv    [esp+0B0h+var_98]
0x92128C: fmulp   st(1), st
0x92128E: mov     eax, [ecx+4]
0x921291: jmp     short loc_9212B4
0x921293: fld     [esp+0B0h+var_98]
0x921297: fcomp   dword ptr [ecx+8]
0x92129A: fnstsw  ax
0x92129C: test    ah, 5
0x92129F: jp      short loc_9212B8
0x9212A1: mov     eax, [ecx+18h]
0x9212A4: test    eax, eax
0x9212A6: jz      short loc_9212B1
0x9212A8: fld     dword ptr [ecx+8]
0x9212AB: fdiv    [esp+0B0h+var_98]
0x9212AF: fmulp   st(1), st
0x9212B1: mov     eax, [ecx+8]
0x9212B4: mov     [esp+0B0h+var_98], eax
0x9212B8: mov     eax, [esp+0B0h+var_98]
0x9212BC: fstp    dword ptr [esi+1Ch]
0x9212BF: movaps  xmm1, xmmword ptr [ebx+30h]
0x9212C3: fld     [esp+0B0h+var_98]
0x9212C7: movaps  xmm2, xmmword ptr [esi+10h]
0x9212CB: mov     [esp+0B0h+var_34], eax
0x9212CF: movss   xmm0, [esp+0B0h+var_34]
0x9212D5: movaps  xmm3, xmm0
0x9212D8: shufps  xmm3, xmm0, 0
0x9212DC: movaps  xmm4, xmm0
0x9212DF: shufps  xmm4, xmm0, 0
0x9212E3: movaps  xmm0, xmmword ptr [edi+20h]
0x9212E7: mulps   xmm3, xmm1
0x9212EA: movaps  xmm1, xmm3
0x9212ED: movaps  xmm3, xmmword ptr [edi+30h]
0x9212F1: mulps   xmm1, xmm2
0x9212F4: movaps  xmm2, xmmword ptr [esi]
0x9212F7: mulps   xmm4, xmm3
0x9212FA: mulps   xmm4, xmm2
0x9212FD: addps   xmm0, xmm4
0x921300: movaps  xmmword ptr [edi+20h], xmm0
0x921304: movaps  xmm0, xmmword ptr [ebx+20h]
0x921308: addps   xmm0, xmm1
0x92130B: movaps  xmmword ptr [ebx+20h], xmm0
0x92130F: fadd    dword ptr [edx]
0x921311: add     ecx, 1Ch
0x921314: add     esi, 20h ; ' '
0x921317: fstp    dword ptr [edx]
0x921319: mov     al, [ecx]
0x92131B: add     edx, 4
0x92131E: cmp     al, 4
0x921320: jz      loc_921220; jumptable 009202FC case 4
0x921326: mov     [esp+0B0h+var_94], edx
0x92132A: jmp     loc_9202DC
0x92132F: align 10h
0x921330: movaps  xmm2, xmmword ptr [esi+10h]; jumptable 009202FC case 12
0x921334: fld     dword ptr [esi+1Ch]
0x921337: movaps  xmm0, xmmword ptr [ebx+20h]
0x92133B: movaps  xmm3, xmmword ptr [esi]
0x92133E: mulps   xmm0, xmm2
0x921341: movaps  xmm1, xmm0
0x921344: movaps  xmm0, xmmword ptr [edi+20h]
0x921348: mulps   xmm0, xmm3
0x92134B: addps   xmm0, xmm1
0x92134E: movaps  xmm1, xmm0
0x921351: shufps  xmm1, xmm0, 55h ; 'U'
0x921355: addss   xmm1, xmm0
0x921359: movaps  xmm4, xmm0
0x92135C: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x921360: addss   xmm4, xmm1
0x921364: movaps  xmm1, xmmword ptr [ebx+30h]
0x921368: lea     eax, [esp+0B0h+var_2C]
0x92136F: movss   dword ptr [eax], xmm4
0x921373: mov     eax, [ebp+arg_0]
0x921376: fmul    dword ptr [eax+4]
0x921379: add     ecx, 4
0x92137C: fld     [esp+0B0h+var_2C]
0x921383: add     esi, 20h ; ' '
0x921386: fmul    dword ptr [eax+8]
0x921389: add     edx, 4
0x92138C: fsubp   st(1), st
0x92138E: fmul    dword ptr [esi-14h]
0x921391: fst     [esp+0B0h+var_9C]
0x921395: movss   xmm0, [esp+0B0h+var_9C]
0x92139B: movaps  xmm4, xmm0
0x92139E: shufps  xmm4, xmm0, 0
0x9213A2: mulps   xmm4, xmm1
0x9213A5: movaps  xmm1, xmm4
0x9213A8: movaps  xmm4, xmm0
0x9213AB: shufps  xmm4, xmm0, 0
0x9213AF: movaps  xmm0, xmmword ptr [edi+20h]
0x9213B3: mulps   xmm1, xmm2
0x9213B6: movaps  xmm2, xmmword ptr [edi+30h]
0x9213BA: mulps   xmm4, xmm2
0x9213BD: mulps   xmm4, xmm3
0x9213C0: addps   xmm0, xmm4
0x9213C3: movaps  xmmword ptr [edi+20h], xmm0
0x9213C7: movaps  xmm0, xmmword ptr [ebx+20h]
0x9213CB: addps   xmm0, xmm1
0x9213CE: movaps  xmmword ptr [ebx+20h], xmm0
0x9213D2: fadd    dword ptr [edx-4]
0x9213D5: fstp    dword ptr [edx-4]
0x9213D8: mov     al, [ecx]
0x9213DA: cmp     al, 0Ch
0x9213DC: jz      loc_921330; jumptable 009202FC case 12
0x9213E2: mov     [esp+0B0h+var_94], edx
0x9213E6: jmp     loc_9202DC
0x9213EB: jmp     short loc_9213F0; jumptable 009202FC case 13
0x9213ED: align 10h
0x9213F0: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 13
0x9213F4: fld     dword ptr [esi+0Ch]
0x9213F7: movaps  xmm1, xmmword ptr [edi+10h]
0x9213FB: movaps  xmm2, xmmword ptr [esi]
0x9213FE: movaps  xmm3, xmmword ptr [ebx+20h]
0x921402: movaps  xmm4, xmmword ptr [edi+20h]
0x921406: subps   xmm1, xmm0
0x921409: movaps  xmm0, xmmword ptr [esi+20h]
0x92140D: mulps   xmm3, xmm0
0x921410: movaps  xmm0, xmmword ptr [esi+10h]
0x921414: mulps   xmm1, xmm2
0x921417: mulps   xmm4, xmm0
0x92141A: movaps  xmm0, xmm4
0x92141D: addps   xmm0, xmm3
0x921420: addps   xmm0, xmm1
0x921423: movaps  xmm1, xmm0
0x921426: shufps  xmm1, xmm0, 55h ; 'U'
0x92142A: addss   xmm1, xmm0
0x92142E: movaps  xmm3, xmm0
0x921431: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x921435: addss   xmm3, xmm1
0x921439: lea     eax, [esp+0B0h+var_24]
0x921440: movss   dword ptr [eax], xmm3
0x921444: mov     eax, [ebp+arg_0]
0x921447: fmul    dword ptr [eax+4]
0x92144A: movaps  xmm3, xmmword ptr [edi+30h]
0x92144E: fld     [esp+0B0h+var_24]
0x921455: add     ecx, 4
0x921458: fmul    dword ptr [eax+8]
0x92145B: add     esi, 30h ; '0'
0x92145E: add     edx, 4
0x921461: fsubp   st(1), st
0x921463: fmul    dword ptr [esi-14h]
0x921466: fst     [esp+0B0h+var_9C]
0x92146A: movss   xmm1, [esp+0B0h+var_9C]
0x921470: movaps  xmm0, xmm1
0x921473: shufps  xmm0, xmm1, 0
0x921477: mulps   xmm0, xmm3
0x92147A: movaps  xmm3, xmmword ptr [ebx+30h]
0x92147E: movaps  xmm4, xmm1
0x921481: shufps  xmm4, xmm1, 0
0x921485: movaps  xmm1, xmm4
0x921488: mulps   xmm1, xmm3
0x92148B: movaps  xmm4, xmm0
0x92148E: shufps  xmm4, xmm0, 0FFh
0x921492: mulps   xmm4, xmm2
0x921495: movaps  xmm3, xmm1
0x921498: shufps  xmm3, xmm1, 0FFh
0x92149C: mulps   xmm3, xmm2
0x92149F: movaps  xmm2, xmmword ptr [edi+10h]
0x9214A3: addps   xmm2, xmm4
0x9214A6: movaps  xmmword ptr [edi+10h], xmm2
0x9214AA: movaps  xmm2, xmmword ptr [ebx+10h]
0x9214AE: subps   xmm2, xmm3
0x9214B1: movaps  xmmword ptr [ebx+10h], xmm2
0x9214B5: movaps  xmm2, xmmword ptr [esi-10h]
0x9214B9: mulps   xmm1, xmm2
0x9214BC: movaps  xmm2, xmmword ptr [esi-20h]
0x9214C0: mulps   xmm0, xmm2
0x9214C3: movaps  xmm2, xmmword ptr [edi+20h]
0x9214C7: addps   xmm2, xmm0
0x9214CA: movaps  xmmword ptr [edi+20h], xmm2
0x9214CE: movaps  xmm0, xmmword ptr [ebx+20h]
0x9214D2: addps   xmm0, xmm1
0x9214D5: movaps  xmmword ptr [ebx+20h], xmm0
0x9214D9: fadd    dword ptr [edx-4]
0x9214DC: fstp    dword ptr [edx-4]
0x9214DF: mov     al, [ecx]
0x9214E1: cmp     al, 0Dh
0x9214E3: jz      loc_9213F0; jumptable 009202FC case 13
0x9214E9: mov     [esp+0B0h+var_94], edx
0x9214ED: jmp     loc_9202DC
0x9214F2: movaps  xmm1, xmmword ptr [ebx+10h]; jumptable 009202FC case 6
0x9214F6: fld     dword ptr [esi+0Ch]
0x9214F9: movaps  xmm0, xmmword ptr [esi]
0x9214FC: movaps  xmm2, xmmword ptr [edi+10h]
0x921500: movaps  xmm3, xmmword ptr [edi+20h]
0x921504: mov     eax, [ecx+4]
0x921507: subps   xmm2, xmm1
0x92150A: movaps  xmm1, xmmword ptr [ebx+20h]
0x92150E: mulps   xmm2, xmm0
0x921511: movaps  xmm0, xmmword ptr [esi+20h]
0x921515: mulps   xmm1, xmm0
0x921518: movaps  xmm0, xmmword ptr [esi+10h]
0x92151C: mulps   xmm3, xmm0
0x92151F: movaps  xmm0, xmm3
0x921522: addps   xmm0, xmm1
0x921525: addps   xmm0, xmm2
0x921528: mov     [esp+0B0h+var_84], eax
0x92152C: movaps  xmm1, xmm0
0x92152F: shufps  xmm1, xmm0, 55h ; 'U'
0x921533: movaps  xmm2, xmm0
0x921536: lea     eax, [esp+0B0h+var_1C]
0x92153D: addss   xmm1, xmm0
0x921541: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921545: addss   xmm2, xmm1
0x921549: movss   dword ptr [eax], xmm2
0x92154D: mov     eax, [ebp+arg_0]
0x921550: fmul    dword ptr [eax+4]
0x921553: fld     [esp+0B0h+var_1C]
0x92155A: fmul    dword ptr [eax+8]
0x92155D: fsubp   st(1), st
0x92155F: fmul    dword ptr [esi+1Ch]
0x921562: fld     st
0x921564: fabs
0x921566: fcom    [esp+0B0h+var_84]
0x92156A: fnstsw  ax
0x92156C: test    ah, 41h
0x92156F: jnz     short loc_921581
0x921571: fdivr   [esp+0B0h+var_84]
0x921575: fld     st
0x921577: fmulp   st(2), st
0x921579: fmul    dword ptr [esi+0Ch]
0x92157C: fstp    dword ptr [esi+0Ch]
0x92157F: jmp     short loc_921583
0x921581: fstp    st
0x921583: movaps  xmm2, xmmword ptr [edi+30h]
0x921587: fst     [esp+0B0h+var_9C]
0x92158B: movss   xmm1, [esp+0B0h+var_9C]
0x921591: movaps  xmm0, xmm1
0x921594: shufps  xmm0, xmm1, 0
0x921598: mulps   xmm0, xmm2
0x92159B: movaps  xmm2, xmmword ptr [ebx+30h]
0x92159F: movaps  xmm3, xmm1
0x9215A2: shufps  xmm3, xmm1, 0
0x9215A6: movaps  xmm1, xmm3
0x9215A9: movaps  xmm3, xmmword ptr [esi]
0x9215AC: mulps   xmm1, xmm2
0x9215AF: movaps  xmm4, xmm0
0x9215B2: shufps  xmm4, xmm0, 0FFh
0x9215B6: movaps  xmm2, xmm1
0x9215B9: shufps  xmm2, xmm1, 0FFh
0x9215BD: mulps   xmm2, xmm3
0x9215C0: mulps   xmm4, xmm3
0x9215C3: movaps  xmm3, xmmword ptr [edi+10h]
0x9215C7: addps   xmm3, xmm4
0x9215CA: movaps  xmmword ptr [edi+10h], xmm3
0x9215CE: movaps  xmm3, xmmword ptr [ebx+10h]
0x9215D2: subps   xmm3, xmm2
0x9215D5: movaps  xmmword ptr [ebx+10h], xmm3
0x9215D9: movaps  xmm2, xmmword ptr [esi+20h]
0x9215DD: mulps   xmm1, xmm2
0x9215E0: movaps  xmm2, xmmword ptr [esi+10h]
0x9215E4: mulps   xmm0, xmm2
0x9215E7: movaps  xmm2, xmmword ptr [edi+20h]
0x9215EB: addps   xmm2, xmm0
0x9215EE: movaps  xmmword ptr [edi+20h], xmm2
0x9215F2: movaps  xmm0, xmmword ptr [ebx+20h]
0x9215F6: addps   xmm0, xmm1
0x9215F9: movaps  xmmword ptr [ebx+20h], xmm0
0x9215FD: fadd    dword ptr [edx]
0x9215FF: add     ecx, 8
0x921602: add     esi, 30h ; '0'
0x921605: fstp    dword ptr [edx]
0x921607: mov     al, [ecx]
0x921609: add     edx, 4
0x92160C: cmp     al, 6
0x92160E: jz      loc_9214F2; jumptable 009202FC case 6
0x921614: mov     [esp+0B0h+var_94], edx
0x921618: jmp     loc_9202DC
0x92161D: align 10h
0x921620: movaps  xmm0, xmmword ptr [ebx+10h]; jumptable 009202FC case 11
0x921624: movaps  xmm1, xmmword ptr [edi+10h]
0x921628: movaps  xmm2, xmmword ptr [ebx+20h]
0x92162C: movaps  xmm4, xmmword ptr [edi+20h]
0x921630: movaps  xmm3, xmmword ptr [esi]
0x921633: mov     edx, [ebp+arg_0]
0x921636: mov     eax, [esp+0B0h+var_90]
0x92163A: subps   xmm1, xmm0
0x92163D: movaps  xmm0, xmmword ptr [esi+20h]
0x921641: mulps   xmm2, xmm0
0x921644: movaps  xmm0, xmmword ptr [esi+10h]
0x921648: mulps   xmm4, xmm0
0x92164B: mulps   xmm1, xmm3
0x92164E: movaps  xmm0, xmm4
0x921651: addps   xmm0, xmm2
0x921654: addps   xmm0, xmm1
0x921657: movaps  xmm1, xmm0
0x92165A: shufps  xmm1, xmm0, 55h ; 'U'
0x92165E: movaps  xmm2, xmm0
0x921661: addss   xmm1, xmm0
0x921665: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921669: lea     ecx, [esp+0B0h+var_14]
0x921670: addss   xmm2, xmm1
0x921674: movss   dword ptr [ecx], xmm2
0x921678: fld     [esp+0B0h+var_14]
0x92167F: fmul    dword ptr [edx+8]
0x921682: fld     dword ptr [esi+0Ch]
0x921685: fsub    dword ptr [eax+4]
0x921688: fmul    dword ptr [edx+4]
0x92168B: fsub    st, st(1)
0x92168D: fcom    dword ptr ds:0A2FAA8h
0x921693: fnstsw  ax
0x921695: test    ah, 41h
0x921698: jnz     loc_921722
0x92169E: fmul    dword ptr [esi+1Ch]
0x9216A1: movaps  xmm2, xmmword ptr [edi+30h]
0x9216A5: mov     ecx, [esp+0B0h+var_94]
0x9216A9: fst     [esp+0B0h+var_9C]
0x9216AD: movss   xmm1, [esp+0B0h+var_9C]
0x9216B3: movaps  xmm0, xmm1
0x9216B6: shufps  xmm0, xmm1, 0
0x9216BA: mulps   xmm0, xmm2
0x9216BD: movaps  xmm2, xmmword ptr [ebx+30h]
0x9216C1: movaps  xmm4, xmm1
0x9216C4: shufps  xmm4, xmm1, 0
0x9216C8: movaps  xmm1, xmm4
0x9216CB: mulps   xmm1, xmm2
0x9216CE: movaps  xmm4, xmm0
0x9216D1: shufps  xmm4, xmm0, 0FFh
0x9216D5: movaps  xmm2, xmm1
0x9216D8: shufps  xmm2, xmm1, 0FFh
0x9216DC: mulps   xmm2, xmm3
0x9216DF: mulps   xmm4, xmm3
0x9216E2: movaps  xmm3, xmmword ptr [edi+10h]
0x9216E6: addps   xmm3, xmm4
0x9216E9: movaps  xmmword ptr [edi+10h], xmm3
0x9216ED: movaps  xmm3, xmmword ptr [ebx+10h]
0x9216F1: subps   xmm3, xmm2
0x9216F4: movaps  xmmword ptr [ebx+10h], xmm3
0x9216F8: movaps  xmm2, xmmword ptr [esi+20h]
0x9216FC: mulps   xmm1, xmm2
0x9216FF: movaps  xmm2, xmmword ptr [esi+10h]
0x921703: mulps   xmm0, xmm2
0x921706: movaps  xmm2, xmmword ptr [edi+20h]
0x92170A: addps   xmm2, xmm0
0x92170D: movaps  xmmword ptr [edi+20h], xmm2
0x921711: movaps  xmm0, xmmword ptr [ebx+20h]
0x921715: addps   xmm0, xmm1
0x921718: movaps  xmmword ptr [ebx+20h], xmm0
0x92171C: fadd    dword ptr [ecx]
0x92171E: fstp    dword ptr [ecx]
0x921720: jmp     short loc_921728
0x921722: mov     ecx, [esp+0B0h+var_94]
0x921726: fstp    st
0x921728: mov     eax, [esp+0B0h+var_90]
0x92172C: fld     dword ptr [esi+0Ch]
0x92172F: fsub    dword ptr [eax+8]
0x921732: fmul    dword ptr [edx+4]
0x921735: fsubrp  st(1), st
0x921737: fcom    dword ptr ds:0A2FAA8h
0x92173D: fnstsw  ax
0x92173F: test    ah, 5
0x921742: jp      loc_9217CB
0x921748: fmul    dword ptr [esi+1Ch]
0x92174B: movaps  xmm2, xmmword ptr [edi+30h]
0x92174F: fst     [esp+0B0h+var_9C]
0x921753: movss   xmm1, [esp+0B0h+var_9C]
0x921759: movaps  xmm0, xmm1
0x92175C: shufps  xmm0, xmm1, 0
0x921760: mulps   xmm0, xmm2
0x921763: movaps  xmm2, xmmword ptr [ebx+30h]
0x921767: movaps  xmm3, xmm1
0x92176A: shufps  xmm3, xmm1, 0
0x92176E: movaps  xmm1, xmm3
0x921771: movaps  xmm3, xmmword ptr [esi]
0x921774: mulps   xmm1, xmm2
0x921777: movaps  xmm4, xmm0
0x92177A: shufps  xmm4, xmm0, 0FFh
0x92177E: movaps  xmm2, xmm1
0x921781: shufps  xmm2, xmm1, 0FFh
0x921785: mulps   xmm2, xmm3
0x921788: mulps   xmm4, xmm3
0x92178B: movaps  xmm3, xmmword ptr [edi+10h]
0x92178F: addps   xmm3, xmm4
0x921792: movaps  xmmword ptr [edi+10h], xmm3
0x921796: movaps  xmm3, xmmword ptr [ebx+10h]
0x92179A: subps   xmm3, xmm2
0x92179D: movaps  xmmword ptr [ebx+10h], xmm3
0x9217A1: movaps  xmm2, xmmword ptr [esi+20h]
0x9217A5: mulps   xmm1, xmm2
0x9217A8: movaps  xmm2, xmmword ptr [esi+10h]
0x9217AC: mulps   xmm0, xmm2
0x9217AF: movaps  xmm2, xmmword ptr [edi+20h]
0x9217B3: addps   xmm2, xmm0
0x9217B6: movaps  xmmword ptr [edi+20h], xmm2
0x9217BA: movaps  xmm0, xmmword ptr [ebx+20h]
0x9217BE: addps   xmm0, xmm1
0x9217C1: movaps  xmmword ptr [ebx+20h], xmm0
0x9217C5: fadd    dword ptr [ecx]
0x9217C7: fstp    dword ptr [ecx]
0x9217C9: jmp     short loc_9217CD
0x9217CB: fstp    st
0x9217CD: push    1
0x9217CF: mov     ecx, esi
0x9217D1: call    sub_8F0EE0
0x9217D6: mov     esi, eax
0x9217D8: add     [esp+0B0h+var_94], 4
0x9217DD: mov     eax, [esp+0B0h+var_90]
0x9217E1: mov     cl, [eax+0Ch]
0x9217E4: add     eax, 0Ch
0x9217E7: cmp     cl, 0Bh
0x9217EA: mov     [esp+0B0h+var_90], eax
0x9217EE: jz      loc_921620; jumptable 009202FC case 11
0x9217F4: mov     edx, [esp+0B0h+var_94]
0x9217F8: mov     ecx, eax
0x9217FA: jmp     loc_9202E0
0x9217FF: align 10h
0x921800: movaps  xmm1, xmmword ptr [ebx+10h]; jumptable 009202FC case 5
0x921804: fld     dword ptr [ecx+0Ch]
0x921807: movaps  xmm0, xmmword ptr [esi]
0x92180A: fadd    dword ptr [esi+0Ch]
0x92180D: movaps  xmm2, xmmword ptr [edi+10h]
0x921811: movaps  xmm3, xmmword ptr [edi+20h]
0x921815: subps   xmm2, xmm1
0x921818: fld     st
0x92181A: movaps  xmm1, xmmword ptr [ebx+20h]
0x92181E: fmul    dword ptr [ecx+10h]
0x921821: mulps   xmm2, xmm0
0x921824: movaps  xmm0, xmmword ptr [esi+20h]
0x921828: mulps   xmm1, xmm0
0x92182B: movaps  xmm0, xmmword ptr [esi+10h]
0x92182F: mulps   xmm3, xmm0
0x921832: movaps  xmm0, xmm3
0x921835: addps   xmm0, xmm1
0x921838: addps   xmm0, xmm2
0x92183B: movaps  xmm1, xmm0
0x92183E: shufps  xmm1, xmm0, 55h ; 'U'
0x921842: movaps  xmm2, xmm0
0x921845: addss   xmm1, xmm0
0x921849: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92184D: lea     edx, [esp+0B0h+var_C]
0x921854: addss   xmm2, xmm1
0x921858: movss   dword ptr [edx], xmm2
0x92185C: fld     [esp+0B0h+var_C]
0x921863: fmul    dword ptr [ecx+14h]
0x921866: fsubp   st(1), st
0x921868: fmul    dword ptr [esi+1Ch]
0x92186B: fst     [esp+0B0h+var_98]
0x92186F: fcomp   dword ptr [ecx+4]
0x921872: fnstsw  ax
0x921874: test    ah, 41h
0x921877: jnz     short loc_921892
0x921879: mov     eax, [ecx+18h]
0x92187C: test    eax, eax
0x92187E: jz      short loc_921889
0x921880: fld     dword ptr [ecx+4]
0x921883: fdiv    [esp+0B0h+var_98]
0x921887: fmulp   st(1), st
0x921889: mov     eax, [ecx+4]
0x92188C: mov     [esp+0B0h+var_98], eax
0x921890: jmp     short loc_9218B7
0x921892: fld     [esp+0B0h+var_98]
0x921896: fcomp   dword ptr [ecx+8]
0x921899: fnstsw  ax
0x92189B: test    ah, 5
0x92189E: jp      short loc_9218B7
0x9218A0: mov     eax, [ecx+18h]
0x9218A3: test    eax, eax
0x9218A5: jz      short loc_9218B0
0x9218A7: fld     dword ptr [ecx+8]
0x9218AA: fdiv    [esp+0B0h+var_98]
0x9218AE: fmulp   st(1), st
0x9218B0: mov     ecx, [ecx+8]
0x9218B3: mov     [esp+0B0h+var_98], ecx
0x9218B7: mov     edx, [esp+0B0h+var_98]
0x9218BB: fstp    dword ptr [esi+0Ch]
0x9218BE: movaps  xmm2, xmmword ptr [edi+30h]
0x9218C2: fld     [esp+0B0h+var_98]
0x9218C6: mov     eax, [esp+0B0h+var_94]
0x9218CA: mov     [esp+0B0h+var_4], edx
0x9218D1: movss   xmm1, [esp+0B0h+var_4]
0x9218DA: movaps  xmm0, xmm1
0x9218DD: shufps  xmm0, xmm1, 0
0x9218E1: mulps   xmm0, xmm2
0x9218E4: movaps  xmm2, xmmword ptr [ebx+30h]
0x9218E8: movaps  xmm3, xmm1
0x9218EB: shufps  xmm3, xmm1, 0
0x9218EF: movaps  xmm1, xmm3
0x9218F2: movaps  xmm3, xmmword ptr [esi]
0x9218F5: mulps   xmm1, xmm2
0x9218F8: movaps  xmm4, xmm0
0x9218FB: shufps  xmm4, xmm0, 0FFh
0x9218FF: movaps  xmm2, xmm1
0x921902: shufps  xmm2, xmm1, 0FFh
0x921906: mulps   xmm2, xmm3
0x921909: mulps   xmm4, xmm3
0x92190C: movaps  xmm3, xmmword ptr [edi+10h]
0x921910: addps   xmm3, xmm4
0x921913: movaps  xmmword ptr [edi+10h], xmm3
0x921917: movaps  xmm3, xmmword ptr [ebx+10h]
0x92191B: subps   xmm3, xmm2
0x92191E: movaps  xmmword ptr [ebx+10h], xmm3
0x921922: movaps  xmm2, xmmword ptr [esi+20h]
0x921926: mulps   xmm1, xmm2
0x921929: movaps  xmm2, xmmword ptr [esi+10h]
0x92192D: mulps   xmm0, xmm2
0x921930: movaps  xmm2, xmmword ptr [edi+20h]
0x921934: addps   xmm2, xmm0
0x921937: movaps  xmmword ptr [edi+20h], xmm2
0x92193B: movaps  xmm0, xmmword ptr [ebx+20h]
0x92193F: addps   xmm0, xmm1
0x921942: movaps  xmmword ptr [ebx+20h], xmm0
0x921946: fadd    dword ptr [eax]
0x921948: push    1
0x92194A: mov     ecx, esi
0x92194C: fstp    dword ptr [eax]
0x92194E: call    sub_8F0EE0
0x921953: mov     esi, eax
0x921955: add     [esp+0B0h+var_94], 4
0x92195A: mov     eax, [esp+0B0h+var_90]
0x92195E: mov     cl, [eax+1Ch]
0x921961: add     eax, 1Ch
0x921964: cmp     cl, 5
0x921967: mov     [esp+0B0h+var_90], eax
0x92196B: mov     ecx, eax
0x92196D: jz      loc_921800; jumptable 009202FC case 5
0x921973: mov     edx, [esp+0B0h+var_94]
0x921977: jmp     loc_9202E0
0x92197C: mov     eax, [ebp+arg_0]; jumptable 009202FC case 15
0x92197F: mov     edx, [eax+8]
0x921982: mov     [esp+0B0h+var_78], edx
0x921986: mov     edx, [eax+4]
0x921989: mov     [esp+0B0h+var_80], edx
0x92198D: mov     edx, [ecx+8]
0x921990: mov     [eax+8], edx
0x921993: mov     edx, [ecx+4]
0x921996: mov     [eax+4], edx
0x921999: mov     edx, [esp+0B0h+var_94]
0x92199D: add     ecx, 0Ch
0x9219A0: jmp     loc_9202DC
0x9219A5: mov     edx, [esp+0B0h+var_80]; jumptable 009202FC case 16
0x9219A9: mov     eax, [ebp+arg_0]
0x9219AC: mov     [eax+4], edx
0x9219AF: mov     edx, [esp+0B0h+var_78]
0x9219B3: mov     [eax+8], edx
0x9219B6: mov     edx, [esp+0B0h+var_94]
0x9219BA: add     ecx, 4
0x9219BD: jmp     loc_9202DC
0x9219C2: mov     eax, [esp+0B0h+var_90]; jumptable 009202FC case 14
0x9219C6: lea     ecx, [eax+8]
0x9219C9: push    ecx
0x9219CA: push    esi
0x9219CB: call    dword ptr [eax+4]
0x9219CE: mov     eax, [esp+0B8h+var_90]
0x9219D2: movzx   edx, byte ptr [eax+1]
0x9219D6: add     esp, 8
0x9219D9: add     eax, edx
0x9219DB: mov     edx, [esp+0B0h+var_94]
0x9219DF: mov     [esp+0B0h+var_90], eax
0x9219E3: mov     ecx, eax
0x9219E5: jmp     loc_9202E0
0x9219EA: int     3; Trap to Debugger
0x9219EB: pop     edi; jumptable 009202FC case 0
0x9219EC: pop     esi
0x9219ED: pop     ebx
0x9219EE: mov     esp, ebp
0x9219F0: pop     ebp
0x9219F1: retn
