0x932250: push    ebp
0x932251: mov     ebp, esp
0x932253: and     esp, 0FFFFFFF0h
0x932256: sub     esp, 0E44h
0x93225C: mov     eax, [ebp+arg_C]
0x93225F: push    ebx
0x932260: mov     ebx, [ebp+arg_4]
0x932263: mov     ecx, [ebx]
0x932265: push    esi
0x932266: mov     esi, [ebp+arg_0]
0x932269: push    edi
0x93226A: mov     edi, [ebp+arg_8]
0x93226D: push    eax; int
0x93226E: push    edi; int
0x93226F: mov     [eax], ecx
0x932271: mov     edx, [esi+8]
0x932274: push    ebx; int
0x932275: push    edx; float
0x932276: lea     eax, [esp+0E60h+var_DF1]
0x93227A: push    eax; int
0x93227B: call    sub_92CE60
0x932280: mov     cl, [eax]
0x932282: add     esp, 14h
0x932285: test    cl, cl
0x932287: jnz     loc_932CA3
0x93228D: mov     ecx, [ebx]
0x93228F: lea     edx, [esp+0E50h+var_D64]
0x932296: lea     eax, [esp+0E50h+var_DB4+4]
0x93229D: push    eax
0x93229E: mov     [esp+0E54h+var_E00], ecx
0x9322A2: mov     ecx, edx
0x9322A4: push    ecx
0x9322A5: push    edi
0x9322A6: push    ebx
0x9322A7: mov     [esp+0E60h+var_D70], edx
0x9322AE: mov     [esp+0E60h+var_D68], 80000001h
0x9322B9: mov     [esp+0E60h+var_D6C], 1
0x9322C4: call    sub_92D6D0
0x9322C9: mov     edx, dword ptr [esp+0E60h+var_DB4+4]
0x9322D0: mov     eax, dword ptr [esp+0E60h+var_DB4+8]
0x9322D7: mov     edi, [edi+8]
0x9322DA: mov     ecx, dword ptr [esp+0E60h+var_DB4+0Ch]
0x9322E1: mov     dword ptr [esp+0E60h+var_DA4+4], edx
0x9322E8: mov     edx, dword ptr [esp+0E60h+var_DA4]
0x9322EF: mov     dword ptr [esp+0E60h+var_D94], edx
0x9322F6: mov     edx, [ebx+8]
0x9322F9: mov     dword ptr [esp+0E60h+var_DA4+8], eax
0x932300: lea     eax, [esp+0E60h+var_D34]
0x932307: lea     edi, [edx+edi+2]
0x93230B: mov     edx, [esi+20h]
0x93230E: mov     [esp+0E60h+var_D40], eax
0x932315: xor     eax, eax
0x932317: lea     esi, [esp+0E60h+var_804]
0x93231E: mov     [esp+0E60h+var_DBC], edx
0x932325: lea     edx, [edi+edi*2]
0x932328: mov     dword ptr [esp+0E60h+var_DA4+0Ch], ecx
0x93232F: mov     [esp+0E60h+var_D3C], eax
0x932336: mov     [esp+0E60h+var_810], esi
0x93233D: mov     [esp+0E60h+var_80C], eax
0x932344: add     esp, 10h
0x932347: test    edx, edx
0x932349: mov     ecx, 80000040h
0x93234E: mov     eax, 80000080h
0x932353: lea     esi, [esp+0E50h+var_D70]
0x93235A: mov     [esp+0E50h+var_D38], ecx
0x932361: mov     [esp+0E50h+var_DDC], edi
0x932365: mov     dword ptr [esp+0E50h+var_DB4], edx
0x93236C: mov     [esp+0E50h+var_808], eax
0x932373: mov     dword ptr [esp+0E50h+var_E34], esi
0x932377: mov     [esp+0E50h+var_DFC], 0
0x93237F: jle     loc_932B5B
0x932385: mov     eax, large fs:2Ch
0x93238B: mov     ecx, ds:0BA9DE4h
0x932391: mov     edx, [eax+ecx*4]
0x932394: mov     [esp+0E50h+var_DF8], edx
0x932398: cmp     [esp+0E50h+var_DFC], edi
0x93239C: jle     short loc_9323C4
0x93239E: fld     [esp+0E50h+var_DBC]
0x9323A5: fmul    dword ptr ds:0A56E28h
0x9323AB: fst     [esp+0E50h+var_DBC]
0x9323B2: fcomp   dword ptr ds:0A2F948h
0x9323B8: fnstsw  ax
0x9323BA: test    ah, 41h
0x9323BD: jnz     short loc_9323C4
0x9323BF: inc     edi
0x9323C0: mov     [esp+0E50h+var_DDC], edi
0x9323C4: mov     eax, [esp+0E50h+var_DF8]
0x9323C8: mov     ecx, [eax+19Ch]
0x9323CE: mov     esi, [ecx+20h]
0x9323D1: mov     edx, [ecx+2Ch]
0x9323D4: lea     eax, [esi+150h]
0x9323DA: cmp     eax, edx
0x9323DC: ja      short loc_9323E7
0x9323DE: mov     [ecx+20h], eax
0x9323E1: mov     [esp+0E50h+var_E38], esi
0x9323E5: jmp     short loc_9323F7
0x9323E7: mov     edx, [ecx]
0x9323E9: push    150h
0x9323EE: call    dword ptr [edx+0Ch]
0x9323F1: mov     [esp+0E50h+var_E38], eax
0x9323F5: mov     esi, eax
0x9323F7: xor     ecx, ecx
0x9323F9: cmp     esi, ecx
0x9323FB: jz      short loc_93240C
0x9323FD: lea     eax, [esi+0Ch]
0x932400: mov     [esi], eax
0x932402: mov     [esi+4], ecx
0x932405: mov     dword ptr [esi+8], 80000010h
0x93240C: mov     edx, [esp+0E50h+var_D38]
0x932413: mov     eax, [esp+0E50h+var_D3C]
0x93241A: and     edx, 3FFFFFFFh
0x932420: cmp     eax, edx
0x932422: jnz     short loc_932438
0x932424: lea     eax, [esp+0E50h+var_D40]
0x93242B: push    4
0x93242D: push    eax
0x93242E: call    sub_8A6EE0
0x932433: add     esp, 8
0x932436: xor     ecx, ecx
0x932438: mov     eax, [esp+0E50h+var_D3C]
0x93243F: mov     edx, [esp+0E50h+var_D40]
0x932446: mov     [edx+eax*4], esi
0x932449: inc     [esp+0E50h+var_D3C]
0x932450: mov     edx, dword ptr [esp+0E50h+var_E34]
0x932454: cmp     [edx+4], ecx
0x932457: mov     [esp+0E50h+var_DD8], ecx
0x93245B: jle     loc_932B04
0x932461: mov     [esp+0E50h+var_E04], ecx
0x932465: mov     eax, dword ptr [esp+0E50h+var_E34]
0x932469: mov     esi, [eax]
0x93246B: mov     edx, [esp+0E50h+var_E04]
0x93246F: mov     ebx, [esp+0E50h+var_E00]
0x932473: add     esi, edx
0x932475: lea     edx, [esp+0E50h+var_A14]
0x93247C: mov     [esp+0E50h+var_A20], edx
0x932483: mov     [esp+0E50h+var_A1C], ecx
0x93248A: mov     eax, 80000040h
0x93248F: mov     [esp+0E50h+var_A18], eax
0x932496: mov     [esp+0E50h+var_C2C], ecx
0x93249D: mov     [esp+0E50h+var_C28], eax
0x9324A4: lea     edx, [esp+0E50h+var_C24]
0x9324AB: mov     [esp+0E50h+var_C30], edx
0x9324B2: mov     eax, [esi]
0x9324B4: movzx   edi, word ptr [eax]
0x9324B7: mov     eax, [esi+4]
0x9324BA: mov     edx, [esp+0E50h+var_E00]
0x9324BE: shl     edi, 4
0x9324C1: add     edi, ebx
0x9324C3: movzx   ebx, word ptr [eax]
0x9324C6: mov     eax, [esi+8]
0x9324C9: shl     ebx, 4
0x9324CC: add     ebx, edx
0x9324CE: test    eax, eax
0x9324D0: jz      loc_9329B5
0x9324D6: mov     ecx, eax
0x9324D8: mov     eax, [ecx]
0x9324DA: mov     ecx, [ecx+4]
0x9324DD: movzx   eax, word ptr [eax]
0x9324E0: movzx   ecx, word ptr [ecx]
0x9324E3: shl     eax, 4
0x9324E6: shl     ecx, 4
0x9324E9: add     eax, edx
0x9324EB: add     ecx, edx
0x9324ED: cmp     eax, edi
0x9324EF: mov     edx, ebx
0x9324F1: jz      short loc_9324F5
0x9324F3: mov     edx, edi
0x9324F5: fld     dword ptr [ecx]
0x9324F7: mov     [esp+0E50h+var_DC4], 40400000h
0x932502: fsub    dword ptr [eax]
0x932504: fstp    [esp+0E50h+var_DF1+1]
0x932508: fld     dword ptr [ecx+4]
0x93250B: fsub    dword ptr [eax+4]
0x93250E: fstp    [esp+0E50h+anonymous_0]
0x932512: fld     dword ptr [ecx+8]
0x932515: fsub    dword ptr [eax+8]
0x932518: fstp    [esp+0E50h+anonymous_1]
0x93251C: fld     dword ptr [ecx+0Ch]
0x93251F: fsub    dword ptr [eax+0Ch]
0x932522: fstp    [esp+0E50h+anonymous_2]
0x932526: movaps  xmm4, xmmword ptr [esp+0E50h+var_DF1+1]
0x93252B: fld     dword ptr [edx]
0x93252D: movaps  xmm0, xmm4
0x932530: fsub    dword ptr [eax]
0x932532: mulps   xmm0, xmm4
0x932535: movaps  xmm1, xmm0
0x932538: shufps  xmm1, xmm0, 55h ; 'U'
0x93253C: addss   xmm1, xmm0
0x932540: fstp    dword ptr [esp+0E50h+var_E34+4]
0x932544: fld     dword ptr [edx+4]
0x932547: movaps  xmm2, xmm0
0x93254A: fsub    dword ptr [eax+4]
0x93254D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x932551: movaps  xmm0, xmm2
0x932554: movss   xmm2, [esp+0E50h+var_DC4]
0x93255D: addss   xmm0, xmm1
0x932561: fstp    dword ptr [esp+0E50h+var_E34+8]
0x932565: fld     dword ptr [edx+8]
0x932568: movaps  [esp+0E50h+var_E24+4], xmm0
0x93256D: fsub    dword ptr [eax+8]
0x932570: rsqrtss xmm1, xmm0
0x932574: movss   dword ptr [esp+0E50h+var_E24+4], xmm1
0x93257A: movaps  xmm1, [esp+0E50h+var_E24+4]
0x93257F: mulss   xmm0, xmm1
0x932583: fstp    dword ptr [esp+0E50h+var_E34+0Ch]
0x932587: fld     dword ptr [edx+0Ch]
0x93258A: mulss   xmm0, xmm1
0x93258E: fsub    dword ptr [eax+0Ch]
0x932591: mov     [esp+0E50h+var_DC8], 3F000000h
0x93259C: movss   xmm3, [esp+0E50h+var_DC8]
0x9325A5: movaps  xmm5, xmm2
0x9325A8: subss   xmm5, xmm0
0x9325AC: fstp    dword ptr [esp+0E50h+var_E24]
0x9325B0: movaps  xmm0, xmm3
0x9325B3: mulss   xmm0, xmm1
0x9325B7: mulss   xmm0, xmm5
0x9325BB: movaps  xmm5, [esp+0E50h+var_E34+4]
0x9325C0: movaps  xmm1, xmm0
0x9325C3: shufps  xmm1, xmm0, 0
0x9325C7: mulps   xmm1, xmm4
0x9325CA: movaps  xmm0, xmm5
0x9325CD: mulps   xmm0, xmm5
0x9325D0: movaps  xmm4, xmm0
0x9325D3: shufps  xmm4, xmm0, 55h ; 'U'
0x9325D7: addss   xmm4, xmm0
0x9325DB: movaps  xmm6, xmm0
0x9325DE: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x9325E2: movaps  xmm0, xmm6
0x9325E5: addss   xmm0, xmm4
0x9325E9: movaps  [esp+0E50h+var_E24+4], xmm0
0x9325EE: rsqrtss xmm4, xmm0
0x9325F2: movss   dword ptr [esp+0E50h+var_E24+4], xmm4
0x9325F8: movaps  xmm4, [esp+0E50h+var_E24+4]
0x9325FD: mulss   xmm0, xmm4
0x932601: mulss   xmm0, xmm4
0x932605: movaps  xmm6, xmm2
0x932608: subss   xmm6, xmm0
0x93260C: movaps  xmm0, xmm3
0x93260F: mulss   xmm0, xmm4
0x932613: mulss   xmm0, xmm6
0x932617: movaps  xmm4, xmm0
0x93261A: shufps  xmm4, xmm0, 0
0x93261E: movaps  xmm0, xmm4
0x932621: mulps   xmm0, xmm5
0x932624: movaps  xmm4, xmm1
0x932627: movaps  xmmword ptr [esp+0E50h+var_DF1+1], xmm1
0x93262C: movaps  [esp+0E50h+var_E34+4], xmm0
0x932631: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x932635: movaps  xmm5, xmm1
0x932638: shufps  xmm5, xmm1, 0C9h ; 'É'
0x93263C: movaps  xmm1, xmm0
0x93263F: shufps  xmm1, xmm0, 0C9h ; 'É'
0x932643: movaps  xmm6, xmm4
0x932646: mulps   xmm6, xmm1
0x932649: movaps  xmm1, xmm0
0x93264C: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x932650: movaps  xmm0, xmm5
0x932653: mulps   xmm0, xmm1
0x932656: subps   xmm0, xmm6
0x932659: movaps  xmm1, xmm0
0x93265C: mulps   xmm1, xmm0
0x93265F: movaps  xmm6, xmm1
0x932662: shufps  xmm6, xmm1, 55h ; 'U'
0x932666: movaps  xmm7, xmm1
0x932669: lea     eax, [esp+0E50h+var_DC0]
0x932670: addss   xmm6, xmm1
0x932674: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x932678: addss   xmm7, xmm6
0x93267C: movss   dword ptr [eax], xmm7
0x932680: fld     [esp+0E50h+var_DC0]
0x932687: fcomp   dword ptr ds:0A372CCh
0x93268D: fnstsw  ax
0x93268F: test    ah, 5
0x932692: jp      loc_932962
0x932698: fld     dword ptr [edx]
0x93269A: fsub    dword ptr [ecx]
0x93269C: fstp    dword ptr [esp+0E50h+var_E34+4]
0x9326A0: fld     dword ptr [edx+4]
0x9326A3: fsub    dword ptr [ecx+4]
0x9326A6: fstp    dword ptr [esp+0E50h+var_E34+8]
0x9326AA: fld     dword ptr [edx+8]
0x9326AD: fsub    dword ptr [ecx+8]
0x9326B0: fstp    dword ptr [esp+0E50h+var_E34+0Ch]
0x9326B4: fld     dword ptr [edx+0Ch]
0x9326B7: fsub    dword ptr [ecx+0Ch]
0x9326BA: lea     ecx, [esp+0E50h+var_DD0]
0x9326C1: fstp    dword ptr [esp+0E50h+var_E24]
0x9326C5: movaps  xmm6, [esp+0E50h+var_E34+4]
0x9326CA: movaps  xmm0, xmm6
0x9326CD: mulps   xmm0, xmm6
0x9326D0: movaps  xmm1, xmm0
0x9326D3: shufps  xmm1, xmm0, 55h ; 'U'
0x9326D7: addss   xmm1, xmm0
0x9326DB: movaps  xmm7, xmm0
0x9326DE: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x9326E2: movaps  xmm0, xmm7
0x9326E5: addss   xmm0, xmm1
0x9326E9: movaps  [esp+0E50h+var_E24+4], xmm0
0x9326EE: rsqrtss xmm1, xmm0
0x9326F2: movss   dword ptr [esp+0E50h+var_E24+4], xmm1
0x9326F8: movaps  xmm1, [esp+0E50h+var_E24+4]
0x9326FD: mulss   xmm0, xmm1
0x932701: mulss   xmm0, xmm1
0x932705: movaps  xmm7, xmm2
0x932708: subss   xmm7, xmm0
0x93270C: movaps  xmm0, xmm3
0x93270F: mulss   xmm0, xmm1
0x932713: mulss   xmm0, xmm7
0x932717: movaps  xmm1, xmm0
0x93271A: shufps  xmm1, xmm0, 0
0x93271E: movaps  xmm0, xmm1
0x932721: mulps   xmm0, xmm6
0x932724: movaps  xmm1, xmm0
0x932727: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93272B: mulps   xmm4, xmm1
0x93272E: movaps  xmm1, xmm0
0x932731: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x932735: mulps   xmm5, xmm1
0x932738: movaps  [esp+0E50h+var_E34+4], xmm0
0x93273D: movaps  xmm0, xmm5
0x932740: subps   xmm0, xmm4
0x932743: movaps  xmm1, xmm0
0x932746: mulps   xmm1, xmm0
0x932749: movaps  xmm4, xmm1
0x93274C: shufps  xmm4, xmm1, 55h ; 'U'
0x932750: movaps  xmm5, xmm1
0x932753: addss   xmm4, xmm1
0x932757: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x93275B: addss   xmm5, xmm4
0x93275F: movss   dword ptr [ecx], xmm5
0x932763: fld     [esp+0E50h+var_DD0]
0x93276A: fcomp   dword ptr ds:0A372CCh
0x932770: fnstsw  ax
0x932772: test    ah, 5
0x932775: jp      loc_932962
0x93277B: fld     dword ptr [esp+0E50h+var_E34+4]
0x93277F: lea     edx, [esp+0E50h+var_DCC]
0x932786: fadd    [esp+0E50h+var_DF1+1]
0x93278A: fstp    dword ptr [esp+0E50h+var_D94+4]
0x932791: fld     dword ptr [esp+0E50h+var_E34+8]
0x932795: fadd    [esp+0E50h+anonymous_0]
0x932799: fstp    dword ptr [esp+0E50h+var_D94+8]
0x9327A0: fld     dword ptr [esp+0E50h+var_E34+0Ch]
0x9327A4: fadd    [esp+0E50h+anonymous_1]
0x9327A8: fstp    dword ptr [esp+0E50h+var_D94+0Ch]
0x9327AF: fld     dword ptr [esp+0E50h+var_E24]
0x9327B3: fadd    [esp+0E50h+anonymous_2]
0x9327B7: fstp    dword ptr [esp+0E50h+var_D84]
0x9327BE: fld     [esp+0E50h+var_DF1+1]
0x9327C2: fsub    dword ptr [esp+0E50h+var_E34+4]
0x9327C6: fstp    dword ptr [esp+0E50h+var_D84+4]
0x9327CD: fld     [esp+0E50h+anonymous_0]
0x9327D1: fsub    dword ptr [esp+0E50h+var_E34+8]
0x9327D5: fstp    dword ptr [esp+0E50h+var_D84+8]
0x9327DC: fld     [esp+0E50h+anonymous_1]
0x9327E0: fsub    dword ptr [esp+0E50h+var_E34+0Ch]
0x9327E4: fstp    dword ptr [esp+0E50h+var_D84+0Ch]
0x9327EB: fld     [esp+0E50h+anonymous_2]
0x9327EF: fsub    dword ptr [esp+0E50h+var_E24]
0x9327F3: fstp    [esp+0E50h+var_D74]
0x9327FA: movaps  xmm6, [esp+0E50h+var_D84+4]
0x932802: movaps  xmm4, xmm6
0x932805: mulps   xmm4, xmm6
0x932808: movaps  xmm0, xmm4
0x93280B: shufps  xmm0, xmm4, 55h ; 'U'
0x93280F: movaps  xmm1, xmm4
0x932812: addss   xmm0, xmm4
0x932816: shufps  xmm1, xmm4, 0AAh ; 'ª'
0x93281A: addss   xmm1, xmm0
0x93281E: movss   dword ptr [edx], xmm1
0x932822: fld     [esp+0E50h+var_DCC]
0x932829: fcomp   dword ptr ds:0A372CCh
0x93282F: fnstsw  ax
0x932831: test    ah, 5
0x932834: jnp     loc_93295A
0x93283A: movaps  xmm5, [esp+0E50h+var_D94+4]
0x932842: movaps  xmm0, xmm5
0x932845: mulps   xmm0, xmm5
0x932848: movaps  xmm1, xmm0
0x93284B: shufps  xmm1, xmm0, 55h ; 'U'
0x93284F: movaps  xmm7, xmm0
0x932852: lea     eax, [esp+0E50h+var_DD4]
0x932856: addss   xmm1, xmm0
0x93285A: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x93285E: addss   xmm7, xmm1
0x932862: movss   dword ptr [eax], xmm7
0x932866: fld     [esp+0E50h+var_DD4]
0x93286A: fcomp   dword ptr ds:0A372CCh
0x932870: fnstsw  ax
0x932872: test    ah, 5
0x932875: jnp     loc_93295A
0x93287B: movaps  xmm1, xmm0
0x93287E: shufps  xmm1, xmm0, 55h ; 'U'
0x932882: addss   xmm1, xmm0
0x932886: movaps  xmm7, xmm0
0x932889: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x93288D: movaps  xmm0, xmm7
0x932890: addss   xmm0, xmm1
0x932894: movaps  [esp+0E50h+var_E24+4], xmm0
0x932899: rsqrtss xmm1, xmm0
0x93289D: movss   dword ptr [esp+0E50h+var_E24+4], xmm1
0x9328A3: movaps  xmm1, [esp+0E50h+var_E24+4]
0x9328A8: mulss   xmm0, xmm1
0x9328AC: mulss   xmm0, xmm1
0x9328B0: movaps  xmm7, xmm2
0x9328B3: subss   xmm7, xmm0
0x9328B7: movaps  xmm0, xmm3
0x9328BA: mulss   xmm0, xmm1
0x9328BE: mulss   xmm0, xmm7
0x9328C2: movaps  xmm1, xmm0
0x9328C5: shufps  xmm1, xmm0, 0
0x9328C9: mulps   xmm1, xmm5
0x9328CC: movaps  xmm0, xmm4
0x9328CF: shufps  xmm0, xmm4, 55h ; 'U'
0x9328D3: addss   xmm0, xmm4
0x9328D7: movaps  xmm5, xmm0
0x9328DA: movaps  xmm0, xmm4
0x9328DD: shufps  xmm0, xmm4, 0AAh ; 'ª'
0x9328E1: addss   xmm0, xmm5
0x9328E5: movaps  [esp+0E50h+var_E24+4], xmm0
0x9328EA: rsqrtss xmm4, xmm0
0x9328EE: movss   dword ptr [esp+0E50h+var_E24+4], xmm4
0x9328F4: movaps  xmm4, [esp+0E50h+var_E24+4]
0x9328F9: mulss   xmm0, xmm4
0x9328FD: mulss   xmm0, xmm4
0x932901: movaps  xmm5, xmm2
0x932904: subss   xmm5, xmm0
0x932908: movaps  xmm0, xmm3
0x93290B: mulss   xmm0, xmm4
0x93290F: mulss   xmm0, xmm5
0x932913: movaps  xmm4, xmm0
0x932916: shufps  xmm4, xmm0, 0
0x93291A: movaps  xmm0, xmm4
0x93291D: mulps   xmm0, xmm6
0x932920: movaps  xmm5, xmm0
0x932923: movaps  xmm4, xmm1
0x932926: shufps  xmm4, xmm1, 0C9h ; 'É'
0x93292A: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x93292E: mulps   xmm5, xmm4
0x932931: movaps  xmm4, xmm1
0x932934: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x932938: movaps  [esp+0E50h+var_D94+4], xmm1
0x932940: movaps  xmm1, xmm0
0x932943: movaps  [esp+0E50h+var_D84+4], xmm0
0x93294B: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93294F: movaps  xmm0, xmm1
0x932952: mulps   xmm0, xmm4
0x932955: subps   xmm0, xmm5
0x932958: jmp     short loc_932962
0x93295A: movaps  xmm0, [esp+0E50h+var_DA4+4]
0x932962: movaps  xmm1, xmm0
0x932965: mulps   xmm1, xmm0
0x932968: movaps  xmm4, xmm1
0x93296B: shufps  xmm4, xmm1, 55h ; 'U'
0x93296F: addss   xmm4, xmm1
0x932973: movaps  xmm5, xmm1
0x932976: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x93297A: movaps  xmm1, xmm5
0x93297D: addss   xmm1, xmm4
0x932981: movaps  [esp+0E50h+var_E24+4], xmm1
0x932986: rsqrtss xmm4, xmm1
0x93298A: movss   dword ptr [esp+0E50h+var_E24+4], xmm4
0x932990: movaps  xmm4, [esp+0E50h+var_E24+4]
0x932995: mulss   xmm1, xmm4
0x932999: mulss   xmm1, xmm4
0x93299D: subss   xmm2, xmm1
0x9329A1: mulss   xmm3, xmm4
0x9329A5: mulss   xmm3, xmm2
0x9329A9: movaps  xmm1, xmm3
0x9329AC: shufps  xmm1, xmm3, 0
0x9329B0: mulps   xmm1, xmm0
0x9329B3: jmp     short loc_9329BD
0x9329B5: movaps  xmm1, [esp+0E50h+var_DB4+4]
0x9329BD: mov     eax, [esi]
0x9329BF: xor     edx, edx
0x9329C1: mov     dx, [esi+0Ch]
0x9329C5: lea     ecx, [esp+0E50h+var_A20]
0x9329CC: push    ecx
0x9329CD: mov     ecx, [ebp+arg_4]
0x9329D0: push    ebx
0x9329D1: push    edi
0x9329D2: push    eax
0x9329D3: push    edx
0x9329D4: mov     edx, [ebp+arg_0]
0x9329D7: lea     eax, [esp+0E64h+var_D54+4]
0x9329DE: push    eax
0x9329DF: push    ecx
0x9329E0: push    edx
0x9329E1: movaps  xmmword ptr [esp+0E70h+var_D54+4], xmm1
0x9329E9: movaps  [esp+0E70h+var_DA4+4], xmm1
0x9329F1: call    sub_931FD0
0x9329F6: mov     ecx, [esi+4]
0x9329F9: xor     edx, edx
0x9329FB: mov     dx, [esi+0Ch]
0x9329FF: lea     eax, [esp+0E70h+var_C30]
0x932A06: push    eax
0x932A07: push    ebx
0x932A08: push    edi
0x932A09: push    ecx
0x932A0A: mov     ecx, [ebp+arg_8]
0x932A0D: push    edx
0x932A0E: mov     edx, [ebp+arg_0]
0x932A11: lea     eax, [esp+0E84h+var_D54+4]
0x932A18: push    eax
0x932A19: push    ecx
0x932A1A: push    edx
0x932A1B: call    sub_931FD0
0x932A20: add     esp, 40h
0x932A23: lea     eax, [esp+0E50h+var_C30]
0x932A2A: push    eax; int
0x932A2B: xor     edx, edx
0x932A2D: mov     dx, [esi+0Ch]
0x932A31: lea     ecx, [esp+0E54h+var_A20]
0x932A38: push    ecx; float
0x932A39: mov     ecx, [ebp+arg_8]
0x932A3C: push    ebx; int
0x932A3D: push    edi; int
0x932A3E: push    esi; int
0x932A3F: push    edx; __int16
0x932A40: mov     edx, [ecx]
0x932A42: lea     eax, [esp+0E68h+var_D54+4]
0x932A49: push    eax; int
0x932A4A: mov     eax, [ebp+arg_0]
0x932A4D: push    edx; int
0x932A4E: push    eax; int
0x932A4F: call    sub_9313E0
0x932A54: mov     ecx, [esp+0E74h+var_E38]
0x932A58: push    ecx
0x932A59: lea     edx, [esp+0E78h+var_C30]
0x932A60: push    edx
0x932A61: lea     eax, [esp+0E7Ch+var_A20]
0x932A68: push    eax
0x932A69: lea     ecx, [esp+0E80h+var_DBC]
0x932A70: push    esi
0x932A71: push    ecx
0x932A72: call    sub_92EF10
0x932A77: mov     eax, [esp+0E88h+var_C28]
0x932A7E: add     esp, 38h
0x932A81: test    eax, eax
0x932A83: js      short loc_932AA7
0x932A85: mov     edx, [esp+0E50h+var_C30]
0x932A8C: and     eax, 3FFFFFFFh
0x932A91: push    14h
0x932A93: shl     eax, 3
0x932A96: push    eax
0x932A97: mov     eax, [esp+0E58h+var_DF8]
0x932A9B: mov     ecx, [eax+19Ch]
0x932AA1: push    edx
0x932AA2: call    sub_8A75D0
0x932AA7: mov     eax, [esp+0E50h+var_A18]
0x932AAE: test    eax, eax
0x932AB0: js      short loc_932AD4
0x932AB2: mov     ecx, [esp+0E50h+var_A20]
0x932AB9: mov     edx, [esp+0E50h+var_DF8]
0x932ABD: and     eax, 3FFFFFFFh
0x932AC2: push    14h
0x932AC4: shl     eax, 3
0x932AC7: push    eax
0x932AC8: push    ecx
0x932AC9: mov     ecx, [edx+19Ch]
0x932ACF: call    sub_8A75D0
0x932AD4: mov     eax, [esp+0E50h+var_DD8]
0x932AD8: mov     ecx, dword ptr [esp+0E50h+var_E34]
0x932ADC: mov     esi, [esp+0E50h+var_E04]
0x932AE0: mov     edx, [ecx+4]
0x932AE3: inc     eax
0x932AE4: add     esi, 14h
0x932AE7: xor     ecx, ecx
0x932AE9: cmp     eax, edx
0x932AEB: mov     [esp+0E50h+var_DD8], eax
0x932AEF: mov     [esp+0E50h+var_E04], esi
0x932AF3: jl      loc_932465
0x932AF9: mov     edi, [esp+0E50h+var_DDC]
0x932AFD: mov     ebx, [ebp+arg_4]
0x932B00: mov     esi, [esp+0E50h+var_E38]
0x932B04: mov     eax, [esi+4]
0x932B07: cmp     eax, 1
0x932B0A: mov     dword ptr [esp+0E50h+var_E34], esi
0x932B0E: jle     short loc_932B23
0x932B10: mov     edx, [esi]
0x932B12: push    offset sub_92CA80
0x932B17: dec     eax
0x932B18: push    eax
0x932B19: push    ecx
0x932B1A: push    edx
0x932B1B: call    sub_92CAB0
0x932B20: add     esp, 10h
0x932B23: mov     ecx, [ebp+arg_8]
0x932B26: lea     eax, [esp+0E50h+var_810]
0x932B2D: push    eax
0x932B2E: push    esi
0x932B2F: push    ecx
0x932B30: push    ebx
0x932B31: call    sub_9320F0
0x932B36: mov     eax, [esp+0E60h+var_80C]
0x932B3D: add     esp, 10h
0x932B40: test    eax, eax
0x932B42: jnz     short loc_932B4D
0x932B44: inc     [esp+0E50h+var_DFC]
0x932B48: jmp     loc_932398
0x932B4D: mov     ecx, [esp+0E50h+var_D38]
0x932B54: mov     eax, [esp+0E50h+var_808]
0x932B5B: mov     edi, [esp+0E50h+var_D3C]
0x932B62: dec     edi
0x932B63: js      short loc_932BDC
0x932B65: mov     edx, ds:0BA9DE4h
0x932B6B: mov     eax, large fs:2Ch
0x932B71: mov     esi, [eax+edx*4]
0x932B74: jmp     short loc_932B80
0x932B76: align 10h
0x932B80: mov     ecx, [esp+0E50h+var_D40]
0x932B87: mov     ecx, [ecx+edi*4]
0x932B8A: mov     eax, [ecx+8]
0x932B8D: test    eax, eax
0x932B8F: js      short loc_932BAD
0x932B91: and     eax, 3FFFFFFFh
0x932B96: lea     edx, [eax+eax*4]
0x932B99: mov     eax, [ecx]
0x932B9B: mov     ecx, [esi+19Ch]
0x932BA1: push    14h
0x932BA3: shl     edx, 2
0x932BA6: push    edx
0x932BA7: push    eax
0x932BA8: call    sub_8A75D0
0x932BAD: mov     ecx, [esp+0E50h+var_D40]
0x932BB4: mov     eax, [ecx+edi*4]
0x932BB7: mov     ecx, [esi+19Ch]
0x932BBD: cmp     eax, [ecx+28h]
0x932BC0: mov     [ecx+20h], eax
0x932BC3: jnz     short loc_932BCB
0x932BC5: mov     edx, [ecx]
0x932BC7: push    eax
0x932BC8: call    dword ptr [edx+10h]
0x932BCB: dec     edi
0x932BCC: jns     short loc_932B80
0x932BCE: mov     ecx, [esp+0E50h+var_D38]
0x932BD5: mov     eax, [esp+0E50h+var_808]
0x932BDC: mov     edx, [esp+0E50h+var_80C]
0x932BE3: test    edx, edx
0x932BE5: mov     [esp+0E50h+var_D3C], 0
0x932BF0: jz      loc_932CAC
0x932BF6: mov     eax, [ebp+arg_C]
0x932BF9: mov     edx, [ebp+arg_8]
0x932BFC: push    eax
0x932BFD: lea     ecx, [esp+0E54h+var_810]
0x932C04: push    ecx
0x932C05: push    edx
0x932C06: push    ebx
0x932C07: call    sub_931B80
0x932C0C: mov     eax, [esp+0E60h+var_808]
0x932C13: mov     esi, ds:0BA9DE4h
0x932C19: mov     edi, large fs:2Ch
0x932C20: add     esp, 10h
0x932C23: test    eax, eax
0x932C25: js      short loc_932C48
0x932C27: mov     ecx, [edi+esi*4]
0x932C2A: mov     ecx, [ecx+19Ch]
0x932C30: and     eax, 3FFFFFFFh
0x932C35: push    14h
0x932C37: shl     eax, 4
0x932C3A: push    eax
0x932C3B: mov     eax, [esp+0E58h+var_810]
0x932C42: push    eax
0x932C43: call    sub_8A75D0
0x932C48: mov     eax, [esp+0E50h+var_D38]
0x932C4F: test    eax, eax
0x932C51: js      short loc_932C74
0x932C53: mov     edx, [esp+0E50h+var_D40]
0x932C5A: and     eax, 3FFFFFFFh
0x932C5F: push    14h
0x932C61: shl     eax, 2
0x932C64: push    eax
0x932C65: mov     eax, [edi+esi*4]
0x932C68: mov     ecx, [eax+19Ch]
0x932C6E: push    edx
0x932C6F: call    sub_8A75D0
0x932C74: mov     eax, [esp+0E50h+var_D68]
0x932C7B: test    eax, eax
0x932C7D: js      short loc_932CA3
0x932C7F: mov     edx, [esp+0E50h+var_D70]
0x932C86: and     eax, 3FFFFFFFh
0x932C8B: lea     ecx, [eax+eax*4]
0x932C8E: mov     eax, [edi+esi*4]
0x932C91: push    14h
0x932C93: shl     ecx, 2
0x932C96: push    ecx
0x932C97: mov     ecx, [eax+19Ch]
0x932C9D: push    edx
0x932C9E: call    sub_8A75D0
0x932CA3: xor     eax, eax
0x932CA5: pop     edi
0x932CA6: pop     esi
0x932CA7: pop     ebx
0x932CA8: mov     esp, ebp
0x932CAA: pop     ebp
0x932CAB: retn
0x932CAC: test    eax, eax
0x932CAE: js      short loc_932CE4
0x932CB0: mov     ecx, [esp+0E50h+var_810]
0x932CB7: mov     edx, large fs:2Ch
0x932CBE: and     eax, 3FFFFFFFh
0x932CC3: push    14h
0x932CC5: shl     eax, 4
0x932CC8: push    eax
0x932CC9: mov     eax, ds:0BA9DE4h
0x932CCE: push    ecx
0x932CCF: mov     ecx, [edx+eax*4]
0x932CD2: mov     ecx, [ecx+19Ch]
0x932CD8: call    sub_8A75D0
0x932CDD: mov     ecx, [esp+0E50h+var_D38]
0x932CE4: test    ecx, ecx
0x932CE6: js      short loc_932D16
0x932CE8: mov     edx, [esp+0E50h+var_D40]
0x932CEF: mov     eax, large fs:2Ch
0x932CF5: and     ecx, 3FFFFFFFh
0x932CFB: shl     ecx, 2
0x932CFE: push    14h
0x932D00: push    ecx
0x932D01: mov     ecx, ds:0BA9DE4h
0x932D07: push    edx
0x932D08: mov     edx, [eax+ecx*4]
0x932D0B: mov     ecx, [edx+19Ch]
0x932D11: call    sub_8A75D0
0x932D16: mov     eax, [esp+0E50h+var_D68]
0x932D1D: test    eax, eax
0x932D1F: js      short loc_932D51
0x932D21: mov     ecx, [esp+0E50h+var_D70]
0x932D28: mov     edx, large fs:2Ch
0x932D2F: and     eax, 3FFFFFFFh
0x932D34: lea     eax, [eax+eax*4]
0x932D37: push    14h
0x932D39: shl     eax, 2
0x932D3C: push    eax
0x932D3D: mov     eax, ds:0BA9DE4h
0x932D42: push    ecx
0x932D43: mov     ecx, [edx+eax*4]
0x932D46: mov     ecx, [ecx+19Ch]
0x932D4C: call    sub_8A75D0
0x932D51: pop     edi
0x932D52: pop     esi
0x932D53: mov     eax, 1
0x932D58: pop     ebx
0x932D59: mov     esp, ebp
0x932D5B: pop     ebp
0x932D5C: retn
