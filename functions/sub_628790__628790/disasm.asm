0x628790: mov     eax, ds:0B3F9A8h
0x628795: sub     esp, 24h
0x628798: push    ebx
0x628799: push    esi
0x62879A: mov     esi, [esp+2Ch+arg_0]
0x62879E: mov     [esi], eax
0x6287A0: mov     ecx, ds:0B3F9ACh
0x6287A6: mov     [esi+4], ecx
0x6287A9: mov     ecx, [esp+2Ch+arg_C]
0x6287AD: test    ecx, ecx
0x6287AF: mov     edx, ds:0B3F9B0h
0x6287B5: push    edi
0x6287B6: mov     [esi+8], edx
0x6287B9: jz      loc_628929
0x6287BF: mov     edi, [esp+30h+arg_4]
0x6287C3: test    edi, edi
0x6287C5: jz      loc_628929
0x6287CB: mov     eax, [ecx]
0x6287CD: mov     edx, [eax+174h]
0x6287D3: call    edx
0x6287D5: mov     edx, [eax+4]
0x6287D8: mov     ecx, [eax]
0x6287DA: mov     eax, [eax+8]
0x6287DD: mov     [esp+30h+var_14], edx
0x6287E1: mov     edx, [edi]
0x6287E3: mov     [esp+30h+var_18], ecx
0x6287E7: mov     [esp+30h+var_10], eax
0x6287EB: mov     eax, [edx+174h]
0x6287F1: mov     ecx, edi
0x6287F3: call    eax
0x6287F5: fld     [esp+30h+arg_8]
0x6287F9: cmp     [esp+30h+arg_10], 0
0x6287FE: fadd    qword ptr ds:0A2FC68h
0x628804: mov     ecx, [eax]
0x628806: mov     edx, [eax+4]
0x628809: mov     eax, [eax+8]
0x62880C: fstp    [esp+30h+arg_0]
0x628810: mov     [esp+30h+var_24], ecx
0x628814: mov     [esp+30h+var_20], edx
0x628818: mov     [esp+30h+var_1C], eax
0x62881C: jz      short loc_628840
0x62881E: fld     [esp+30h+var_18]
0x628822: fsub    [esp+30h+var_24]
0x628826: fstp    [esp+30h+var_C]
0x62882A: fld     [esp+30h+var_14]
0x62882E: fsub    [esp+30h+var_20]
0x628832: fstp    [esp+30h+var_8]
0x628836: fld     [esp+30h+var_10]
0x62883A: fsub    [esp+30h+var_1C]
0x62883E: jmp     short loc_628860
0x628840: fld     [esp+30h+var_24]
0x628844: fsub    [esp+30h+var_18]
0x628848: fstp    [esp+30h+var_C]
0x62884C: fld     [esp+30h+var_20]
0x628850: fsub    [esp+30h+var_14]
0x628854: fstp    [esp+30h+var_8]
0x628858: fld     [esp+30h+var_1C]
0x62885C: fsub    [esp+30h+var_10]
0x628860: mov     ecx, [esp+30h+var_C]
0x628864: fstp    [esp+30h+var_4]
0x628868: mov     edx, [esp+30h+var_8]
0x62886C: mov     eax, [esp+30h+var_4]
0x628870: mov     [esi], ecx
0x628872: mov     [esi+4], edx
0x628875: mov     ecx, esi
0x628877: mov     [esi+8], eax
0x62887A: call    sub_43F350
0x62887F: fstp    st
0x628881: fld     dword ptr [esi]
0x628883: fld     [esp+30h+arg_0]
0x628887: fld     st
0x628889: fmulp   st(2), st
0x62888B: fxch    st(1)
0x62888D: fstp    [esp+30h+var_C]
0x628891: fld     dword ptr [esi+4]
0x628894: fmul    st, st(1)
0x628896: fstp    [esp+30h+var_8]
0x62889A: fmul    dword ptr [esi+8]
0x62889D: fstp    [esp+30h+var_4]
0x6288A1: fld     [esp+30h+var_C]
0x6288A5: fadd    [esp+30h+var_24]
0x6288A9: fstp    [esp+30h+var_18]
0x6288AD: mov     ecx, [esp+30h+var_18]
0x6288B1: fld     [esp+30h+var_8]
0x6288B5: mov     [esi], ecx
0x6288B7: fadd    [esp+30h+var_20]
0x6288BB: mov     ecx, edi; this
0x6288BD: fstp    [esp+30h+var_14]
0x6288C1: mov     edx, [esp+30h+var_14]
0x6288C5: fld     [esp+30h+var_4]
0x6288C9: mov     [esi+4], edx
0x6288CC: fadd    [esp+30h+var_1C]
0x6288D0: fstp    [esp+30h+var_10]
0x6288D4: mov     eax, [esp+30h+var_10]
0x6288D8: mov     [esi+8], eax
0x6288DB: call    TESObjectREFR_GetParentCell
0x6288E0: mov     ebx, eax
0x6288E2: test    ebx, ebx
0x6288E4: jz      short loc_628929
0x6288E6: mov     ecx, ebx; this
0x6288E8: call    TESObjectCELL_IsInterior
0x6288ED: test    al, al
0x6288EF: jz      short loc_628929
0x6288F1: mov     ecx, [esi]
0x6288F3: mov     edx, [esi+4]
0x6288F6: push    0; int
0x6288F8: push    0; float
0x6288FA: push    0; float
0x6288FC: push    ebx; int
0x6288FD: sub     esp, 0Ch
0x628900: mov     eax, esp
0x628902: mov     [eax], ecx
0x628904: mov     ecx, [esi+8]
0x628907: mov     [eax+4], edx
0x62890A: lea     edx, [esp+4Ch+var_C]
0x62890E: mov     [eax+8], ecx
0x628911: push    edx; int
0x628912: mov     ecx, edi
0x628914: call    sub_5E2E20
0x628919: mov     ecx, [eax]
0x62891B: mov     [esi], ecx
0x62891D: mov     edx, [eax+4]
0x628920: mov     [esi+4], edx
0x628923: mov     eax, [eax+8]
0x628926: mov     [esi+8], eax
0x628929: pop     edi
0x62892A: mov     eax, esi
0x62892C: pop     esi
0x62892D: pop     ebx
0x62892E: add     esp, 24h
0x628931: retn
