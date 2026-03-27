0x694E80: mov     eax, [esp+Src]
0x694E84: push    esi
0x694E85: push    eax; Src
0x694E86: mov     esi, ecx
0x694E88: call    sub_69F770
0x694E8D: push    4; a2
0x694E8F: lea     ecx, [esi+7Ch]
0x694E92: push    ecx; a1
0x694E93: mov     ecx, esi
0x694E95: call    TESForm_SaveDataToCurrentSaveGame
0x694E9A: push    4; a2
0x694E9C: lea     edx, [esi+5Ch]
0x694E9F: push    edx; a1
0x694EA0: mov     ecx, esi
0x694EA2: call    TESForm_SaveDataToCurrentSaveGame
0x694EA7: mov     eax, ds:0B33B00h
0x694EAC: cmp     byte ptr [eax+7Ch], 64h ; 'd'
0x694EB0: jnb     short loc_694EBF
0x694EB2: push    4; a2
0x694EB4: lea     ecx, [esi+60h]
0x694EB7: push    ecx; a1
0x694EB8: mov     ecx, esi
0x694EBA: call    TESForm_SaveDataToCurrentSaveGame
0x694EBF: mov     ecx, ds:0B33B00h
0x694EC5: push    edi
0x694EC6: push    4; Size
0x694EC8: lea     edi, [esi+80h]
0x694ECE: push    edi; Src
0x694ECF: call    SaveLoad_SaveData
0x694ED4: push    4; a2
0x694ED6: lea     edx, [esi+84h]
0x694EDC: push    edx; a1
0x694EDD: mov     ecx, esi
0x694EDF: call    TESForm_SaveDataToCurrentSaveGame
0x694EE4: cmp     dword ptr [edi], 2
0x694EE7: pop     edi
0x694EE8: jnz     short loc_694F0F
0x694EEA: fldz
0x694EEC: mov     eax, [esi+8Ch]
0x694EF2: test    eax, eax
0x694EF4: fstp    [esp+4+Src]
0x694EF8: jz      short loc_694F01
0x694EFA: fld     dword ptr [eax+10h]
0x694EFD: fstp    [esp+4+Src]
0x694F01: push    4; a2
0x694F03: lea     eax, [esp+8+Src]
0x694F07: push    eax; a1
0x694F08: mov     ecx, esi
0x694F0A: call    TESForm_SaveDataToCurrentSaveGame
0x694F0F: pop     esi
0x694F10: retn    4
