0x544450: or      eax, offset byte_B3668C
0x544455: add     ecx, ebx
0x544457: adc     eax, offset dword_B36680
0x54445C: fst     dword ptr ds:0B36684h
0x544462: fstp    dword ptr ds:0B36688h
0x544468: jmp     short loc_54446C
0x54446A: fstp    st
0x54446C: fld     [esp+arg_28]
0x544470: push    ecx
0x544471: fstp    [esp+4+var_4]
0x544474: push    ebx
0x544475: call    nullsub_returnVoid_2arg
0x54447A: mov     eax, [ebx+0DCh]
0x544480: cmp     eax, 3
0x544483: jz      short loc_54448E
0x544485: cmp     eax, 2
0x544488: jnz     loc_544769
0x54448E: mov     eax, [edi+4]
0x544491: mov     cl, [eax+18h]
0x544494: shr     cl, 5
0x544497: test    cl, 1
0x54449A: jnz     short loc_5444AA
0x54449C: or      word ptr [eax+18h], 1
0x5444A1: pop     edi
0x5444A2: pop     ebp
0x5444A3: pop     ebx
0x5444A4: add     esp, 18h
0x5444A7: retn    8
0x5444AA: mov     ecx, ebx
0x5444AC: call    sub_4991C0
0x5444B1: fstp    [esp+arg_28]
0x5444B5: mov     ecx, ebx
0x5444B7: call    sub_53FC90
0x5444BC: fstp    [esp+arg_24]
0x5444C0: mov     ecx, ebx
0x5444C2: call    sub_499180
0x5444C7: fstp    [esp+arg_8]
0x5444CB: mov     ecx, ebx
0x5444CD: call    sub_53FC10
0x5444D2: fstp    [esp+arg_C]
0x5444D6: fld     [esp+arg_24]
0x5444DA: fld     st
0x5444DC: fld     [esp+arg_28]
0x5444E0: fsubr   st, st(1)
0x5444E2: fld     qword ptr ds:0A2FAA0h
0x5444E8: fmul    st(1), st
0x5444EA: fxch    st(2)
0x5444EC: fsubrp  st(1), st
0x5444EE: fstp    [esp+arg_28]
0x5444F2: fld     [esp+arg_8]
0x5444F6: fld     [esp+arg_C]
0x5444FA: fld     st
0x5444FC: fsubr   st, st(2)
0x5444FE: fmulp   st(3), st
0x544500: fxch    st(1)
0x544502: fsubrp  st(2), st
0x544504: fxch    st(1)
0x544506: fstp    [esp+arg_24]
0x54450A: fld     [esp+arg_10]
0x54450E: fcom    st(1)
0x544510: fnstsw  ax
0x544512: fld     [esp+arg_24]
0x544516: test    ah, 41h
0x544519: jnz     short loc_544530
0x54451B: fcom    st(1)
0x54451D: fnstsw  ax
0x54451F: test    ah, 41h
0x544522: jnz     short loc_544530
0x544524: fstp    st(3)
0x544526: fsubr   st, st(2)
0x544528: fxch    st(2)
0x54452A: fsubrp  st(1), st
0x54452C: fdivp   st(1), st
0x54452E: jmp     short loc_54457E
0x544530: fstp    st(2)
0x544532: fcom    st(1)
0x544534: fnstsw  ax
0x544536: fstp    st(1)
0x544538: test    ah, 1
0x54453B: fld     [esp+arg_28]
0x54453F: jnz     short loc_544554
0x544541: fcom    st(1)
0x544543: fnstsw  ax
0x544545: test    ah, 1
0x544548: jnz     short loc_544554
0x54454A: fstp    st(1)
0x54454C: fstp    st
0x54454E: fstp    st
0x544550: fldz
0x544552: jmp     short loc_54457E
0x544554: fcom    st(1)
0x544556: fnstsw  ax
0x544558: test    ah, 5
0x54455B: jp      short loc_544572
0x54455D: fxch    st(1)
0x54455F: fcom    st(2)
0x544561: fnstsw  ax
0x544563: test    ah, 5
0x544566: jp      short loc_544576
0x544568: fsub    st, st(1)
0x54456A: fxch    st(2)
0x54456C: fsubrp  st(1), st
0x54456E: fdivp   st(1), st
0x544570: jmp     short loc_54457E
0x544572: fstp    st(1)
0x544574: jmp     short loc_544578
0x544576: fstp    st
0x544578: fstp    st
0x54457A: fstp    st
0x54457C: fld1
0x54457E: fstp    dword ptr [edi+0Ch]
0x544581: fldz
0x544583: fcomp   dword ptr [edi+0Ch]
0x544586: fnstsw  ax
0x544588: test    ah, 5
0x54458B: jp      loc_544761
0x544591: mov     eax, [edi+4]
0x544594: and     word ptr [eax+18h], 0FFFEh
0x54459A: mov     eax, [ebx+88h]
0x5445A0: mov     edx, [ebx+84h]
0x5445A6: mov     ecx, [ebx+8Ch]
0x5445AC: mov     [esp+arg_18], eax
0x5445B0: mov     eax, [edi+8]
0x5445B3: cmp     eax, ebp
0x5445B5: mov     [esp+arg_14], edx
0x5445B9: mov     [esp+arg_1C], ecx
0x5445BD: jz      short loc_5445CC
0x5445BF: movzx   edx, word ptr [eax+0B8h]
0x5445C6: mov     [esp+arg_24], edx
0x5445CA: jmp     short loc_5445D0
0x5445CC: mov     [esp+arg_24], ebp
0x5445D0: cmp     [esp+arg_24], ebp
0x5445D4: jbe     loc_544684
0x5445DA: push    esi
0x5445DB: jmp     short loc_5445E0
0x5445DD: align 10h
0x5445E0: mov     eax, [edi+8]
0x5445E3: movzx   ecx, word ptr [eax+0B6h]
0x5445EA: cmp     ecx, ebp
0x5445EC: jbe     loc_544676
0x5445F2: mov     edx, [eax+0B0h]
0x5445F8: mov     ecx, [edx+ebp*4]
0x5445FB: test    ecx, ecx
0x5445FD: jz      short loc_544676
0x5445FF: mov     eax, [ecx]
0x544601: mov     edx, [eax+0Ch]
0x544604: call    edx
0x544606: mov     esi, eax
0x544608: test    esi, esi
0x54460A: jz      short loc_544676
0x54460C: push    4
0x54460E: mov     ecx, esi
0x544610: call    NiNode_GetNiPropertyByID
0x544615: test    eax, eax
0x544617: jz      short loc_544676
0x544619: push    4
0x54461B: mov     ecx, esi
0x54461D: call    NiNode_GetNiPropertyByID
0x544622: mov     edx, [eax]
0x544624: mov     ecx, eax
0x544626: mov     eax, [edx+54h]
0x544629: call    eax
0x54462B: xor     ecx, ecx
0x54462D: cmp     eax, 0Bh
0x544630: setz    cl
0x544633: mov     eax, ecx
0x544635: test    eax, eax
0x544637: jz      short loc_544676
0x544639: push    4
0x54463B: mov     ecx, esi
0x54463D: call    NiNode_GetNiPropertyByID
0x544642: mov     esi, eax
0x544644: test    esi, esi
0x544646: jz      short loc_544676
0x544648: lea     edx, [esp+4+arg_14]
0x54464C: push    edx
0x54464D: mov     ecx, offset dword_B36680
0x544652: call    sub_8AA390
0x544657: test    al, al
0x544659: jz      short loc_544670
0x54465B: fld     [esp+4+arg_14]
0x54465F: fstp    dword ptr [esi+6Ch]
0x544662: fld     [esp+4+arg_18]
0x544666: fstp    dword ptr [esi+70h]
0x544669: fld     [esp+4+arg_1C]
0x54466D: fstp    dword ptr [esi+74h]
0x544670: fld     dword ptr [edi+0Ch]
0x544673: fstp    dword ptr [esi+78h]
0x544676: add     ebp, 1
0x544679: cmp     ebp, [esp+4+arg_24]
0x54467D: jb      loc_5445E0
0x544683: pop     esi
0x544684: mov     eax, [esp+arg_14]
0x544688: mov     ecx, [esp+arg_18]
0x54468C: mov     edx, [esp+arg_1C]
0x544690: mov     ds:0B36684h, ecx
0x544696: mov     ds:0B36680h, eax
0x54469B: mov     ds:0B36688h, edx
0x5446A1: fld     dword ptr [ebx+0D0h]
0x5446A7: mov     ecx, offset TimeGlobals
0x5446AC: fstp    [esp+arg_24]
0x5446B0: call    TimeGlobals_GetGameDaysPassed
0x5446B5: test    eax, eax
0x5446B7: mov     [esp+arg_28], eax
0x5446BB: fild    [esp+arg_28]
0x5446BF: jge     short loc_5446C7
0x5446C1: fadd    dword ptr ds:0A2FC78h
0x5446C7: fld     [esp+arg_24]
0x5446CB: lea     ecx, [esp+arg_14]
0x5446CF: fdiv    qword ptr ds:0A2F920h
0x5446D5: faddp   st(1), st
0x5446D7: fstp    [esp+arg_24]
0x5446DB: fld     dword ptr ds:0B36698h
0x5446E1: fstp    [esp+arg_14]
0x5446E5: fld     dword ptr ds:0B366A0h
0x5446EB: fstp    [esp+arg_18]
0x5446EF: fld     dword ptr ds:0B366A8h
0x5446F5: fstp    [esp+arg_1C]
0x5446F9: call    sub_43F350
0x5446FE: mov     edi, [edi+8]
0x544701: fstp    st
0x544703: test    edi, edi
0x544705: jz      short loc_544769
0x544707: fld     [esp+arg_1C]
0x54470B: sub     esp, 0Ch
0x54470E: fstp    [esp+0Ch+var_4]; float
0x544712: fld     [esp+0Ch+arg_18]
0x544716: fstp    [esp+0Ch+var_8]; float
0x54471A: fld     [esp+0Ch+arg_14]
0x54471E: fstp    [esp+0Ch+var_C]; float
0x544721: fld     [esp+0Ch+arg_24]
0x544725: fld     dword ptr ds:0B36690h
0x54472B: call    unknown_libname_14
0x544730: fstp    [esp+0Ch+arg_24]
0x544734: fld     [esp+0Ch+arg_24]
0x544738: push    ecx
0x544739: fmul    qword ptr ds:0A3D5B0h
0x54473F: lea     ecx, [edi+30h]
0x544742: fdiv    dword ptr ds:0B36690h
0x544748: fstp    [esp+10h+arg_24]
0x54474C: fld     [esp+10h+arg_24]
0x544750: fstp    [esp+10h+var_10]; float
0x544753: call    sub_70FE20
0x544758: pop     edi
0x544759: pop     ebp
0x54475A: pop     ebx
0x54475B: add     esp, 18h
0x54475E: retn    8
0x544761: mov     edi, [edi+4]
0x544764: or      word ptr [edi+18h], 1
0x544769: pop     edi
0x54476A: pop     ebp
0x54476B: pop     ebx
0x54476C: add     esp, 18h
0x54476F: retn    8
