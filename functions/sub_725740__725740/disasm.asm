0x725740: push    ebx
0x725741: push    esi
0x725742: mov     esi, [esp+8+arg_0]
0x725746: push    edi
0x725747: push    esi
0x725748: mov     edi, ecx
0x72574A: call    sub_71A790
0x72574F: mov     eax, ds:0B3FD80h
0x725754: push    eax; ArgList
0x725755: call    TESOutput_PrintString
0x72575A: movzx   ebx, word ptr [esi+0Ah]
0x72575E: movzx   ecx, word ptr [esi+8]
0x725762: add     esp, 4
0x725765: cmp     ebx, ecx
0x725767: mov     [esp+0Ch+arg_0], eax
0x72576B: jb      short loc_72577B
0x72576D: movzx   edx, word ptr [esi+0Eh]
0x725771: add     edx, ebx
0x725773: push    edx
0x725774: mov     ecx, esi
0x725776: call    NiTArray_SetSize
0x72577B: lea     eax, [esp+0Ch+arg_0]
0x72577F: push    eax
0x725780: push    ebx
0x725781: mov     ecx, esi
0x725783: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x725788: fld     dword ptr [edi+108h]
0x72578E: push    ecx
0x72578F: fstp    [esp+10h+var_10]; float
0x725792: push    offset aM_fatten0; "m_fAtten0"
0x725797: call    TESOutput_PrintLabeledFloat
0x72579C: movzx   ebx, word ptr [esi+0Ah]
0x7257A0: movzx   ecx, word ptr [esi+8]
0x7257A4: add     esp, 8
0x7257A7: cmp     ebx, ecx
0x7257A9: mov     [esp+0Ch+arg_0], eax
0x7257AD: jb      short loc_7257BD
0x7257AF: movzx   edx, word ptr [esi+0Eh]
0x7257B3: add     edx, ebx
0x7257B5: push    edx
0x7257B6: mov     ecx, esi
0x7257B8: call    NiTArray_SetSize
0x7257BD: lea     eax, [esp+0Ch+arg_0]
0x7257C1: push    eax
0x7257C2: push    ebx
0x7257C3: mov     ecx, esi
0x7257C5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7257CA: fld     dword ptr [edi+10Ch]
0x7257D0: push    ecx
0x7257D1: fstp    [esp+10h+var_10]; float
0x7257D4: push    offset aM_fatten1; "m_fAtten1"
0x7257D9: call    TESOutput_PrintLabeledFloat
0x7257DE: movzx   ebx, word ptr [esi+0Ah]
0x7257E2: movzx   ecx, word ptr [esi+8]
0x7257E6: add     esp, 8
0x7257E9: cmp     ebx, ecx
0x7257EB: mov     [esp+0Ch+arg_0], eax
0x7257EF: jb      short loc_7257FF
0x7257F1: movzx   edx, word ptr [esi+0Eh]
0x7257F5: add     edx, ebx
0x7257F7: push    edx
0x7257F8: mov     ecx, esi
0x7257FA: call    NiTArray_SetSize
0x7257FF: lea     eax, [esp+0Ch+arg_0]
0x725803: push    eax
0x725804: push    ebx
0x725805: mov     ecx, esi
0x725807: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72580C: fld     dword ptr [edi+110h]
0x725812: push    ecx
0x725813: fstp    [esp+10h+var_10]; float
0x725816: push    offset aM_fatten2; "m_fAtten2"
0x72581B: call    TESOutput_PrintLabeledFloat
0x725820: movzx   edi, word ptr [esi+0Ah]
0x725824: movzx   ecx, word ptr [esi+8]
0x725828: add     esp, 8
0x72582B: cmp     edi, ecx
0x72582D: mov     [esp+0Ch+arg_0], eax
0x725831: jb      short loc_725841
0x725833: movzx   edx, word ptr [esi+0Eh]
0x725837: add     edx, edi
0x725839: push    edx
0x72583A: mov     ecx, esi
0x72583C: call    NiTArray_SetSize
0x725841: lea     eax, [esp+0Ch+arg_0]
0x725845: push    eax
0x725846: push    edi
0x725847: mov     ecx, esi
0x725849: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72584E: pop     edi
0x72584F: pop     esi
0x725850: pop     ebx
0x725851: retn    4
