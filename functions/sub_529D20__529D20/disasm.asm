0x529D20: push    0FFFFFFFFh
0x529D22: push    offset SEH_529D20
0x529D27: mov     eax, large fs:0
0x529D2D: push    eax
0x529D2E: sub     esp, 24h
0x529D31: push    ebx
0x529D32: push    ebp
0x529D33: push    esi
0x529D34: push    edi
0x529D35: mov     eax, ds:0B30AACh
0x529D3A: xor     eax, esp
0x529D3C: push    eax
0x529D3D: lea     eax, [esp+44h+var_C]
0x529D41: mov     large fs:0, eax
0x529D47: mov     edi, ecx
0x529D49: mov     eax, dword ptr [esp+44h+a2]
0x529D4D: push    eax; a2
0x529D4E: call    TESForm_SaveModifiedForm
0x529D53: mov     ecx, ds:0B33B00h
0x529D59: xor     ebx, ebx
0x529D5B: cmp     ds:0B05BACh, bl
0x529D61: mov     dword ptr [esp+44h+a1+16h], ebx
0x529D65: mov     eax, [ecx+14h]
0x529D68: mov     dword ptr [esp+44h+a1+12h], ebx
0x529D6C: mov     dword ptr [esp+44h+a1+0Ah], eax
0x529D70: jz      short loc_529D76
0x529D72: mov     dword ptr [esp+44h+a1+0Ah], eax
0x529D76: call    sub_45A170
0x529D7B: test    al, al
0x529D7D: jz      short loc_529DB2
0x529D7F: push    4; Size
0x529D81: lea     ecx, [esp+48h+a1+6]
0x529D85: push    ecx; Src
0x529D86: mov     ecx, ds:0B33B00h
0x529D8C: mov     dword ptr [esp+4Ch+a1+6], 4B4F4C42h
0x529D94: call    SaveLoad_SaveData
0x529D99: mov     ecx, ds:0B33B00h
0x529D9F: mov     edx, [ecx+14h]
0x529DA2: push    2; Size
0x529DA4: lea     eax, [esp+48h+a1+16h]
0x529DA8: push    eax; Src
0x529DA9: mov     dword ptr [esp+4Ch+a1+12h], edx
0x529DAD: call    SaveLoad_SaveData
0x529DB2: test    [esp+44h+a2], 4
0x529DB7: jz      short loc_529DCE
0x529DB9: mov     cl, [edi+3Ch]
0x529DBC: push    1; a2
0x529DBE: lea     edx, [esp+48h+a1+2]
0x529DC2: mov     [esp+48h+a1+2], cl
0x529DC6: push    edx; a1
0x529DC7: mov     ecx, edi
0x529DC9: call    TESForm_SaveDataToCurrentSaveGame
0x529DCE: test    dword ptr [esp+44h+a2], 10000000h
0x529DD6: jz      loc_529F0B
0x529DDC: mov     eax, ds:0B33B00h
0x529DE1: mov     [esp+44h+a1+1], bl
0x529DE5: mov     ecx, [eax+14h]
0x529DE8: push    1; a2
0x529DEA: lea     edx, [esp+48h+a1+1]
0x529DEE: mov     [esp+48h+var_10], ecx
0x529DF2: push    edx; a1
0x529DF3: mov     ecx, edi
0x529DF5: call    TESForm_SaveDataToCurrentSaveGame
0x529DFA: lea     eax, [edi+40h]
0x529DFD: cmp     eax, ebx
0x529DFF: mov     dword ptr [esp+44h+a1+6], eax
0x529E03: jz      loc_529F01
0x529E09: jmp     short loc_529E14
0x529E0B: jmp     short loc_529E10
0x529E0D: align 10h
0x529E10: mov     eax, dword ptr [esp+44h+a1+6]
0x529E14: mov     esi, [eax]
0x529E16: cmp     esi, ebx
0x529E18: jz      loc_529EF2
0x529E1E: mov     cl, [esi+1]
0x529E21: mov     al, [esi]
0x529E23: push    1; a2
0x529E25: lea     edx, [esp+48h+a1+3]
0x529E29: mov     [esp+48h+a1+4], cl
0x529E2D: push    edx; a1
0x529E2E: mov     ecx, edi
0x529E30: mov     [esp+4Ch+a1+3], al
0x529E34: call    TESForm_SaveDataToCurrentSaveGame
0x529E39: push    1; a2
0x529E3B: lea     eax, [esp+48h+a1+4]
0x529E3F: push    eax; a1
0x529E40: mov     ecx, edi
0x529E42: call    TESForm_SaveDataToCurrentSaveGame
0x529E47: mov     ecx, ds:0B33B00h
0x529E4D: mov     [esp+44h+a1], bl
0x529E51: mov     edx, [ecx+14h]
0x529E54: push    1; a2
0x529E56: lea     eax, [esp+48h+a1]
0x529E5A: push    eax; a1
0x529E5B: mov     ecx, edi
0x529E5D: mov     [esp+4Ch+var_14], edx
0x529E61: call    TESForm_SaveDataToCurrentSaveGame
0x529E66: lea     ebp, [esi+4]
0x529E69: cmp     ebp, ebx
0x529E6B: jz      short loc_529EDF
0x529E6D: lea     ecx, [ecx+0]
0x529E70: mov     eax, [ebp+0]
0x529E73: cmp     eax, ebx
0x529E75: jz      short loc_529ED8
0x529E77: mov     cl, [eax+60h]
0x529E7A: mov     esi, [eax+64h]
0x529E7D: push    1; a2
0x529E7F: lea     edx, [esp+48h+a1+5]
0x529E83: mov     [esp+48h+a1+5], cl
0x529E87: push    edx; a1
0x529E88: mov     ecx, edi
0x529E8A: call    TESForm_SaveDataToCurrentSaveGame
0x529E8F: cmp     esi, ebx
0x529E91: jz      short loc_529EA3
0x529E93: mov     ecx, ds:0B33B00h
0x529E99: push    4; Size
0x529E9B: push    esi; Src
0x529E9C: call    SaveLoad_SaveData
0x529EA1: jmp     short loc_529ED3
0x529EA3: lea     ecx, [esp+44h+a1+0Eh]
0x529EA7: call    sub_47D260
0x529EAC: mov     ecx, ds:0B33B00h
0x529EB2: push    4; Size
0x529EB4: lea     eax, [esp+48h+a1+0Eh]
0x529EB8: push    eax; Src
0x529EB9: mov     [esp+4Ch+var_4], ebx
0x529EBD: call    SaveLoad_SaveData
0x529EC2: lea     ecx, [esp+44h+a1+0Eh]; void *
0x529EC6: mov     [esp+44h+var_4], 0FFFFFFFFh
0x529ECE: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x529ED3: add     [esp+44h+a1], 1
0x529ED8: mov     ebp, [ebp+4]
0x529EDB: cmp     ebp, ebx
0x529EDD: jnz     short loc_529E70
0x529EDF: mov     ecx, [esp+44h+var_14]
0x529EE3: mov     dl, [esp+44h+a1]
0x529EE7: mov     eax, dword ptr [esp+44h+a1+6]
0x529EEB: mov     [ecx], dl
0x529EED: add     [esp+44h+a1+1], 1
0x529EF2: mov     eax, [eax+4]
0x529EF5: cmp     eax, ebx
0x529EF7: mov     dword ptr [esp+44h+a1+6], eax
0x529EFB: jnz     loc_529E10
0x529F01: mov     al, [esp+44h+a1+1]
0x529F05: mov     ecx, [esp+44h+var_10]
0x529F09: mov     [ecx], al
0x529F0B: test    dword ptr [esp+44h+a2], 8000000h
0x529F13: jz      short loc_529F1D
0x529F15: mov     ecx, [edi+58h]
0x529F18: call    ScriptEventList_Save?
0x529F1D: cmp     ds:0B05BACh, bl
0x529F23: jz      short loc_529F90
0x529F25: mov     eax, ds:0B33B00h
0x529F2A: mov     edi, [eax+84h]
0x529F30: cmp     edi, ebx
0x529F32: mov     esi, [eax+14h]
0x529F35: jz      short loc_529F74
0x529F37: mov     edx, [edi]
0x529F39: push    edx; a1
0x529F3A: call    TESForm_LookupByFormID
0x529F3F: mov     ecx, [edi+5]
0x529F42: mov     edx, [eax]
0x529F44: add     esp, 4
0x529F47: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x529F4C: push    0C5Ah
0x529F51: push    ecx
0x529F52: mov     ecx, eax
0x529F54: mov     eax, [edx+0D4h]
0x529F5A: call    eax
0x529F5C: mov     ecx, [edi]
0x529F5E: sub     esi, dword ptr [esp+50h+a1+0Ah]
0x529F62: push    eax
0x529F63: push    ecx
0x529F64: push    esi; ArgList
0x529F65: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x529F6A: call    sub_40FEC0
0x529F6F: add     esp, 1Ch
0x529F72: jmp     short loc_529F90
0x529F74: sub     esi, dword ptr [esp+44h+a1+0Ah]
0x529F78: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x529F7D: push    0C5Ah
0x529F82: push    esi; ArgList
0x529F83: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x529F88: call    sub_40FEC0
0x529F8D: add     esp, 10h
0x529F90: mov     ecx, ds:0B33B00h
0x529F96: call    sub_45A170
0x529F9B: test    al, al
0x529F9D: jz      short loc_529FD2
0x529F9F: mov     edx, ds:0B33B00h
0x529FA5: mov     edi, dword ptr [esp+44h+a1+12h]
0x529FA9: mov     esi, [edx+14h]
0x529FAC: lea     eax, [edi+0FFFFh]
0x529FB2: cmp     esi, eax
0x529FB4: jbe     short loc_529FCD
0x529FB6: push    0C5Ah
0x529FBB: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x529FC0: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x529FC5: call    PrintError
0x529FCA: add     esp, 0Ch
0x529FCD: sub     esi, edi
0x529FCF: mov     [edi], si
0x529FD2: mov     ecx, [esp+44h+var_C]
0x529FD6: mov     large fs:0, ecx
0x529FDD: pop     ecx
0x529FDE: pop     edi
0x529FDF: pop     esi
0x529FE0: pop     ebp
0x529FE1: pop     ebx
0x529FE2: add     esp, 30h
0x529FE5: retn    4
