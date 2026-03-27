0x485730: sub     esp, 14h
0x485733: push    ebp
0x485734: push    esi
0x485735: mov     esi, ecx
0x485737: mov     ecx, ds:0B33B00h
0x48573D: mov     [esp+1Ch+var_8], 0
0x485745: mov     ebp, [ecx+14h]
0x485748: push    edi
0x485749: mov     [esp+20h+var_10], 0
0x485751: call    sub_45A170
0x485756: test    al, al
0x485758: jz      short loc_48578D
0x48575A: mov     ecx, ds:0B33B00h
0x485760: push    4; Size
0x485762: lea     eax, [esp+24h+Src]
0x485766: push    eax; Src
0x485767: mov     [esp+28h+Src], 4B4F4C42h
0x48576F: call    SaveLoad_SaveData
0x485774: mov     ecx, ds:0B33B00h
0x48577A: mov     edx, [ecx+14h]
0x48577D: push    2; Size
0x48577F: lea     eax, [esp+24h+var_8]
0x485783: push    eax; Src
0x485784: mov     [esp+28h+var_10], edx
0x485788: call    SaveLoad_SaveData
0x48578D: mov     ecx, [esi+8]
0x485790: mov     edx, [ecx+0Ch]
0x485793: mov     ecx, ds:0B33B00h
0x485799: push    4
0x48579B: lea     eax, [esp+24h+var_4]
0x48579F: push    eax
0x4857A0: mov     [esp+28h+var_4], edx
0x4857A4: call    SaveLoad_SaveFormID
0x4857A9: push    4; Size
0x4857AB: lea     ecx, [esi+4]
0x4857AE: push    ecx; Src
0x4857AF: mov     ecx, ds:0B33B00h
0x4857B5: call    SaveLoad_SaveData
0x4857BA: mov     ecx, ds:0B33B00h
0x4857C0: push    4; Size
0x4857C2: lea     edx, [esp+24h+var_14]
0x4857C6: mov     [esp+24h+var_14], 0
0x4857CE: mov     edi, [ecx+14h]
0x4857D1: push    edx; Src
0x4857D2: call    SaveLoad_SaveData
0x4857D7: mov     esi, [esi]
0x4857D9: test    esi, esi
0x4857DB: jz      short loc_485802
0x4857DD: lea     ecx, [ecx+0]
0x4857E0: cmp     dword ptr [esi+4], 0
0x4857E4: jnz     short loc_4857EB
0x4857E6: cmp     dword ptr [esi], 0
0x4857E9: jz      short loc_485802
0x4857EB: mov     ecx, [esi]
0x4857ED: push    0
0x4857EF: push    20h ; ' '
0x4857F1: call    ExtraDataList_SaveGame
0x4857F6: add     [esp+20h+var_14], 1
0x4857FB: mov     esi, [esi+4]
0x4857FE: test    esi, esi
0x485800: jnz     short loc_4857E0
0x485802: mov     eax, [esp+20h+var_14]
0x485806: mov     [edi], eax
0x485808: cmp     byte ptr ds:0B05BACh, 0
0x48580F: jz      short loc_485878
0x485811: mov     eax, ds:0B33B00h
0x485816: mov     edi, [eax+84h]
0x48581C: test    edi, edi
0x48581E: mov     esi, [eax+14h]
0x485821: jz      short loc_48585E
0x485823: mov     ecx, [edi]
0x485825: push    ecx; a1
0x485826: call    TESForm_LookupByFormID
0x48582B: mov     edx, [edi+5]
0x48582E: add     esp, 4
0x485831: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485836: push    5ABh
0x48583B: push    edx
0x48583C: mov     edx, [eax]
0x48583E: mov     ecx, eax
0x485840: mov     eax, [edx+0D4h]
0x485846: call    eax
0x485848: mov     ecx, [edi]
0x48584A: push    eax
0x48584B: push    ecx
0x48584C: sub     esi, ebp
0x48584E: push    esi; ArgList
0x48584F: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x485854: call    sub_40FEC0
0x485859: add     esp, 1Ch
0x48585C: jmp     short loc_485878
0x48585E: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x485863: push    5ABh
0x485868: sub     esi, ebp
0x48586A: push    esi; ArgList
0x48586B: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x485870: call    sub_40FEC0
0x485875: add     esp, 10h
0x485878: mov     ecx, ds:0B33B00h
0x48587E: call    sub_45A170
0x485883: test    al, al
0x485885: jz      short loc_4858BA
0x485887: mov     edx, ds:0B33B00h
0x48588D: mov     edi, [esp+20h+var_10]
0x485891: mov     esi, [edx+14h]
0x485894: lea     eax, [edi+0FFFFh]
0x48589A: cmp     esi, eax
0x48589C: jbe     short loc_4858B5
0x48589E: push    5ABh
0x4858A3: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x4858A8: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x4858AD: call    PrintError
0x4858B2: add     esp, 0Ch
0x4858B5: sub     esi, edi
0x4858B7: mov     [edi], si
0x4858BA: pop     edi
0x4858BB: pop     esi
0x4858BC: pop     ebp
0x4858BD: add     esp, 14h
0x4858C0: retn
