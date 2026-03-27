0x671170: sub     esp, 0Ch
0x671173: mov     eax, ds:0B33398h
0x671178: push    ebx
0x671179: push    esi
0x67117A: mov     esi, [eax+20h]
0x67117D: push    edi
0x67117E: push    1; a3
0x671180: mov     edi, ecx
0x671182: push    1Ch; a2
0x671184: mov     ecx, esi; this
0x671186: call    InputGlobals__QueryControlState
0x67118B: push    0; a3
0x67118D: test    eax, eax
0x67118F: push    1Ch; a2
0x671191: mov     ecx, esi; this
0x671193: setnz   bl
0x671196: call    InputGlobals__QueryControlState
0x67119B: test    eax, eax
0x67119D: setnz   [esp+18h+var_B]
0x6711A2: test    bl, bl
0x6711A4: jz      short loc_6711BC
0x6711A6: push    1; arg1
0x6711A8: push    0; canCreate
0x6711AA: call    InterfaceManager_GetSingleton
0x6711AF: add     esp, 8
0x6711B2: mov     dword ptr [eax+90h], 0
0x6711BC: push    1; arg1
0x6711BE: push    0; canCreate
0x6711C0: call    InterfaceManager_GetSingleton
0x6711C5: mov     eax, [eax+90h]
0x6711CB: add     esp, 8
0x6711CE: cmp     eax, 1
0x6711D1: setz    cl
0x6711D4: cmp     eax, 2
0x6711D7: setz    dl
0x6711DA: cmp     eax, 1
0x6711DD: mov     [esp+18h+var_A], cl
0x6711E1: mov     [esp+18h+var_9], dl
0x6711E5: jnz     short loc_671204
0x6711E7: push    eax; arg1
0x6711E8: push    0; canCreate
0x6711EA: call    InterfaceManager_GetSingleton
0x6711EF: mov     cl, [esp+20h+var_A]
0x6711F3: mov     dl, [esp+20h+var_9]
0x6711F7: add     esp, 8
0x6711FA: mov     dword ptr [eax+90h], 2
0x671204: test    bl, bl
0x671206: jnz     short loc_671223
0x671208: cmp     [esp+18h+var_B], bl
0x67120C: jnz     short loc_671223
0x67120E: cmp     dword ptr [edi+574h], 0
0x671215: jnz     short loc_67122C
0x671217: test    cl, cl
0x671219: jnz     short loc_671223
0x67121B: test    dl, dl
0x67121D: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671223: cmp     dword ptr [edi+574h], 0
0x67122A: jz      short loc_67126C
0x67122C: cmp     dword ptr [edi+57Ch], 1
0x671233: jnz     def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671239: cmp     [esp+18h+var_B], 0
0x67123E: jnz     short loc_671254
0x671240: test    dl, dl
0x671242: jnz     short loc_671254
0x671244: mov     ecx, edi
0x671246: call    sub_66A670
0x67124B: pop     edi
0x67124C: pop     esi
0x67124D: pop     ebx
0x67124E: add     esp, 0Ch
0x671251: retn    4
0x671254: fld     [esp+18h+arg_0]
0x671258: push    ecx
0x671259: mov     ecx, edi
0x67125B: fstp    [esp+1Ch+var_1C]
0x67125E: call    sub_66D930
0x671263: pop     edi
0x671264: pop     esi
0x671265: pop     ebx
0x671266: add     esp, 0Ch
0x671269: retn    4
0x67126C: test    bl, bl
0x67126E: jnz     short loc_671278
0x671270: test    cl, cl
0x671272: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671278: cmp     dword ptr [edi+57Ch], 0
0x67127F: jnz     def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671285: call    sub_579540
0x67128A: mov     esi, eax
0x67128C: test    esi, esi
0x67128E: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671294: mov     edx, [esi]
0x671296: mov     eax, [edx+154h]
0x67129C: mov     ecx, esi
0x67129E: call    eax
0x6712A0: test    eax, eax
0x6712A2: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6712A8: push    eax
0x6712A9: call    sub_480340
0x6712AE: add     esp, 4
0x6712B1: test    eax, eax
0x6712B3: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6712B9: mov     eax, [eax+10h]
0x6712BC: test    eax, eax
0x6712BE: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6712C4: mov     eax, [eax+8]
0x6712C7: test    eax, eax
0x6712C9: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6712CF: cmp     dword ptr [eax+8], 0
0x6712D3: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6712D9: mov     ecx, [eax+50h]
0x6712DC: call    sub_89DA90
0x6712E1: fstp    [esp+18h+arg_0]
0x6712E5: mov     edx, [edi]
0x6712E7: mov     eax, [edx+288h]
0x6712ED: push    0
0x6712EF: mov     ecx, edi
0x6712F1: call    eax
0x6712F3: fstp    [esp+18h+var_8]
0x6712F7: mov     ecx, offset fGrabPower
0x6712FC: call    GameSetting_GetSafeFloatPointer
0x671301: fld     dword ptr [eax]
0x671303: fmul    [esp+18h+var_8]
0x671307: fld     [esp+18h+arg_0]
0x67130B: fcompp
0x67130D: fnstsw  ax
0x67130F: test    ah, 41h
0x671312: jp      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671318: fld     dword ptr ds:0A342A4h
0x67131E: push    ecx
0x67131F: fstp    [esp+1Ch+var_1C]; float
0x671322: push    1; int
0x671324: push    esi; int
0x671325: mov     ecx, edi
0x671327: call    sub_66D120
0x67132C: mov     edx, [esi]
0x67132E: mov     eax, [edx+40h]
0x671331: push    8
0x671333: mov     ecx, esi
0x671335: call    eax
0x671337: cmp     dword ptr [edi+574h], 0
0x67133E: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671344: mov     ecx, esi; this
0x671346: call    TESObjectREFR_GetOwner
0x67134B: test    eax, eax
0x67134D: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671353: mov     ecx, ds:0B333C4h
0x671359: push    1
0x67135B: push    ecx
0x67135C: mov     ecx, esi
0x67135E: call    TESOBjectREFR_IsOwnedBy
0x671363: test    al, al
0x671365: jnz     def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x67136B: mov     ecx, ds:0B333C4h; this
0x671371: call    TESObjectREFR_GetParentCell
0x671376: test    eax, eax
0x671378: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x67137E: mov     ecx, ds:0B333C4h; this
0x671384: call    TESObjectREFR_GetParentCell
0x671389: mov     ecx, eax; this
0x67138B: call    TESObjectCELL_IsInterior
0x671390: test    al, al
0x671392: jz      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x671398: push    esi
0x671399: call    TESWeightForm_GetWeightForForm_Fast
0x67139E: fstp    [esp+1Ch+arg_0]
0x6713A2: add     esp, 4
0x6713A5: mov     ecx, offset flt_B36C98
0x6713AA: call    GameSetting_GetSafeFloatPointer
0x6713AF: fld     dword ptr [eax]
0x6713B1: fmul    [esp+18h+arg_0]
0x6713B5: mov     ecx, [edi+58h]
0x6713B8: mov     edx, [ecx]
0x6713BA: mov     eax, [edx+354h]
0x6713C0: fstp    [esp+18h+arg_0]
0x6713C4: push    ecx
0x6713C5: fld     [esp+1Ch+arg_0]
0x6713C9: fstp    [esp+1Ch+var_1C]
0x6713CC: call    eax
0x6713CE: mov     edx, [esi]
0x6713D0: mov     eax, [edx+170h]
0x6713D6: mov     ecx, esi
0x6713D8: call    eax
0x6713DA: movzx   eax, byte ptr [eax+4]
0x6713DE: add     eax, 0FFFFFFEEh; switch 25 cases
0x6713E1: cmp     eax, 18h
0x6713E4: ja      def_6713F1; jumptable 006713F1 default case, cases 28,35-37,41
0x6713EA: movzx   ecx, ds:byte_6714C4[eax]
0x6713F1: jmp     ds:jpt_6713F1[ecx*4]; switch jump
0x6713F8: mov     ebx, [edi]; jumptable 006713F1 cases 18,23,24,29-32
0x6713FA: push    0FFFFFFFFh
0x6713FC: mov     ecx, esi; this
0x6713FE: call    TESObjectREFR_GetOwner
0x671403: mov     edx, ds:0B333C4h
0x671409: push    eax
0x67140A: mov     eax, [ebx+248h]
0x671410: push    edx
0x671411: mov     ecx, edi
0x671413: call    eax
0x671415: pop     edi
0x671416: pop     esi
0x671417: pop     ebx
0x671418: add     esp, 0Ch
0x67141B: retn    4
0x67141E: mov     edx, [esi]; jumptable 006713F1 case 26
0x671420: mov     eax, [edx+170h]
0x671426: mov     ecx, esi
0x671428: call    eax
0x67142A: mov     ecx, [eax+7Ch]
0x67142D: mov     ebx, [edi]
0x67142F: shr     ecx, 1
0x671431: test    cl, 1
0x671434: mov     ecx, esi; this
0x671436: jz      short loc_671463
0x671438: call    TESObjectREFR_GetOwner
0x67143D: mov     edx, [esi]
0x67143F: push    eax
0x671440: mov     eax, [edx+170h]
0x671446: push    0
0x671448: push    1
0x67144A: mov     ecx, esi
0x67144C: call    eax
0x67144E: mov     edx, [ebx+238h]
0x671454: push    eax
0x671455: push    esi
0x671456: mov     ecx, edi
0x671458: call    edx
0x67145A: pop     edi
0x67145B: pop     esi
0x67145C: pop     ebx
0x67145D: add     esp, 0Ch
0x671460: retn    4
0x671463: push    0FFFFFFFFh
0x671465: call    TESObjectREFR_GetOwner
0x67146A: mov     edx, [ebx+248h]
0x671470: push    eax
0x671471: mov     eax, ds:0B333C4h
0x671476: push    eax
0x671477: mov     ecx, edi
0x671479: call    edx
0x67147B: pop     edi
0x67147C: pop     esi
0x67147D: pop     ebx
0x67147E: add     esp, 0Ch
0x671481: retn    4
0x671484: mov     ebx, [edi]; jumptable 006713F1 cases 19-22,25,27,33,34,38-40,42
0x671486: mov     ecx, esi; this
0x671488: call    TESObjectREFR_GetOwner
0x67148D: push    eax
0x67148E: mov     eax, [esi]
0x671490: mov     edx, [eax+170h]
0x671496: push    0
0x671498: push    1
0x67149A: mov     ecx, esi
0x67149C: call    edx
0x67149E: push    eax
0x67149F: mov     eax, [ebx+238h]
0x6714A5: push    esi
0x6714A6: mov     ecx, edi
0x6714A8: call    eax
0x6714AA: pop     edi; jumptable 006713F1 default case, cases 28,35-37,41
0x6714AB: pop     esi
0x6714AC: pop     ebx
0x6714AD: add     esp, 0Ch
0x6714B0: retn    4
