0x6324F0: sub     esp, 24h
0x6324F3: mov     eax, [esp+24h+arg_4]
0x6324F7: push    ebp
0x6324F8: push    esi
0x6324F9: push    edi
0x6324FA: mov     esi, ecx
0x6324FC: mov     ecx, [esp+30h+arg_0]
0x632500: push    eax; Src
0x632501: push    ecx; int
0x632502: mov     ecx, esi
0x632504: call    MiddleHighProc_Save??
0x632509: mov     ecx, ds:0B33B00h
0x63250F: xor     ebp, ebp
0x632511: cmp     byte ptr ds:0B05BACh, 0
0x632518: mov     [esp+30h+var_4], ebp
0x63251C: mov     eax, [ecx+14h]
0x63251F: mov     [esp+30h+var_8], ebp
0x632523: mov     [esp+30h+var_20], eax
0x632527: jz      short loc_63252D
0x632529: mov     [esp+30h+var_20], eax
0x63252D: call    sub_45A170
0x632532: test    al, al
0x632534: jz      short loc_632569
0x632536: mov     ecx, ds:0B33B00h
0x63253C: push    4; Size
0x63253E: lea     edx, [esp+34h+Src]
0x632542: push    edx; Src
0x632543: mov     [esp+38h+Src], 4B4F4C42h
0x63254B: call    SaveLoad_SaveData
0x632550: mov     ecx, ds:0B33B00h
0x632556: mov     eax, [ecx+14h]
0x632559: push    2; Size
0x63255B: lea     edx, [esp+34h+var_4]
0x63255F: push    edx; Src
0x632560: mov     [esp+38h+var_8], eax
0x632564: call    SaveLoad_SaveData
0x632569: mov     ecx, ds:0B33B00h
0x63256F: push    1; Size
0x632571: lea     eax, [esi+228h]
0x632577: push    eax; Src
0x632578: call    SaveLoad_SaveData
0x63257D: push    1; Size
0x63257F: lea     ecx, [esi+23Ch]
0x632585: push    ecx; Src
0x632586: mov     ecx, ds:0B33B00h
0x63258C: call    SaveLoad_SaveData
0x632591: mov     ecx, ds:0B33B00h
0x632597: push    1; Size
0x632599: lea     edx, [esi+25Ch]
0x63259F: push    edx; Src
0x6325A0: call    SaveLoad_SaveData
0x6325A5: mov     ecx, ds:0B33B00h
0x6325AB: push    1; Size
0x6325AD: lea     eax, [esi+25Dh]
0x6325B3: push    eax; Src
0x6325B4: call    SaveLoad_SaveData
0x6325B9: push    2; Size
0x6325BB: lea     ecx, [esi+1FCh]
0x6325C1: push    ecx; Src
0x6325C2: mov     ecx, ds:0B33B00h
0x6325C8: call    SaveLoad_SaveData
0x6325CD: mov     ecx, ds:0B33B00h
0x6325D3: push    2; Size
0x6325D5: lea     edx, [esi+1F4h]
0x6325DB: push    edx; Src
0x6325DC: call    SaveLoad_SaveData
0x6325E1: mov     ecx, ds:0B33B00h
0x6325E7: push    2; Size
0x6325E9: lea     eax, [esi+208h]
0x6325EF: push    eax; Src
0x6325F0: call    SaveLoad_SaveData
0x6325F5: push    4; Size
0x6325F7: lea     ecx, [esi+1F0h]
0x6325FD: push    ecx; Src
0x6325FE: mov     ecx, ds:0B33B00h
0x632604: call    SaveLoad_SaveData
0x632609: mov     ecx, ds:0B33B00h
0x63260F: push    4; Size
0x632611: lea     edx, [esi+1ACh]
0x632617: push    edx; Src
0x632618: call    SaveLoad_SaveData
0x63261D: mov     ecx, ds:0B33B00h
0x632623: push    4; Size
0x632625: lea     eax, [esi+204h]
0x63262B: push    eax; Src
0x63262C: call    SaveLoad_SaveData
0x632631: push    4; Size
0x632633: lea     ecx, [esi+21Ch]
0x632639: push    ecx; Src
0x63263A: mov     ecx, ds:0B33B00h
0x632640: call    SaveLoad_SaveData
0x632645: mov     ecx, ds:0B33B00h
0x63264B: push    4; Size
0x63264D: lea     edx, [esi+22Ch]
0x632653: push    edx; Src
0x632654: call    SaveLoad_SaveData
0x632659: mov     ecx, ds:0B33B00h
0x63265F: push    4; Size
0x632661: lea     eax, [esi+230h]
0x632667: push    eax; Src
0x632668: call    SaveLoad_SaveData
0x63266D: push    4; Size
0x63266F: lea     ecx, [esi+234h]
0x632675: push    ecx; Src
0x632676: mov     ecx, ds:0B33B00h
0x63267C: call    SaveLoad_SaveData
0x632681: mov     ecx, ds:0B33B00h
0x632687: push    4; Size
0x632689: lea     edx, [esi+248h]
0x63268F: push    edx; Src
0x632690: call    SaveLoad_SaveData
0x632695: mov     ecx, ds:0B33B00h
0x63269B: push    4; Size
0x63269D: lea     eax, [esi+198h]
0x6326A3: push    eax; Src
0x6326A4: call    SaveLoad_SaveData
0x6326A9: push    4; Size
0x6326AB: lea     ecx, [esi+1B0h]
0x6326B1: push    ecx; Src
0x6326B2: mov     ecx, ds:0B33B00h
0x6326B8: call    SaveLoad_SaveData
0x6326BD: mov     ecx, ds:0B33B00h
0x6326C3: push    4; Size
0x6326C5: lea     edx, [esi+1B4h]
0x6326CB: push    edx; Src
0x6326CC: call    SaveLoad_SaveData
0x6326D1: mov     ecx, ds:0B33B00h
0x6326D7: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x6326DB: jb      short loc_6326F1
0x6326DD: push    4; Size
0x6326DF: lea     eax, [esi+19Ch]
0x6326E5: push    eax; Src
0x6326E6: call    SaveLoad_SaveData
0x6326EB: mov     ecx, ds:0B33B00h
0x6326F1: push    4; Size
0x6326F3: lea     edx, [esi+1CCh]
0x6326F9: push    edx; Src
0x6326FA: call    SaveLoad_SaveData
0x6326FF: mov     ecx, ds:0B33B00h
0x632705: push    1; Size
0x632707: lea     eax, [esi+244h]
0x63270D: push    eax; Src
0x63270E: call    SaveLoad_SaveData
0x632713: push    0Ch; Size
0x632715: lea     ecx, [esi+20Ch]
0x63271B: push    ecx; Src
0x63271C: mov     ecx, ds:0B33B00h
0x632722: call    SaveLoad_SaveData
0x632727: mov     ecx, ds:0B33B00h
0x63272D: push    4; Size
0x63272F: lea     edx, [esi+254h]
0x632735: push    edx; Src
0x632736: call    SaveLoad_SaveData
0x63273B: mov     ecx, ds:0B33B00h
0x632741: push    4; Size
0x632743: lea     eax, [esi+2BCh]
0x632749: push    eax; Src
0x63274A: call    SaveLoad_SaveData
0x63274F: push    4; Size
0x632751: lea     ecx, [esi+2C0h]
0x632757: push    ecx; Src
0x632758: mov     ecx, ds:0B33B00h
0x63275E: call    SaveLoad_SaveData
0x632763: mov     ecx, ds:0B33B00h
0x632769: push    4; Size
0x63276B: lea     edx, [esi+238h]
0x632771: push    edx; Src
0x632772: call    SaveLoad_SaveData
0x632777: mov     ecx, ds:0B33B00h
0x63277D: push    4; Size
0x63277F: lea     eax, [esi+1A8h]
0x632785: push    eax; Src
0x632786: call    SaveLoad_SaveData
0x63278B: push    4; Size
0x63278D: lea     ecx, [esi+1B8h]
0x632793: push    ecx; Src
0x632794: mov     ecx, ds:0B33B00h
0x63279A: call    SaveLoad_SaveData
0x63279F: mov     ecx, ds:0B33B00h
0x6327A5: push    4; Size
0x6327A7: lea     edx, [esi+260h]
0x6327AD: push    edx; Src
0x6327AE: call    SaveLoad_SaveData
0x6327B3: mov     ecx, ds:0B33B00h
0x6327B9: cmp     byte ptr [ecx+7Ch], 3Fh ; '?'
0x6327BD: jb      short loc_6327E7
0x6327BF: push    1; Size
0x6327C1: lea     eax, [esi+278h]
0x6327C7: push    eax; Src
0x6327C8: call    SaveLoad_SaveData
0x6327CD: push    4; Size
0x6327CF: lea     ecx, [esi+274h]
0x6327D5: push    ecx; Src
0x6327D6: mov     ecx, ds:0B33B00h
0x6327DC: call    SaveLoad_SaveData
0x6327E1: mov     ecx, ds:0B33B00h
0x6327E7: cmp     byte ptr [ecx+7Ch], 42h ; 'B'
0x6327EB: jb      short loc_632815
0x6327ED: push    1; Size
0x6327EF: lea     edx, [esi+290h]
0x6327F5: push    edx; Src
0x6327F6: call    SaveLoad_SaveData
0x6327FB: mov     ecx, ds:0B33B00h
0x632801: push    4; Size
0x632803: lea     eax, [esi+28Ch]
0x632809: push    eax; Src
0x63280A: call    SaveLoad_SaveData
0x63280F: mov     ecx, ds:0B33B00h
0x632815: mov     eax, [esi+218h]
0x63281B: cmp     eax, ebp
0x63281D: mov     [esp+30h+var_1C], ebp
0x632821: jz      short loc_63282A
0x632823: mov     edx, [eax+0Ch]
0x632826: mov     [esp+30h+var_1C], edx
0x63282A: push    4
0x63282C: lea     eax, [esp+34h+var_1C]
0x632830: push    eax
0x632831: call    SaveLoad_SaveFormID
0x632836: mov     eax, [esi+1A4h]
0x63283C: cmp     eax, ebp
0x63283E: mov     [esp+30h+var_18], ebp
0x632842: jz      short loc_63284B
0x632844: mov     ecx, [eax+0Ch]
0x632847: mov     [esp+30h+var_18], ecx
0x63284B: mov     ecx, ds:0B33B00h
0x632851: push    4
0x632853: lea     edx, [esp+34h+var_18]
0x632857: push    edx
0x632858: call    SaveLoad_SaveFormID
0x63285D: mov     eax, [esi+2C4h]
0x632863: cmp     eax, ebp
0x632865: mov     [esp+30h+var_14], ebp
0x632869: jz      short loc_632872
0x63286B: mov     eax, [eax+0Ch]
0x63286E: mov     [esp+30h+var_14], eax
0x632872: push    ebx
0x632873: push    4
0x632875: lea     ecx, [esp+38h+var_14]
0x632879: push    ecx
0x63287A: mov     ecx, ds:0B33B00h
0x632880: call    SaveLoad_SaveFormID
0x632885: mov     ecx, ds:0B33B00h
0x63288B: push    2; Size
0x63288D: lea     edx, [esp+38h+var_24]
0x632891: mov     [esp+38h+var_24], ebp
0x632895: mov     ebx, [ecx+14h]
0x632898: push    edx; Src
0x632899: call    SaveLoad_SaveData
0x63289E: mov     edi, [esi+18Ch]
0x6328A4: cmp     edi, ebp
0x6328A6: jz      short loc_63291C
0x6328A8: cmp     [edi+4], ebp
0x6328AB: jnz     short loc_6328B1
0x6328AD: cmp     [edi], ebp
0x6328AF: jz      short loc_63291C
0x6328B1: mov     ebp, [edi]
0x6328B3: mov     [esp+34h+Src], 0
0x6328BB: mov     eax, [ebp+0]
0x6328BE: test    eax, eax
0x6328C0: jz      short loc_6328C9
0x6328C2: mov     eax, [eax+0Ch]
0x6328C5: mov     [esp+34h+Src], eax
0x6328C9: push    4
0x6328CB: lea     ecx, [esp+38h+Src]
0x6328CF: push    ecx
0x6328D0: mov     ecx, ds:0B33B00h
0x6328D6: call    SaveLoad_SaveFormID
0x6328DB: mov     ecx, ds:0B33B00h
0x6328E1: push    4; Size
0x6328E3: lea     edx, [ebp+4]
0x6328E6: push    edx; Src
0x6328E7: call    SaveLoad_SaveData
0x6328EC: mov     ecx, ds:0B33B00h
0x6328F2: push    1; Size
0x6328F4: lea     eax, [ebp+8]
0x6328F7: push    eax; Src
0x6328F8: call    SaveLoad_SaveData
0x6328FD: mov     ecx, ds:0B33B00h
0x632903: push    4; Size
0x632905: add     ebp, 0Ch
0x632908: push    ebp; Src
0x632909: call    SaveLoad_SaveData
0x63290E: add     [esp+34h+var_24], 1
0x632913: mov     edi, [edi+4]
0x632916: xor     ebp, ebp
0x632918: test    edi, edi
0x63291A: jnz     short loc_6328A8
0x63291C: test    [esp+34h+arg_0], 2000000h
0x632924: mov     cx, word ptr [esp+34h+var_24]
0x632929: mov     [ebx], cx
0x63292C: jz      short loc_632984
0x63292E: cmp     [esi+17Ch], ebp
0x632934: mov     byte ptr [esp+34h+arg_0], 0FFh
0x632939: jz      short loc_632972
0x63293B: cmp     [esi+1F8h], ebp
0x632941: jz      short loc_632972
0x632943: xor     ebx, ebx
0x632945: jmp     short loc_632950
0x632947: align 10h
0x632950: mov     ecx, [esi+17Ch]
0x632956: push    ebx
0x632957: call    sub_4706E0
0x63295C: cmp     eax, [esi+1F8h]
0x632962: jnz     short loc_632968
0x632964: mov     byte ptr [esp+34h+arg_0], bl
0x632968: add     ebx, 1
0x63296B: cmp     ebx, 5
0x63296E: jb      short loc_632950
0x632970: xor     ebp, ebp
0x632972: mov     ecx, ds:0B33B00h
0x632978: push    1; Size
0x63297A: lea     edx, [esp+38h+arg_0]
0x63297E: push    edx; Src
0x63297F: call    SaveLoad_SaveData
0x632984: mov     edi, [esp+34h+arg_4]
0x632988: push    edi
0x632989: mov     ecx, esi
0x63298B: call    sub_651AD0
0x632990: movzx   eax, ax
0x632993: push    2; Size
0x632995: lea     ecx, [esp+38h+var_C]
0x632999: push    ecx; Src
0x63299A: mov     ecx, ds:0B33B00h
0x6329A0: mov     [esp+3Ch+var_C], eax
0x6329A4: call    SaveLoad_SaveData
0x6329A9: cmp     word ptr [esp+34h+var_C], bp
0x6329AE: pop     ebx
0x6329AF: jz      short loc_6329B9
0x6329B1: push    edi
0x6329B2: mov     ecx, esi
0x6329B4: call    sub_651B90
0x6329B9: mov     ecx, ds:0B33B00h
0x6329BF: cmp     byte ptr [ecx+7Ch], 5Ah ; 'Z'
0x6329C3: jb      loc_632A62
0x6329C9: xor     edi, edi
0x6329CB: lea     ebp, [esi+2C8h]
0x6329D1: jmp     short loc_6329D9
0x6329D3: mov     ecx, ds:0B33B00h
0x6329D9: mov     eax, [ebp+0]
0x6329DC: test    eax, eax
0x6329DE: mov     [esp+30h+arg_0], 0
0x6329E6: jz      short loc_6329EF
0x6329E8: mov     edx, [eax+0Ch]
0x6329EB: mov     [esp+30h+arg_0], edx
0x6329EF: push    4
0x6329F1: lea     eax, [esp+34h+arg_0]
0x6329F5: push    eax
0x6329F6: call    SaveLoad_SaveFormID
0x6329FB: push    1; Size
0x6329FD: lea     ecx, [esi+edi+2DCh]
0x632A04: push    ecx; Src
0x632A05: mov     ecx, ds:0B33B00h
0x632A0B: call    SaveLoad_SaveData
0x632A10: add     edi, 1
0x632A13: add     ebp, 4
0x632A16: cmp     edi, 5
0x632A19: jb      short loc_6329D3
0x632A1B: mov     eax, [esi+2E4h]
0x632A21: test    eax, eax
0x632A23: mov     [esp+30h+arg_4], 0
0x632A2B: jz      short loc_632A34
0x632A2D: mov     edx, [eax+0Ch]
0x632A30: mov     [esp+30h+arg_4], edx
0x632A34: mov     ecx, ds:0B33B00h
0x632A3A: push    4
0x632A3C: lea     eax, [esp+34h+arg_4]
0x632A40: push    eax
0x632A41: call    SaveLoad_SaveFormID
0x632A46: push    1; Size
0x632A48: lea     ecx, [esi+2E8h]
0x632A4E: push    ecx; Src
0x632A4F: mov     ecx, ds:0B33B00h
0x632A55: call    SaveLoad_SaveData
0x632A5A: mov     ecx, ds:0B33B00h
0x632A60: xor     ebp, ebp
0x632A62: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x632A66: jb      short loc_632A90
0x632A68: push    4; Size
0x632A6A: lea     edx, [esi+2ACh]
0x632A70: push    edx; Src
0x632A71: call    SaveLoad_SaveData
0x632A76: mov     ecx, ds:0B33B00h
0x632A7C: push    4; Size
0x632A7E: lea     eax, [esi+2B0h]
0x632A84: push    eax; Src
0x632A85: call    SaveLoad_SaveData
0x632A8A: mov     ecx, ds:0B33B00h
0x632A90: cmp     byte ptr [ecx+7Ch], 6Ah ; 'j'
0x632A94: jb      short loc_632ABD
0x632A96: mov     eax, [esi+258h]
0x632A9C: cmp     eax, ebp
0x632A9E: mov     [esp+30h+arg_0], ebp
0x632AA2: jz      short loc_632AAB
0x632AA4: mov     edx, [eax+0Ch]
0x632AA7: mov     [esp+30h+arg_0], edx
0x632AAB: push    4
0x632AAD: lea     eax, [esp+34h+arg_0]
0x632AB1: push    eax
0x632AB2: call    SaveLoad_SaveFormID
0x632AB7: mov     ecx, ds:0B33B00h
0x632ABD: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x632AC1: jb      loc_632B75
0x632AC7: push    1; Size
0x632AC9: lea     edx, [esi+1D0h]
0x632ACF: push    edx; Src
0x632AD0: call    SaveLoad_SaveData
0x632AD5: mov     ecx, ds:0B33B00h
0x632ADB: push    4; Size
0x632ADD: lea     eax, [esi+1D8h]
0x632AE3: push    eax; Src
0x632AE4: call    SaveLoad_SaveData
0x632AE9: push    4; Size
0x632AEB: lea     ecx, [esi+1DCh]
0x632AF1: push    ecx; Src
0x632AF2: mov     ecx, ds:0B33B00h
0x632AF8: call    SaveLoad_SaveData
0x632AFD: mov     ecx, ds:0B33B00h
0x632B03: push    4; Size
0x632B05: lea     edx, [esi+1E0h]
0x632B0B: push    edx; Src
0x632B0C: call    SaveLoad_SaveData
0x632B11: mov     ecx, ds:0B33B00h
0x632B17: push    1; Size
0x632B19: lea     edi, [esi+2A8h]
0x632B1F: push    edi; Src
0x632B20: call    SaveLoad_SaveData
0x632B25: mov     ecx, ds:0B33B00h
0x632B2B: push    1; Size
0x632B2D: lea     eax, [esi+1E4h]
0x632B33: push    eax; Src
0x632B34: call    SaveLoad_SaveData
0x632B39: push    4; Size
0x632B3B: lea     ecx, [esi+1E8h]
0x632B41: push    ecx; Src
0x632B42: mov     ecx, ds:0B33B00h
0x632B48: call    SaveLoad_SaveData
0x632B4D: mov     ecx, ds:0B33B00h
0x632B53: push    4; Size
0x632B55: add     esi, 240h
0x632B5B: push    esi; Src
0x632B5C: call    SaveLoad_SaveData
0x632B61: mov     ecx, ds:0B33B00h
0x632B67: push    1; Size
0x632B69: push    edi; Src
0x632B6A: call    SaveLoad_SaveData
0x632B6F: mov     ecx, ds:0B33B00h
0x632B75: cmp     byte ptr ds:0B05BACh, 0
0x632B7C: jz      short loc_632BEA
0x632B7E: mov     edi, [ecx+84h]
0x632B84: cmp     edi, ebp
0x632B86: mov     esi, [ecx+14h]
0x632B89: jz      short loc_632BC8
0x632B8B: mov     edx, [edi]
0x632B8D: push    edx; a1
0x632B8E: call    TESForm_LookupByFormID
0x632B93: mov     ecx, [edi+5]
0x632B96: mov     edx, [eax]
0x632B98: add     esp, 4
0x632B9B: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x632BA0: push    2B9Bh
0x632BA5: push    ecx
0x632BA6: mov     ecx, eax
0x632BA8: mov     eax, [edx+0D4h]
0x632BAE: call    eax
0x632BB0: mov     ecx, [edi]
0x632BB2: sub     esi, [esp+3Ch+var_20]
0x632BB6: push    eax
0x632BB7: push    ecx
0x632BB8: push    esi; ArgList
0x632BB9: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x632BBE: call    sub_40FEC0
0x632BC3: add     esp, 1Ch
0x632BC6: jmp     short loc_632BE4
0x632BC8: sub     esi, [esp+30h+var_20]
0x632BCC: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x632BD1: push    2B9Bh
0x632BD6: push    esi; ArgList
0x632BD7: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x632BDC: call    sub_40FEC0
0x632BE1: add     esp, 10h
0x632BE4: mov     ecx, ds:0B33B00h
0x632BEA: call    sub_45A170
0x632BEF: test    al, al
0x632BF1: jz      short loc_632C26
0x632BF3: mov     edx, ds:0B33B00h
0x632BF9: mov     edi, [esp+30h+var_8]
0x632BFD: mov     esi, [edx+14h]
0x632C00: lea     eax, [edi+0FFFFh]
0x632C06: cmp     esi, eax
0x632C08: jbe     short loc_632C21
0x632C0A: push    2B9Bh
0x632C0F: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x632C14: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x632C19: call    PrintError
0x632C1E: add     esp, 0Ch
0x632C21: sub     esi, edi
0x632C23: mov     [edi], si
0x632C26: pop     edi
0x632C27: pop     esi
0x632C28: pop     ebp
0x632C29: add     esp, 24h
0x632C2C: retn    8
