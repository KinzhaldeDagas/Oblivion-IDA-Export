0x4723A0: sub     esp, 40h
0x4723A3: push    ebx
0x4723A4: mov     ebx, ecx
0x4723A6: mov     eax, [ebx+4]
0x4723A9: test    eax, eax
0x4723AB: jnz     short loc_4723B6
0x4723AD: xor     al, al
0x4723AF: pop     ebx
0x4723B0: add     esp, 40h
0x4723B3: retn    10h
0x4723B6: mov     ecx, ds:0B3F9A8h
0x4723BC: mov     edx, ds:0B3F9ACh
0x4723C2: mov     dword ptr [esp+44h+var_30], ecx
0x4723C6: mov     ecx, ds:0B3F9B0h
0x4723CC: mov     dword ptr [esp+44h+var_30+4], edx
0x4723D0: mov     edx, [ebx+0Ch]
0x4723D3: mov     [esp+44h+var_28], ecx
0x4723D7: mov     ecx, [ebx+10h]
0x4723DA: push    esi
0x4723DB: mov     [esp+48h+var_3C], edx
0x4723DF: mov     edx, [ebx+14h]
0x4723E2: mov     [esp+48h+var_38], ecx
0x4723E6: push    edi
0x4723E7: lea     esi, [eax+30h]
0x4723EA: mov     [esp+4Ch+var_34], edx
0x4723EE: mov     ecx, 9
0x4723F3: lea     edi, [esp+4Ch+var_24]
0x4723F7: rep movsd
0x4723F9: mov     esi, [esp+4Ch+arg_4]
0x4723FD: mov     ecx, esi; this
0x4723FF: call    Actor_IsCreature
0x472404: test    al, al
0x472406: jnz     loc_472575
0x47240C: mov     ecx, esi
0x47240E: call    sub_5E05B0
0x472413: test    al, al
0x472415: jz      loc_472575
0x47241B: mov     eax, [ebx+0A0h]
0x472421: test    eax, eax
0x472423: jz      loc_472575
0x472429: mov     ecx, [eax+68h]
0x47242C: call    TESAnimGroup_GetAnimationGroup
0x472431: cmp     eax, 3
0x472434: jl      loc_472575
0x47243A: mov     eax, [ebx+0A0h]
0x472440: mov     ecx, [eax+68h]
0x472443: call    TESAnimGroup_GetAnimationGroup
0x472448: cmp     eax, 10h
0x47244B: jg      loc_472575
0x472451: mov     ecx, [ebx+0A0h]
0x472457: fld     dword ptr ds:0B33E9Ch
0x47245D: mov     ecx, [ecx+68h]
0x472460: fstp    [esp+4Ch+arg_4]
0x472464: call    sub_51AED0
0x472469: fmul    dword ptr [ebx+0BCh]
0x47246F: mov     eax, [ebx+0ACh]
0x472475: test    eax, eax
0x472477: fmul    [esp+4Ch+arg_4]
0x47247B: fstp    [esp+4Ch+arg_4]
0x47247F: jz      short loc_4724C0
0x472481: cmp     dword ptr [eax+44h], 1
0x472485: jnz     short loc_4724C0
0x472487: mov     eax, [eax+68h]
0x47248A: fld     dword ptr ds:0B33E9Ch
0x472490: mov     ecx, eax
0x472492: fstp    [esp+4Ch+var_40]
0x472496: call    sub_51AED0
0x47249B: fmul    dword ptr [ebx+0C0h]
0x4724A1: fmul    [esp+4Ch+var_40]
0x4724A5: fstp    [esp+4Ch+var_40]
0x4724A9: fld     [esp+4Ch+var_40]
0x4724AD: fld     [esp+4Ch+arg_4]
0x4724B1: fcom    st(1)
0x4724B3: fnstsw  ax
0x4724B5: test    ah, 5
0x4724B8: jp      short loc_4724C6
0x4724BA: fstp    st
0x4724BC: fstp    [esp+4Ch+arg_4]
0x4724C0: fld     [esp+4Ch+arg_4]
0x4724C4: jmp     short loc_4724C8
0x4724C6: fstp    st(1)
0x4724C8: fld     qword ptr ds:0A3C800h
0x4724CE: fmul    st, st(1)
0x4724D0: fstp    [esp+4Ch+arg_4]
0x4724D4: fldz
0x4724D6: fcomp   st(1)
0x4724D8: fnstsw  ax
0x4724DA: test    ah, 5
0x4724DD: jp      loc_472573
0x4724E3: fld     [esp+4Ch+var_3C]
0x4724E7: fld     [esp+4Ch+arg_4]
0x4724EB: fcom    st(1)
0x4724ED: fnstsw  ax
0x4724EF: fstp    st(1)
0x4724F1: test    ah, 5
0x4724F4: jp      short loc_4724FE
0x4724F6: fxch    st(1)
0x4724F8: fst     [esp+4Ch+var_3C]
0x4724FC: fxch    st(1)
0x4724FE: fld     [esp+4Ch+var_38]
0x472502: fcomp   st(1)
0x472504: fnstsw  ax
0x472506: test    ah, 41h
0x472509: jnz     short loc_472513
0x47250B: fxch    st(1)
0x47250D: fst     [esp+4Ch+var_38]
0x472511: fxch    st(1)
0x472513: fld     [esp+4Ch+var_34]
0x472517: fcomp   st(1)
0x472519: fnstsw  ax
0x47251B: test    ah, 41h
0x47251E: jnz     short loc_472528
0x472520: fxch    st(1)
0x472522: fst     [esp+4Ch+var_34]
0x472526: fxch    st(1)
0x472528: fchs
0x47252A: fstp    [esp+4Ch+arg_4]
0x47252E: fld     [esp+4Ch+var_3C]
0x472532: fld     [esp+4Ch+arg_4]
0x472536: fcom    st(1)
0x472538: fnstsw  ax
0x47253A: fstp    st(1)
0x47253C: test    ah, 41h
0x47253F: jnz     short loc_472549
0x472541: fld     st(1)
0x472543: fchs
0x472545: fstp    [esp+4Ch+var_3C]
0x472549: fld     [esp+4Ch+var_38]
0x47254D: fcomp   st(1)
0x47254F: fnstsw  ax
0x472551: test    ah, 5
0x472554: jp      short loc_47255E
0x472556: fld     st(1)
0x472558: fchs
0x47255A: fstp    [esp+4Ch+var_38]
0x47255E: fld     [esp+4Ch+var_34]
0x472562: fcompp
0x472564: fnstsw  ax
0x472566: test    ah, 5
0x472569: jp      short loc_472573
0x47256B: fchs
0x47256D: fstp    [esp+4Ch+var_34]
0x472571: jmp     short loc_472575
0x472573: fstp    st
0x472575: test    esi, esi
0x472577: jz      short def_472594; jumptable 00472594 default case, cases 4,6,7,9
0x472579: mov     edx, [esi]
0x47257B: mov     eax, [edx+18Ch]
0x472581: mov     ecx, esi
0x472583: call    eax
0x472585: add     eax, 0FFFFFFFDh; switch 8 cases
0x472588: cmp     eax, 7
0x47258B: ja      short def_472594; jumptable 00472594 default case, cases 4,6,7,9
0x47258D: movzx   ecx, ds:byte_47262C[eax]
0x472594: jmp     ds:jpt_472594[ecx*4]; switch jump
0x47259B: mov     edx, [esi]; jumptable 00472594 cases 3,5,8,10
0x47259D: mov     eax, [edx+0ECh]
0x4725A3: mov     ecx, esi
0x4725A5: call    eax
0x4725A7: fstp    [esp+4Ch+arg_4]
0x4725AB: fld     [esp+4Ch+var_3C]
0x4725AF: fld     [esp+4Ch+arg_4]
0x4725B3: fld     st
0x4725B5: fdivp   st(2), st
0x4725B7: fxch    st(1)
0x4725B9: fstp    [esp+4Ch+var_3C]
0x4725BD: fdivr   [esp+4Ch+var_38]
0x4725C1: fstp    [esp+4Ch+var_38]
0x4725C5: cmp     [esp+4Ch+arg_C], 0; jumptable 00472594 default case, cases 4,6,7,9
0x4725CA: pop     edi
0x4725CB: pop     esi
0x4725CC: jz      short loc_4725D4
0x4725CE: fldz
0x4725D0: fstp    [esp+44h+var_34]
0x4725D4: cmp     [esp+44h+arg_8], 0
0x4725D9: jz      short loc_472602
0x4725DB: mov     ecx, [esp+44h+arg_0]
0x4725DF: push    ecx
0x4725E0: lea     edx, [esp+48h+var_3C]
0x4725E4: push    edx
0x4725E5: push    1
0x4725E7: lea     eax, [esp+50h+var_30]
0x4725EB: push    eax
0x4725EC: lea     ecx, [esp+54h+var_24]
0x4725F0: push    ecx
0x4725F1: call    sub_710580
0x4725F6: add     esp, 14h
0x4725F9: mov     al, 1
0x4725FB: pop     ebx
0x4725FC: add     esp, 40h
0x4725FF: retn    10h
0x472602: mov     eax, [esp+44h+arg_0]
0x472606: mov     edx, [esp+44h+var_3C]
0x47260A: mov     ecx, [esp+44h+var_38]
0x47260E: mov     [eax], edx
0x472610: mov     edx, [esp+44h+var_34]
0x472614: mov     [eax+4], ecx
0x472617: mov     [eax+8], edx
0x47261A: mov     al, 1
0x47261C: pop     ebx
0x47261D: add     esp, 40h
0x472620: retn    10h
