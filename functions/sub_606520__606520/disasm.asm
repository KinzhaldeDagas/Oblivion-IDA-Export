0x606520: sub     esp, 24h
0x606523: push    ebx
0x606524: push    ebp
0x606525: push    esi
0x606526: mov     esi, ecx
0x606528: mov     ecx, ds:0B33B00h
0x60652E: xor     ebp, ebp
0x606530: push    edi
0x606531: mov     [esp+34h+var_20], ebp
0x606535: xor     ebx, ebx
0x606537: call    sub_45A170
0x60653C: test    al, al
0x60653E: jz      loc_6065DD
0x606544: mov     ecx, ds:0B33B00h
0x60654A: push    4; Size
0x60654C: lea     eax, [esp+38h+Dst]
0x606550: push    eax; Dst
0x606551: call    SaveLoad_LoadData
0x606556: cmp     [esp+34h+Dst], 4B4F4C42h
0x60655E: jz      short loc_6065C8
0x606560: mov     eax, ds:0B33B00h
0x606565: mov     edi, [eax+80h]
0x60656B: cmp     edi, ebp
0x60656D: jz      short loc_6065AC
0x60656F: mov     ecx, [edi]
0x606571: push    ecx; a1
0x606572: call    TESForm_LookupByFormID
0x606577: mov     edx, [edi+5]
0x60657A: movzx   ecx, byte ptr [edi+9]
0x60657E: add     esp, 4
0x606581: push    edx
0x606582: mov     edx, [eax]
0x606584: push    ecx
0x606585: mov     ecx, eax
0x606587: mov     eax, [edx+0D4h]
0x60658D: call    eax
0x60658F: mov     ecx, [edi]
0x606591: push    eax
0x606592: push    ecx
0x606593: push    138h
0x606598: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x60659D: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6065A2: call    PrintError
0x6065A7: add     esp, 1Ch
0x6065AA: jmp     short loc_6065C8
0x6065AC: movzx   edx, byte ptr [eax+7Ch]
0x6065B0: push    edx
0x6065B1: push    138h
0x6065B6: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x6065BB: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6065C0: call    PrintError
0x6065C5: add     esp, 10h
0x6065C8: mov     ecx, ds:0B33B00h
0x6065CE: mov     ebx, [ecx+14h]
0x6065D1: push    2; Size
0x6065D3: lea     eax, [esp+38h+var_20]
0x6065D7: push    eax; Dst
0x6065D8: call    SaveLoad_LoadData
0x6065DD: push    1; Size
0x6065DF: lea     ecx, [esi+10h]
0x6065E2: push    ecx; Dst
0x6065E3: mov     ecx, ds:0B33B00h
0x6065E9: call    SaveLoad_LoadData
0x6065EE: mov     ecx, ds:0B33B00h
0x6065F4: push    1; Size
0x6065F6: lea     edx, [esi+11h]
0x6065F9: push    edx; Dst
0x6065FA: call    SaveLoad_LoadData
0x6065FF: mov     ecx, ds:0B33B00h
0x606605: push    1; Size
0x606607: lea     eax, [esi+2Ch]
0x60660A: push    eax; Dst
0x60660B: call    SaveLoad_LoadData
0x606610: push    4; Size
0x606612: lea     ecx, [esi+4]
0x606615: push    ecx; Dst
0x606616: mov     ecx, ds:0B33B00h
0x60661C: call    SaveLoad_LoadData
0x606621: mov     ecx, ds:0B33B00h
0x606627: push    4; Size
0x606629: lea     edx, [esi+18h]
0x60662C: push    edx; Dst
0x60662D: call    SaveLoad_LoadData
0x606632: mov     ecx, ds:0B33B00h
0x606638: push    4; Size
0x60663A: lea     eax, [esi+28h]
0x60663D: push    eax; Dst
0x60663E: call    SaveLoad_LoadData
0x606643: push    4; Size
0x606645: lea     ecx, [esp+38h+var_14]
0x606649: push    ecx; Dst
0x60664A: mov     ecx, ds:0B33B00h
0x606650: call    SaveLoad_LoadFormID
0x606655: mov     edx, [esp+3Ch+var_1C]
0x606659: push    4; Size
0x60665B: lea     eax, [esp+40h+Dst]
0x60665F: mov     [esi+8], edx
0x606662: mov     ecx, ds:0B33B00h
0x606668: push    eax; Dst
0x606669: call    SaveLoad_LoadFormID
0x60666E: mov     ecx, [esp+44h+var_20]
0x606672: push    4; Size
0x606674: lea     edx, [esp+48h+var_1C]
0x606678: mov     [esi+0Ch], ecx
0x60667B: mov     ecx, ds:0B33B00h
0x606681: push    edx; Dst
0x606682: call    SaveLoad_LoadFormID
0x606687: mov     eax, [esp+4Ch+var_24]
0x60668B: push    4; Size
0x60668D: lea     ecx, [esp+50h+var_20]
0x606691: mov     [esi+14h], eax
0x606694: push    ecx; Dst
0x606695: mov     ecx, ds:0B33B00h
0x60669B: call    SaveLoad_LoadFormID
0x6066A0: mov     edx, [esp+54h+var_28]
0x6066A4: push    2; Size
0x6066A6: lea     eax, [esp+58h+var_44]
0x6066AA: mov     [esi+24h], edx
0x6066AD: mov     ecx, ds:0B33B00h
0x6066B3: push    eax; Dst
0x6066B4: call    SaveLoad_LoadData
0x6066B9: cmp     word ptr [esp+54h+var_44], bp
0x6066BE: mov     [esp+54h+var_3C], ebp
0x6066C2: jbe     short loc_606730
0x6066C4: push    4; Size
0x6066C6: lea     ecx, [esp+58h+var_24]
0x6066CA: push    ecx; Dst
0x6066CB: mov     ecx, ds:0B33B00h
0x6066D1: call    SaveLoad_LoadFormID
0x6066D6: mov     eax, [esp+5Ch+var_2C]
0x6066DA: cmp     eax, ebp
0x6066DC: mov     edi, eax
0x6066DE: jz      short loc_60671C
0x6066E0: cmp     [esi+1Ch], ebp
0x6066E3: jz      short loc_606719
0x6066E5: push    8; Size
0x6066E7: call    FormHeapAlloc
0x6066EC: add     esp, 4
0x6066EF: cmp     eax, ebp
0x6066F1: jz      short loc_606709
0x6066F3: mov     edx, [esi+1Ch]
0x6066F6: mov     [eax], edx
0x6066F8: mov     [eax+4], ebp
0x6066FB: mov     ecx, [esi+20h]
0x6066FE: mov     [eax+4], ecx
0x606701: mov     [esi+20h], eax
0x606704: mov     [esi+1Ch], edi
0x606707: jmp     short loc_60671C
0x606709: mov     ecx, [esi+20h]
0x60670C: xor     eax, eax
0x60670E: mov     [eax+4], ecx
0x606711: mov     [esi+20h], eax
0x606714: mov     [esi+1Ch], edi
0x606717: jmp     short loc_60671C
0x606719: mov     [esi+1Ch], eax
0x60671C: mov     eax, [esp+5Ch+var_44]
0x606720: movzx   edx, [esp+5Ch+var_4C]
0x606725: add     eax, 1
0x606728: cmp     eax, edx
0x60672A: mov     [esp+5Ch+var_44], eax
0x60672E: jl      short loc_6066C4
0x606730: mov     ecx, ds:0B33B00h
0x606736: call    sub_45A170
0x60673B: test    al, al
0x60673D: jz      loc_606851
0x606743: mov     ecx, ds:0B33B00h
0x606749: mov     edi, [ecx+80h]
0x60674F: cmp     edi, ebp
0x606751: mov     esi, [ecx+14h]
0x606754: jz      loc_6067F9
0x60675A: mov     eax, [edi]
0x60675C: push    eax; a1
0x60675D: call    TESForm_LookupByFormID
0x606762: movzx   edx, [esp+60h+var_48]
0x606767: mov     ecx, eax
0x606769: lea     eax, [edx+ebx]
0x60676C: add     esp, 4
0x60676F: cmp     esi, eax
0x606771: jbe     short loc_6067B3
0x606773: mov     eax, [edi+5]
0x606776: movzx   edx, byte ptr [edi+9]
0x60677A: push    eax
0x60677B: mov     eax, [ecx]
0x60677D: push    edx
0x60677E: mov     edx, [eax+0D4h]
0x606784: call    edx
0x606786: movzx   ecx, [esp+64h+var_48]
0x60678B: push    eax
0x60678C: mov     eax, [edi]
0x60678E: push    eax
0x60678F: push    161h
0x606794: sub     esi, ecx
0x606796: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x60679B: sub     esi, ebx
0x60679D: push    esi; ArgList
0x60679E: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x6067A3: call    PrintError
0x6067A8: add     esp, 20h
0x6067AB: pop     edi
0x6067AC: pop     esi
0x6067AD: pop     ebp
0x6067AE: pop     ebx
0x6067AF: add     esp, 24h
0x6067B2: retn
0x6067B3: jnb     loc_606851
0x6067B9: mov     edx, [edi+5]
0x6067BC: movzx   eax, byte ptr [edi+9]
0x6067C0: push    edx
0x6067C1: mov     edx, [ecx]
0x6067C3: push    eax
0x6067C4: mov     eax, [edx+0D4h]
0x6067CA: call    eax
0x6067CC: mov     ecx, [edi]
0x6067CE: movzx   edx, [esp+64h+var_48]
0x6067D3: push    eax
0x6067D4: push    ecx
0x6067D5: push    161h
0x6067DA: sub     edx, esi
0x6067DC: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x6067E1: add     edx, ebx
0x6067E3: push    edx; ArgList
0x6067E4: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x6067E9: call    PrintError
0x6067EE: add     esp, 20h
0x6067F1: pop     edi
0x6067F2: pop     esi
0x6067F3: pop     ebp
0x6067F4: pop     ebx
0x6067F5: add     esp, 24h
0x6067F8: retn
0x6067F9: movzx   eax, [esp+5Ch+var_48]
0x6067FE: lea     edx, [eax+ebx]
0x606801: cmp     esi, edx
0x606803: jbe     short loc_60682E
0x606805: movzx   ecx, byte ptr [ecx+7Ch]
0x606809: push    ecx
0x60680A: push    161h
0x60680F: sub     esi, eax
0x606811: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606816: sub     esi, ebx
0x606818: push    esi; ArgList
0x606819: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x60681E: call    PrintError
0x606823: add     esp, 14h
0x606826: pop     edi
0x606827: pop     esi
0x606828: pop     ebp
0x606829: pop     ebx
0x60682A: add     esp, 24h
0x60682D: retn
0x60682E: jnb     short loc_606851
0x606830: movzx   edx, byte ptr [ecx+7Ch]
0x606834: push    edx
0x606835: push    161h
0x60683A: sub     eax, esi
0x60683C: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606841: add     eax, ebx
0x606843: push    eax; ArgList
0x606844: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x606849: call    PrintError
0x60684E: add     esp, 14h
0x606851: pop     edi
0x606852: pop     esi
0x606853: pop     ebp
0x606854: pop     ebx
0x606855: add     esp, 24h
0x606858: retn
