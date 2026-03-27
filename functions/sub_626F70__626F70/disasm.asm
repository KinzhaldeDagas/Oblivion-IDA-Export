0x626F70: sub     esp, 1Ch
0x626F73: push    ebx
0x626F74: push    esi
0x626F75: push    edi
0x626F76: mov     esi, ecx
0x626F78: call    sub_567E00
0x626F7D: mov     ecx, ds:0B33B00h
0x626F83: xor     ebx, ebx
0x626F85: cmp     ds:0B05BACh, bl
0x626F8B: mov     [esp+28h+var_4], ebx
0x626F8F: mov     eax, [ecx+14h]
0x626F92: mov     [esp+28h+var_C], ebx
0x626F96: mov     [esp+28h+var_18], eax
0x626F9A: jz      short loc_626FA0
0x626F9C: mov     [esp+28h+var_18], eax
0x626FA0: call    sub_45A170
0x626FA5: test    al, al
0x626FA7: jz      short loc_626FDC
0x626FA9: mov     ecx, ds:0B33B00h
0x626FAF: push    4; Size
0x626FB1: lea     eax, [esp+2Ch+Src]
0x626FB5: push    eax; Src
0x626FB6: mov     [esp+30h+Src], 4B4F4C42h
0x626FBE: call    SaveLoad_SaveData
0x626FC3: mov     ecx, ds:0B33B00h
0x626FC9: mov     edx, [ecx+14h]
0x626FCC: push    2; Size
0x626FCE: lea     eax, [esp+2Ch+var_4]
0x626FD2: push    eax; Src
0x626FD3: mov     [esp+30h+var_C], edx
0x626FD7: call    SaveLoad_SaveData
0x626FDC: mov     ecx, ds:0B33B00h
0x626FE2: push    ebp
0x626FE3: push    2; Size
0x626FE5: lea     edx, [esp+30h+var_1C]
0x626FE9: mov     [esp+30h+var_1C], ebx
0x626FED: mov     ebp, [ecx+14h]
0x626FF0: push    edx; Src
0x626FF1: call    SaveLoad_SaveData
0x626FF6: lea     edi, [esi+54h]
0x626FF9: cmp     edi, ebx
0x626FFB: jz      short loc_62702C
0x626FFD: lea     ecx, [ecx+0]
0x627000: cmp     [edi+4], ebx
0x627003: jnz     short loc_627009
0x627005: cmp     [edi], ebx
0x627007: jz      short loc_62702C
0x627009: mov     eax, [edi]
0x62700B: mov     ecx, [eax+0Ch]
0x62700E: push    4
0x627010: lea     edx, [esp+30h+Src]
0x627014: mov     [esp+30h+Src], ecx
0x627018: push    edx
0x627019: mov     ecx, esi
0x62701B: call    TESForm_SaveFormIDToCurrentSaveGame
0x627020: add     [esp+2Ch+var_1C], 1
0x627025: mov     edi, [edi+4]
0x627028: cmp     edi, ebx
0x62702A: jnz     short loc_627000
0x62702C: mov     ax, word ptr [esp+2Ch+var_1C]
0x627031: mov     [ebp+0], ax
0x627035: mov     eax, [esi+60h]
0x627038: cmp     eax, ebx
0x62703A: mov     [esp+2Ch+var_14], ebx
0x62703E: pop     ebp
0x62703F: jz      short loc_627048
0x627041: mov     ecx, [eax+0Ch]
0x627044: mov     [esp+28h+var_14], ecx
0x627048: push    4
0x62704A: lea     edx, [esp+2Ch+var_14]
0x62704E: push    edx
0x62704F: mov     ecx, esi
0x627051: call    TESForm_SaveFormIDToCurrentSaveGame
0x627056: mov     eax, [esi+5Ch]
0x627059: cmp     eax, ebx
0x62705B: mov     [esp+28h+var_10], ebx
0x62705F: jz      short loc_627068
0x627061: mov     eax, [eax+0Ch]
0x627064: mov     [esp+28h+var_10], eax
0x627068: push    4
0x62706A: lea     ecx, [esp+2Ch+var_10]
0x62706E: push    ecx
0x62706F: mov     ecx, esi
0x627071: call    TESForm_SaveFormIDToCurrentSaveGame
0x627076: push    1; a2
0x627078: lea     edx, [esi+3Dh]
0x62707B: push    edx; a1
0x62707C: mov     ecx, esi
0x62707E: call    TESForm_SaveDataToCurrentSaveGame
0x627083: push    1; a2
0x627085: lea     eax, [esi+64h]
0x627088: push    eax; a1
0x627089: mov     ecx, esi
0x62708B: call    TESForm_SaveDataToCurrentSaveGame
0x627090: push    1; a2
0x627092: lea     ecx, [esi+50h]
0x627095: push    ecx; a1
0x627096: mov     ecx, esi
0x627098: call    TESForm_SaveDataToCurrentSaveGame
0x62709D: push    4; a2
0x62709F: lea     edx, [esi+4Ch]
0x6270A2: push    edx; a1
0x6270A3: mov     ecx, esi
0x6270A5: call    TESForm_SaveDataToCurrentSaveGame
0x6270AA: push    0Ch; a2
0x6270AC: lea     eax, [esi+40h]
0x6270AF: push    eax; a1
0x6270B0: mov     ecx, esi
0x6270B2: call    TESForm_SaveDataToCurrentSaveGame
0x6270B7: push    1; a2
0x6270B9: lea     ecx, [esi+3Ch]
0x6270BC: push    ecx; a1
0x6270BD: mov     ecx, esi
0x6270BF: call    TESForm_SaveDataToCurrentSaveGame
0x6270C4: push    1; a2
0x6270C6: lea     edx, [esi+65h]
0x6270C9: push    edx; a1
0x6270CA: mov     ecx, esi
0x6270CC: call    TESForm_SaveDataToCurrentSaveGame
0x6270D1: cmp     ds:0B05BACh, bl
0x6270D7: jz      short loc_627144
0x6270D9: mov     eax, ds:0B33B00h
0x6270DE: mov     edi, [eax+84h]
0x6270E4: cmp     edi, ebx
0x6270E6: mov     esi, [eax+14h]
0x6270E9: jz      short loc_627128
0x6270EB: mov     eax, [edi]
0x6270ED: push    eax; a1
0x6270EE: call    TESForm_LookupByFormID
0x6270F3: mov     ecx, [edi+5]
0x6270F6: mov     edx, [eax]
0x6270F8: add     esp, 4
0x6270FB: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x627100: push    209h
0x627105: push    ecx
0x627106: mov     ecx, eax
0x627108: mov     eax, [edx+0D4h]
0x62710E: call    eax
0x627110: mov     ecx, [edi]
0x627112: sub     esi, [esp+34h+var_18]
0x627116: push    eax
0x627117: push    ecx
0x627118: push    esi; ArgList
0x627119: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x62711E: call    sub_40FEC0
0x627123: add     esp, 1Ch
0x627126: jmp     short loc_627144
0x627128: sub     esi, [esp+28h+var_18]
0x62712C: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x627131: push    209h
0x627136: push    esi; ArgList
0x627137: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x62713C: call    sub_40FEC0
0x627141: add     esp, 10h
0x627144: mov     ecx, ds:0B33B00h
0x62714A: call    sub_45A170
0x62714F: test    al, al
0x627151: jz      short loc_627186
0x627153: mov     edx, ds:0B33B00h
0x627159: mov     edi, [esp+28h+var_C]
0x62715D: mov     esi, [edx+14h]
0x627160: lea     eax, [edi+0FFFFh]
0x627166: cmp     esi, eax
0x627168: jbe     short loc_627181
0x62716A: push    209h
0x62716F: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x627174: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x627179: call    PrintError
0x62717E: add     esp, 0Ch
0x627181: sub     esi, edi
0x627183: mov     [edi], si
0x627186: pop     edi
0x627187: pop     esi
0x627188: pop     ebx
0x627189: add     esp, 1Ch
0x62718C: retn
