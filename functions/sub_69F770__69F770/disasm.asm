0x69F770: push    ecx
0x69F771: mov     eax, [esp+4+Src]
0x69F775: push    esi
0x69F776: push    eax; Src
0x69F777: mov     esi, ecx
0x69F779: call    MobileObject_SaveModifiedForm
0x69F77E: mov     ecx, [esi+68h]
0x69F781: call    MagicCaster_GetFormID
0x69F786: push    4
0x69F788: lea     ecx, [esp+0Ch+Src]
0x69F78C: push    ecx
0x69F78D: mov     ecx, esi
0x69F78F: mov     [esp+10h+Src], eax
0x69F793: call    TESForm_SaveFormIDToCurrentSaveGame
0x69F798: mov     ecx, [esi+6Ch]; int
0x69F79B: call    MagicItem_GetFormID
0x69F7A0: push    4
0x69F7A2: lea     edx, [esp+0Ch+var_4]
0x69F7A6: push    edx
0x69F7A7: mov     ecx, esi
0x69F7A9: mov     [esp+10h+var_4], eax
0x69F7AD: call    TESForm_SaveFormIDToCurrentSaveGame
0x69F7B2: push    4; a2
0x69F7B4: lea     eax, [esi+78h]
0x69F7B7: push    eax; a1
0x69F7B8: mov     ecx, esi
0x69F7BA: call    TESForm_SaveDataToCurrentSaveGame
0x69F7BF: mov     ecx, ds:0B33B00h
0x69F7C5: cmp     byte ptr [ecx+7Ch], 48h ; 'H'
0x69F7C9: jb      short loc_69F7D8
0x69F7CB: push    4; a2
0x69F7CD: lea     edx, [esi+64h]
0x69F7D0: push    edx; a1
0x69F7D1: mov     ecx, esi
0x69F7D3: call    TESForm_SaveDataToCurrentSaveGame
0x69F7D8: mov     eax, ds:0B33B00h
0x69F7DD: cmp     byte ptr [eax+7Ch], 64h ; 'd'
0x69F7E1: jb      short loc_69F7F0
0x69F7E3: push    4; a2
0x69F7E5: lea     ecx, [esi+60h]
0x69F7E8: push    ecx; a1
0x69F7E9: mov     ecx, esi
0x69F7EB: call    TESForm_SaveDataToCurrentSaveGame
0x69F7F0: pop     esi
0x69F7F1: pop     ecx
0x69F7F2: retn    4
