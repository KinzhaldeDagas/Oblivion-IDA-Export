0x701020: mov     edx, [esp+arg_4]
0x701024: mov     eax, edx
0x701026: and     eax, 7FFFFFFFh
0x70102B: sub     esp, 30h
0x70102E: cmp     eax, 0Ah
0x701031: jb      short loc_701039
0x701033: xor     eax, eax
0x701035: add     esp, 30h
0x701038: retn
0x701039: cmp     dword ptr ds:0B3F800h[eax*4], 0
0x701041: push    esi
0x701042: lea     esi, ds:0B3F800h[eax*4]
0x701049: mov     ecx, 1
0x70104E: jnz     loc_701373
0x701054: lea     eax, [edx+7FFFFFFFh]; switch 9 cases
0x70105A: cmp     eax, 8
0x70105D: ja      def_701063; jumptable 00701063 default case, case -2147483643
0x701063: jmp     ds:jpt_701063[eax*4]; switch jump
0x70106A: fldz; jumptable 00701063 case -2147483647
0x70106C: fst     [esp+34h+var_30]
0x701070: mov     eax, [esp+34h+var_30]
0x701074: fst     [esp+34h+var_2C]
0x701078: fld1
0x70107A: mov     edx, [esp+34h+var_2C]
0x70107E: fst     [esp+34h+var_28]
0x701082: mov     [esp+34h+var_20], eax
0x701086: fst     [esp+34h+var_24]
0x70108A: mov     [esp+34h+var_1C], edx
0x70108E: mov     eax, [esp+34h+var_28]
0x701092: fst     [esp+34h+var_10]
0x701096: mov     edx, [esp+34h+var_24]
0x70109A: fst     [esp+34h+var_C]
0x70109E: fstp    [esp+34h+var_4]
0x7010A2: mov     [esp+34h+var_18], eax
0x7010A6: mov     eax, [esp+34h+var_10]
0x7010AA: mov     [esp+34h+var_14], edx
0x7010AE: mov     edx, [esp+34h+var_C]
0x7010B2: fstp    [esp+34h+var_8]
0x7010B6: mov     [esp+34h+var_30], eax
0x7010BA: mov     eax, [esp+34h+var_8]
0x7010BE: mov     [esp+34h+var_2C], edx
0x7010C2: mov     edx, [esp+34h+var_4]
0x7010C6: mov     [esp+34h+var_28], eax
0x7010CA: mov     [esp+34h+var_24], edx
0x7010CE: jmp     loc_701353
0x7010D3: fldz; jumptable 00701063 case -2147483646
0x7010D5: fst     [esp+34h+var_10]
0x7010D9: fld1
0x7010DB: mov     eax, [esp+34h+var_10]
0x7010DF: fst     [esp+34h+var_C]
0x7010E3: mov     [esp+34h+var_20], eax
0x7010E7: fst     [esp+34h+var_4]
0x7010EB: mov     ecx, [esp+34h+var_C]
0x7010EF: fxch    st(1)
0x7010F1: mov     eax, [esp+34h+var_4]
0x7010F5: fst     [esp+34h+var_8]
0x7010F9: fxch    st(1)
0x7010FB: mov     edx, [esp+34h+var_8]
0x7010FF: fst     [esp+34h+var_10]
0x701103: fstp    [esp+34h+var_4]
0x701107: fst     [esp+34h+var_C]
0x70110B: fstp    [esp+34h+var_8]
0x70110F: mov     [esp+34h+var_1C], ecx
0x701113: mov     ecx, [esp+34h+var_10]
0x701117: mov     [esp+34h+var_30], ecx
0x70111B: mov     ecx, [esp+34h+var_4]
0x70111F: mov     [esp+34h+var_14], eax
0x701123: mov     eax, [esp+34h+var_8]
0x701127: mov     [esp+34h+var_18], edx
0x70112B: mov     edx, [esp+34h+var_C]
0x70112F: mov     [esp+34h+var_24], ecx
0x701133: mov     [esp+34h+var_2C], edx
0x701137: mov     [esp+34h+var_28], eax
0x70113B: mov     ecx, 6
0x701140: jmp     loc_701353
0x701145: fldz; jumptable 00701063 case -2147483645
0x701147: fst     [esp+34h+var_10]
0x70114B: fld1
0x70114D: fst     [esp+34h+var_C]
0x701151: fst     [esp+34h+var_8]
0x701155: mov     eax, [esp+34h+var_C]
0x701159: fst     [esp+34h+var_4]
0x70115D: mov     edx, [esp+34h+var_10]
0x701161: fst     [esp+34h+var_10]
0x701165: fst     [esp+34h+var_C]
0x701169: mov     [esp+34h+var_1C], eax
0x70116D: mov     eax, [esp+34h+var_4]
0x701171: fstp    [esp+34h+var_4]
0x701175: mov     [esp+34h+var_20], edx
0x701179: mov     edx, [esp+34h+var_8]
0x70117D: fstp    [esp+34h+var_8]
0x701181: jmp     loc_70132B
0x701186: fld1; jumptable 00701063 case -2147483644
0x701188: fst     [esp+34h+var_10]
0x70118C: fldz
0x70118E: fst     [esp+34h+var_C]
0x701192: fst     [esp+34h+var_8]
0x701196: fxch    st(1)
0x701198: jmp     short loc_701155
0x70119A: fldz; jumptable 00701063 case -2147483642
0x70119C: fst     [esp+34h+var_10]
0x7011A0: fld1
0x7011A2: mov     edx, [esp+34h+var_10]
0x7011A6: fst     [esp+34h+var_C]
0x7011AA: mov     [esp+34h+var_20], edx
0x7011AE: fst     [esp+34h+var_8]
0x7011B2: mov     eax, [esp+34h+var_C]
0x7011B6: fst     [esp+34h+var_4]
0x7011BA: mov     edx, [esp+34h+var_8]
0x7011BE: fxch    st(1)
0x7011C0: fstp    [esp+34h+var_10]
0x7011C4: mov     [esp+34h+var_1C], eax
0x7011C8: mov     eax, [esp+34h+var_4]
0x7011CC: fst     [esp+34h+var_C]
0x7011D0: fst     [esp+34h+var_8]
0x7011D4: fstp    [esp+34h+var_4]
0x7011D8: jmp     loc_70132B
0x7011DD: fldz; jumptable 00701063 case -2147483641
0x7011DF: fst     [esp+34h+var_10]
0x7011E3: fld1
0x7011E5: mov     ecx, [esp+34h+var_10]
0x7011E9: fst     [esp+34h+var_C]
0x7011ED: mov     [esp+34h+var_20], ecx
0x7011F1: fst     [esp+34h+var_4]
0x7011F5: mov     edx, [esp+34h+var_C]
0x7011F9: fxch    st(1)
0x7011FB: mov     ecx, [esp+34h+var_4]
0x7011FF: fst     [esp+34h+var_8]
0x701203: fxch    st(1)
0x701205: mov     [esp+34h+var_1C], edx
0x701209: mov     eax, [esp+34h+var_8]
0x70120D: fst     [esp+34h+var_10]
0x701211: fst     [esp+34h+var_C]
0x701215: mov     [esp+34h+var_14], ecx
0x701219: mov     edx, [esp+34h+var_10]
0x70121D: fstp    [esp+34h+var_4]
0x701221: mov     [esp+34h+var_18], eax
0x701225: mov     eax, [esp+34h+var_C]
0x701229: mov     [esp+34h+var_30], edx
0x70122D: mov     edx, [esp+34h+var_4]
0x701231: fstp    [esp+34h+var_8]
0x701235: mov     ecx, [esp+34h+var_8]
0x701239: mov     [esp+34h+var_28], ecx
0x70123D: mov     [esp+34h+var_2C], eax
0x701241: mov     [esp+34h+var_24], edx
0x701245: mov     ecx, 6
0x70124A: jmp     loc_701353
0x70124F: fldz; jumptable 00701063 case -2147483640
0x701251: fst     [esp+34h+var_10]
0x701255: fld1
0x701257: mov     eax, [esp+34h+var_10]
0x70125B: fst     [esp+34h+var_C]
0x70125F: mov     [esp+34h+var_20], eax
0x701263: fst     [esp+34h+var_4]
0x701267: mov     ecx, [esp+34h+var_C]
0x70126B: fxch    st(1)
0x70126D: mov     eax, [esp+34h+var_4]
0x701271: fst     [esp+34h+var_8]
0x701275: fxch    st(1)
0x701277: mov     edx, [esp+34h+var_8]
0x70127B: fst     [esp+34h+var_10]
0x70127F: fst     [esp+34h+var_8]
0x701283: fstp    [esp+34h+var_4]
0x701287: fstp    [esp+34h+var_C]
0x70128B: jmp     loc_70110F
0x701290: fldz; jumptable 00701063 case -2147483639
0x701292: fst     [esp+34h+var_10]
0x701296: fld1
0x701298: mov     edx, [esp+34h+var_10]
0x70129C: fst     [esp+34h+var_C]
0x7012A0: mov     [esp+34h+var_20], edx
0x7012A4: fst     [esp+34h+var_4]
0x7012A8: mov     eax, [esp+34h+var_C]
0x7012AC: fxch    st(1)
0x7012AE: mov     edx, [esp+34h+var_4]
0x7012B2: fst     [esp+34h+var_8]
0x7012B6: fstp    [esp+34h+var_10]
0x7012BA: mov     [esp+34h+var_1C], eax
0x7012BE: mov     ecx, [esp+34h+var_8]
0x7012C2: mov     eax, [esp+34h+var_10]
0x7012C6: mov     [esp+34h+var_18], ecx
0x7012CA: fst     [esp+34h+var_C]
0x7012CE: mov     ecx, [esp+34h+var_C]
0x7012D2: fst     [esp+34h+var_8]
0x7012D6: mov     [esp+34h+var_2C], ecx
0x7012DA: fstp    [esp+34h+var_4]
0x7012DE: mov     [esp+34h+var_14], edx
0x7012E2: mov     [esp+34h+var_30], eax
0x7012E6: mov     ecx, 6
0x7012EB: jmp     short loc_701343
0x7012ED: fld1; jumptable 00701063 default case, case -2147483643
0x7012EF: fst     [esp+34h+var_10]
0x7012F3: fldz
0x7012F5: mov     edx, [esp+34h+var_10]
0x7012F9: fst     [esp+34h+var_C]
0x7012FD: mov     [esp+34h+var_20], edx
0x701301: fxch    st(1)
0x701303: mov     eax, [esp+34h+var_C]
0x701307: fst     [esp+34h+var_8]
0x70130B: fst     [esp+34h+var_4]
0x70130F: mov     [esp+34h+var_1C], eax
0x701313: mov     edx, [esp+34h+var_8]
0x701317: fst     [esp+34h+var_10]
0x70131B: mov     eax, [esp+34h+var_4]
0x70131F: fst     [esp+34h+var_8]
0x701323: fstp    [esp+34h+var_4]
0x701327: fstp    [esp+34h+var_C]
0x70132B: mov     [esp+34h+var_14], eax
0x70132F: mov     eax, [esp+34h+var_C]
0x701333: mov     [esp+34h+var_18], edx
0x701337: mov     edx, [esp+34h+var_10]
0x70133B: mov     [esp+34h+var_2C], eax
0x70133F: mov     [esp+34h+var_30], edx
0x701343: mov     edx, [esp+34h+var_8]
0x701347: mov     eax, [esp+34h+var_4]
0x70134B: mov     [esp+34h+var_28], edx
0x70134F: mov     [esp+34h+var_24], eax
0x701353: push    ecx
0x701354: push    offset unk_B3F718
0x701359: lea     ecx, [esp+3Ch+var_30]
0x70135D: push    ecx
0x70135E: lea     edx, [esp+40h+var_20]
0x701362: push    edx
0x701363: call    sub_700C70
0x701368: add     esp, 10h
0x70136B: push    eax; a2
0x70136C: mov     ecx, esi; this
0x70136E: call    NiSmartPointer_Set??
0x701373: mov     eax, [esi]
0x701375: pop     esi
0x701376: add     esp, 30h
0x701379: retn
