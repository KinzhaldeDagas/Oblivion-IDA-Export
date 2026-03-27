0x69F800: mov     eax, [esp+a1.vtbl]
0x69F804: push    esi
0x69F805: mov     esi, ecx
0x69F807: mov     ecx, [esp+4+arg_0]
0x69F80B: push    eax
0x69F80C: push    ecx
0x69F80D: mov     ecx, esi
0x69F80F: call    MobileObject_LoadModifiedForm
0x69F814: push    4; a2
0x69F816: lea     edx, [esp+8+a1]
0x69F81A: push    edx; a1
0x69F81B: mov     ecx, esi
0x69F81D: call    TESForm_LoadFormIDFromCurrentSaveGame
0x69F822: mov     eax, [esp+0Ch]
0x69F826: push    4; a2
0x69F828: lea     ecx, [esp+10h+var_4]
0x69F82C: push    ecx; a1
0x69F82D: mov     ecx, esi
0x69F82F: mov     [esi+68h], eax
0x69F832: call    TESForm_LoadFormIDFromCurrentSaveGame
0x69F837: mov     edx, [esp+14h+var_C]
0x69F83B: push    4; a2
0x69F83D: lea     eax, [esi+78h]
0x69F840: push    eax; a1
0x69F841: mov     ecx, esi
0x69F843: mov     [esi+6Ch], edx
0x69F846: call    TESForm_LoadDataFromCurrentSaveGame
0x69F84B: mov     ecx, ds:0B33B00h
0x69F851: cmp     byte ptr [ecx+7Ch], 48h ; 'H'
0x69F855: jb      short loc_69F864
0x69F857: push    4; a2
0x69F859: lea     edx, [esi+64h]
0x69F85C: push    edx; a1
0x69F85D: mov     ecx, esi
0x69F85F: call    TESForm_LoadDataFromCurrentSaveGame
0x69F864: mov     eax, ds:0B33B00h
0x69F869: cmp     byte ptr [eax+7Ch], 64h ; 'd'
0x69F86D: jb      short loc_69F87C
0x69F86F: push    4; a2
0x69F871: lea     ecx, [esi+60h]
0x69F874: push    ecx; a1
0x69F875: mov     ecx, esi
0x69F877: call    TESForm_LoadDataFromCurrentSaveGame
0x69F87C: pop     esi
0x69F87D: retn    8
