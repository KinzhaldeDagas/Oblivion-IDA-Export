0x4E2D60: sub     esp, 1Ch
0x4E2D63: push    ebx
0x4E2D64: mov     ebx, [esp+20h+Src]
0x4E2D68: push    ebp
0x4E2D69: push    esi
0x4E2D6A: push    edi
0x4E2D6B: push    ebx; a2
0x4E2D6C: mov     esi, ecx
0x4E2D6E: call    TESForm_SaveModifiedForm
0x4E2D73: mov     ecx, ds:0B33B00h
0x4E2D79: xor     edi, edi
0x4E2D7B: mov     [esp+2Ch+var_18], edi
0x4E2D7F: mov     ebp, [ecx+14h]
0x4E2D82: mov     [esp+2Ch+var_1C], edi
0x4E2D86: call    sub_45A170
0x4E2D8B: test    al, al
0x4E2D8D: jz      short loc_4E2DC2
0x4E2D8F: mov     ecx, ds:0B33B00h
0x4E2D95: push    4; Size
0x4E2D97: lea     eax, [esp+30h+Src]
0x4E2D9B: push    eax; Src
0x4E2D9C: mov     [esp+34h+Src], 4B4F4C42h
0x4E2DA4: call    SaveLoad_SaveData
0x4E2DA9: mov     ecx, ds:0B33B00h
0x4E2DAF: mov     edx, [ecx+14h]
0x4E2DB2: push    2; Size
0x4E2DB4: lea     eax, [esp+30h+var_18]
0x4E2DB8: push    eax; Src
0x4E2DB9: mov     [esp+34h+var_1C], edx
0x4E2DBD: call    SaveLoad_SaveData
0x4E2DC2: test    ebx, 8000000h
0x4E2DC8: jz      short loc_4E2DD9
0x4E2DCA: lea     ecx, [esi+44h]; this
0x4E2DCD: call    ExtraDataList_GetContainerChanges
0x4E2DD2: mov     ecx, eax
0x4E2DD4: call    sub_488650
0x4E2DD9: test    ebx, 177577E0h
0x4E2DDF: jnz     short loc_4E2DF1
0x4E2DE1: mov     edx, [esi]
0x4E2DE3: mov     eax, [edx+190h]
0x4E2DE9: mov     ecx, esi
0x4E2DEB: call    eax
0x4E2DED: test    al, al
0x4E2DEF: jz      short loc_4E2DFB
0x4E2DF1: push    esi
0x4E2DF2: push    ebx
0x4E2DF3: lea     ecx, [esi+44h]
0x4E2DF6: call    ExtraDataList_SaveGame
0x4E2DFB: test    ebx, 2000000h
0x4E2E01: jz      short loc_4E2E3D
0x4E2E03: mov     edx, [esi]
0x4E2E05: mov     eax, [edx+190h]
0x4E2E0B: mov     ecx, esi
0x4E2E0D: call    eax
0x4E2E0F: test    al, al
0x4E2E11: jnz     short loc_4E2E3D
0x4E2E13: mov     ecx, esi
0x4E2E15: call    sub_4E0840
0x4E2E1A: movzx   ecx, ax
0x4E2E1D: push    2; a2
0x4E2E1F: lea     edx, [esp+30h+Src]
0x4E2E23: mov     [esp+30h+Src], ecx
0x4E2E27: push    edx; a1
0x4E2E28: mov     ecx, esi
0x4E2E2A: call    TESForm_SaveDataToCurrentSaveGame
0x4E2E2F: cmp     word ptr [esp+2Ch+Src], di
0x4E2E34: jz      short loc_4E2E3D
0x4E2E36: mov     ecx, esi
0x4E2E38: call    sub_4E08D0
0x4E2E3D: test    bl, 8
0x4E2E40: jz      short loc_4E2E91
0x4E2E42: lea     eax, [esp+2Ch+var_14]
0x4E2E46: push    eax
0x4E2E47: mov     ecx, esi
0x4E2E49: mov     byte ptr [esp+30h+var_14], 0
0x4E2E4E: mov     word ptr [esp+30h+var_14+2], di
0x4E2E53: mov     word ptr [esp+30h+var_10], di
0x4E2E58: mov     [esp+30h+var_C], edi
0x4E2E5C: mov     [esp+30h+var_8], edi
0x4E2E60: mov     [esp+30h+var_4], edi
0x4E2E64: call    sub_4E0970
0x4E2E69: movzx   ecx, ax
0x4E2E6C: push    2; a2
0x4E2E6E: lea     edx, [esp+30h+Src]
0x4E2E72: mov     [esp+30h+Src], ecx
0x4E2E76: push    edx; a1
0x4E2E77: mov     ecx, esi
0x4E2E79: call    TESForm_SaveDataToCurrentSaveGame
0x4E2E7E: cmp     word ptr [esp+2Ch+Src], di
0x4E2E83: jz      short loc_4E2E91
0x4E2E85: lea     eax, [esp+2Ch+var_14]
0x4E2E89: push    eax
0x4E2E8A: mov     ecx, esi
0x4E2E8C: call    sub_4E0A40
0x4E2E91: mov     ecx, ds:0B33B00h
0x4E2E97: cmp     byte ptr [ecx+7Ch], 43h ; 'C'
0x4E2E9B: jb      short loc_4E2EAF
0x4E2E9D: test    bl, 10h
0x4E2EA0: jz      short loc_4E2EAF
0x4E2EA2: push    4; a2
0x4E2EA4: lea     edx, [esi+38h]
0x4E2EA7: push    edx; a1
0x4E2EA8: mov     ecx, esi
0x4E2EAA: call    TESForm_SaveDataToCurrentSaveGame
0x4E2EAF: cmp     byte ptr ds:0B05BACh, 0
0x4E2EB6: jz      short loc_4E2F1F
0x4E2EB8: mov     eax, ds:0B33B00h
0x4E2EBD: mov     edi, [eax+84h]
0x4E2EC3: test    edi, edi
0x4E2EC5: mov     esi, [eax+14h]
0x4E2EC8: jz      short loc_4E2F05
0x4E2ECA: mov     eax, [edi]
0x4E2ECC: push    eax; a1
0x4E2ECD: call    TESForm_LookupByFormID
0x4E2ED2: mov     ecx, [edi+5]
0x4E2ED5: mov     edx, [eax]
0x4E2ED7: add     esp, 4
0x4E2EDA: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E2EDF: push    713h
0x4E2EE4: push    ecx
0x4E2EE5: mov     ecx, eax
0x4E2EE7: mov     eax, [edx+0D4h]
0x4E2EED: call    eax
0x4E2EEF: mov     ecx, [edi]
0x4E2EF1: push    eax
0x4E2EF2: push    ecx
0x4E2EF3: sub     esi, ebp
0x4E2EF5: push    esi; ArgList
0x4E2EF6: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x4E2EFB: call    sub_40FEC0
0x4E2F00: add     esp, 1Ch
0x4E2F03: jmp     short loc_4E2F1F
0x4E2F05: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E2F0A: push    713h
0x4E2F0F: sub     esi, ebp
0x4E2F11: push    esi; ArgList
0x4E2F12: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x4E2F17: call    sub_40FEC0
0x4E2F1C: add     esp, 10h
0x4E2F1F: mov     ecx, ds:0B33B00h
0x4E2F25: call    sub_45A170
0x4E2F2A: test    al, al
0x4E2F2C: jz      short loc_4E2F61
0x4E2F2E: mov     edx, ds:0B33B00h
0x4E2F34: mov     edi, [esp+2Ch+var_1C]
0x4E2F38: mov     esi, [edx+14h]
0x4E2F3B: lea     eax, [edi+0FFFFh]
0x4E2F41: cmp     esi, eax
0x4E2F43: jbe     short loc_4E2F5C
0x4E2F45: push    713h
0x4E2F4A: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E2F4F: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4E2F54: call    PrintError
0x4E2F59: add     esp, 0Ch
0x4E2F5C: sub     esi, edi
0x4E2F5E: mov     [edi], si
0x4E2F61: pop     edi
0x4E2F62: pop     esi
0x4E2F63: pop     ebp
0x4E2F64: pop     ebx
0x4E2F65: add     esp, 1Ch
0x4E2F68: retn    4
