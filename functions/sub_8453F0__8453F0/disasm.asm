0x8453F0: push    0FFFFFFFFh
0x8453F2: push    offset SEH_845870
0x8453F7: mov     eax, large fs:0
0x8453FD: push    eax
0x8453FE: sub     esp, 0CCh
0x845404: push    ebx
0x845405: push    ebp
0x845406: push    esi
0x845407: push    edi
0x845408: mov     eax, ds:0B30AACh
0x84540D: xor     eax, esp
0x84540F: push    eax
0x845410: lea     eax, [esp+0ECh+var_C]
0x845417: mov     large fs:0, eax
0x84541D: mov     edi, ecx
0x84541F: mov     [esp+0ECh+var_C4], edi
0x845423: mov     ecx, [esp+0ECh+arg_0]
0x84542A: mov     eax, [edi]
0x84542C: mov     ebx, ds:0B45BC8h
0x845432: mov     edx, [eax+0BCh]
0x845438: push    0
0x84543A: push    0
0x84543C: push    ecx
0x84543D: mov     ecx, edi
0x84543F: mov     [esp+0F8h+var_D4], ebx
0x845443: call    edx
0x845445: mov     eax, [ebx+24h]
0x845448: mov     ecx, [esp+0ECh+arg_C]
0x84544F: mov     edx, [ecx]
0x845451: mov     ebp, [eax]
0x845453: mov     eax, [edx+88h]
0x845459: push    0
0x84545B: call    eax
0x84545D: mov     esi, [ebp+4]
0x845460: cmp     esi, eax
0x845462: mov     [esp+0ECh+var_D8], eax
0x845466: jz      short loc_84549D
0x845468: test    esi, esi
0x84546A: jz      short loc_84548C
0x84546C: lea     ecx, [esi+4]
0x84546F: push    ecx; lpAddend
0x845470: call    dword ptr ds:0A2807Ch
0x845476: test    eax, eax
0x845478: jnz     short loc_845488
0x84547A: test    esi, esi
0x84547C: jz      short loc_845488
0x84547E: mov     edx, [esi]
0x845480: mov     eax, [edx]
0x845482: push    1
0x845484: mov     ecx, esi
0x845486: call    eax
0x845488: mov     eax, [esp+0ECh+var_D8]
0x84548C: test    eax, eax
0x84548E: mov     [ebp+4], eax
0x845491: jz      short loc_84549D
0x845493: add     eax, 4
0x845496: push    eax; lpAddend
0x845497: call    dword ptr ds:0A28078h
0x84549D: mov     ecx, [esp+0ECh+arg_C]
0x8454A4: push    ecx
0x8454A5: push    ebp
0x8454A6: mov     ecx, edi
0x8454A8: call    sub_848FA0
0x8454AD: mov     edx, [ebx+24h]
0x8454B0: mov     ebp, [edx+4]
0x8454B3: mov     eax, ds:0B43128h
0x8454B8: mov     esi, [ebp+4]
0x8454BB: cmp     esi, eax
0x8454BD: mov     ecx, eax
0x8454BF: mov     [esp+0ECh+var_D8], ecx
0x8454C3: jz      short loc_8454FA
0x8454C5: test    esi, esi
0x8454C7: jz      short loc_8454E9
0x8454C9: lea     eax, [esi+4]
0x8454CC: push    eax; lpAddend
0x8454CD: call    dword ptr ds:0A2807Ch
0x8454D3: test    eax, eax
0x8454D5: jnz     short loc_8454E5
0x8454D7: test    esi, esi
0x8454D9: jz      short loc_8454E5
0x8454DB: mov     edx, [esi]
0x8454DD: mov     eax, [edx]
0x8454DF: push    1
0x8454E1: mov     ecx, esi
0x8454E3: call    eax
0x8454E5: mov     ecx, [esp+0ECh+var_D8]
0x8454E9: test    ecx, ecx
0x8454EB: mov     [ebp+4], ecx
0x8454EE: jz      short loc_8454FA
0x8454F0: add     ecx, 4
0x8454F3: push    ecx; lpAddend
0x8454F4: call    dword ptr ds:0A28078h
0x8454FA: mov     ecx, [esp+0ECh+arg_C]
0x845501: mov     [esp+0ECh+var_CC], 0
0x845509: call    sub_7EE1F0
0x84550E: mov     ebp, eax
0x845510: test    ebp, ebp
0x845512: jnz     short loc_84552A
0x845514: mov     ecx, [esp+0ECh+arg_C]
0x84551B: call    sub_7EE1D0
0x845520: mov     ebp, eax
0x845522: test    ebp, ebp
0x845524: jz      loc_8457EA
0x84552A: fldz
0x84552C: mov     [esp+0ECh+var_D8], offset unk_B46298
0x845534: fld     dword ptr ds:0A3D65Ch
0x84553A: xor     ebx, ebx
0x84553C: mov     ecx, ds:0B42E88h
0x845542: cmp     [esp+0ECh+var_CC], ecx
0x845546: jge     loc_8457E2
0x84554C: lea     esi, [ebp+8]
0x84554F: mov     ecx, 0Dh
0x845554: lea     edi, [esp+0ECh+var_80]
0x845558: rep movsd
0x84555A: fld     [esp+0ECh+var_80]
0x84555E: fstp    [esp+0ECh+var_4C]
0x845565: fld     [esp+0ECh+var_7C]
0x845569: fstp    [esp+0ECh+var_48]
0x845570: fld     [esp+0ECh+var_78]
0x845574: fstp    [esp+0ECh+var_44]
0x84557B: fld     [esp+0ECh+var_5C]
0x845582: fstp    [esp+0ECh+var_40]
0x845589: fld     [esp+0ECh+var_74]
0x84558D: fstp    [esp+0ECh+var_3C]
0x845594: fld     [esp+0ECh+var_70]
0x845598: fstp    [esp+0ECh+var_38]
0x84559F: mov     edi, [esp+0ECh+var_D8]
0x8455A3: fld     [esp+0ECh+var_6C]
0x8455AA: mov     ecx, 10h
0x8455AF: fstp    [esp+0ECh+var_34]
0x8455B6: lea     esi, [esp+0ECh+var_4C]
0x8455BD: fld     [esp+0ECh+var_58]
0x8455C4: mov     eax, 5
0x8455C9: fstp    [esp+0ECh+var_30]
0x8455D0: fld     [esp+0ECh+var_68]
0x8455D7: fstp    [esp+0ECh+var_2C]
0x8455DE: fld     [esp+0ECh+var_64]
0x8455E5: fstp    [esp+0ECh+var_28]
0x8455EC: fld     [esp+0ECh+var_60]
0x8455F3: fstp    [esp+0ECh+var_24]
0x8455FA: fld     [esp+0ECh+var_54]
0x845601: fstp    [esp+0ECh+var_20]
0x845608: fxch    st(1)
0x84560A: fst     [esp+0ECh+var_1C]
0x845611: fst     [esp+0ECh+var_18]
0x845618: fst     [esp+0ECh+var_14]
0x84561F: fld     [esp+0ECh+var_50]
0x845626: fstp    [esp+0ECh+var_10]
0x84562D: rep movsd
0x84562F: fld     dword ptr [ebp+40h]
0x845632: fstp    [esp+0ECh+var_D0]
0x845636: fld1
0x845638: fstp    [esp+0ECh+var_C8]
0x84563C: test    al, 1
0x84563E: fld     [esp+0ECh+var_D0]
0x845642: jz      short loc_84564E
0x845644: fld     st
0x845646: fmul    [esp+0ECh+var_C8]
0x84564A: fstp    [esp+0ECh+var_C8]
0x84564E: shr     eax, 1
0x845650: jz      short loc_84565A
0x845652: fmul    st, st
0x845654: fstp    [esp+0ECh+var_D0]
0x845658: jmp     short loc_84563C
0x84565A: fstp    st
0x84565C: fld     [esp+0ECh+var_C8]
0x845660: fstp    [esp+0ECh+var_D0]
0x845664: fld     [esp+0ECh+var_D0]
0x845668: fld1
0x84566A: fsubrp  st(1), st
0x84566C: fstp    dword ptr [ebx+0B46218h]
0x845672: movzx   eax, byte ptr [ebp+44h]
0x845676: cmp     eax, 3; switch 4 cases
0x845679: ja      def_84567F
0x84567F: jmp     ds:jpt_84567F[eax*4]; switch jump
0x845686: fst     [esp+0ECh+var_C0]; jumptable 0084567F case 0
0x84568A: mov     edx, [esp+0ECh+var_C0]
0x84568E: fst     [esp+0ECh+var_B8]
0x845692: mov     ecx, [esp+0ECh+var_B8]
0x845696: fxch    st(1)
0x845698: mov     ds:dword_B46198[ebx], edx
0x84569E: fst     [esp+0ECh+var_BC]
0x8456A2: mov     eax, [esp+0ECh+var_BC]
0x8456A6: fst     [esp+0ECh+var_B4]
0x8456AA: mov     edx, [esp+0ECh+var_B4]
0x8456AE: mov     ds:dword_B4619C[ebx], eax
0x8456B4: mov     ds:dword_B461A0[ebx], ecx
0x8456BA: mov     ds:dword_B461A4[ebx], edx
0x8456C0: jmp     loc_8457A1
0x8456C5: fxch    st(1); jumptable 0084567F case 1
0x8456C7: fst     [esp+0ECh+var_A0]
0x8456CB: mov     eax, [esp+0ECh+var_A0]
0x8456CF: fst     [esp+0ECh+var_9C]
0x8456D3: mov     ecx, [esp+0ECh+var_9C]
0x8456D7: fst     [esp+0ECh+var_94]
0x8456DB: mov     ds:dword_B46198[ebx], eax
0x8456E1: mov     eax, [esp+0ECh+var_94]
0x8456E5: fxch    st(1)
0x8456E7: fst     [esp+0ECh+var_98]
0x8456EB: mov     edx, [esp+0ECh+var_98]
0x8456EF: mov     ds:dword_B4619C[ebx], ecx
0x8456F5: mov     ds:dword_B461A0[ebx], edx
0x8456FB: mov     ds:dword_B461A4[ebx], eax
0x845701: jmp     loc_84579F
0x845706: fst     [esp+0ECh+var_90]; jumptable 0084567F case 2
0x84570A: mov     ecx, [esp+0ECh+var_90]
0x84570E: fxch    st(1)
0x845710: mov     ds:dword_B46198[ebx], ecx
0x845716: fst     [esp+0ECh+var_8C]
0x84571A: mov     edx, [esp+0ECh+var_8C]
0x84571E: fst     [esp+0ECh+var_88]
0x845722: mov     eax, [esp+0ECh+var_88]
0x845726: fst     [esp+0ECh+var_84]
0x84572A: mov     ecx, [esp+0ECh+var_84]
0x84572E: mov     ds:dword_B4619C[ebx], edx
0x845734: mov     ds:dword_B461A0[ebx], eax
0x84573A: mov     ds:dword_B461A4[ebx], ecx
0x845740: jmp     short loc_8457A1
0x845742: fxch    st(1); jumptable 0084567F case 3
0x845744: fst     [esp+0ECh+var_B0]
0x845748: mov     edx, [esp+0ECh+var_B0]
0x84574C: fst     [esp+0ECh+var_AC]
0x845750: mov     eax, [esp+0ECh+var_AC]
0x845754: mov     ds:dword_B46198[ebx], edx
0x84575A: fst     [esp+0ECh+var_A8]
0x84575E: mov     ecx, [esp+0ECh+var_A8]
0x845762: fst     [esp+0ECh+var_A4]
0x845766: mov     edx, [esp+0ECh+var_A4]
0x84576A: mov     ds:dword_B4619C[ebx], eax
0x845770: mov     ds:dword_B461A0[ebx], ecx
0x845776: mov     ds:dword_B461A4[ebx], edx
0x84577C: jmp     short loc_8457A1
