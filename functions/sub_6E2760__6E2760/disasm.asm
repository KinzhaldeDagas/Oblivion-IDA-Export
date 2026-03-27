0x6E2760: push    0FFFFFFFFh
0x6E2762: push    offset SEH_6E2760
0x6E2767: mov     eax, large fs:0
0x6E276D: push    eax
0x6E276E: sub     esp, 18h
0x6E2771: push    esi
0x6E2772: push    edi
0x6E2773: mov     eax, ds:0B30AACh
0x6E2778: xor     eax, esp
0x6E277A: push    eax
0x6E277B: lea     eax, [esp+30h+var_C]
0x6E277F: mov     large fs:0, eax
0x6E2785: mov     esi, ecx
0x6E2787: mov     edi, [esi+44h]
0x6E278A: mov     eax, [esi+48h]
0x6E278D: push    eax
0x6E278E: mov     ecx, edi
0x6E2790: call    sub_7300B0
0x6E2795: fstp    [esp+30h+var_24]
0x6E2799: mov     ecx, [esi+48h]
0x6E279C: add     ecx, 1
0x6E279F: push    ecx
0x6E27A0: mov     ecx, edi
0x6E27A2: call    sub_7300B0
0x6E27A7: fstp    [esp+30h+var_20]
0x6E27AB: mov     edx, [esi+48h]
0x6E27AE: add     edx, 2
0x6E27B1: push    edx
0x6E27B2: mov     ecx, edi
0x6E27B4: call    sub_7300B0
0x6E27B9: fstp    [esp+30h+var_1C]
0x6E27BD: fld     [esp+30h+var_24]
0x6E27C1: push    20h ; ' '; Size
0x6E27C3: fstp    [esp+34h+var_18]
0x6E27C7: fld     [esp+34h+var_20]
0x6E27CB: fstp    [esp+34h+var_14]
0x6E27CF: fld     [esp+34h+var_1C]
0x6E27D3: fstp    [esp+34h+var_10]
0x6E27D7: call    FormHeapAlloc
0x6E27DC: add     esp, 4
0x6E27DF: mov     [esp+30h+var_1C], eax
0x6E27E3: test    eax, eax
0x6E27E5: mov     [esp+30h+var_4], 0
0x6E27ED: jz      short loc_6E2823
0x6E27EF: mov     ecx, [esp+30h+var_18]
0x6E27F3: sub     esp, 0Ch
0x6E27F6: mov     edx, esp
0x6E27F8: mov     [edx], ecx
0x6E27FA: mov     ecx, [esp+3Ch+var_14]
0x6E27FE: mov     [edx+4], ecx
0x6E2801: mov     ecx, [esp+3Ch+var_10]
0x6E2805: mov     [edx+8], ecx
0x6E2808: mov     ecx, eax
0x6E280A: call    sub_6DA240
0x6E280F: mov     ecx, [esp+30h+var_C]
0x6E2813: mov     large fs:0, ecx
0x6E281A: pop     ecx
0x6E281B: pop     edi
0x6E281C: pop     esi
0x6E281D: add     esp, 24h
0x6E2820: retn    4
0x6E2823: xor     eax, eax
0x6E2825: mov     ecx, [esp+30h+var_C]
0x6E2829: mov     large fs:0, ecx
0x6E2830: pop     ecx
0x6E2831: pop     edi
0x6E2832: pop     esi
0x6E2833: add     esp, 24h
0x6E2836: retn    4
