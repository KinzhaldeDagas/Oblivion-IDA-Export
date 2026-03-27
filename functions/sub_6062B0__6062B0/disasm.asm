0x6062B0: sub     esp, 20h
0x6062B3: push    ebx
0x6062B4: push    ebp
0x6062B5: push    esi
0x6062B6: mov     esi, ecx
0x6062B8: mov     ecx, ds:0B33B00h
0x6062BE: xor     ebx, ebx
0x6062C0: mov     [esp+2Ch+var_4], ebx
0x6062C4: mov     ebp, [ecx+14h]
0x6062C7: push    edi
0x6062C8: mov     [esp+30h+var_C], ebx
0x6062CC: call    sub_45A170
0x6062D1: test    al, al
0x6062D3: jz      short loc_606308
0x6062D5: mov     ecx, ds:0B33B00h
0x6062DB: push    4; Size
0x6062DD: lea     eax, [esp+34h+Src]
0x6062E1: push    eax; Src
0x6062E2: mov     [esp+38h+Src], 4B4F4C42h
0x6062EA: call    SaveLoad_SaveData
0x6062EF: mov     ecx, ds:0B33B00h
0x6062F5: mov     edx, [ecx+14h]
0x6062F8: push    2; Size
0x6062FA: lea     eax, [esp+34h+var_4]
0x6062FE: push    eax; Src
0x6062FF: mov     [esp+38h+var_C], edx
0x606303: call    SaveLoad_SaveData
0x606308: push    1; Size
0x60630A: lea     ecx, [esi+10h]
0x60630D: push    ecx; Src
0x60630E: mov     ecx, ds:0B33B00h
0x606314: call    SaveLoad_SaveData
0x606319: mov     ecx, ds:0B33B00h
0x60631F: push    1; Size
0x606321: lea     edx, [esi+11h]
0x606324: push    edx; Src
0x606325: call    SaveLoad_SaveData
0x60632A: mov     ecx, ds:0B33B00h
0x606330: push    1; Size
0x606332: lea     eax, [esi+2Ch]
0x606335: push    eax; Src
0x606336: call    SaveLoad_SaveData
0x60633B: push    4; Size
0x60633D: lea     ecx, [esi+4]
0x606340: push    ecx; Src
0x606341: mov     ecx, ds:0B33B00h
0x606347: call    SaveLoad_SaveData
0x60634C: mov     ecx, ds:0B33B00h
0x606352: push    4; Size
0x606354: lea     edx, [esi+18h]
0x606357: push    edx; Src
0x606358: call    SaveLoad_SaveData
0x60635D: mov     ecx, ds:0B33B00h
0x606363: push    4; Size
0x606365: lea     eax, [esi+28h]
0x606368: push    eax; Src
0x606369: call    SaveLoad_SaveData
0x60636E: mov     eax, [esi+8]
0x606371: cmp     eax, ebx
0x606373: mov     [esp+30h+var_1C], ebx
0x606377: jz      short loc_606380
0x606379: mov     ecx, [eax+0Ch]
0x60637C: mov     [esp+30h+var_1C], ecx
0x606380: mov     ecx, ds:0B33B00h
0x606386: push    4
0x606388: lea     edx, [esp+34h+var_1C]
0x60638C: push    edx
0x60638D: call    SaveLoad_SaveFormID
0x606392: mov     eax, [esi+0Ch]
0x606395: cmp     eax, ebx
0x606397: mov     [esp+30h+var_18], ebx
0x60639B: jz      short loc_6063A4
0x60639D: mov     eax, [eax+0Ch]
0x6063A0: mov     [esp+30h+var_18], eax
0x6063A4: push    4
0x6063A6: lea     ecx, [esp+34h+var_18]
0x6063AA: push    ecx
0x6063AB: mov     ecx, ds:0B33B00h
0x6063B1: call    SaveLoad_SaveFormID
0x6063B6: mov     eax, [esi+14h]
0x6063B9: cmp     eax, ebx
0x6063BB: mov     [esp+30h+var_14], ebx
0x6063BF: jz      short loc_6063C8
0x6063C1: mov     edx, [eax+0Ch]
0x6063C4: mov     [esp+30h+var_14], edx
0x6063C8: mov     ecx, ds:0B33B00h
0x6063CE: push    4
0x6063D0: lea     eax, [esp+34h+var_14]
0x6063D4: push    eax
0x6063D5: call    SaveLoad_SaveFormID
0x6063DA: mov     eax, [esi+24h]
0x6063DD: cmp     eax, ebx
0x6063DF: mov     [esp+30h+var_10], ebx
0x6063E3: jz      short loc_6063EC
0x6063E5: mov     ecx, [eax+0Ch]
0x6063E8: mov     [esp+30h+var_10], ecx
0x6063EC: mov     ecx, ds:0B33B00h
0x6063F2: push    4
0x6063F4: lea     edx, [esp+34h+var_10]
0x6063F8: push    edx
0x6063F9: call    SaveLoad_SaveFormID
0x6063FE: mov     ecx, ds:0B33B00h
0x606404: push    2; Size
0x606406: lea     eax, [esp+34h+var_20]
0x60640A: mov     [esp+34h+var_20], ebx
0x60640E: mov     edi, [ecx+14h]
0x606411: push    eax; Src
0x606412: call    SaveLoad_SaveData
0x606417: add     esi, 1Ch
0x60641A: cmp     esi, ebx
0x60641C: jz      short loc_606450
0x60641E: mov     edi, edi
0x606420: cmp     [esi+4], ebx
0x606423: jnz     short loc_606429
0x606425: cmp     [esi], ebx
0x606427: jz      short loc_606450
0x606429: mov     ecx, [esi]
0x60642B: mov     edx, [ecx+0Ch]
0x60642E: mov     ecx, ds:0B33B00h
0x606434: push    4
0x606436: lea     eax, [esp+34h+Src]
0x60643A: push    eax
0x60643B: mov     [esp+38h+Src], edx
0x60643F: call    SaveLoad_SaveFormID
0x606444: add     [esp+30h+var_20], 1
0x606449: mov     esi, [esi+4]
0x60644C: cmp     esi, ebx
0x60644E: jnz     short loc_606420
0x606450: mov     cx, word ptr [esp+30h+var_20]
0x606455: mov     [edi], cx
0x606458: cmp     ds:0B05BACh, bl
0x60645E: jz      short loc_6064C7
0x606460: mov     eax, ds:0B33B00h
0x606465: mov     edi, [eax+84h]
0x60646B: cmp     edi, ebx
0x60646D: mov     esi, [eax+14h]
0x606470: jz      short loc_6064AD
0x606472: mov     edx, [edi]
0x606474: push    edx; a1
0x606475: call    TESForm_LookupByFormID
0x60647A: mov     ecx, [edi+5]
0x60647D: mov     edx, [eax]
0x60647F: add     esp, 4
0x606482: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606487: push    132h
0x60648C: push    ecx
0x60648D: mov     ecx, eax
0x60648F: mov     eax, [edx+0D4h]
0x606495: call    eax
0x606497: mov     ecx, [edi]
0x606499: push    eax
0x60649A: push    ecx
0x60649B: sub     esi, ebp
0x60649D: push    esi; ArgList
0x60649E: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x6064A3: call    sub_40FEC0
0x6064A8: add     esp, 1Ch
0x6064AB: jmp     short loc_6064C7
0x6064AD: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x6064B2: push    132h
0x6064B7: sub     esi, ebp
0x6064B9: push    esi; ArgList
0x6064BA: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x6064BF: call    sub_40FEC0
0x6064C4: add     esp, 10h
0x6064C7: mov     ecx, ds:0B33B00h
0x6064CD: call    sub_45A170
0x6064D2: test    al, al
0x6064D4: jz      short loc_606509
0x6064D6: mov     edx, ds:0B33B00h
0x6064DC: mov     edi, [esp+30h+var_C]
0x6064E0: mov     esi, [edx+14h]
0x6064E3: lea     eax, [edi+0FFFFh]
0x6064E9: cmp     esi, eax
0x6064EB: jbe     short loc_606504
0x6064ED: push    132h
0x6064F2: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x6064F7: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x6064FC: call    PrintError
0x606501: add     esp, 0Ch
0x606504: sub     esi, edi
0x606506: mov     [edi], si
0x606509: pop     edi
0x60650A: pop     esi
0x60650B: pop     ebp
0x60650C: pop     ebx
0x60650D: add     esp, 20h
0x606510: retn
