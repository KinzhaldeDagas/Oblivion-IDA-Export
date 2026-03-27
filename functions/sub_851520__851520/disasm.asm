0x851520: push    0FFFFFFFFh
0x851522: push    offset SEH_851250
0x851527: mov     eax, large fs:0
0x85152D: push    eax
0x85152E: sub     esp, 1Ch
0x851531: push    ebx
0x851532: push    ebp
0x851533: push    esi
0x851534: push    edi
0x851535: mov     eax, ds:0B30AACh
0x85153A: xor     eax, esp
0x85153C: push    eax
0x85153D: lea     eax, [esp+3Ch+var_C]
0x851541: mov     large fs:0, eax
0x851547: mov     [esp+3Ch+var_20], ecx
0x85154B: mov     eax, [esp+3Ch+arg_8]
0x85154F: mov     eax, [eax+10h]
0x851552: mov     edi, ds:0B45B60h
0x851558: push    eax
0x851559: call    sub_848DA0
0x85155E: mov     ecx, ds:0B42EB8h
0x851564: movzx   eax, byte ptr [ecx+9]
0x851568: mov     edx, [edi+24h]
0x85156B: mov     esi, [edx]
0x85156D: mov     ebx, [esp+3Ch+arg_C]
0x851571: mov     edx, [ebx]
0x851573: mov     [esp+3Ch+var_28], eax
0x851577: push    eax
0x851578: mov     eax, [edx+88h]
0x85157E: mov     ecx, ebx
0x851580: mov     [esp+40h+arg_8], esi
0x851584: call    eax
0x851586: mov     esi, [esi+4]
0x851589: mov     ebp, eax
0x85158B: cmp     esi, ebp
0x85158D: jz      short loc_8515C6
0x85158F: test    esi, esi
0x851591: jz      short loc_8515AF
0x851593: lea     ecx, [esi+4]
0x851596: push    ecx; lpAddend
0x851597: call    dword ptr ds:0A2807Ch
0x85159D: test    eax, eax
0x85159F: jnz     short loc_8515AF
0x8515A1: test    esi, esi
0x8515A3: jz      short loc_8515AF
0x8515A5: mov     edx, [esi]
0x8515A7: mov     eax, [edx]
0x8515A9: push    1
0x8515AB: mov     ecx, esi
0x8515AD: call    eax
0x8515AF: test    ebp, ebp
0x8515B1: mov     esi, [esp+3Ch+arg_8]
0x8515B5: mov     [esi+4], ebp
0x8515B8: jz      short loc_8515CA
0x8515BA: add     ebp, 4
0x8515BD: push    ebp; lpAddend
0x8515BE: call    dword ptr ds:0A28078h
0x8515C4: jmp     short loc_8515CA
0x8515C6: mov     esi, [esp+3Ch+arg_8]
0x8515CA: test    esi, esi
0x8515CC: jz      short loc_8515E8
0x8515CE: cmp     byte ptr ds:0B42CDDh, 0
0x8515D5: jz      short loc_8515E8
0x8515D7: mov     edx, [ebx]
0x8515D9: mov     eax, [edx+78h]
0x8515DC: mov     ecx, ebx
0x8515DE: call    eax
0x8515E0: push    eax
0x8515E1: mov     ecx, esi
0x8515E3: call    sub_7715E0
0x8515E8: mov     ecx, [edi+24h]
0x8515EB: mov     esi, [ecx+4]
0x8515EE: mov     edx, [ebx]
0x8515F0: mov     eax, [esp+3Ch+var_28]
0x8515F4: mov     edx, [edx+90h]
0x8515FA: push    eax
0x8515FB: mov     ecx, ebx
0x8515FD: mov     [esp+40h+arg_8], esi
0x851601: call    edx
0x851603: mov     esi, [esi+4]
0x851606: mov     ebp, eax
0x851608: cmp     esi, ebp
0x85160A: jz      short loc_851643
0x85160C: test    esi, esi
0x85160E: jz      short loc_85162C
0x851610: lea     eax, [esi+4]
0x851613: push    eax; lpAddend
0x851614: call    dword ptr ds:0A2807Ch
0x85161A: test    eax, eax
0x85161C: jnz     short loc_85162C
0x85161E: test    esi, esi
0x851620: jz      short loc_85162C
0x851622: mov     edx, [esi]
0x851624: mov     eax, [edx]
0x851626: push    1
0x851628: mov     ecx, esi
0x85162A: call    eax
0x85162C: test    ebp, ebp
0x85162E: mov     esi, [esp+3Ch+arg_8]
0x851632: mov     [esi+4], ebp
0x851635: jz      short loc_851647
0x851637: add     ebp, 4
0x85163A: push    ebp; lpAddend
0x85163B: call    dword ptr ds:0A28078h
0x851641: jmp     short loc_851647
0x851643: mov     esi, [esp+3Ch+arg_8]
0x851647: test    esi, esi
0x851649: jz      short loc_851665
0x85164B: cmp     byte ptr ds:0B42CDDh, 0
0x851652: jz      short loc_851665
0x851654: mov     edx, [ebx]
0x851656: mov     eax, [edx+78h]
0x851659: mov     ecx, ebx
0x85165B: call    eax
0x85165D: push    eax
0x85165E: mov     ecx, esi
0x851660: call    sub_7715E0
0x851665: mov     esi, [esp+3Ch+var_28]
0x851669: fld1
0x85166B: cmp     esi, 4
0x85166E: fldz
0x851670: jnz     short loc_85167A
0x851672: fxch    st(1)
0x851674: fst     [esp+3Ch+var_24]
0x851678: jmp     short loc_85169C
0x85167A: cmp     esi, 3
0x85167D: fst     [esp+3Ch+var_24]
0x851681: jnz     short loc_85169A
0x851683: fstp    st(1)
0x851685: fld1
0x851687: fst     [esp+3Ch+var_28]
0x85168B: fxch    st(1)
0x85168D: cmp     esi, 1
0x851690: fst     [esp+3Ch+arg_C]
0x851694: jnz     short loc_8516AF
0x851696: fstp    st
0x851698: jmp     short loc_8516B1
0x85169A: fxch    st(1)
0x85169C: cmp     esi, 2
0x85169F: fxch    st(1)
0x8516A1: fst     [esp+3Ch+var_28]
0x8516A5: jnz     short loc_85168D
0x8516A7: fxch    st(1)
0x8516A9: fstp    [esp+3Ch+arg_C]
0x8516AD: jmp     short loc_8516B1
0x8516AF: fstp    st(1)
0x8516B1: fstp    [esp+3Ch+arg_8]
0x8516B5: sub     esp, 10h
0x8516B8: fld     [esp+4Ch+arg_8]
0x8516BC: mov     eax, esp
0x8516BE: fstp    [esp+4Ch+var_1C]
0x8516C2: mov     ecx, [esp+4Ch+var_1C]
0x8516C6: fld     [esp+4Ch+arg_C]
0x8516CA: mov     [eax], ecx
0x8516CC: fstp    [esp+4Ch+var_18]
0x8516D0: mov     edx, [esp+4Ch+var_18]
0x8516D4: fld     [esp+4Ch+var_28]
0x8516D8: mov     [eax+4], edx
0x8516DB: fstp    [esp+4Ch+var_14]
0x8516DF: mov     ecx, [esp+4Ch+var_14]
0x8516E3: fld     [esp+4Ch+var_24]
0x8516E7: mov     [eax+8], ecx
0x8516EA: fstp    [esp+4Ch+var_10]
0x8516EE: mov     edx, [esp+4Ch+var_10]
0x8516F2: push    2
0x8516F4: mov     [eax+0Ch], edx
0x8516F7: call    sub_7ECAE0
0x8516FC: add     esp, 14h
0x8516FF: cmp     esi, 8
0x851702: jnz     short loc_85170E
0x851704: fld1
0x851706: fst     [esp+3Ch+var_28]
0x85170A: fldz
0x85170C: jmp     short loc_851730
0x85170E: cmp     esi, 7
0x851711: fldz
0x851713: fst     [esp+3Ch+var_28]
0x851717: fld1
0x851719: jnz     short loc_85172E
0x85171B: fst     [esp+3Ch+var_24]
0x85171F: fxch    st(1)
0x851721: cmp     esi, 5
0x851724: fst     [esp+3Ch+arg_C]
0x851728: jnz     short loc_851741
0x85172A: fstp    st
0x85172C: jmp     short loc_851743
0x85172E: fxch    st(1)
0x851730: cmp     esi, 6
0x851733: fst     [esp+3Ch+var_24]
0x851737: jnz     short loc_851721
0x851739: fxch    st(1)
0x85173B: fstp    [esp+3Ch+arg_C]
0x85173F: jmp     short loc_851743
0x851741: fstp    st(1)
0x851743: fstp    [esp+3Ch+arg_8]
0x851747: sub     esp, 10h
0x85174A: fld     [esp+4Ch+arg_8]
0x85174E: mov     eax, esp
0x851750: fstp    [esp+4Ch+var_1C]
0x851754: mov     ecx, [esp+4Ch+var_1C]
0x851758: fld     [esp+4Ch+arg_C]
0x85175C: mov     [eax], ecx
0x85175E: fstp    [esp+4Ch+var_18]
0x851762: mov     edx, [esp+4Ch+var_18]
0x851766: fld     [esp+4Ch+var_24]
0x85176A: mov     [eax+4], edx
0x85176D: fstp    [esp+4Ch+var_14]
0x851771: mov     ecx, [esp+4Ch+var_14]
0x851775: fld     [esp+4Ch+var_28]
0x851779: mov     [eax+8], ecx
0x85177C: fstp    [esp+4Ch+var_10]
0x851780: mov     edx, [esp+4Ch+var_10]
0x851784: push    3
0x851786: mov     [eax+0Ch], edx
0x851789: call    sub_7ECAE0
0x85178E: add     esp, 14h
0x851791: cmp     byte ptr [esp+3Ch+arg_10], 0
0x851796: jz      short loc_8517D7
0x851798: mov     ebx, 1
0x85179D: add     [edi+60h], ebx
0x8517A0: mov     [esp+3Ch+arg_10], edi
0x8517A4: mov     esi, [esp+3Ch+var_20]
0x8517A8: mov     ecx, [esi+38h]
0x8517AB: lea     eax, [esp+3Ch+arg_10]
0x8517AF: push    eax
0x8517B0: push    ecx
0x8517B1: lea     ecx, [esi+40h]
0x8517B4: mov     [esp+44h+var_4], 0
0x8517BC: call    sub_76CE40
0x8517C1: or      eax, 0FFFFFFFFh
0x8517C4: add     [edi+60h], eax
0x8517C7: mov     [esp+3Ch+var_4], eax
0x8517CB: jnz     short loc_8517D4
0x8517CD: mov     ecx, edi
0x8517CF: call    sub_7604D0
0x8517D4: add     [esi+38h], ebx
0x8517D7: mov     ecx, [esp+3Ch+var_C]
0x8517DB: mov     large fs:0, ecx
0x8517E2: pop     ecx
0x8517E3: pop     edi
0x8517E4: pop     esi
0x8517E5: pop     ebp
0x8517E6: pop     ebx
0x8517E7: add     esp, 28h
0x8517EA: retn    14h
