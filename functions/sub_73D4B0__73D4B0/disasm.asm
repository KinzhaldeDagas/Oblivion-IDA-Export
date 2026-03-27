0x73D4B0: push    ebx
0x73D4B1: push    esi
0x73D4B2: mov     esi, [esp+8+arg_0]
0x73D4B6: push    edi
0x73D4B7: push    esi
0x73D4B8: mov     edi, ecx
0x73D4BA: call    sub_725740
0x73D4BF: mov     eax, ds:0B40190h
0x73D4C4: push    eax; ArgList
0x73D4C5: call    TESOutput_PrintString
0x73D4CA: movzx   ebx, word ptr [esi+0Ah]
0x73D4CE: movzx   ecx, word ptr [esi+8]
0x73D4D2: add     esp, 4
0x73D4D5: cmp     ebx, ecx
0x73D4D7: mov     [esp+0Ch+arg_0], eax
0x73D4DB: jb      short loc_73D4EB
0x73D4DD: movzx   edx, word ptr [esi+0Eh]
0x73D4E1: add     edx, ebx
0x73D4E3: push    edx
0x73D4E4: mov     ecx, esi
0x73D4E6: call    NiTArray_SetSize
0x73D4EB: lea     eax, [esp+0Ch+arg_0]
0x73D4EF: push    eax
0x73D4F0: push    ebx
0x73D4F1: mov     ecx, esi
0x73D4F3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D4F8: push    offset aM_kworlddir; "m_kWorldDir"
0x73D4FD: lea     ecx, [edi+114h]
0x73D503: call    sub_707280
0x73D508: movzx   ebx, word ptr [esi+0Ah]
0x73D50C: movzx   ecx, word ptr [esi+8]
0x73D510: cmp     ebx, ecx
0x73D512: mov     [esp+0Ch+arg_0], eax
0x73D516: jb      short loc_73D526
0x73D518: movzx   edx, word ptr [esi+0Eh]
0x73D51C: add     edx, ebx
0x73D51E: push    edx
0x73D51F: mov     ecx, esi
0x73D521: call    NiTArray_SetSize
0x73D526: lea     eax, [esp+0Ch+arg_0]
0x73D52A: push    eax
0x73D52B: push    ebx
0x73D52C: mov     ecx, esi
0x73D52E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D533: fld     dword ptr [edi+120h]
0x73D539: push    ecx
0x73D53A: fstp    [esp+10h+var_10]; float
0x73D53D: push    offset aM_fspotangle; "m_fSpotAngle"
0x73D542: call    TESOutput_PrintLabeledFloat
0x73D547: movzx   ebx, word ptr [esi+0Ah]
0x73D54B: movzx   ecx, word ptr [esi+8]
0x73D54F: add     esp, 8
0x73D552: cmp     ebx, ecx
0x73D554: mov     [esp+0Ch+arg_0], eax
0x73D558: jb      short loc_73D568
0x73D55A: movzx   edx, word ptr [esi+0Eh]
0x73D55E: add     edx, ebx
0x73D560: push    edx
0x73D561: mov     ecx, esi
0x73D563: call    NiTArray_SetSize
0x73D568: lea     eax, [esp+0Ch+arg_0]
0x73D56C: push    eax
0x73D56D: push    ebx
0x73D56E: mov     ecx, esi
0x73D570: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D575: fld     dword ptr [edi+124h]
0x73D57B: push    ecx
0x73D57C: fstp    [esp+10h+var_10]; float
0x73D57F: push    offset aM_fspotexponen; "m_fSpotExponent"
0x73D584: call    TESOutput_PrintLabeledFloat
0x73D589: movzx   edi, word ptr [esi+0Ah]
0x73D58D: movzx   ecx, word ptr [esi+8]
0x73D591: add     esp, 8
0x73D594: cmp     edi, ecx
0x73D596: mov     [esp+0Ch+arg_0], eax
0x73D59A: jb      short loc_73D5AA
0x73D59C: movzx   edx, word ptr [esi+0Eh]
0x73D5A0: add     edx, edi
0x73D5A2: push    edx
0x73D5A3: mov     ecx, esi
0x73D5A5: call    NiTArray_SetSize
0x73D5AA: lea     eax, [esp+0Ch+arg_0]
0x73D5AE: push    eax
0x73D5AF: push    edi
0x73D5B0: mov     ecx, esi
0x73D5B2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D5B7: pop     edi
0x73D5B8: pop     esi
0x73D5B9: pop     ebx
0x73D5BA: retn    4
