0x617930: sub     esp, 20h
0x617933: push    esi
0x617934: push    edi
0x617935: mov     esi, ecx
0x617937: call    sub_567E00
0x61793C: mov     ecx, ds:0B33B00h
0x617942: xor     edi, edi
0x617944: cmp     byte ptr ds:0B05BACh, 0
0x61794B: mov     [esp+28h+var_C], edi
0x61794F: mov     eax, [ecx+14h]
0x617952: mov     [esp+28h+var_10], edi
0x617956: mov     [esp+28h+var_18], eax
0x61795A: jz      short loc_617960
0x61795C: mov     [esp+28h+var_18], eax
0x617960: call    sub_45A170
0x617965: test    al, al
0x617967: jz      short loc_61799C
0x617969: mov     ecx, ds:0B33B00h
0x61796F: push    4; Size
0x617971: lea     eax, [esp+2Ch+Src]
0x617975: push    eax; Src
0x617976: mov     [esp+30h+Src], 4B4F4C42h
0x61797E: call    SaveLoad_SaveData
0x617983: mov     ecx, ds:0B33B00h
0x617989: mov     edx, [ecx+14h]
0x61798C: push    2; Size
0x61798E: lea     eax, [esp+2Ch+var_C]
0x617992: push    eax; Src
0x617993: mov     [esp+30h+var_10], edx
0x617997: call    SaveLoad_SaveData
0x61799C: mov     ecx, ds:0B33B00h
0x6179A2: push    ebx
0x6179A3: push    ebp
0x6179A4: push    2; Size
0x6179A6: lea     edx, [esp+34h+var_1C]
0x6179AA: mov     [esp+34h+var_1C], edi
0x6179AE: mov     ebx, [ecx+14h]
0x6179B1: push    edx; Src
0x6179B2: call    SaveLoad_SaveData
0x6179B7: mov     ebp, [esi+40h]
0x6179BA: cmp     ebp, edi
0x6179BC: jz      loc_617A64
0x6179C2: mov     ecx, ds:0B33B00h
0x6179C8: cmp     dword ptr [ebp+4], 0
0x6179CC: jnz     short loc_6179D8
0x6179CE: cmp     dword ptr [ebp+0], 0
0x6179D2: jz      loc_617A64
0x6179D8: mov     edi, [ebp+0]
0x6179DB: mov     [esp+30h+Src], 0
0x6179E3: mov     eax, [edi]
0x6179E5: test    eax, eax
0x6179E7: jz      short loc_6179F0
0x6179E9: mov     eax, [eax+0Ch]
0x6179EC: mov     [esp+30h+Src], eax
0x6179F0: push    4
0x6179F2: lea     edx, [esp+34h+Src]
0x6179F6: push    edx
0x6179F7: call    SaveLoad_SaveFormID
0x6179FC: mov     eax, [edi+4]
0x6179FF: push    4; Size
0x617A01: lea     ecx, [esp+34h+var_8]
0x617A05: push    ecx; Src
0x617A06: mov     ecx, ds:0B33B00h
0x617A0C: mov     [esp+38h+var_8], eax
0x617A10: call    SaveLoad_SaveData
0x617A15: mov     ecx, ds:0B33B00h
0x617A1B: push    1; Size
0x617A1D: lea     edx, [edi+8]
0x617A20: push    edx; Src
0x617A21: call    SaveLoad_SaveData
0x617A26: mov     ecx, ds:0B33B00h
0x617A2C: cmp     byte ptr [ecx+7Ch], 29h ; ')'
0x617A30: jb      short loc_617A54
0x617A32: push    4; Size
0x617A34: lea     eax, [edi+0Ch]
0x617A37: push    eax; Src
0x617A38: call    SaveLoad_SaveData
0x617A3D: mov     ecx, ds:0B33B00h
0x617A43: push    4; Size
0x617A45: add     edi, 10h
0x617A48: push    edi; Src
0x617A49: call    SaveLoad_SaveData
0x617A4E: mov     ecx, ds:0B33B00h
0x617A54: add     [esp+30h+var_1C], 1
0x617A59: mov     ebp, [ebp+4]
0x617A5C: test    ebp, ebp
0x617A5E: jnz     loc_6179C8
0x617A64: mov     cx, word ptr [esp+30h+var_1C]
0x617A69: push    4; a2
0x617A6B: lea     edx, [esi+44h]
0x617A6E: mov     [ebx], cx
0x617A71: push    edx; a1
0x617A72: mov     ecx, esi
0x617A74: call    TESForm_SaveDataToCurrentSaveGame
0x617A79: push    1; a2
0x617A7B: lea     eax, [esi+48h]
0x617A7E: push    eax; a1
0x617A7F: mov     ecx, esi
0x617A81: call    TESForm_SaveDataToCurrentSaveGame
0x617A86: push    1; a2
0x617A88: lea     ecx, [esi+49h]
0x617A8B: push    ecx; a1
0x617A8C: mov     ecx, esi
0x617A8E: call    TESForm_SaveDataToCurrentSaveGame
0x617A93: push    1; a2
0x617A95: lea     edx, [esi+4Ah]
0x617A98: push    edx; a1
0x617A99: mov     ecx, esi
0x617A9B: call    TESForm_SaveDataToCurrentSaveGame
0x617AA0: push    1; a2
0x617AA2: lea     eax, [esi+4Bh]
0x617AA5: push    eax; a1
0x617AA6: mov     ecx, esi
0x617AA8: call    TESForm_SaveDataToCurrentSaveGame
0x617AAD: push    1; a2
0x617AAF: lea     ecx, [esi+4Ch]
0x617AB2: push    ecx; a1
0x617AB3: mov     ecx, esi
0x617AB5: call    TESForm_SaveDataToCurrentSaveGame
0x617ABA: push    1; a2
0x617ABC: lea     edx, [esi+4Dh]
0x617ABF: push    edx; a1
0x617AC0: mov     ecx, esi
0x617AC2: call    TESForm_SaveDataToCurrentSaveGame
0x617AC7: push    1; a2
0x617AC9: lea     eax, [esi+4Eh]
0x617ACC: push    eax; a1
0x617ACD: mov     ecx, esi
0x617ACF: call    TESForm_SaveDataToCurrentSaveGame
0x617AD4: push    1; a2
0x617AD6: lea     ecx, [esi+4Fh]
0x617AD9: push    ecx; a1
0x617ADA: mov     ecx, esi
0x617ADC: call    TESForm_SaveDataToCurrentSaveGame
0x617AE1: mov     ecx, ds:0B33B00h
0x617AE7: push    4; Size
0x617AE9: lea     edx, [esi+50h]
0x617AEC: push    edx; Src
0x617AED: call    SaveLoad_SaveData
0x617AF2: push    4; a2
0x617AF4: lea     eax, [esi+54h]
0x617AF7: push    eax; a1
0x617AF8: mov     ecx, esi
0x617AFA: call    TESForm_SaveDataToCurrentSaveGame
0x617AFF: push    1; a2
0x617B01: lea     ecx, [esi+58h]
0x617B04: push    ecx; a1
0x617B05: mov     ecx, esi
0x617B07: call    TESForm_SaveDataToCurrentSaveGame
0x617B0C: push    1; a2
0x617B0E: lea     edx, [esi+59h]
0x617B11: push    edx; a1
0x617B12: mov     ecx, esi
0x617B14: call    TESForm_SaveDataToCurrentSaveGame
0x617B19: mov     ecx, ds:0B33B00h
0x617B1F: push    4; Size
0x617B21: lea     eax, [esi+6Ch]
0x617B24: push    eax; Src
0x617B25: call    SaveLoad_SaveData
0x617B2A: push    4; Size
0x617B2C: lea     ecx, [esi+70h]
0x617B2F: push    ecx; Src
0x617B30: mov     ecx, ds:0B33B00h
0x617B36: call    SaveLoad_SaveData
0x617B3B: mov     ecx, ds:0B33B00h
0x617B41: push    4; Size
0x617B43: lea     edx, [esi+74h]
0x617B46: push    edx; Src
0x617B47: call    SaveLoad_SaveData
0x617B4C: push    14h; a2
0x617B4E: lea     eax, [esi+0B0h]
0x617B54: push    eax; a1
0x617B55: mov     ecx, esi
0x617B57: call    TESForm_SaveDataToCurrentSaveGame
0x617B5C: push    4; a2
0x617B5E: lea     ecx, [esi+0CCh]
0x617B64: push    ecx; a1
0x617B65: mov     ecx, esi
0x617B67: call    TESForm_SaveDataToCurrentSaveGame
0x617B6C: push    4; a2
0x617B6E: lea     edx, [esi+0D0h]
0x617B74: push    edx; a1
0x617B75: mov     ecx, esi
0x617B77: call    TESForm_SaveDataToCurrentSaveGame
0x617B7C: mov     ecx, ds:0B33B00h
0x617B82: push    0Ch; Size
0x617B84: lea     eax, [esi+0D4h]
0x617B8A: push    eax; Src
0x617B8B: call    SaveLoad_SaveData
0x617B90: push    0Ch; Size
0x617B92: lea     ecx, [esi+0E0h]
0x617B98: push    ecx; Src
0x617B99: mov     ecx, ds:0B33B00h
0x617B9F: call    SaveLoad_SaveData
0x617BA4: mov     ecx, ds:0B33B00h
0x617BAA: push    0Ch; Size
0x617BAC: lea     edx, [esi+0ECh]
0x617BB2: push    edx; Src
0x617BB3: call    SaveLoad_SaveData
0x617BB8: mov     ecx, ds:0B33B00h
0x617BBE: push    0Ch; Size
0x617BC0: lea     eax, [esi+0F8h]
0x617BC6: push    eax; Src
0x617BC7: call    SaveLoad_SaveData
0x617BCC: mov     eax, [esi+12Ch]
0x617BD2: test    eax, eax
0x617BD4: pop     ebp
0x617BD5: pop     ebx
0x617BD6: jz      short loc_617BDD
0x617BD8: mov     eax, [eax+0Ch]
0x617BDB: jmp     short loc_617BDF
0x617BDD: xor     eax, eax
0x617BDF: push    4
0x617BE1: lea     ecx, [esp+2Ch+var_4]
0x617BE5: push    ecx
0x617BE6: mov     ecx, ds:0B33B00h
0x617BEC: mov     [esp+30h+var_4], eax
0x617BF0: call    SaveLoad_SaveFormID
0x617BF5: mov     ecx, ds:0B33B00h
0x617BFB: push    0Ch; Size
0x617BFD: lea     edx, [esi+164h]
0x617C03: push    edx; Src
0x617C04: call    SaveLoad_SaveData
0x617C09: push    1; a2
0x617C0B: lea     eax, [esi+114h]
0x617C11: push    eax; a1
0x617C12: mov     ecx, esi
0x617C14: call    TESForm_SaveDataToCurrentSaveGame
0x617C19: mov     ecx, ds:0B33B00h
0x617C1F: cmp     byte ptr [ecx+7Ch], 3Ah ; ':'
0x617C23: jb      short loc_617C35
0x617C25: push    4; a2
0x617C27: lea     edx, [esi+170h]
0x617C2D: push    edx; a1
0x617C2E: mov     ecx, esi
0x617C30: call    TESForm_SaveDataToCurrentSaveGame
0x617C35: mov     eax, ds:0B33B00h
0x617C3A: cmp     byte ptr [eax+7Ch], 3Dh ; '='
0x617C3E: jb      short loc_617C50
0x617C40: push    1; a2
0x617C42: lea     ecx, [esi+17Dh]
0x617C48: push    ecx; a1
0x617C49: mov     ecx, esi
0x617C4B: call    TESForm_SaveDataToCurrentSaveGame
0x617C50: mov     edx, ds:0B33B00h
0x617C56: cmp     byte ptr [edx+7Ch], 5Fh ; '_'
0x617C5A: jb      loc_617DA0
0x617C60: mov     eax, [esi+5Ch]
0x617C63: push    eax
0x617C64: mov     ecx, esi
0x617C66: call    sub_614C30
0x617C6B: mov     ecx, [esi+60h]
0x617C6E: push    ecx
0x617C6F: mov     ecx, esi
0x617C71: call    sub_614C30
0x617C76: mov     edx, [esi+64h]
0x617C79: push    edx
0x617C7A: mov     ecx, esi
0x617C7C: call    sub_614C30
0x617C81: mov     eax, [esi+7Ch]
0x617C84: push    eax
0x617C85: mov     ecx, esi
0x617C87: call    sub_612860
0x617C8C: mov     ecx, [esi+80h]
0x617C92: push    ecx
0x617C93: mov     ecx, esi
0x617C95: call    sub_612860
0x617C9A: mov     edx, [esi+84h]
0x617CA0: push    edx
0x617CA1: mov     ecx, esi
0x617CA3: call    sub_612860
0x617CA8: mov     eax, [esi+88h]
0x617CAE: push    eax
0x617CAF: mov     ecx, esi
0x617CB1: call    sub_612860
0x617CB6: mov     ecx, [esi+8Ch]
0x617CBC: push    ecx
0x617CBD: mov     ecx, esi
0x617CBF: call    sub_612860
0x617CC4: mov     edi, [esi+90h]
0x617CCA: mov     ecx, ds:0B33B00h
0x617CD0: test    edi, edi
0x617CD2: push    1; Size
0x617CD4: lea     eax, [esp+2Ch+var_1D]
0x617CD8: setnz   dl
0x617CDB: push    eax; Src
0x617CDC: mov     [esp+30h+var_1D], dl
0x617CE0: call    SaveLoad_SaveData
0x617CE5: test    edi, edi
0x617CE7: jz      short loc_617CF0
0x617CE9: mov     ecx, edi
0x617CEB: call    sub_6128B0
0x617CF0: mov     edi, [esi+94h]
0x617CF6: test    edi, edi
0x617CF8: setnz   cl
0x617CFB: push    1; Size
0x617CFD: lea     edx, [esp+2Ch+var_1D]
0x617D01: mov     [esp+2Ch+var_1D], cl
0x617D05: mov     ecx, ds:0B33B00h
0x617D0B: push    edx; Src
0x617D0C: call    SaveLoad_SaveData
0x617D11: test    edi, edi
0x617D13: jz      short loc_617D1C
0x617D15: mov     ecx, edi
0x617D17: call    sub_6128B0
0x617D1C: mov     edi, [esi+98h]
0x617D22: push    1; Size
0x617D24: lea     ecx, [esp+2Ch+var_1D]
0x617D28: test    edi, edi
0x617D2A: setnz   al
0x617D2D: push    ecx; Src
0x617D2E: mov     ecx, ds:0B33B00h
0x617D34: mov     [esp+30h+var_1D], al
0x617D38: call    SaveLoad_SaveData
0x617D3D: test    edi, edi
0x617D3F: jz      short loc_617D48
0x617D41: mov     ecx, edi
0x617D43: call    sub_6128B0
0x617D48: mov     edi, [esi+9Ch]
0x617D4E: mov     ecx, ds:0B33B00h
0x617D54: test    edi, edi
0x617D56: push    1; Size
0x617D58: lea     eax, [esp+2Ch+var_1D]
0x617D5C: setnz   dl
0x617D5F: push    eax; Src
0x617D60: mov     [esp+30h+var_1D], dl
0x617D64: call    SaveLoad_SaveData
0x617D69: test    edi, edi
0x617D6B: jz      short loc_617D74
0x617D6D: mov     ecx, edi
0x617D6F: call    sub_6128B0
0x617D74: mov     edi, [esi+0A0h]
0x617D7A: test    edi, edi
0x617D7C: setnz   cl
0x617D7F: push    1; Size
0x617D81: lea     edx, [esp+2Ch+var_1D]
0x617D85: mov     [esp+2Ch+var_1D], cl
0x617D89: mov     ecx, ds:0B33B00h
0x617D8F: push    edx; Src
0x617D90: call    SaveLoad_SaveData
0x617D95: test    edi, edi
0x617D97: jz      short loc_617DA0
0x617D99: mov     ecx, edi
0x617D9B: call    sub_6128B0
0x617DA0: mov     eax, ds:0B33B00h
0x617DA5: cmp     byte ptr [eax+7Ch], 66h ; 'f'
0x617DA9: jb      short loc_617DB6
0x617DAB: mov     ecx, [esi+68h]
0x617DAE: push    ecx
0x617DAF: mov     ecx, esi
0x617DB1: call    sub_614C30
0x617DB6: cmp     byte ptr ds:0B05BACh, 0
0x617DBD: jz      short loc_617E2A
0x617DBF: mov     eax, ds:0B33B00h
0x617DC4: mov     edi, [eax+84h]
0x617DCA: test    edi, edi
0x617DCC: mov     esi, [eax+14h]
0x617DCF: jz      short loc_617E0E
0x617DD1: mov     edx, [edi]
0x617DD3: push    edx; a1
0x617DD4: call    TESForm_LookupByFormID
0x617DD9: mov     ecx, [edi+5]
0x617DDC: mov     edx, [eax]
0x617DDE: add     esp, 4
0x617DE1: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x617DE6: push    28ADh
0x617DEB: push    ecx
0x617DEC: mov     ecx, eax
0x617DEE: mov     eax, [edx+0D4h]
0x617DF4: call    eax
0x617DF6: mov     ecx, [edi]
0x617DF8: sub     esi, [esp+34h+var_18]
0x617DFC: push    eax
0x617DFD: push    ecx
0x617DFE: push    esi; ArgList
0x617DFF: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x617E04: call    sub_40FEC0
0x617E09: add     esp, 1Ch
0x617E0C: jmp     short loc_617E2A
0x617E0E: sub     esi, [esp+28h+var_18]
0x617E12: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x617E17: push    28ADh
0x617E1C: push    esi; ArgList
0x617E1D: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x617E22: call    sub_40FEC0
0x617E27: add     esp, 10h
0x617E2A: mov     ecx, ds:0B33B00h
0x617E30: call    sub_45A170
0x617E35: test    al, al
0x617E37: jz      short loc_617E6C
0x617E39: mov     edx, ds:0B33B00h
0x617E3F: mov     edi, [esp+28h+var_10]
0x617E43: mov     esi, [edx+14h]
0x617E46: lea     eax, [edi+0FFFFh]
0x617E4C: cmp     esi, eax
0x617E4E: jbe     short loc_617E67
0x617E50: push    28ADh
0x617E55: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x617E5A: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x617E5F: call    PrintError
0x617E64: add     esp, 0Ch
0x617E67: sub     esi, edi
0x617E69: mov     [edi], si
0x617E6C: pop     edi
0x617E6D: pop     esi
0x617E6E: add     esp, 20h
0x617E71: retn
