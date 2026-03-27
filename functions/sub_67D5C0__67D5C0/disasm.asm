0x67D5C0: sub     esp, 8
0x67D5C3: push    esi
0x67D5C4: mov     esi, ecx
0x67D5C6: call    sub_567F70
0x67D5CB: push    4; a2
0x67D5CD: lea     eax, [esi+3Ch]
0x67D5D0: push    eax; a1
0x67D5D1: mov     ecx, esi
0x67D5D3: call    TESForm_LoadDataFromCurrentSaveGame
0x67D5D8: push    4; a2
0x67D5DA: lea     ecx, [esi+40h]
0x67D5DD: push    ecx; a1
0x67D5DE: mov     ecx, esi
0x67D5E0: call    TESForm_LoadDataFromCurrentSaveGame
0x67D5E5: push    4; a2
0x67D5E7: lea     edx, [esi+4Ch]
0x67D5EA: push    edx; a1
0x67D5EB: mov     ecx, esi
0x67D5ED: call    TESForm_LoadDataFromCurrentSaveGame
0x67D5F2: mov     eax, ds:0B33B00h
0x67D5F7: cmp     byte ptr [eax+7Ch], 6Ch ; 'l'
0x67D5FB: jb      short loc_67D617
0x67D5FD: push    4; a2
0x67D5FF: lea     ecx, [esi+50h]
0x67D602: push    ecx; a1
0x67D603: mov     ecx, esi
0x67D605: call    TESForm_LoadDataFromCurrentSaveGame
0x67D60A: push    4; a2
0x67D60C: lea     edx, [esi+54h]
0x67D60F: push    edx; a1
0x67D610: mov     ecx, esi
0x67D612: call    TESForm_LoadDataFromCurrentSaveGame
0x67D617: push    4; a2
0x67D619: lea     eax, [esp+10h+var_8]
0x67D61D: push    eax; a1
0x67D61E: mov     ecx, esi
0x67D620: call    TESForm_LoadFormIDFromCurrentSaveGame
0x67D625: mov     ecx, [esp+14h+var_10]
0x67D629: push    4; a2
0x67D62B: lea     edx, [esp+18h+var_C]
0x67D62F: mov     [esi+44h], ecx
0x67D632: push    edx; a1
0x67D633: mov     ecx, esi
0x67D635: call    TESForm_LoadFormIDFromCurrentSaveGame
0x67D63A: mov     eax, [esp+1Ch+var_14]
0x67D63E: mov     [esi+48h], eax
0x67D641: pop     esi
0x67D642: add     esp, 8
0x67D645: retn
