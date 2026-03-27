0x6485B0: sub     esp, 20h
0x6485B3: push    ebp
0x6485B4: push    esi
0x6485B5: push    edi; int
0x6485B6: mov     edi, [esp+2Ch+arg_0]
0x6485BA: xor     esi, esi
0x6485BC: push    esi; int
0x6485BD: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6485C2: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6485C7: push    esi; int
0x6485C8: mov     ecx, edi
0x6485CA: call    sub_5E2E00
0x6485CF: push    eax; void *
0x6485D0: call    OblivionDynamicCast
0x6485D5: mov     ebp, eax
0x6485D7: add     esp, 14h
0x6485DA: cmp     ebp, esi
0x6485DC: jz      loc_6489CC
0x6485E2: mov     eax, [ebp+0]
0x6485E5: mov     edx, [eax+198h]
0x6485EB: push    esi
0x6485EC: mov     ecx, ebp
0x6485EE: call    edx
0x6485F0: test    al, al
0x6485F2: jnz     loc_6489CC
0x6485F8: cmp     ebp, ds:0B333C4h
0x6485FE: jz      loc_6489D3
0x648604: mov     eax, [ebp+0]
0x648607: mov     edx, [eax+284h]
0x64860D: push    41h ; 'A'
0x64860F: mov     ecx, ebp
0x648611: call    edx
0x648613: mov     [esp+2Ch+var_10], eax
0x648617: fild    [esp+2Ch+var_10]
0x64861B: mov     eax, [ebp+0]
0x64861E: mov     edx, [eax+348h]
0x648624: mov     ecx, ebp
0x648626: fstp    [esp+2Ch+var_8]
0x64862A: call    edx
0x64862C: fdiv    qword ptr ds:0A309F0h
0x648632: mov     eax, [ebp+0]
0x648635: mov     edx, [eax+284h]
0x64863B: push    2
0x64863D: mov     ecx, ebp
0x64863F: fmul    [esp+30h+var_8]
0x648643: fstp    [esp+30h+var_C]
0x648647: call    edx
0x648649: mov     [esp+2Ch+var_10], eax
0x64864D: fild    [esp+2Ch+var_10]
0x648651: mov     eax, [ebp+0]
0x648654: mov     edx, [eax+284h]
0x64865A: fmul    qword ptr ds:0A70398h
0x648660: push    40h ; '@'
0x648662: mov     ecx, ebp
0x648664: fstp    [esp+30h+var_8]
0x648668: call    edx
0x64866A: mov     ecx, [edi+58h]
0x64866D: mov     [esp+2Ch+arg_0], eax
0x648671: fild    [esp+2Ch+arg_0]
0x648675: push    1
0x648677: fadd    [esp+30h+var_8]
0x64867B: fstp    dword ptr [esp+30h+var_8]
0x64867F: fldz
0x648681: fstp    [esp+30h+arg_0]
0x648685: mov     eax, [ecx]
0x648687: mov     edx, [eax+0ECh]
0x64868D: call    edx
0x64868F: test    eax, eax
0x648691: jnz     short loc_6486E6
0x648693: fldz
0x648695: lea     eax, [esp+2Ch+var_10]
0x648699: push    eax; int
0x64869A: fstp    [esp+30h+var_10]
0x64869E: lea     ecx, [esp+30h+arg_0]
0x6486A2: push    ecx; int
0x6486A3: push    1
0x6486A5: mov     ecx, edi; this
0x6486A7: call    Actor_GetFatigueFraction
0x6486AC: mov     edx, [edi]
0x6486AE: mov     eax, [edx+284h]
0x6486B4: push    ecx
0x6486B5: fstp    [esp+3Ch+var_3C]
0x6486B8: push    esi
0x6486B9: mov     ecx, edi
0x6486BB: call    eax
0x6486BD: mov     edx, [edi]
0x6486BF: push    eax; char
0x6486C0: mov     eax, [edx+284h]
0x6486C6: push    7; float
0x6486C8: mov     ecx, edi
0x6486CA: call    eax
0x6486CC: mov     edx, [edi]
0x6486CE: push    eax; int
0x6486CF: mov     eax, [edx+284h]
0x6486D5: push    11h; int
0x6486D7: mov     ecx, edi
0x6486D9: call    eax
0x6486DB: push    eax; int
0x6486DC: call    Calc_HandToHandDamage
0x6486E1: add     esp, 1Ch
0x6486E4: jmp     short loc_648765
0x6486E6: mov     ecx, [edi+58h]
0x6486E9: mov     edx, [ecx]
0x6486EB: mov     eax, [edx+0ECh]
0x6486F1: push    1
0x6486F3: call    eax
0x6486F5: cmp     eax, esi
0x6486F7: jz      short loc_648765
0x6486F9: mov     eax, [eax+8]
0x6486FC: push    esi; int
0x6486FD: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x648702: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x648707: push    esi; int
0x648708: push    eax; void *
0x648709: call    OblivionDynamicCast
0x64870E: add     esp, 14h
0x648711: cmp     eax, esi
0x648713: jz      short loc_648765
0x648715: mov     ecx, [edi+58h]
0x648718: mov     edx, [ecx]
0x64871A: mov     eax, [edx+324h]
0x648720: call    eax
0x648722: fstp    [esp+2Ch+arg_0]
0x648726: fldz
0x648728: fcomp   [esp+2Ch+arg_0]
0x64872C: fnstsw  ax
0x64872E: test    ah, 1
0x648731: jnz     short loc_648765
0x648733: mov     ecx, [edi+58h]
0x648736: mov     edx, [ecx]
0x648738: mov     eax, [edx+0ECh]
0x64873E: push    1
0x648740: call    eax
0x648742: push    eax
0x648743: push    edi
0x648744: call    sub_612A90
0x648749: fstp    [esp+34h+arg_0]
0x64874D: mov     ecx, [edi+58h]
0x648750: fld     [esp+34h+arg_0]
0x648754: mov     edx, [ecx]
0x648756: fstp    [esp+34h+var_30]
0x64875A: mov     eax, [edx+328h]
0x648760: add     esp, 4
0x648763: call    eax
0x648765: fld     [esp+2Ch+arg_0]
0x648769: push    ebx
0x64876A: fdiv    qword ptr ds:0A309F0h
0x648770: push    1
0x648772: mov     ecx, edi
0x648774: fstp    [esp+34h+var_1C]
0x648778: call    sub_5E8ED0
0x64877D: fldz
0x64877F: mov     ebx, eax
0x648781: fstp    dword ptr [esp+30h+var_18]
0x648785: cmp     ebx, esi
0x648787: mov     [esp+30h+var_10], ebx
0x64878B: mov     dword ptr [esp+30h+var_18+4], esi
0x64878F: mov     [esp+30h+var_20], esi
0x648793: jz      loc_6488C3
0x648799: lea     esp, [esp+0]
0x6487A0: mov     esi, [ebx]
0x6487A2: test    esi, esi
0x6487A4: jz      loc_6488C3
0x6487AA: mov     ebx, [ebx+4]
0x6487AD: push    0
0x6487AF: push    3
0x6487B1: lea     ecx, [esi+24h]
0x6487B4: call    EffectItemList_GetStrongestItem
0x6487B9: mov     eax, [eax+10h]
0x6487BC: cmp     eax, 2
0x6487BF: jnz     short loc_64883C
0x6487C1: test    esi, esi
0x6487C3: jz      short loc_6487CA
0x6487C5: lea     eax, [esi+18h]
0x6487C8: jmp     short loc_6487CC
0x6487CA: xor     eax, eax
0x6487CC: push    eax
0x6487CD: mov     ecx, edi
0x6487CF: call    sub_5E0970
0x6487D4: push    ecx
0x6487D5: fstp    [esp+34h+var_34]; float
0x6487D8: call    sub_546CA0
0x6487DD: fcomp   dword ptr ds:0A2FAA8h
0x6487E3: add     esp, 4
0x6487E6: fnstsw  ax
0x6487E8: test    ah, 41h
0x6487EB: jnz     loc_6488BB
0x6487F1: mov     ecx, [esp+30h+var_20]
0x6487F5: test    ecx, ecx
0x6487F7: jnz     loc_6488AE
0x6487FD: push    8; Size
0x6487FF: call    FormHeapAlloc
0x648804: add     esp, 4
0x648807: test    eax, eax
0x648809: jz      short loc_648834
0x64880B: test    esi, esi
0x64880D: jz      short loc_648824
0x64880F: lea     ecx, [esi+18h]
0x648812: mov     [eax], ecx
0x648814: mov     dword ptr [eax+4], 0
0x64881B: mov     [esp+30h+var_20], eax
0x64881F: jmp     loc_6488BB
0x648824: xor     ecx, ecx
0x648826: mov     [eax], ecx
0x648828: mov     [eax+4], ecx
0x64882B: mov     [esp+30h+var_20], eax
0x64882F: jmp     loc_6488BB
0x648834: xor     eax, eax
0x648836: mov     [esp+30h+var_20], eax
0x64883A: jmp     short loc_6488BB
0x64883C: cmp     eax, 1
0x64883F: jnz     short loc_6488BB
0x648841: test    esi, esi
0x648843: jz      short loc_64884A
0x648845: lea     eax, [esi+18h]
0x648848: jmp     short loc_64884C
0x64884A: xor     eax, eax
0x64884C: push    eax
0x64884D: mov     ecx, edi
0x64884F: call    sub_5E0970
0x648854: push    ecx
0x648855: fstp    [esp+34h+var_34]; float
0x648858: call    sub_546CA0
0x64885D: fcomp   dword ptr ds:0A2FAA8h
0x648863: add     esp, 4
0x648866: fnstsw  ax
0x648868: test    ah, 41h
0x64886B: jnz     short loc_6488BB
0x64886D: mov     ecx, dword ptr [esp+30h+var_18+4]
0x648871: test    ecx, ecx
0x648873: jnz     short loc_6488AE
0x648875: push    8; Size
0x648877: call    FormHeapAlloc
0x64887C: add     esp, 4
0x64887F: test    eax, eax
0x648881: jz      short loc_6488A6
0x648883: test    esi, esi
0x648885: jz      short loc_648899
0x648887: lea     ecx, [esi+18h]
0x64888A: mov     [eax], ecx
0x64888C: mov     dword ptr [eax+4], 0
0x648893: mov     dword ptr [esp+30h+var_18+4], eax
0x648897: jmp     short loc_6488BB
0x648899: xor     ecx, ecx
0x64889B: mov     [eax], ecx
0x64889D: mov     [eax+4], ecx
0x6488A0: mov     dword ptr [esp+30h+var_18+4], eax
0x6488A4: jmp     short loc_6488BB
0x6488A6: xor     eax, eax
0x6488A8: mov     dword ptr [esp+30h+var_18+4], eax
0x6488AC: jmp     short loc_6488BB
0x6488AE: test    esi, esi
0x6488B0: jz      short loc_6488B7
0x6488B2: lea     eax, [esi+18h]
0x6488B5: jmp     short loc_6488B9
0x6488B7: xor     eax, eax
0x6488B9: mov     [ecx], eax
0x6488BB: test    ebx, ebx
0x6488BD: jnz     loc_6487A0
0x6488C3: mov     esi, [esp+30h+arg_4]
0x6488C7: test    esi, esi
0x6488C9: pop     ebx
0x6488CA: jz      loc_6489A9
0x6488D0: mov     edx, [edi]
0x6488D2: mov     eax, [edx+334h]
0x6488D8: push    1
0x6488DA: mov     ecx, edi
0x6488DC: call    eax
0x6488DE: test    al, al
0x6488E0: jz      loc_6489D3
0x6488E6: mov     eax, dword ptr [esp+2Ch+var_18+4]
0x6488EA: test    eax, eax
0x6488EC: jnz     short loc_6488F6
0x6488EE: mov     eax, [esp+2Ch+var_20]
0x6488F2: test    eax, eax
0x6488F4: jz      short loc_648925
0x6488F6: mov     ecx, [eax]
0x6488F8: add     ecx, 0Ch
0x6488FB: call    EffectItemList_GetSchoolAV
0x648900: mov     edx, [edi]
0x648902: push    eax
0x648903: mov     eax, [edx+284h]
0x648909: mov     ecx, edi
0x64890B: call    eax
0x64890D: mov     [esp+2Ch+arg_4], eax
0x648911: fild    [esp+2Ch+arg_4]
0x648915: fmul    qword ptr ds:0A2FC68h
0x64891B: fdiv    qword ptr ds:0A309F0h
0x648921: fstp    dword ptr [esp+2Ch+var_18]
0x648925: fld     [esp+2Ch+var_1C]
0x648929: mov     edx, [ebp+0]
0x64892C: fsub    [esp+2Ch+var_C]
0x648930: push    edi
0x648931: push    ecx
0x648932: mov     ecx, ebp
0x648934: fstp    [esp+34h+var_1C]
0x648938: fld     dword ptr [esp+34h+var_18]
0x64893C: fsub    dword ptr [esp+34h+var_8]
0x648940: fstp    dword ptr [esp+34h+var_18]
0x648944: fld     [esp+34h+var_1C]
0x648948: fld     dword ptr [esp+34h+var_18]
0x64894C: fcompp
0x64894E: fnstsw  ax
0x648950: test    ah, 5
0x648953: mov     eax, [edx+2A4h]
0x648959: jp      short loc_64896F
0x64895B: fld     [esp+34h+arg_0]
0x64895F: fmul    qword ptr ds:0A3D360h
0x648965: fstp    [esp+34h+arg_4]
0x648969: fld     [esp+34h+arg_4]
0x64896D: jmp     short loc_64897F
0x64896F: fldz
0x648971: fmul    qword ptr ds:0A3D360h
0x648977: fstp    [esp+34h+arg_4]
0x64897B: fld     [esp+34h+arg_4]
0x64897F: fstp    [esp+34h+var_34]
0x648982: push    8
0x648984: call    eax
0x648986: mov     edx, [ebp+0]
0x648989: mov     eax, [edx+198h]
0x64898F: push    0
0x648991: mov     ecx, ebp
0x648993: call    eax
0x648995: test    al, al
0x648997: jz      short loc_6489A0
0x648999: mov     ecx, edi; int
0x64899B: call    sub_5EAE70
0x6489A0: sub     esi, 1
0x6489A3: jnz     loc_6488D0
0x6489A9: mov     ecx, [esp+2Ch+var_10]
0x6489AD: test    ecx, ecx
0x6489AF: jz      short loc_6489D3
0x6489B1: call    BSSimpleList_Clear
0x6489B6: mov     ecx, [esp+2Ch+var_10]
0x6489BA: push    ecx
0x6489BB: call    FormHeapFree
0x6489C0: add     esp, 4
0x6489C3: pop     edi
0x6489C4: pop     esi
0x6489C5: pop     ebp
0x6489C6: add     esp, 20h
0x6489C9: retn    8
0x6489CC: mov     ecx, edi; int
0x6489CE: call    sub_5EAE70
0x6489D3: pop     edi
0x6489D4: pop     esi
0x6489D5: pop     ebp
0x6489D6: add     esp, 20h
0x6489D9: retn    8
