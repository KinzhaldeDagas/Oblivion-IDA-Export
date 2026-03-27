0x67D510: sub     esp, 8
0x67D513: push    esi
0x67D514: mov     esi, ecx
0x67D516: call    sub_567E00
0x67D51B: push    4; a2
0x67D51D: lea     eax, [esi+3Ch]
0x67D520: push    eax; a1
0x67D521: mov     ecx, esi
0x67D523: call    TESForm_SaveDataToCurrentSaveGame
0x67D528: push    4; a2
0x67D52A: lea     ecx, [esi+40h]
0x67D52D: push    ecx; a1
0x67D52E: mov     ecx, esi
0x67D530: call    TESForm_SaveDataToCurrentSaveGame
0x67D535: push    4; a2
0x67D537: lea     edx, [esi+4Ch]
0x67D53A: push    edx; a1
0x67D53B: mov     ecx, esi
0x67D53D: call    TESForm_SaveDataToCurrentSaveGame
0x67D542: mov     eax, ds:0B33B00h
0x67D547: cmp     byte ptr [eax+7Ch], 6Ch ; 'l'
0x67D54B: jb      short loc_67D567
0x67D54D: push    4; a2
0x67D54F: lea     ecx, [esi+50h]
0x67D552: push    ecx; a1
0x67D553: mov     ecx, esi
0x67D555: call    TESForm_SaveDataToCurrentSaveGame
0x67D55A: push    4; a2
0x67D55C: lea     edx, [esi+54h]
0x67D55F: push    edx; a1
0x67D560: mov     ecx, esi
0x67D562: call    TESForm_SaveDataToCurrentSaveGame
0x67D567: mov     eax, [esi+44h]
0x67D56A: test    eax, eax
0x67D56C: mov     [esp+0Ch+var_8], 0
0x67D574: jz      short loc_67D57D
0x67D576: mov     eax, [eax+0Ch]
0x67D579: mov     [esp+0Ch+var_8], eax
0x67D57D: push    4
0x67D57F: lea     ecx, [esp+10h+var_8]
0x67D583: push    ecx
0x67D584: mov     ecx, esi
0x67D586: call    TESForm_SaveFormIDToCurrentSaveGame
0x67D58B: mov     eax, [esi+48h]
0x67D58E: test    eax, eax
0x67D590: mov     [esp+0Ch+var_4], 0
0x67D598: jz      short loc_67D5A1
0x67D59A: mov     edx, [eax+0Ch]
0x67D59D: mov     [esp+0Ch+var_4], edx
0x67D5A1: push    4
0x67D5A3: lea     eax, [esp+10h+var_4]
0x67D5A7: push    eax
0x67D5A8: mov     ecx, esi
0x67D5AA: call    TESForm_SaveFormIDToCurrentSaveGame
0x67D5AF: pop     esi
0x67D5B0: add     esp, 8
0x67D5B3: retn
