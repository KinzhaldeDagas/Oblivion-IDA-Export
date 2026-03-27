0x614550: sub     esp, 80h
0x614556: push    esi
0x614557: mov     esi, ecx
0x614559: mov     eax, [esi+3Ch]
0x61455C: test    eax, eax
0x61455E: jz      loc_614B83
0x614564: mov     eax, [eax+58h]
0x614567: test    eax, eax
0x614569: jz      loc_614B83
0x61456F: mov     edx, [eax]
0x614571: mov     ecx, eax
0x614573: mov     eax, [edx+8]
0x614576: call    eax
0x614578: test    eax, eax
0x61457A: jnz     loc_614B83
0x614580: cmp     [esi+190h], al
0x614586: push    ebx
0x614587: lea     ebx, [esi+190h]
0x61458D: jnz     loc_614620
0x614593: mov     ecx, [esi+3Ch]
0x614596: push    eax
0x614597: push    eax
0x614598: push    5
0x61459A: call    Actor_LoadAnimGroup?
0x61459F: push    eax
0x6145A0: call    sub_51AA00
0x6145A5: add     esp, 4
0x6145A8: cmp     eax, 5
0x6145AB: push    0
0x6145AD: setz    cl
0x6145B0: push    0
0x6145B2: mov     [esi+194h], cl
0x6145B8: mov     ecx, [esi+3Ch]
0x6145BB: push    6
0x6145BD: call    Actor_LoadAnimGroup?
0x6145C2: push    eax
0x6145C3: call    sub_51AA00
0x6145C8: mov     ecx, [esi+3Ch]
0x6145CB: add     esp, 4
0x6145CE: push    0
0x6145D0: cmp     eax, 6
0x6145D3: push    0
0x6145D5: setz    dl
0x6145D8: push    3
0x6145DA: mov     [esi+195h], dl
0x6145E0: call    Actor_LoadAnimGroup?
0x6145E5: push    eax
0x6145E6: call    sub_51AA00
0x6145EB: mov     ecx, [esi+3Ch]
0x6145EE: add     esp, 4
0x6145F1: push    0
0x6145F3: cmp     eax, 3
0x6145F6: push    0
0x6145F8: setz    al
0x6145FB: push    4
0x6145FD: mov     [esi+196h], al
0x614603: call    Actor_LoadAnimGroup?
0x614608: push    eax
0x614609: call    sub_51AA00
0x61460E: add     esp, 4
0x614611: cmp     eax, 4
0x614614: setz    cl
0x614617: mov     [esi+197h], cl
0x61461D: mov     byte ptr [ebx], 1
0x614620: mov     cl, [esi+191h]
0x614626: test    cl, cl
0x614628: jnz     short loc_614651
0x61462A: mov     eax, [esi+6Ch]
0x61462D: cmp     eax, 4
0x614630: jz      short loc_614641
0x614632: cmp     eax, 7
0x614635: jz      short loc_614641
0x614637: cmp     eax, 9
0x61463A: jz      short loc_614641
0x61463C: cmp     eax, 8
0x61463F: jnz     short loc_614651
0x614641: pop     ebx
0x614642: mov     eax, 4
0x614647: pop     esi
0x614648: add     esp, 80h
0x61464E: retn    4
0x614651: test    cl, cl
0x614653: push    ebp
0x614654: mov     ebp, [esp+8Ch+arg_0]
0x61465B: push    edi
0x61465C: jnz     short loc_6146A4
0x61465E: test    ebp, ebp
0x614660: jnz     short loc_6146A4
0x614662: mov     ecx, [esi+3Ch]
0x614665: mov     edx, [ecx]
0x614667: mov     eax, [edx+174h]
0x61466D: call    eax
0x61466F: push    eax
0x614670: lea     ecx, [esp+94h+var_80+8]
0x614674: push    ecx
0x614675: lea     ecx, [esi+198h]
0x61467B: call    sub_4121A0
0x614680: mov     ecx, offset flt_B372C8
0x614685: call    GameSetting_GetSafeFloatPointer
0x61468A: lea     ecx, [esp+90h+var_80+8]
0x61468E: mov     edi, eax
0x614690: call    sub_404C90
0x614695: fld     dword ptr [edi]
0x614697: fcompp
0x614699: fnstsw  ax
0x61469B: test    ah, 41h
0x61469E: jz      def_614A8C
0x6146A4: mov     ecx, [esi+3Ch]
0x6146A7: mov     edx, [ecx]
0x6146A9: mov     eax, [edx+174h]
0x6146AF: call    eax
0x6146B1: mov     ecx, [eax]
0x6146B3: mov     [esi+198h], ecx
0x6146B9: mov     edx, [eax+4]
0x6146BC: mov     ecx, [esi+3Ch]
0x6146BF: mov     [esi+19Ch], edx
0x6146C5: mov     eax, [eax+8]
0x6146C8: mov     [esi+1A0h], eax
0x6146CE: mov     edx, [ecx]
0x6146D0: mov     eax, [edx+1E0h]
0x6146D6: call    eax
0x6146D8: push    ecx
0x6146D9: lea     ecx, [esp+94h+var_24]
0x6146DD: fstp    [esp+94h+var_94]; float
0x6146E0: call    NiMatrix33_InitRotationTransform
0x6146E5: mov     edi, [esi+3Ch]
0x6146E8: mov     edx, [edi]
0x6146EA: mov     edx, [edx+15Ch]
0x6146F0: lea     eax, [esp+90h+var_3C]
0x6146F4: push    eax
0x6146F5: mov     ecx, edi
0x6146F7: call    edx
0x6146F9: fld     dword ptr [eax]
0x6146FB: mov     eax, [edi]
0x6146FD: fstp    qword ptr [esp+94h+var_80+4]
0x614701: mov     edx, [eax+158h]
0x614707: lea     ecx, [esp+94h+var_34]
0x61470B: push    ecx
0x61470C: mov     ecx, edi
0x61470E: call    edx
0x614710: fld     dword ptr [eax]
0x614712: fsubr   qword ptr [esp+98h+var_80]
0x614716: fstp    dword ptr [esp+98h+var_88]
0x61471A: fldz
0x61471C: fcomp   dword ptr [esp+98h+var_88]
0x614720: fnstsw  ax
0x614722: test    ah, 44h
0x614725: jp      short loc_614731
0x614727: fld     dword ptr ds:0A427E4h
0x61472D: fstp    dword ptr [esp+98h+var_88]
0x614731: mov     edi, [esi+3Ch]
0x614734: mov     eax, [edi]
0x614736: mov     edx, [eax+15Ch]
0x61473C: lea     ecx, [esp+98h+var_38]
0x614740: push    ecx
0x614741: mov     ecx, edi
0x614743: call    edx
0x614745: fld     dword ptr [eax+4]
0x614748: mov     eax, [edi]
0x61474A: fstp    [esp+9Ch+var_88+4]
0x61474E: mov     edx, [eax+158h]
0x614754: lea     ecx, [esp+9Ch+var_48]
0x614758: push    ecx
0x614759: mov     ecx, edi
0x61475B: call    edx
0x61475D: fld     dword ptr [eax+4]
0x614760: fsubr   [esp+0A0h+var_88]
0x614764: fstp    [esp+0A0h+var_8C]
0x614768: fldz
0x61476A: fld     st
0x61476C: fld     [esp+0A0h+var_8C]
0x614770: fucom   st(1)
0x614772: fnstsw  ax
0x614774: fstp    st(1)
0x614776: test    ah, 44h
0x614779: jp      short loc_61478B
0x61477B: fstp    st
0x61477D: fld     [esp+0A0h+var_90]
0x614781: fst     [esp+0A0h+var_8C]
0x614785: fld     [esp+0A0h+var_8C]
0x614789: jmp     short loc_614791
0x61478B: fld     [esp+0A0h+var_90]
0x61478F: fxch    st(1)
0x614791: fld     st(1)
0x614793: fdiv    st, st(1)
0x614795: fstp    dword ptr [esp+0A0h+var_88]
0x614799: fld     dword ptr ds:0A3D65Ch
0x61479F: fld     dword ptr [esp+0A0h+var_88]
0x6147A3: fcom    st(1)
0x6147A5: fnstsw  ax
0x6147A7: fstp    st(1)
0x6147A9: test    ah, 41h
0x6147AC: jnz     short loc_6147E4
0x6147AE: fcomp   dword ptr ds:0A379B4h
0x6147B4: fnstsw  ax
0x6147B6: test    ah, 5
0x6147B9: jp      short loc_6147E6
0x6147BB: fcom    st(1)
0x6147BD: fnstsw  ax
0x6147BF: test    ah, 5
0x6147C2: jnp     short loc_6147D8
0x6147C4: fstp    st(1)
0x6147C6: fstp    [esp+0A0h+var_90]
0x6147CA: fld     [esp+0A0h+var_90]
0x6147CE: fst     [esp+0A0h+var_8C]
0x6147D2: fld     [esp+0A0h+var_8C]
0x6147D6: jmp     short loc_6147E6
0x6147D8: fstp    st
0x6147DA: fst     [esp+0A0h+var_8C]
0x6147DE: fld     [esp+0A0h+var_8C]
0x6147E2: jmp     short loc_6147E6
0x6147E4: fstp    st
0x6147E6: fld     dword ptr ds:0A56670h
0x6147EC: fcom    st(2)
0x6147EE: fnstsw  ax
0x6147F0: test    ah, 5
0x6147F3: jp      short loc_614805
0x6147F5: fstp    st(2)
0x6147F7: fxch    st(1)
0x6147F9: fst     [esp+0A0h+var_90]
0x6147FD: fld     [esp+0A0h+var_90]
0x614801: fxch    st(2)
0x614803: fxch    st(1)
0x614805: fcom    st(1)
0x614807: fnstsw  ax
0x614809: test    ah, 5
0x61480C: jp      short loc_61481A
0x61480E: fstp    st(1)
0x614810: fstp    [esp+0A0h+var_8C]
0x614814: fld     [esp+0A0h+var_8C]
0x614818: jmp     short loc_61481C
0x61481A: fstp    st
0x61481C: mov     eax, [esi+3Ch]
0x61481F: fld     st(1)
0x614821: fchs
0x614823: fstp    dword ptr [esp+0A0h+var_64]
0x614827: fxch    st(2)
0x614829: fst     dword ptr [esp+0A0h+var_64+4]
0x61482D: fst     [esp+0A0h+var_5C]
0x614831: fst     dword ptr [esp+0A0h+var_58+4]
0x614835: fst     [esp+0A0h+var_50]
0x614839: fst     dword ptr [esp+0A0h+var_70]
0x61483D: fst     [esp+0A0h+var_68]
0x614841: fst     dword ptr [esp+0A0h+var_80+4]
0x614845: fxch    st(1)
0x614847: fstp    dword ptr [esp+0A0h+var_58]
0x61484B: fxch    st(1)
0x61484D: fst     dword ptr [esp+0A0h+var_70+4]
0x614851: fchs
0x614853: fstp    dword ptr [esp+0A0h+var_80+8]
0x614857: fstp    [esp+0A0h+var_74]
0x61485B: mov     ecx, [eax+58h]
0x61485E: mov     edx, [ecx]
0x614860: mov     eax, [edx+2C0h]
0x614866: call    eax
0x614868: test    al, 2
0x61486A: jz      short loc_614878
0x61486C: fld     dword ptr [esp+0A0h+var_80+8]
0x614870: fsub    [esp+0A0h+var_8C]
0x614874: fstp    dword ptr [esp+0A0h+var_80+8]
0x614878: mov     ecx, [esi+3Ch]
0x61487B: mov     ecx, [ecx+58h]
0x61487E: mov     edx, [ecx]
0x614880: mov     eax, [edx+2C0h]
0x614886: call    eax
0x614888: test    al, 1
0x61488A: jz      short loc_614898
0x61488C: fld     dword ptr [esp+0A0h+var_80+8]
0x614890: fadd    [esp+0A0h+var_8C]
0x614894: fstp    dword ptr [esp+0A0h+var_80+8]
0x614898: mov     ecx, [esi+3Ch]
0x61489B: mov     ecx, [ecx+58h]
0x61489E: mov     edx, [ecx]
0x6148A0: mov     eax, [edx+2C0h]
0x6148A6: call    eax
0x6148A8: test    al, 4
0x6148AA: jz      short loc_6148B8
0x6148AC: fld     dword ptr [esp+0A0h+var_80+4]
0x6148B0: fsub    [esp+0A0h+var_90]
0x6148B4: fstp    dword ptr [esp+0A0h+var_80+4]
0x6148B8: mov     ecx, [esi+3Ch]
0x6148BB: mov     ecx, [ecx+58h]
0x6148BE: mov     edx, [ecx]
0x6148C0: mov     eax, [edx+2C0h]
0x6148C6: call    eax
0x6148C8: test    al, 8
0x6148CA: jz      short loc_6148D8
0x6148CC: fld     dword ptr [esp+0A0h+var_80+4]
0x6148D0: fadd    [esp+0A0h+var_90]
0x6148D4: fstp    dword ptr [esp+0A0h+var_80+4]
0x6148D8: lea     ecx, [esp+0A0h+var_64]
0x6148DC: push    ecx
0x6148DD: lea     edx, [esp+0A4h+var_40]
0x6148E1: push    edx
0x6148E2: lea     ecx, [esp+0A8h+var_34]
0x6148E6: call    sub_7101F0
0x6148EB: fld     dword ptr [esi+198h]
0x6148F1: fadd    dword ptr [eax]
0x6148F3: fstp    dword ptr [esp+0A0h+var_88]
0x6148F7: fld     dword ptr [esi+19Ch]
0x6148FD: fadd    dword ptr [eax+4]
0x614900: fstp    dword ptr [esp+0A0h+var_88+4]
0x614904: mov     ecx, dword ptr [esp+0A0h+var_88+4]
0x614908: fld     dword ptr [esi+1A0h]
0x61490E: fadd    dword ptr [eax+8]
0x614911: mov     eax, dword ptr [esp+0A0h+var_88]
0x614915: mov     dword ptr [esp+0A0h+var_64], eax
0x614919: mov     dword ptr [esp+0A0h+var_64+4], ecx
0x61491D: lea     eax, [esp+0A0h+var_58]
0x614921: fstp    dword ptr [esp+0A0h+var_80]
0x614925: mov     edx, dword ptr [esp+0A0h+var_80]
0x614929: push    eax
0x61492A: lea     ecx, [esp+0A4h+var_40]
0x61492E: push    ecx
0x61492F: lea     ecx, [esp+0A8h+var_34]
0x614933: mov     [esp+0A8h+var_5C], edx
0x614937: call    sub_7101F0
0x61493C: fld     dword ptr [esi+198h]
0x614942: fadd    dword ptr [eax]
0x614944: fstp    dword ptr [esp+0A0h+var_88]
0x614948: mov     edx, dword ptr [esp+0A0h+var_88]
0x61494C: fld     dword ptr [esi+19Ch]
0x614952: fadd    dword ptr [eax+4]
0x614955: fstp    dword ptr [esp+0A0h+var_88+4]
0x614959: fld     dword ptr [esi+1A0h]
0x61495F: fadd    dword ptr [eax+8]
0x614962: mov     eax, dword ptr [esp+0A0h+var_88+4]
0x614966: mov     dword ptr [esp+0A0h+var_58], edx
0x61496A: lea     edx, [esp+0A0h+var_70]
0x61496E: fstp    dword ptr [esp+0A0h+var_80]
0x614972: mov     ecx, dword ptr [esp+0A0h+var_80]
0x614976: mov     dword ptr [esp+0A0h+var_58+4], eax
0x61497A: push    edx
0x61497B: lea     eax, [esp+0A4h+var_40]
0x61497F: mov     [esp+0A4h+var_50], ecx
0x614983: push    eax
0x614984: lea     ecx, [esp+0A8h+var_34]
0x614988: call    sub_7101F0
0x61498D: fld     dword ptr [esi+198h]
0x614993: fadd    dword ptr [eax]
0x614995: fstp    dword ptr [esp+0A0h+var_88]
0x614999: mov     ecx, dword ptr [esp+0A0h+var_88]
0x61499D: fld     dword ptr [esi+19Ch]
0x6149A3: fadd    dword ptr [eax+4]
0x6149A6: fstp    dword ptr [esp+0A0h+var_88+4]
0x6149AA: mov     edx, dword ptr [esp+0A0h+var_88+4]
0x6149AE: fld     dword ptr [esi+1A0h]
0x6149B4: fadd    dword ptr [eax+8]
0x6149B7: mov     dword ptr [esp+0A0h+var_70], ecx
0x6149BB: lea     ecx, [esp+0A0h+var_80+4]
0x6149BF: mov     dword ptr [esp+0A0h+var_70+4], edx
0x6149C3: push    ecx
0x6149C4: fstp    dword ptr [esp+0A4h+var_80]
0x6149C8: mov     eax, dword ptr [esp+0A4h+var_80]
0x6149CC: lea     edx, [esp+0A4h+var_40]
0x6149D0: push    edx
0x6149D1: lea     ecx, [esp+0A8h+var_34]
0x6149D5: mov     [esp+0A8h+var_68], eax
0x6149D9: call    sub_7101F0
0x6149DE: fld     dword ptr [esi+198h]
0x6149E4: fadd    dword ptr [eax]
0x6149E6: fstp    dword ptr [esp+0A0h+var_88]
0x6149EA: fld     dword ptr [esi+19Ch]
0x6149F0: fadd    dword ptr [eax+4]
0x6149F3: fstp    dword ptr [esp+0A0h+var_88+4]
0x6149F7: mov     ecx, dword ptr [esp+0A0h+var_88+4]
0x6149FB: fld     dword ptr [esi+1A0h]
0x614A01: fadd    dword ptr [eax+8]
0x614A04: mov     eax, dword ptr [esp+0A0h+var_88]
0x614A08: mov     dword ptr [esp+0A0h+var_80+4], eax
0x614A0C: fstp    dword ptr [esp+0A0h+var_80]
0x614A10: cmp     byte ptr ds:0B3C089h, 0
0x614A17: mov     edx, dword ptr [esp+0A0h+var_80]
0x614A1B: mov     dword ptr [esp+0A0h+var_80+8], ecx
0x614A1F: mov     [esp+0A0h+var_74], edx
0x614A23: jz      short loc_614A87
0x614A25: cmp     byte ptr [esi+194h], 0
0x614A2C: mov     ecx, ebx
0x614A2E: setnz   al
0x614A31: push    eax
0x614A32: push    4
0x614A34: call    sub_612910
0x614A39: cmp     byte ptr [esi+195h], 0
0x614A40: setnz   cl
0x614A43: push    ecx
0x614A44: push    8
0x614A46: mov     ecx, ebx
0x614A48: call    sub_612910
0x614A4D: cmp     byte ptr [esi+196h], 0
0x614A54: mov     ecx, ebx
0x614A56: setnz   dl
0x614A59: push    edx
0x614A5A: push    1
0x614A5C: call    sub_612910
0x614A61: cmp     byte ptr [esi+197h], 0
0x614A68: mov     ecx, ebx
0x614A6A: setnz   al
0x614A6D: push    eax
0x614A6E: push    2
0x614A70: call    sub_612910
