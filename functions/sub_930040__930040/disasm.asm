0x930040: push    ebp
0x930041: mov     ebp, esp
0x930043: and     esp, 0FFFFFFF0h
0x930046: sub     esp, 104h
0x93004C: mov     ecx, [ebp+arg_8]
0x93004F: mov     edx, [ecx]
0x930051: mov     eax, [ecx+4]
0x930054: push    ebx
0x930055: mov     [esp+108h+var_74], edx
0x93005C: mov     edx, [ecx+8]
0x93005F: mov     [esp+108h+var_FC], eax
0x930063: xor     eax, eax
0x930065: test    edx, edx
0x930067: push    esi
0x930068: push    edi
0x930069: mov     [esp+110h+var_F4], eax
0x93006D: jle     loc_93054E
0x930073: mov     edx, [ecx+4]
0x930076: mov     esi, [edx+eax*8]
0x930079: movzx   ebx, word ptr [edx+eax*8+4]
0x93007E: cmp     eax, ebx
0x930080: mov     edx, [esp+110h+var_FC]
0x930084: movzx   edx, word ptr [edx+ebx*8+4]
0x930089: mov     [esp+110h+var_3C], esi
0x930090: mov     [esp+110h+var_F8], edx
0x930094: jge     loc_93053E
0x93009A: cmp     eax, edx
0x93009C: jge     loc_93053E
0x9300A2: mov     edi, [ebp+arg_18]
0x9300A5: mov     esi, [edi+4]
0x9300A8: mov     eax, [edi+8]
0x9300AB: lea     edx, [esi+1]
0x9300AE: and     eax, 3FFFFFFFh
0x9300B3: cmp     eax, edx
0x9300B5: jge     short loc_9300CE
0x9300B7: add     eax, eax
0x9300B9: cmp     edx, eax
0x9300BB: jl      short loc_9300BF
0x9300BD: mov     eax, edx
0x9300BF: push    10h
0x9300C1: push    eax
0x9300C2: push    edi
0x9300C3: call    sub_8A6E40
0x9300C8: mov     ecx, [ebp+arg_8]
0x9300CB: add     esp, 0Ch
0x9300CE: lea     eax, [esi+1]
0x9300D1: mov     [edi+4], eax
0x9300D4: mov     eax, [edi]
0x9300D6: shl     esi, 4
0x9300D9: add     esi, eax
0x9300DB: mov     eax, [ecx]
0x9300DD: movzx   ecx, word ptr [esp+110h+var_3C]
0x9300E5: shl     ecx, 4
0x9300E8: add     ecx, eax
0x9300EA: mov     edx, [ecx]
0x9300EC: mov     dword ptr [esp+110h+var_B0], edx
0x9300F0: mov     edx, [ecx+4]
0x9300F3: fld     dword ptr [esp+110h+var_B0]
0x9300F7: mov     dword ptr [esp+110h+var_B0+4], edx
0x9300FB: mov     edx, [ecx+8]
0x9300FE: mov     ecx, [ecx+0Ch]
0x930101: mov     dword ptr [esp+110h+var_B0+0Ch], ecx
0x930105: mov     dword ptr [esp+110h+var_B0+8], edx
0x930109: mov     edx, [esp+110h+var_FC]
0x93010D: movzx   ecx, word ptr [edx+ebx*8]
0x930111: shl     ecx, 4
0x930114: lea     edx, [edx+ebx*8]
0x930117: add     ecx, eax
0x930119: mov     ebx, [ecx]
0x93011B: mov     [esp+110h+var_90], ebx
0x930122: mov     ebx, [ecx+4]
0x930125: fsub    [esp+110h+var_90]
0x93012C: mov     [esp+110h+var_8C], ebx
0x930133: mov     ebx, [ecx+8]
0x930136: mov     ecx, [ecx+0Ch]
0x930139: fstp    dword ptr [esp+110h+var_10]
0x930140: mov     [esp+110h+var_84], ecx
0x930147: fld     dword ptr [esp+110h+var_B0+4]
0x93014B: mov     ecx, [esp+110h+var_F8]
0x93014F: fsub    [esp+110h+var_8C]
0x930156: mov     [esp+110h+var_88], ebx
0x93015D: mov     ebx, [esp+110h+var_FC]
0x930161: lea     ecx, [ebx+ecx*8]
0x930164: fstp    dword ptr [esp+110h+var_10+4]
0x93016B: mov     [esp+110h+var_F8], ecx
0x93016F: fld     dword ptr [esp+110h+var_B0+8]
0x930173: movzx   ecx, word ptr [ecx]
0x930176: fsub    [esp+110h+var_88]
0x93017D: shl     ecx, 4
0x930180: fstp    dword ptr [esp+110h+var_10+8]
0x930187: add     ecx, eax
0x930189: fld     dword ptr [esp+110h+var_B0+0Ch]
0x93018D: mov     eax, [ecx]
0x93018F: fsub    [esp+110h+var_84]
0x930196: mov     [esp+110h+var_50], eax
0x93019D: mov     eax, [ecx+4]
0x9301A0: mov     [esp+110h+var_B4], 40400000h
0x9301A8: movss   xmm3, [esp+110h+var_B4]
0x9301AE: fstp    dword ptr [esp+110h+var_10+0Ch]
0x9301B5: movaps  xmm4, [esp+110h+var_10]
0x9301BD: movaps  xmm0, xmm4
0x9301C0: mulps   xmm0, xmm4
0x9301C3: movaps  xmm1, xmm0
0x9301C6: shufps  xmm1, xmm0, 55h ; 'U'
0x9301CA: addss   xmm1, xmm0
0x9301CE: movaps  xmm2, xmm0
0x9301D1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9301D5: movaps  xmm0, xmm2
0x9301D8: addss   xmm0, xmm1
0x9301DC: movaps  [esp+110h+var_F0], xmm0
0x9301E1: rsqrtss xmm1, xmm0
0x9301E5: mov     [esp+110h+var_4C], eax
0x9301EC: mov     eax, [ecx+8]
0x9301EF: mov     ecx, [ecx+0Ch]
0x9301F2: movss   dword ptr [esp+110h+var_F0], xmm1
0x9301F8: movaps  xmm1, [esp+110h+var_F0]
0x9301FD: mulss   xmm0, xmm1
0x930201: mov     [esp+110h+var_B8], 3F000000h
0x930209: movss   xmm2, [esp+110h+var_B8]
0x93020F: mulss   xmm0, xmm1
0x930213: movaps  xmm5, xmm3
0x930216: subss   xmm5, xmm0
0x93021A: mov     [esp+110h+var_100], edx
0x93021E: mov     [esp+110h+var_48], eax
0x930225: mov     [esp+110h+var_44], ecx
0x93022C: movaps  xmm0, xmm2
0x93022F: fld     [esp+110h+var_50]
0x930236: mulss   xmm0, xmm1
0x93023A: fsub    [esp+110h+var_90]
0x930241: mulss   xmm0, xmm5
0x930245: movaps  xmm1, xmm0
0x930248: shufps  xmm1, xmm0, 0
0x93024C: fstp    dword ptr [esp+110h+var_30]
0x930253: mulps   xmm1, xmm4
0x930256: fld     [esp+110h+var_4C]
0x93025D: mov     ecx, [ebp+arg_4]
0x930260: fsub    [esp+110h+var_8C]
0x930267: movaps  [esp+110h+var_10], xmm1
0x93026F: lea     eax, [esp+110h+var_18]
0x930276: fstp    dword ptr [esp+110h+var_30+4]
0x93027D: fld     [esp+110h+var_48]
0x930284: fsub    [esp+110h+var_88]
0x93028B: fstp    dword ptr [esp+110h+var_30+8]
0x930292: fld     [esp+110h+var_44]
0x930299: fsub    [esp+110h+var_84]
0x9302A0: fstp    dword ptr [esp+110h+var_30+0Ch]
0x9302A7: movaps  xmm5, [esp+110h+var_30]
0x9302AF: movaps  xmm0, xmm5
0x9302B2: mulps   xmm0, xmm5
0x9302B5: movaps  xmm4, xmm0
0x9302B8: shufps  xmm4, xmm0, 55h ; 'U'
0x9302BC: addss   xmm4, xmm0
0x9302C0: movaps  xmm6, xmm0
0x9302C3: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x9302C7: movaps  xmm0, xmm6
0x9302CA: addss   xmm0, xmm4
0x9302CE: movaps  [esp+110h+var_F0], xmm0
0x9302D3: rsqrtss xmm4, xmm0
0x9302D7: movss   dword ptr [esp+110h+var_F0], xmm4
0x9302DD: movaps  xmm4, [esp+110h+var_F0]
0x9302E2: mulss   xmm0, xmm4
0x9302E6: mulss   xmm0, xmm4
0x9302EA: movaps  xmm6, xmm3
0x9302ED: subss   xmm6, xmm0
0x9302F1: movaps  xmm0, xmm2
0x9302F4: mulss   xmm0, xmm4
0x9302F8: mulss   xmm0, xmm6
0x9302FC: movaps  xmm4, xmm0
0x9302FF: shufps  xmm4, xmm0, 0
0x930303: movaps  xmm0, xmm4
0x930306: mulps   xmm0, xmm5
0x930309: movaps  xmm4, xmm0
0x93030C: shufps  xmm4, xmm0, 0C9h ; 'É'
0x930310: movaps  xmm5, xmm1
0x930313: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x930317: mulps   xmm5, xmm4
0x93031A: movaps  xmm4, xmm0
0x93031D: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x930321: movaps  [esp+110h+var_30], xmm0
0x930329: movaps  xmm0, xmm1
0x93032C: shufps  xmm0, xmm1, 0C9h ; 'É'
0x930330: movaps  xmm1, xmm0
0x930333: mulps   xmm1, xmm4
0x930336: subps   xmm1, xmm5
0x930339: movaps  xmm0, xmm1
0x93033C: mulps   xmm0, xmm1
0x93033F: movaps  xmm4, xmm0
0x930342: shufps  xmm4, xmm0, 55h ; 'U'
0x930346: movaps  xmm5, xmm0
0x930349: addss   xmm4, xmm0
0x93034D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x930351: addss   xmm5, xmm4
0x930355: movss   dword ptr [eax], xmm5
0x930359: fld     [esp+110h+var_18]
0x930360: movaps  xmmword ptr [esi], xmm1
0x930363: fcomp   dword ptr [ecx+8]
0x930366: fnstsw  ax
0x930368: test    ah, 5
0x93036B: jp      short loc_930399
0x93036D: mov     esi, [edi+4]
0x930370: mov     eax, [edi+8]
0x930373: dec     esi
0x930374: and     eax, 3FFFFFFFh
0x930379: cmp     eax, esi
0x93037B: jge     short loc_930391
0x93037D: add     eax, eax
0x93037F: cmp     esi, eax
0x930381: jl      short loc_930385
0x930383: mov     eax, esi
0x930385: push    10h
0x930387: push    eax
0x930388: push    edi
0x930389: call    sub_8A6E40
0x93038E: add     esp, 0Ch
0x930391: mov     [edi+4], esi
0x930394: jmp     loc_930537
0x930399: movaps  xmm4, xmm0
0x93039C: shufps  xmm4, xmm0, 55h ; 'U'
0x9303A0: addss   xmm4, xmm0
0x9303A4: movaps  xmm5, xmm0
0x9303A7: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x9303AB: movaps  xmm0, xmm5
0x9303AE: addss   xmm0, xmm4
0x9303B2: movaps  [esp+110h+var_F0], xmm0
0x9303B7: rsqrtss xmm4, xmm0
0x9303BB: movss   dword ptr [esp+110h+var_F0], xmm4
0x9303C1: movaps  xmm4, [esp+110h+var_F0]
0x9303C6: mulss   xmm0, xmm4
0x9303CA: mulss   xmm0, xmm4
0x9303CE: subss   xmm3, xmm0
0x9303D2: movaps  xmm0, xmm2
0x9303D5: mulss   xmm0, xmm4
0x9303D9: mulss   xmm0, xmm3
0x9303DD: movaps  xmm3, xmm0
0x9303E0: shufps  xmm3, xmm0, 0
0x9303E4: movaps  xmm0, xmm3
0x9303E7: mulps   xmm0, xmm1
0x9303EA: movaps  xmm1, [esp+110h+var_B0]
0x9303EF: movaps  xmmword ptr [esi], xmm0
0x9303F2: mulps   xmm0, xmm1
0x9303F5: movaps  xmm1, xmm0
0x9303F8: shufps  xmm1, xmm0, 55h ; 'U'
0x9303FC: addss   xmm1, xmm0
0x930400: movaps  xmm3, xmm0
0x930403: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x930407: addss   xmm3, xmm1
0x93040B: lea     eax, [esp+110h+var_14]
0x930412: movss   dword ptr [eax], xmm3
0x930416: fld     [esp+110h+var_14]
0x93041D: fchs
0x93041F: mov     ebx, [ebp+arg_1C]
0x930422: fstp    dword ptr [esi+0Ch]
0x930425: mov     edi, [ebx+4]
0x930428: fld     [esp+110h+var_90]
0x93042F: mov     eax, [ebx+8]
0x930432: fsub    dword ptr [esp+110h+var_B0]
0x930436: movaps  xmm1, xmm2
0x930439: shufps  xmm1, xmm2, 0
0x93043D: lea     ecx, [edi+1]
0x930440: fstp    dword ptr [esp+110h+var_70]
0x930447: and     eax, 3FFFFFFFh
0x93044C: cmp     eax, ecx
0x93044E: fld     [esp+110h+var_8C]
0x930455: fsub    dword ptr [esp+110h+var_B0+4]
0x930459: fstp    dword ptr [esp+110h+var_70+4]
0x930460: fld     [esp+110h+var_88]
0x930467: fsub    dword ptr [esp+110h+var_B0+8]
0x93046B: fstp    dword ptr [esp+110h+var_70+8]
0x930472: fld     [esp+110h+var_84]
0x930479: fsub    dword ptr [esp+110h+var_B0+0Ch]
0x93047D: fstp    dword ptr [esp+110h+var_70+0Ch]
0x930484: movaps  xmm0, [esp+110h+var_70]
0x93048C: fld     [esp+110h+var_50]
0x930493: mulps   xmm1, xmm0
0x930496: fsub    dword ptr [esp+110h+var_B0]
0x93049A: movaps  [esp+110h+var_70], xmm1
0x9304A2: movaps  xmm1, xmm2
0x9304A5: shufps  xmm1, xmm2, 0
0x9304A9: fstp    dword ptr [esp+110h+var_D0]
0x9304AD: fld     [esp+110h+var_4C]
0x9304B4: fsub    dword ptr [esp+110h+var_B0+4]
0x9304B8: fstp    dword ptr [esp+110h+var_D0+4]
0x9304BC: fld     [esp+110h+var_48]
0x9304C3: fsub    dword ptr [esp+110h+var_B0+8]
0x9304C7: fstp    dword ptr [esp+110h+var_D0+8]
0x9304CB: fld     [esp+110h+var_44]
0x9304D2: fsub    dword ptr [esp+110h+var_B0+0Ch]
0x9304D6: fstp    dword ptr [esp+110h+var_D0+0Ch]
0x9304DA: movaps  xmm0, [esp+110h+var_D0]
0x9304DF: mulps   xmm1, xmm0
0x9304E2: movaps  [esp+110h+var_D0], xmm1
0x9304E7: jge     short loc_930501
0x9304E9: add     eax, eax
0x9304EB: cmp     ecx, eax
0x9304ED: jl      short loc_9304F1
0x9304EF: mov     eax, ecx
0x9304F1: push    20h ; ' '
0x9304F3: push    eax
0x9304F4: push    ebx
0x9304F5: call    sub_8A6E40
0x9304FA: mov     edx, [esp+11Ch+var_100]
0x9304FE: add     esp, 0Ch
0x930501: lea     eax, [edi+1]
0x930504: mov     [ebx+4], eax
0x930507: mov     eax, [ebx]
0x930509: movaps  xmm0, xmmword ptr [esi]
0x93050C: shl     edi, 5
0x93050F: add     edi, eax
0x930511: mov     eax, [ebp+arg_8]
0x930514: mov     ecx, edi
0x930516: movaps  xmmword ptr [ecx], xmm0
0x930519: mov     esi, [eax+4]
0x93051C: mov     eax, [esp+110h+var_F4]
0x930520: shl     eax, 3
0x930523: mov     [ecx+14h], edx
0x930526: mov     edx, [esp+110h+var_F8]
0x93052A: add     esi, eax
0x93052C: mov     [ecx+10h], esi
0x93052F: mov     [ecx+18h], edx
0x930532: call    sub_92DC50
0x930537: mov     ecx, [ebp+arg_8]
0x93053A: mov     eax, [esp+110h+var_F4]
0x93053E: mov     edx, [ecx+8]
0x930541: inc     eax
0x930542: cmp     eax, edx
0x930544: mov     [esp+110h+var_F4], eax
0x930548: jl      loc_930073
0x93054E: mov     eax, [ebp+arg_14]
0x930551: mov     edx, [ebp+arg_1C]
0x930554: mov     byte ptr [eax], 0
0x930557: mov     eax, [edx+4]
0x93055A: test    eax, eax
0x93055C: jle     loc_9309C6
0x930562: mov     eax, 1
0x930567: mov     [esp+110h+var_F4], 0
0x93056F: mov     [esp+110h+var_F8], eax
0x930573: cmp     eax, [edx+4]
0x930576: mov     [esp+110h+var_B4], eax
0x93057A: jge     loc_9308B6
0x930580: mov     ecx, [esp+110h+var_F4]
0x930584: add     ecx, 20h ; ' '
0x930587: mov     [esp+110h+var_B8], ecx
0x93058B: jmp     short loc_930590
0x93058D: align 10h
0x930590: mov     eax, [edx]
0x930592: mov     ecx, [esp+110h+var_F4]
0x930596: lea     esi, [eax+ecx]
0x930599: mov     ecx, 8
0x93059E: lea     edi, [esp+110h+var_70]
0x9305A5: rep movsd
0x9305A7: mov     ecx, [esp+110h+var_B8]
0x9305AB: lea     esi, [eax+ecx]
0x9305AE: mov     ecx, 8
0x9305B3: lea     edi, [esp+110h+var_F0]
0x9305B7: rep movsd
0x9305B9: fld     dword ptr [esp+110h+var_F0]
0x9305BD: fadd    dword ptr [esp+110h+var_70]
0x9305C4: fstp    dword ptr [esp+110h+var_D0]
0x9305C8: fld     dword ptr [esp+110h+var_F0+4]
0x9305CC: fadd    dword ptr [esp+110h+var_70+4]
0x9305D3: fstp    dword ptr [esp+110h+var_D0+4]
0x9305D7: fld     dword ptr [esp+110h+var_F0+8]
0x9305DB: fadd    dword ptr [esp+110h+var_70+8]
0x9305E2: mov     ecx, [ebp+arg_4]
0x9305E5: lea     eax, [esp+110h+var_100]
0x9305E9: fstp    dword ptr [esp+110h+var_D0+8]
0x9305ED: fld     dword ptr [esp+110h+var_F0+0Ch]
0x9305F1: fadd    dword ptr [esp+110h+var_70+0Ch]
0x9305F8: fstp    dword ptr [esp+110h+var_D0+0Ch]
0x9305FC: movaps  xmm1, [esp+110h+var_D0]
0x930601: mulps   xmm1, xmm1
0x930604: movaps  xmm0, xmm1
0x930607: shufps  xmm0, xmm1, 4Eh ; 'N'
0x93060B: addps   xmm0, xmm1
0x93060E: movaps  xmm1, xmm0
0x930611: shufps  xmm1, xmm0, 0B1h ; '±'
0x930615: addps   xmm0, xmm1
0x930618: movss   dword ptr [eax], xmm0
0x93061C: fld     [esp+110h+var_100]
0x930620: fcomp   dword ptr [ecx+18h]
0x930623: fnstsw  ax
0x930625: test    ah, 5
0x930628: jp      loc_930893
0x93062E: mov     edx, [ebp+arg_14]
0x930631: fld     dword ptr [esp+110h+var_F0]
0x930635: mov     esi, [esp+110h+var_5C]
0x93063C: fchs
0x93063E: mov     ebx, [esp+110h+var_60]
0x930645: fstp    dword ptr [esp+110h+var_70]
0x93064C: fld     dword ptr [esp+110h+var_F0+4]
0x930650: lea     eax, [esp+110h+var_F0]
0x930654: push    eax
0x930655: fchs
0x930657: mov     eax, [esp+114h+var_E0]
0x93065B: fstp    dword ptr [esp+114h+var_70+4]
0x930662: fld     dword ptr [esp+114h+var_F0+8]
0x930666: mov     byte ptr [edx], 1
0x930669: mov     edx, [esp+114h+var_DC]
0x93066D: fchs
0x93066F: lea     ecx, [esp+114h+var_70]
0x930676: fstp    dword ptr [esp+114h+var_70+8]
0x93067D: push    ecx
0x93067E: mov     ecx, [esp+118h+var_FC]
0x930682: push    edx
0x930683: push    esi
0x930684: push    eax
0x930685: push    ebx
0x930686: push    ecx
0x930687: lea     edx, [esp+12Ch+var_96]
0x93068E: push    edx
0x93068F: call    sub_92C790
0x930694: mov     cl, [eax]
0x930696: mov     edi, [esp+130h+var_58]
0x93069D: add     esp, 20h
0x9306A0: test    cl, cl
0x9306A2: jnz     short loc_9306D8
0x9306A4: mov     edx, [esp+110h+var_D8]
0x9306A8: lea     eax, [esp+110h+var_F0]
0x9306AC: push    eax
0x9306AD: mov     eax, [esp+114h+var_E0]
0x9306B1: lea     ecx, [esp+114h+var_70]
0x9306B8: push    ecx
0x9306B9: mov     ecx, [esp+118h+var_FC]
0x9306BD: push    edx
0x9306BE: push    esi
0x9306BF: push    eax
0x9306C0: push    ebx
0x9306C1: push    ecx
0x9306C2: lea     edx, [esp+12Ch+var_75]
0x9306C9: push    edx
0x9306CA: call    sub_92C790
0x9306CF: mov     cl, [eax]
0x9306D1: add     esp, 20h
0x9306D4: test    cl, cl
0x9306D6: jz      short loc_930714
0x9306D8: mov     eax, [ebp+arg_14]
0x9306DB: mov     ecx, [ebp+arg_18]
0x9306DE: mov     byte ptr [eax], 1
0x9306E1: movzx   edx, word ptr [edi]
0x9306E4: mov     eax, [esp+110h+var_74]
0x9306EB: push    ecx
0x9306EC: movzx   ecx, word ptr [esi]
0x9306EF: shl     edx, 4
0x9306F2: add     edx, eax
0x9306F4: push    edx
0x9306F5: movzx   edx, word ptr [ebx]
0x9306F8: shl     ecx, 4
0x9306FB: add     ecx, eax
0x9306FD: shl     edx, 4
0x930700: push    ecx
0x930701: add     edx, eax
0x930703: push    edx
0x930704: lea     eax, [esp+120h+var_70]
0x93070B: push    eax
0x93070C: call    sub_92E640
0x930711: add     esp, 14h
0x930714: mov     eax, [esp+110h+var_DC]
0x930718: lea     ecx, [esp+110h+var_F0]
0x93071C: push    ecx
0x93071D: mov     ecx, [esp+114h+var_E0]
0x930721: lea     edx, [esp+114h+var_70]
0x930728: push    edx
0x930729: mov     edx, [esp+118h+var_FC]
0x93072D: push    eax
0x93072E: push    edi
0x93072F: push    ecx
0x930730: push    ebx
0x930731: push    edx
0x930732: lea     eax, [esp+12Ch+var_95]
0x930739: push    eax
0x93073A: call    sub_92C790
0x93073F: mov     cl, [eax]
0x930741: add     esp, 20h
0x930744: test    cl, cl
0x930746: jnz     short loc_93077C
0x930748: mov     eax, [esp+110h+var_D8]
0x93074C: lea     ecx, [esp+110h+var_F0]
0x930750: push    ecx
0x930751: mov     ecx, [esp+114h+var_E0]
0x930755: lea     edx, [esp+114h+var_70]
0x93075C: push    edx
0x93075D: mov     edx, [esp+118h+var_FC]
0x930761: push    eax
0x930762: push    edi
0x930763: push    ecx
0x930764: push    ebx
0x930765: push    edx
0x930766: lea     eax, [esp+12Ch+var_91]
0x93076D: push    eax
0x93076E: call    sub_92C790
0x930773: mov     cl, [eax]
0x930775: add     esp, 20h
0x930778: test    cl, cl
0x93077A: jz      short loc_9307B8
0x93077C: mov     ecx, [ebp+arg_14]
0x93077F: mov     eax, [esp+110h+var_74]
0x930786: mov     edx, [ebp+arg_18]
0x930789: mov     byte ptr [ecx], 1
0x93078C: movzx   ecx, word ptr [esi]
0x93078F: push    edx
0x930790: movzx   edx, word ptr [edi]
0x930793: shl     ecx, 4
0x930796: add     ecx, eax
0x930798: push    ecx
0x930799: movzx   ecx, word ptr [ebx]
0x93079C: shl     edx, 4
0x93079F: add     edx, eax
0x9307A1: push    edx
0x9307A2: shl     ecx, 4
0x9307A5: add     ecx, eax
0x9307A7: push    ecx
0x9307A8: lea     edx, [esp+120h+var_70]
0x9307AF: push    edx
0x9307B0: call    sub_92E640
0x9307B5: add     esp, 14h
0x9307B8: mov     edx, [esp+110h+var_DC]
0x9307BC: lea     eax, [esp+110h+var_F0]
0x9307C0: push    eax
0x9307C1: mov     eax, [esp+114h+var_E0]
0x9307C5: lea     ecx, [esp+114h+var_70]
0x9307CC: push    ecx
0x9307CD: mov     ecx, [esp+118h+var_FC]
0x9307D1: push    edx
0x9307D2: push    edi
0x9307D3: push    eax
0x9307D4: push    esi
0x9307D5: push    ecx
0x9307D6: lea     edx, [esp+12Ch+var_92]
0x9307DD: push    edx
0x9307DE: call    sub_92C790
0x9307E3: mov     cl, [eax]
0x9307E5: add     esp, 20h
0x9307E8: test    cl, cl
0x9307EA: jnz     short loc_930854
0x9307EC: mov     edx, [esp+110h+var_D8]
0x9307F0: lea     eax, [esp+110h+var_F0]
0x9307F4: push    eax
0x9307F5: mov     eax, [esp+114h+var_E0]
0x9307F9: lea     ecx, [esp+114h+var_70]
0x930800: push    ecx
0x930801: mov     ecx, [esp+118h+var_FC]
0x930805: push    edx
0x930806: push    edi
0x930807: push    eax
0x930808: push    esi
0x930809: push    ecx
0x93080A: lea     edx, [esp+12Ch+var_94]
0x930811: push    edx
0x930812: call    sub_92C790
0x930817: mov     cl, [eax]
0x930819: add     esp, 20h
0x93081C: test    cl, cl
0x93081E: jnz     short loc_930854
0x930820: mov     edx, [esp+110h+var_D8]
0x930824: lea     eax, [esp+110h+var_F0]
0x930828: push    eax
0x930829: mov     eax, [esp+114h+var_DC]
0x93082D: lea     ecx, [esp+114h+var_70]
0x930834: push    ecx
0x930835: mov     ecx, [esp+118h+var_FC]
0x930839: push    edx
0x93083A: push    edi
0x93083B: push    eax
0x93083C: push    esi
0x93083D: push    ecx
0x93083E: lea     edx, [esp+12Ch+var_93]
0x930845: push    edx
0x930846: call    sub_92C790
0x93084B: mov     cl, [eax]
0x93084D: add     esp, 20h
0x930850: test    cl, cl
0x930852: jz      short loc_930890
0x930854: mov     eax, [ebp+arg_14]
0x930857: mov     ecx, [ebp+arg_18]
0x93085A: mov     byte ptr [eax], 1
0x93085D: movzx   edx, word ptr [ebx]
0x930860: mov     eax, [esp+110h+var_74]
0x930867: push    ecx
0x930868: movzx   ecx, word ptr [edi]
0x93086B: shl     edx, 4
0x93086E: add     edx, eax
0x930870: push    edx
0x930871: movzx   edx, word ptr [esi]
0x930874: shl     ecx, 4
0x930877: add     ecx, eax
0x930879: shl     edx, 4
0x93087C: push    ecx
0x93087D: add     edx, eax
0x93087F: push    edx
0x930880: lea     eax, [esp+120h+var_70]
0x930887: push    eax
0x930888: call    sub_92E640
0x93088D: add     esp, 14h
0x930890: mov     edx, [ebp+arg_1C]
0x930893: mov     eax, [esp+110h+var_B4]
0x930897: mov     esi, [esp+110h+var_B8]
0x93089B: mov     ecx, [edx+4]
0x93089E: inc     eax
0x93089F: add     esi, 20h ; ' '
0x9308A2: cmp     eax, ecx
0x9308A4: mov     [esp+110h+var_B4], eax
0x9308A8: mov     [esp+110h+var_B8], esi
0x9308AC: jl      loc_930590
0x9308B2: mov     eax, [esp+110h+var_F8]
0x9308B6: mov     edi, [esp+110h+var_F4]
0x9308BA: mov     esi, [edx+4]
0x9308BD: inc     eax
0x9308BE: add     edi, 20h ; ' '
0x9308C1: lea     ecx, [eax-1]
0x9308C4: cmp     ecx, esi
0x9308C6: mov     [esp+110h+var_F8], eax
0x9308CA: mov     [esp+110h+var_F4], edi
0x9308CE: jl      loc_930573
0x9308D4: mov     edx, [ebp+arg_14]
0x9308D7: cmp     byte ptr [edx], 0
0x9308DA: jz      loc_9309C6
0x9308E0: mov     ecx, [ebp+arg_C]
0x9308E3: mov     eax, [ecx]
0x9308E5: movaps  xmm1, xmmword ptr [eax]
0x9308E8: movaps  xmm2, xmmword ptr [eax+10h]
0x9308EC: movaps  xmm0, xmm1
0x9308EF: subps   xmm0, xmm2
0x9308F2: movaps  xmm2, xmmword ptr [eax+20h]
0x9308F6: subps   xmm1, xmm2
0x9308F9: movaps  xmm3, xmm0
0x9308FC: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x930900: movaps  xmm2, xmm1
0x930903: shufps  xmm2, xmm1, 0C9h ; 'É'
0x930907: mulps   xmm3, xmm2
0x93090A: mov     eax, [ebp+arg_10]
0x93090D: movaps  xmm2, xmm1
0x930910: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x930914: movaps  xmm1, xmm0
0x930917: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93091B: mulps   xmm1, xmm2
0x93091E: subps   xmm1, xmm3
0x930921: movaps  xmm0, xmm1
0x930924: mulps   xmm0, xmm1
0x930927: movaps  xmm2, xmm0
0x93092A: shufps  xmm2, xmm0, 55h ; 'U'
0x93092E: addss   xmm2, xmm0
0x930932: movaps  xmm3, xmm0
0x930935: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x930939: movaps  xmm0, xmm3
0x93093C: addss   xmm0, xmm2
0x930940: movaps  [esp+110h+var_F0], xmm0
0x930945: rsqrtss xmm2, xmm0
0x930949: movss   dword ptr [esp+110h+var_F0], xmm2
0x93094F: movaps  xmm2, [esp+110h+var_F0]
0x930954: mulss   xmm0, xmm2
0x930958: mulss   xmm0, xmm2
0x93095C: mov     [esp+110h+var_100], 40400000h
0x930964: movss   xmm3, [esp+110h+var_100]
0x93096A: subss   xmm3, xmm0
0x93096E: mov     [esp+110h+var_100], 3F000000h
0x930976: movss   xmm0, [esp+110h+var_100]
0x93097C: mulss   xmm0, xmm2
0x930980: mulss   xmm0, xmm3
0x930984: movaps  xmmword ptr [eax], xmm1
0x930987: movaps  xmm2, xmm0
0x93098A: shufps  xmm2, xmm0, 0
0x93098E: movaps  xmm0, xmm2
0x930991: mulps   xmm0, xmm1
0x930994: movaps  xmmword ptr [eax], xmm0
0x930997: mov     ecx, [ecx]
0x930999: movaps  xmm1, xmmword ptr [ecx]
0x93099C: mulps   xmm0, xmm1
0x93099F: movaps  xmm1, xmm0
0x9309A2: shufps  xmm1, xmm0, 55h ; 'U'
0x9309A6: movaps  xmm2, xmm0
0x9309A9: addss   xmm1, xmm0
0x9309AD: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9309B1: lea     edx, [esp+110h+var_100]
0x9309B5: addss   xmm2, xmm1
0x9309B9: movss   dword ptr [edx], xmm2
0x9309BD: fld     [esp+110h+var_100]
0x9309C1: fchs
0x9309C3: fstp    dword ptr [eax+0Ch]
0x9309C6: mov     esi, [ebp+arg_18]
0x9309C9: mov     eax, [esi+4]
0x9309CC: cmp     eax, 1
0x9309CF: jle     short loc_9309E5
0x9309D1: push    offset sub_92C9B0
0x9309D6: dec     eax
0x9309D7: push    eax
0x9309D8: mov     eax, [esi]
0x9309DA: push    0
0x9309DC: push    eax
0x9309DD: call    sub_92B640
0x9309E2: add     esp, 10h
0x9309E5: mov     ebx, [ebp+arg_4]
0x9309E8: mov     edx, [ebx+10h]
0x9309EB: lea     ecx, [esp+110h+var_100]
0x9309EF: push    ecx; int
0x9309F0: push    esi; int
0x9309F1: push    edx; float
0x9309F2: call    sub_92DCA0
0x9309F7: mov     edi, [esi+4]
0x9309FA: add     esp, 0Ch
0x9309FD: cmp     edi, 2
0x930A00: jge     loc_930EEF
0x930A06: mov     eax, [ebp+arg_8]
0x930A09: cmp     dword ptr [eax+8], 1
0x930A0D: jnz     short loc_930A5D
0x930A0F: mov     ecx, [eax+4]
0x930A12: movzx   edx, word ptr [ecx]
0x930A15: mov     ecx, [eax]
0x930A17: shl     edx, 4
0x930A1A: movaps  xmm0, xmmword ptr [edx+ecx]
0x930A1E: add     edx, ecx
0x930A20: mov     dword ptr [esp+110h+var_D0], 3F800000h
0x930A28: mov     dword ptr [esp+110h+var_D0+4], 0
0x930A30: mov     dword ptr [esp+110h+var_D0+8], 0
0x930A38: mov     dword ptr [esp+110h+var_D0+0Ch], 0
0x930A40: movaps  xmm2, [esp+110h+var_D0]
0x930A45: movaps  xmm1, xmm0
0x930A48: addps   xmm1, xmm2
0x930A4B: movaps  [esp+110h+var_70], xmm0
0x930A53: movaps  [esp+110h+var_30], xmm1
0x930A5B: jmp     short loc_930A9E
0x930A5D: mov     edx, [eax+4]
0x930A60: movzx   edx, word ptr [edx]
0x930A63: mov     ecx, [eax]
0x930A65: mov     eax, [eax+4]
0x930A68: shl     edx, 4
0x930A6B: movaps  xmm0, xmmword ptr [edx+ecx]
0x930A6F: movzx   edx, word ptr [eax+2]
0x930A73: movzx   eax, word ptr [eax+edx*8]
0x930A77: movaps  [esp+110h+var_70], xmm0
0x930A7F: shl     eax, 4
0x930A82: movaps  xmm0, xmmword ptr [eax+ecx]
0x930A86: movaps  [esp+110h+var_30], xmm0
0x930A8E: movaps  xmm1, [esp+110h+var_30]
0x930A96: movaps  xmm0, [esp+110h+var_70]
0x930A9E: subps   xmm0, xmm1
0x930AA1: movaps  [esp+110h+var_F0], xmm0
0x930AA6: mov     [esp+110h+var_F8], 7F7FFFFFh
0x930AAE: xor     ecx, ecx
0x930AB0: mov     edx, 3F800000h
0x930AB5: jmp     short loc_930AC0
0x930AB7: align 10h
0x930AC0: mov     dword ptr [esp+110h+var_D0], 0
0x930AC8: mov     dword ptr [esp+110h+var_D0+4], 0
0x930AD0: mov     dword ptr [esp+110h+var_D0+8], 0
0x930AD8: mov     dword ptr [esp+110h+var_D0+0Ch], 0
0x930AE0: mov     dword ptr [esp+ecx*4+110h+var_D0], edx
0x930AE4: movaps  xmm2, [esp+110h+var_D0]
0x930AE9: movaps  xmm1, xmm0
0x930AEC: mulps   xmm1, xmm2
0x930AEF: movaps  xmm3, xmm1
0x930AF2: shufps  xmm3, xmm1, 55h ; 'U'
0x930AF6: movaps  xmm4, xmm1
0x930AF9: lea     eax, [esp+110h+var_100]
0x930AFD: addss   xmm3, xmm1
0x930B01: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x930B05: addss   xmm4, xmm3
0x930B09: movss   dword ptr [eax], xmm4
0x930B0D: fld     [esp+110h+var_100]
0x930B11: fabs
0x930B13: fcom    [esp+110h+var_F8]
0x930B17: fnstsw  ax
0x930B19: test    ah, 5
0x930B1C: jp      short loc_930B2C
0x930B1E: fstp    [esp+110h+var_F8]
0x930B22: movaps  [esp+110h+var_10], xmm2
0x930B2A: jmp     short loc_930B2E
0x930B2C: fstp    st
0x930B2E: inc     ecx
0x930B2F: cmp     ecx, 3
0x930B32: jl      short loc_930AC0
0x930B34: mov     eax, [esi+8]
0x930B37: lea     ebx, [edi+6]
0x930B3A: and     eax, 3FFFFFFFh
0x930B3F: cmp     eax, ebx
0x930B41: jge     short loc_930B5C
0x930B43: add     eax, eax
0x930B45: cmp     ebx, eax
0x930B47: jl      short loc_930B4B
0x930B49: mov     eax, ebx
0x930B4B: push    10h
0x930B4D: push    eax
0x930B4E: push    esi
0x930B4F: call    sub_8A6E40
0x930B54: movaps  xmm0, [esp+11Ch+var_F0]
0x930B59: add     esp, 0Ch
0x930B5C: movaps  xmm1, [esp+110h+var_10]
0x930B64: movaps  xmm4, xmm1
0x930B67: shufps  xmm4, xmm1, 0C9h ; 'É'
0x930B6B: mov     eax, [esi]
0x930B6D: movaps  xmm2, xmm0
0x930B70: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x930B74: movaps  xmm5, xmm2
0x930B77: mulps   xmm5, xmm4
0x930B7A: movaps  xmm4, xmm1
0x930B7D: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x930B81: movaps  xmm3, xmm0
0x930B84: shufps  xmm3, xmm0, 0C9h ; 'É'
0x930B88: movaps  xmm1, xmm3
0x930B8B: mulps   xmm1, xmm4
0x930B8E: movaps  xmm4, xmm1
0x930B91: subps   xmm4, xmm5
0x930B94: movaps  xmm1, xmm4
0x930B97: mulps   xmm1, xmm4
0x930B9A: movaps  xmm5, xmm1
0x930B9D: shufps  xmm5, xmm1, 55h ; 'U'
0x930BA1: addss   xmm5, xmm1
0x930BA5: movaps  xmm6, xmm1
0x930BA8: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930BAC: movaps  xmm1, xmm6
0x930BAF: addss   xmm1, xmm5
0x930BB3: movaps  [esp+110h+var_F0], xmm1
0x930BB8: rsqrtss xmm5, xmm1
0x930BBC: mov     [esp+110h+var_100], 40400000h
0x930BC4: movss   dword ptr [esp+110h+var_F0], xmm5
0x930BCA: movss   xmm5, [esp+110h+var_100]
0x930BD0: movaps  xmm6, [esp+110h+var_F0]
0x930BD5: mulss   xmm1, xmm6
0x930BD9: mulss   xmm1, xmm6
0x930BDD: mov     [esp+110h+var_100], 3F000000h
0x930BE5: movss   xmm7, [esp+110h+var_100]
0x930BEB: movaps  [esp+110h+var_D0], xmm7
0x930BF0: movaps  xmm7, xmm5
0x930BF3: subss   xmm7, xmm1
0x930BF7: movaps  xmm1, [esp+110h+var_D0]
0x930BFC: mulss   xmm1, xmm6
0x930C00: mulss   xmm1, xmm7
0x930C04: movaps  xmm6, xmm1
0x930C07: shufps  xmm6, xmm1, 0
0x930C0B: movaps  xmm1, xmm6
0x930C0E: mov     ecx, edi
0x930C10: mov     [esi+4], ebx
0x930C13: shl     ecx, 4
0x930C16: add     eax, ecx
0x930C18: movaps  xmmword ptr [eax], xmm4
0x930C1B: mulps   xmm1, xmm4
0x930C1E: movaps  xmm4, [esp+110h+var_70]
0x930C26: movaps  xmmword ptr [eax], xmm1
0x930C29: mulps   xmm1, xmm4
0x930C2C: movaps  xmm6, xmm1
0x930C2F: shufps  xmm6, xmm1, 55h ; 'U'
0x930C33: addss   xmm6, xmm1
0x930C37: movaps  xmm7, xmm1
0x930C3A: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x930C3E: addss   xmm7, xmm6
0x930C42: lea     edx, [esp+110h+var_100]
0x930C46: movss   dword ptr [edx], xmm7
0x930C4A: fld     [esp+110h+var_100]
0x930C4E: fchs
0x930C50: fstp    dword ptr [eax+0Ch]
0x930C53: movaps  xmm1, xmmword ptr [eax]
0x930C56: mov     edx, [esi]
0x930C58: movaps  xmm6, xmm1
0x930C5B: shufps  xmm6, xmm1, 0C9h ; 'É'
0x930C5F: mulps   xmm2, xmm6
0x930C62: movaps  xmm6, xmm1
0x930C65: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x930C69: mulps   xmm3, xmm6
0x930C6C: subps   xmm3, xmm2
0x930C6F: movaps  xmm1, xmm3
0x930C72: mulps   xmm1, xmm3
0x930C75: lea     edx, [ecx+edx+10h]
0x930C79: movaps  xmm2, xmm1
0x930C7C: shufps  xmm2, xmm1, 55h ; 'U'
0x930C80: movaps  xmmword ptr [edx], xmm3
0x930C83: addss   xmm2, xmm1
0x930C87: movaps  xmm6, xmm1
0x930C8A: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930C8E: movaps  xmm1, xmm6
0x930C91: addss   xmm1, xmm2
0x930C95: movaps  [esp+110h+var_F0], xmm1
0x930C9A: rsqrtss xmm2, xmm1
0x930C9E: movss   dword ptr [esp+110h+var_F0], xmm2
0x930CA4: movaps  xmm6, [esp+110h+var_F0]
0x930CA9: mulss   xmm1, xmm6
0x930CAD: mulss   xmm1, xmm6
0x930CB1: movaps  xmm2, xmm5
0x930CB4: subss   xmm2, xmm1
0x930CB8: movaps  xmm7, xmm2
0x930CBB: movaps  xmm2, [esp+110h+var_D0]
0x930CC0: movaps  xmm1, xmm2
0x930CC3: mulss   xmm1, xmm6
0x930CC7: mulss   xmm1, xmm7
0x930CCB: movaps  xmm6, xmm1
0x930CCE: shufps  xmm6, xmm1, 0
0x930CD2: movaps  xmm1, xmm6
0x930CD5: mulps   xmm1, xmm3
0x930CD8: movaps  xmmword ptr [edx], xmm1
0x930CDB: mulps   xmm1, xmm4
0x930CDE: movaps  xmm3, xmm1
0x930CE1: shufps  xmm3, xmm1, 55h ; 'U'
0x930CE5: addss   xmm3, xmm1
0x930CE9: movaps  xmm6, xmm1
0x930CEC: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930CF0: addss   xmm6, xmm3
0x930CF4: lea     ecx, [esp+110h+var_100]
0x930CF8: movss   dword ptr [ecx], xmm6
0x930CFC: fld     [esp+110h+var_100]
0x930D00: fchs
0x930D02: lea     ecx, [edi+2]
0x930D05: fstp    dword ptr [edx+0Ch]
0x930D08: movaps  xmm1, xmmword ptr [eax]
0x930D0B: mov     ebx, [esi]
0x930D0D: movaps  xmm3, xmmword ptr ds:0A965C0h
0x930D14: xorps   xmm1, xmm3
0x930D17: shl     ecx, 4
0x930D1A: movaps  xmmword ptr [ecx+ebx], xmm1
0x930D1E: mulps   xmm1, xmm4
0x930D21: add     ecx, ebx
0x930D23: movaps  xmm3, xmm1
0x930D26: shufps  xmm3, xmm1, 55h ; 'U'
0x930D2A: addss   xmm3, xmm1
0x930D2E: movaps  xmm6, xmm1
0x930D31: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930D35: addss   xmm6, xmm3
0x930D39: lea     eax, [esp+110h+var_100]
0x930D3D: movss   dword ptr [eax], xmm6
0x930D41: fld     [esp+110h+var_100]
0x930D45: fchs
0x930D47: lea     eax, [edi+3]
0x930D4A: fstp    dword ptr [ecx+0Ch]
0x930D4D: mov     ebx, [esi]
0x930D4F: movaps  xmm3, xmmword ptr ds:0A965C0h
0x930D56: movaps  xmm1, xmmword ptr [edx]
0x930D59: xorps   xmm1, xmm3
0x930D5C: shl     eax, 4
0x930D5F: movaps  xmmword ptr [eax+ebx], xmm1
0x930D63: add     eax, ebx
0x930D65: mulps   xmm1, xmm4
0x930D68: movaps  xmm3, xmm1
0x930D6B: shufps  xmm3, xmm1, 55h ; 'U'
0x930D6F: addss   xmm3, xmm1
0x930D73: movaps  xmm6, xmm1
0x930D76: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930D7A: lea     ecx, [esp+110h+var_100]
0x930D7E: addss   xmm6, xmm3
0x930D82: movss   dword ptr [ecx], xmm6
0x930D86: fld     [esp+110h+var_100]
0x930D8A: fchs
0x930D8C: movaps  xmm1, xmm0
0x930D8F: fstp    dword ptr [eax+0Ch]
0x930D92: mov     ecx, [esi]
0x930D94: lea     eax, [edi+4]
0x930D97: shl     eax, 4
0x930D9A: add     eax, ecx
0x930D9C: mulps   xmm1, xmm0
0x930D9F: movaps  xmmword ptr [eax], xmm0
0x930DA2: movaps  xmm3, xmm1
0x930DA5: shufps  xmm3, xmm1, 55h ; 'U'
0x930DA9: addss   xmm3, xmm1
0x930DAD: movaps  xmm6, xmm1
0x930DB0: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x930DB4: movaps  xmm1, xmm6
0x930DB7: addss   xmm1, xmm3
0x930DBB: movaps  [esp+110h+var_F0], xmm1
0x930DC0: rsqrtss xmm3, xmm1
0x930DC4: movss   dword ptr [esp+110h+var_F0], xmm3
0x930DCA: movaps  xmm3, [esp+110h+var_F0]
0x930DCF: mulss   xmm1, xmm3
0x930DD3: mulss   xmm1, xmm3
0x930DD7: movaps  xmm6, xmm5
0x930DDA: subss   xmm6, xmm1
0x930DDE: movaps  xmm1, xmm2
0x930DE1: mulss   xmm1, xmm3
0x930DE5: mulss   xmm1, xmm6
0x930DE9: movaps  xmm3, xmm1
0x930DEC: shufps  xmm3, xmm1, 0
0x930DF0: movaps  xmm1, xmm3
0x930DF3: mulps   xmm1, xmm0
0x930DF6: movaps  xmmword ptr [eax], xmm1
0x930DF9: mulps   xmm1, xmm4
0x930DFC: movaps  xmm0, xmm1
0x930DFF: shufps  xmm0, xmm1, 55h ; 'U'
0x930E03: addss   xmm0, xmm1
0x930E07: movaps  xmm3, xmm1
0x930E0A: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x930E0E: addss   xmm3, xmm0
0x930E12: lea     edx, [esp+110h+var_100]
0x930E16: movss   dword ptr [edx], xmm3
0x930E1A: fld     [esp+110h+var_100]
0x930E1E: fchs
0x930E20: lea     ecx, [edi+5]
0x930E23: fstp    dword ptr [eax+0Ch]
0x930E26: movaps  xmm0, xmmword ptr ds:0A965C0h
0x930E2D: movaps  xmm1, xmmword ptr [eax]
0x930E30: mov     edi, [esi]
0x930E32: mov     eax, [ebp+arg_8]
0x930E35: xorps   xmm1, xmm0
0x930E38: movaps  xmm0, xmm1
0x930E3B: mulps   xmm0, xmm1
0x930E3E: movaps  xmm3, xmm0
0x930E41: shufps  xmm3, xmm0, 55h ; 'U'
0x930E45: addss   xmm3, xmm0
0x930E49: movaps  xmm6, xmm0
0x930E4C: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x930E50: movaps  xmm0, xmm6
0x930E53: addss   xmm0, xmm3
0x930E57: movaps  [esp+110h+var_F0], xmm0
0x930E5C: rsqrtss xmm3, xmm0
0x930E60: movss   dword ptr [esp+110h+var_F0], xmm3
0x930E66: movaps  xmm3, [esp+110h+var_F0]
0x930E6B: mulss   xmm0, xmm3
0x930E6F: mulss   xmm0, xmm3
0x930E73: subss   xmm5, xmm0
0x930E77: shl     ecx, 4
0x930E7A: add     ecx, edi
0x930E7C: mulss   xmm2, xmm3
0x930E80: mulss   xmm2, xmm5
0x930E84: movaps  xmm0, xmm2
0x930E87: movaps  xmmword ptr [ecx], xmm1
0x930E8A: shufps  xmm0, xmm2, 0
0x930E8E: mulps   xmm0, xmm1
0x930E91: movaps  xmmword ptr [ecx], xmm0
0x930E94: cmp     dword ptr [eax+8], 1
0x930E98: jnz     short loc_930EBD
0x930E9A: mulps   xmm0, xmm4
0x930E9D: movaps  xmm1, xmm0
0x930EA0: shufps  xmm1, xmm0, 55h ; 'U'
0x930EA4: movaps  xmm2, xmm0
0x930EA7: addss   xmm1, xmm0
0x930EAB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x930EAF: lea     edx, [esp+110h+var_100]
0x930EB3: addss   xmm2, xmm1
0x930EB7: movss   dword ptr [edx], xmm2
0x930EBB: jmp     short loc_930EE3
0x930EBD: mulps   xmm0, [esp+110h+var_30]
0x930EC5: movaps  xmm1, xmm0
0x930EC8: shufps  xmm1, xmm0, 55h ; 'U'
0x930ECC: movaps  xmm2, xmm0
0x930ECF: addss   xmm1, xmm0
0x930ED3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x930ED7: lea     eax, [esp+110h+var_100]
0x930EDB: addss   xmm2, xmm1
0x930EDF: movss   dword ptr [eax], xmm2
0x930EE3: fld     [esp+110h+var_100]
0x930EE7: mov     ebx, [ebp+arg_4]
0x930EEA: fchs
0x930EEC: fstp    dword ptr [ecx+0Ch]
0x930EEF: mov     ecx, [ebp+arg_14]
0x930EF2: cmp     byte ptr [ecx], 0
0x930EF5: jz      short loc_930F75
0x930EF7: mov     al, [ebx+2]
0x930EFA: test    al, al
0x930EFC: jz      short loc_930F75
0x930EFE: mov     eax, [ebp+arg_C]
0x930F01: xor     edi, edi
0x930F03: push    esi
0x930F04: mov     [esi+4], edi
0x930F07: mov     ecx, [eax+4]
0x930F0A: lea     edx, [esp+114h+var_3C]
0x930F11: push    edx
0x930F12: mov     edx, [eax]
0x930F14: mov     eax, [ebp+arg_10]
0x930F17: push    ecx
0x930F18: push    edx
0x930F19: push    eax
0x930F1A: mov     [esp+124h+var_3C], edi
0x930F21: mov     [esp+124h+var_38], edi
0x930F28: mov     [esp+124h+var_34], 80000000h
0x930F33: call    sub_92F270
0x930F38: mov     eax, [esp+124h+var_34]
0x930F3F: add     esp, 14h
0x930F42: test    eax, eax
0x930F44: js      short loc_930F77
0x930F46: mov     ecx, [esp+110h+var_3C]
0x930F4D: mov     edx, ds:0BA9DE4h
0x930F53: and     eax, 3FFFFFFFh
0x930F58: push    14h
0x930F5A: shl     eax, 4
0x930F5D: push    eax
0x930F5E: mov     eax, large fs:2Ch
0x930F64: push    ecx
0x930F65: mov     ecx, [eax+edx*4]
0x930F68: mov     ecx, [ecx+19Ch]
0x930F6E: call    sub_8A75D0
0x930F73: jmp     short loc_930F77
0x930F75: xor     edi, edi
0x930F77: mov     eax, [esi+4]
0x930F7A: cmp     eax, 1
0x930F7D: jle     short loc_930F92
0x930F7F: mov     edx, [esi]
0x930F81: push    offset sub_92C9B0
0x930F86: dec     eax
0x930F87: push    eax
0x930F88: push    edi
0x930F89: push    edx
0x930F8A: call    sub_92B640
0x930F8F: add     esp, 10h
0x930F92: mov     ecx, [ebx+10h]
0x930F95: lea     eax, [esp+110h+var_100]
0x930F99: push    eax; int
0x930F9A: push    esi; int
0x930F9B: push    ecx; float
0x930F9C: call    sub_92DCA0
0x930FA1: mov     eax, [ebp+arg_0]
0x930FA4: add     esp, 0Ch
0x930FA7: pop     edi
0x930FA8: pop     esi
0x930FA9: mov     byte ptr [eax], 1
0x930FAC: pop     ebx
0x930FAD: mov     esp, ebp
0x930FAF: pop     ebp
0x930FB0: retn
