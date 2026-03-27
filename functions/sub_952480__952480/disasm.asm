0x952480: push    ebp
0x952481: mov     ebp, esp
0x952483: and     esp, 0FFFFFFF0h
0x952486: sub     esp, 44h
0x952489: push    ebx
0x95248A: push    esi
0x95248B: mov     esi, ecx
0x95248D: mov     eax, [esi+6Ch]
0x952490: mov     eax, [eax]
0x952492: push    edi
0x952493: or      edi, 0FFFFFFFFh
0x952496: cmp     eax, 4; switch 5 cases
0x952499: ja      def_9524A2
0x95249F: mov     ebx, [ebp+arg_0]
0x9524A2: jmp     ds:jpt_9524A2[eax*4]; switch jump
0x9524A9: mov     eax, [esi+68h]; jumptable 009524A2 case 4
0x9524AC: movaps  xmm1, xmmword ptr [eax+10h]
0x9524B0: movaps  xmm0, xmmword ptr [eax]
0x9524B3: movaps  xmm2, xmmword ptr [eax+20h]
0x9524B7: subps   xmm0, xmm1
0x9524BA: movaps  xmm1, xmmword ptr [eax+10h]
0x9524BE: subps   xmm1, xmm2
0x9524C1: movaps  xmm2, xmm1
0x9524C4: shufps  xmm2, xmm1, 0C9h ; 'É'
0x9524C8: movaps  xmm3, xmm0
0x9524CB: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x9524CF: mulps   xmm3, xmm2
0x9524D2: movaps  xmm2, xmm1
0x9524D5: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x9524D9: movaps  xmm1, xmm0
0x9524DC: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9524E0: mulps   xmm1, xmm2
0x9524E3: subps   xmm1, xmm3
0x9524E6: movaps  xmm0, xmm1
0x9524E9: mulps   xmm0, xmm1
0x9524EC: movaps  xmm2, xmm0
0x9524EF: shufps  xmm2, xmm0, 55h ; 'U'
0x9524F3: addss   xmm2, xmm0
0x9524F7: movaps  xmm3, xmm0
0x9524FA: movaps  [esp+50h+var_10], xmm1
0x9524FF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x952503: movaps  xmm0, xmmword ptr [eax]
0x952506: addss   xmm3, xmm2
0x95250A: movaps  xmm2, xmmword ptr [eax+30h]
0x95250E: subps   xmm2, xmm0
0x952511: movaps  xmm0, xmm2
0x952514: mulps   xmm0, xmm1
0x952517: movaps  xmm1, xmm0
0x95251A: shufps  xmm1, xmm0, 55h ; 'U'
0x95251E: movaps  xmm2, xmm0
0x952521: addss   xmm1, xmm0
0x952525: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x952529: lea     edx, [esp+50h+var_3C]
0x95252D: addss   xmm2, xmm1
0x952531: movss   dword ptr [edx], xmm2
0x952535: fld     [esp+50h+var_3C]
0x952539: fmul    [esp+50h+var_3C]
0x95253D: lea     ecx, [esp+50h+var_38]
0x952541: movss   dword ptr [ecx], xmm3
0x952545: fld     [esp+50h+var_38]
0x952549: fmul    dword ptr [esi+50h]
0x95254C: fcompp
0x95254E: fnstsw  ax
0x952550: test    ah, 1
0x952553: jnz     loc_9529B2
0x952559: cmp     edi, 3
0x95255C: jge     loc_95299B
0x952562: mov     eax, [esi+6Ch]
0x952565: dec     dword ptr [eax]
0x952567: mov     eax, [esi+68h]; jumptable 009524A2 case 3
0x95256A: fld     dword ptr ds:0A2FAA8h
0x952570: movaps  xmm1, xmmword ptr [eax+10h]
0x952574: movaps  xmm0, xmmword ptr [eax]
0x952577: movaps  xmm2, xmmword ptr [eax+20h]
0x95257B: subps   xmm0, xmm1
0x95257E: movaps  xmm1, xmmword ptr [eax+10h]
0x952582: subps   xmm1, xmm2
0x952585: movaps  xmm2, xmm1
0x952588: shufps  xmm2, xmm1, 0C9h ; 'É'
0x95258C: movaps  xmm3, xmm0
0x95258F: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x952593: mulps   xmm3, xmm2
0x952596: movaps  xmm2, xmm1
0x952599: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x95259D: movaps  xmm1, xmm0
0x9525A0: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9525A4: mulps   xmm1, xmm2
0x9525A7: subps   xmm1, xmm3
0x9525AA: movaps  xmm0, xmm1
0x9525AD: mulps   xmm0, xmm1
0x9525B0: movaps  xmm2, xmm0
0x9525B3: shufps  xmm2, xmm0, 55h ; 'U'
0x9525B7: movaps  xmm3, xmm0
0x9525BA: lea     eax, [esp+50h+var_34]
0x9525BE: addss   xmm2, xmm0
0x9525C2: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9525C6: addss   xmm3, xmm2
0x9525CA: movss   dword ptr [eax], xmm3
0x9525CE: fld     [esp+50h+var_34]
0x9525D2: fucompp
0x9525D4: movaps  [esp+50h+var_10], xmm1
0x9525D9: fnstsw  ax
0x9525DB: test    ah, 44h
0x9525DE: jp      loc_9526BA
0x9525E4: cmp     edi, 2
0x9525E7: jge     loc_952808
0x9525ED: mov     eax, [esi+6Ch]
0x9525F0: dec     dword ptr [eax]
0x9525F2: mov     eax, [esi+68h]; jumptable 009524A2 case 2
0x9525F5: movaps  xmm1, xmmword ptr [eax+10h]
0x9525F9: movaps  xmm0, xmmword ptr [eax]
0x9525FC: subps   xmm0, xmm1
0x9525FF: mulps   xmm0, xmm0
0x952602: movaps  xmm1, xmm0
0x952605: shufps  xmm1, xmm0, 55h ; 'U'
0x952609: movaps  xmm2, xmm0
0x95260C: addss   xmm1, xmm0
0x952610: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x952614: lea     ecx, [esp+50h+var_30]
0x952618: addss   xmm2, xmm1
0x95261C: movss   dword ptr [ecx], xmm2
0x952620: fld     [esp+50h+var_30]
0x952624: fcomp   dword ptr [esi+50h]
0x952627: fnstsw  ax
0x952629: test    ah, 41h
0x95262C: jp      short loc_9526A9
0x95262E: cmp     edi, 1
0x952631: jge     loc_9527F1
0x952637: mov     eax, [esi+6Ch]
0x95263A: dec     dword ptr [eax]
0x95263C: mov     eax, [esi+68h]; jumptable 009524A2 case 1
0x95263F: movaps  xmm0, xmmword ptr [eax]
0x952642: mulps   xmm0, xmm0
0x952645: movaps  xmm1, xmm0
0x952648: shufps  xmm1, xmm0, 55h ; 'U'
0x95264C: movaps  xmm2, xmm0
0x95264F: addss   xmm1, xmm0
0x952653: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x952657: lea     edx, [esp+50h+var_2C]
0x95265B: addss   xmm2, xmm1
0x95265F: movss   dword ptr [edx], xmm2
0x952663: fld     [esp+50h+var_2C]
0x952667: fcomp   dword ptr [esi+50h]
0x95266A: fnstsw  ax
0x95266C: test    ah, 41h
0x95266F: jp      short loc_952698
0x952671: test    edi, edi
0x952673: jge     loc_95299B
0x952679: mov     eax, [esi+6Ch]
0x95267C: dec     dword ptr [eax]
0x95267E: push    ebx; jumptable 009524A2 case 0
0x95267F: lea     eax, [esp+54h+var_3D]
0x952683: push    eax
0x952684: mov     ecx, esi
0x952686: call    sub_951EE0
0x95268B: cmp     byte ptr [eax], 0
0x95268E: jnz     loc_9527DA
0x952694: xor     edi, edi
0x952696: jmp     short loc_95263C; jumptable 009524A2 case 1
0x952698: mov     ecx, esi
0x95269A: mov     edi, 1
0x95269F: call    sub_952050
0x9526A4: jmp     loc_9525F2; jumptable 009524A2 case 2
0x9526A9: mov     ecx, esi
0x9526AB: mov     edi, 2
0x9526B0: call    sub_952190
0x9526B5: jmp     loc_952567; jumptable 009524A2 case 3
0x9526BA: movaps  xmm0, xmm1
0x9526BD: mulps   xmm0, xmm1
0x9526C0: movaps  xmm2, xmm0
0x9526C3: shufps  xmm2, xmm0, 55h ; 'U'
0x9526C7: addss   xmm2, xmm0
0x9526CB: movaps  xmm3, xmm0
0x9526CE: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9526D2: movaps  xmm0, xmm3
0x9526D5: addss   xmm0, xmm2
0x9526D9: movaps  [esp+50h+var_20], xmm0
0x9526DE: rsqrtss xmm2, xmm0
0x9526E2: movss   dword ptr [esp+50h+var_20], xmm2
0x9526E8: movaps  xmm2, [esp+50h+var_20]
0x9526ED: mulss   xmm0, xmm2
0x9526F1: mulss   xmm0, xmm2
0x9526F5: mov     [esp+50h+var_28], 40400000h
0x9526FD: movss   xmm3, [esp+50h+var_28]
0x952703: subss   xmm3, xmm0
0x952707: mov     [esp+50h+var_24], 3F000000h
0x95270F: movss   xmm0, [esp+50h+var_24]
0x952715: mulss   xmm0, xmm2
0x952719: mulss   xmm0, xmm3
0x95271D: lea     ecx, [esp+50h+var_10]
0x952721: movaps  xmm2, xmm0
0x952724: shufps  xmm2, xmm0, 0
0x952728: push    ecx
0x952729: mulps   xmm2, xmm1
0x95272C: mov     ecx, esi
0x95272E: mov     edi, 3
0x952733: movaps  [esp+54h+var_10], xmm2
0x952738: call    sub_9523F0
0x95273D: cmp     eax, 1
0x952740: jnz     loc_9524A9; jumptable 009524A2 case 4
0x952746: movaps  xmm0, [esp+50h+var_10]
0x95274B: mov     dword ptr [ebx+20h], 0
0x952752: movaps  xmmword ptr [ebx], xmm0
0x952755: mov     eax, [esi+68h]
0x952758: lea     ecx, [esp+50h+var_20]
0x95275C: push    ecx
0x95275D: lea     edx, [eax+20h]
0x952760: push    edx
0x952761: lea     ecx, [eax+10h]
0x952764: push    ecx
0x952765: push    eax
0x952766: push    offset stru_BA7A40
0x95276B: call    sub_8D1700
0x952770: mov     edx, dword ptr [esp+64h+var_20]
0x952774: mov     eax, dword ptr [esp+64h+var_20+4]
0x952778: mov     esi, [esi+60h]
0x95277B: mov     ecx, dword ptr [esp+64h+var_20+8]
0x95277F: movaps  xmm3, xmmword ptr [esi+20h]
0x952783: mov     [esp+64h+var_24], edx
0x952787: movss   xmm0, [esp+64h+var_24]
0x95278D: mov     [esp+64h+var_24], eax
0x952791: movss   xmm1, [esp+64h+var_24]
0x952797: mov     [esp+64h+var_24], ecx
0x95279B: movss   xmm2, [esp+64h+var_24]
0x9527A1: movaps  xmm4, xmm2
0x9527A4: shufps  xmm4, xmm2, 0
0x9527A8: movaps  xmm2, xmmword ptr [esi+10h]
0x9527AC: mulps   xmm4, xmm3
0x9527AF: movaps  xmm3, xmm1
0x9527B2: shufps  xmm3, xmm1, 0
0x9527B6: movaps  xmm1, xmmword ptr [esi]
0x9527B9: mulps   xmm3, xmm2
0x9527BC: movaps  xmm2, xmm0
0x9527BF: shufps  xmm2, xmm0, 0
0x9527C3: mulps   xmm2, xmm1
0x9527C6: addps   xmm2, xmm3
0x9527C9: addps   xmm2, xmm4
0x9527CC: add     esp, 14h
0x9527CF: movaps  xmmword ptr [ebx+10h], xmm2
0x9527D3: mov     dword ptr [ebx+24h], 3F000000h
0x9527DA: mov     edx, [ebp+arg_4]
0x9527DD: mov     dword ptr [edx], 0
0x9527E3: mov     eax, 1
0x9527E8: pop     edi
0x9527E9: pop     esi
0x9527EA: pop     ebx
0x9527EB: mov     esp, ebp
0x9527ED: pop     ebp
0x9527EE: retn    8
0x9527F1: mov     ecx, [ebp+arg_4]
0x9527F4: mov     dword ptr [ecx], 3
0x9527FA: mov     eax, 1
0x9527FF: pop     edi
0x952800: pop     esi
0x952801: pop     ebx
0x952802: mov     esp, ebp
0x952804: pop     ebp
0x952805: retn    8
0x952808: xor     edx, edx
0x95280A: mov     [ebx+20h], edx
0x95280D: mov     eax, [esi+68h]
0x952810: movaps  xmm0, xmmword ptr [eax+10h]
0x952814: movaps  xmm1, xmmword ptr [eax]
0x952817: subps   xmm1, xmm0
0x95281A: movaps  [esp+50h+var_20], xmm1
0x95281F: fld     dword ptr [esp+50h+var_20]
0x952823: fabs
0x952825: mov     ecx, 1
0x95282A: fld     dword ptr [esp+50h+var_20+4]
0x95282E: fabs
0x952830: mov     edi, 2
0x952835: fst     [esp+50h+var_24]
0x952839: fld     dword ptr [esp+50h+var_20+8]
0x95283D: fabs
0x95283F: fstp    [esp+50h+var_28]
0x952843: fcomp   st(1)
0x952845: fnstsw  ax
0x952847: test    ah, 5
0x95284A: jp      short loc_952859
0x95284C: fstp    st
0x95284E: xor     ecx, ecx
0x952850: fld     [esp+50h+var_24]
0x952854: mov     edx, 1
0x952859: fld     [esp+50h+var_28]
0x95285D: fcomp   st(1)
0x95285F: fnstsw  ax
0x952861: fstp    st
0x952863: test    ah, 5
0x952866: jp      short loc_95286F
0x952868: mov     edi, edx
0x95286A: mov     edx, 2
0x95286F: fld     dword ptr [esp+ecx*4+50h+var_20]
0x952873: mov     dword ptr [ebx+edx*4], 0
0x95287A: mov     edx, dword ptr [esp+edi*4+50h+var_20]
0x95287E: fchs
0x952880: mov     dword ptr [ebx+0Ch], 0
0x952887: mov     [ebx+ecx*4], edx
0x95288A: fstp    dword ptr [ebx+edi*4]
0x95288D: movaps  xmm1, xmmword ptr [ebx]
0x952890: movaps  xmm0, xmm1
0x952893: mulps   xmm0, xmm1
0x952896: movaps  xmm2, xmm0
0x952899: shufps  xmm2, xmm0, 55h ; 'U'
0x95289D: addss   xmm2, xmm0
0x9528A1: movaps  xmm3, xmm0
0x9528A4: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9528A8: movaps  xmm0, xmm3
0x9528AB: addss   xmm0, xmm2
0x9528AF: movaps  [esp+50h+var_20], xmm0
0x9528B4: rsqrtss xmm2, xmm0
0x9528B8: movss   dword ptr [esp+50h+var_20], xmm2
0x9528BE: movaps  xmm2, [esp+50h+var_20]
0x9528C3: mulss   xmm0, xmm2
0x9528C7: mulss   xmm0, xmm2
0x9528CB: mov     [esp+50h+var_24], 40400000h
0x9528D3: movss   xmm3, [esp+50h+var_24]
0x9528D9: subss   xmm3, xmm0
0x9528DD: mov     [esp+50h+var_24], 3F000000h
0x9528E5: movss   xmm0, [esp+50h+var_24]
0x9528EB: mulss   xmm0, xmm2
0x9528EF: mulss   xmm0, xmm3
0x9528F3: movaps  xmm2, xmm0
0x9528F6: shufps  xmm2, xmm0, 0
0x9528FA: mulps   xmm2, xmm1
0x9528FD: movaps  xmmword ptr [ebx], xmm2
0x952900: mov     eax, [esi+68h]
0x952903: movaps  xmm0, xmmword ptr [eax]
0x952906: movaps  xmm1, xmmword ptr ds:0A372D0h
0x95290D: andps   xmm0, xmm1
0x952910: movaps  xmm1, xmm0
0x952913: shufps  xmm1, xmm0, 55h ; 'U'
0x952917: addss   xmm1, xmm0
0x95291B: movaps  xmm2, xmm0
0x95291E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x952922: movaps  xmm0, xmm2
0x952925: addss   xmm0, xmm1
0x952929: lea     edx, [esp+50h+var_24]
0x95292D: movss   dword ptr [edx], xmm0
0x952931: fld     [esp+50h+var_24]
0x952935: lea     ecx, [esp+50h+var_3C]
0x952939: movss   dword ptr [ecx], xmm0
0x95293D: fadd    [esp+50h+var_3C]
0x952941: mov     esi, [esi+60h]
0x952944: movaps  xmm1, xmmword ptr [esi+10h]
0x952948: fadd    dword ptr ds:0AA3384h
0x95294E: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x952955: mov     eax, [ebp+arg_4]
0x952958: fdivr   [esp+50h+var_3C]
0x95295C: fstp    [esp+50h+var_24]
0x952960: movss   xmm0, [esp+50h+var_24]
0x952966: shufps  xmm0, xmm0, 0
0x95296A: movaps  xmm2, xmm0
0x95296D: mulps   xmm2, xmm1
0x952970: movaps  xmm1, xmmword ptr [esi]
0x952973: subps   xmm3, xmm0
0x952976: mulps   xmm3, xmm1
0x952979: addps   xmm3, xmm2
0x95297C: movaps  xmmword ptr [ebx+10h], xmm3
0x952980: mov     dword ptr [ebx+24h], 3F000000h
0x952987: mov     dword ptr [eax], 0
0x95298D: mov     eax, 1
0x952992: pop     edi
0x952993: pop     esi
0x952994: pop     ebx
0x952995: mov     esp, ebp
0x952997: pop     ebp
0x952998: retn    8
0x95299B: mov     eax, [ebp+arg_4]
0x95299E: mov     dword ptr [eax], 3
0x9529A4: mov     eax, 1
0x9529A9: pop     edi
0x9529AA: pop     esi
0x9529AB: pop     ebx
0x9529AC: mov     esp, ebp
0x9529AE: pop     ebp
0x9529AF: retn    8
0x9529B2: mov     ecx, [ebp+arg_4]
0x9529B5: mov     dword ptr [ecx], 0
0x9529BB: xor     eax, eax
0x9529BD: pop     edi
0x9529BE: pop     esi
0x9529BF: pop     ebx
0x9529C0: mov     esp, ebp
0x9529C2: pop     ebp
0x9529C3: retn    8
