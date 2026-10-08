0x658CB0: mov     eax, [esp+Src]
0x658CB4: push    ebx
0x658CB5: push    ebp
0x658CB6: push    esi
0x658CB7: push    edi
0x658CB8: mov     edi, [esp+10h+source]
0x658CBC: push    eax; owner
0x658CBD: push    edi; changeMask
0x658CBE: mov     esi, ecx
0x658CC0: call    LowProcess_SaveGame
0x658CC5: mov     ecx, ds:0B33B00h
0x658CCB: xor     ebp, ebp
0x658CCD: mov     [esp+10h+source], ebp
0x658CD1: mov     ebx, [ecx+14h]
0x658CD4: call    TESSaveLoadGame_UseSaveGameBlocks
0x658CD9: test    al, al
0x658CDB: jz      short loc_658D0C
0x658CDD: push    4; byteCount
0x658CDF: lea     ecx, [esp+14h+Src]
0x658CE3: push    ecx; source
0x658CE4: mov     ecx, ds:0B33B00h; self
0x658CEA: mov     [esp+18h+Src], 4B4F4C42h
0x658CF2: call    SaveLoad_SaveData
0x658CF7: mov     ecx, ds:0B33B00h; self
0x658CFD: mov     ebp, [ecx+14h]
0x658D00: push    2; byteCount
0x658D02: lea     edx, [esp+14h+source]
0x658D06: push    edx; source
0x658D07: call    SaveLoad_SaveData
0x658D0C: mov     ecx, ds:0B33B00h; self
0x658D12: push    4; byteCount
0x658D14: lea     eax, [esi+90h]
0x658D1A: push    eax; source
0x658D1B: call    SaveLoad_SaveData
0x658D20: test    edi, 100000h
0x658D26: jz      short loc_658D33
0x658D28: lea     ecx, [esi+94h]; self
0x658D2E: call    AVCollection_Save
0x658D33: cmp     byte ptr ds:0B05BACh, 0
0x658D3A: jz      short loc_658DA3
0x658D3C: mov     eax, ds:0B33B00h
0x658D41: mov     edi, [eax+84h]
0x658D47: test    edi, edi
0x658D49: mov     esi, [eax+14h]
0x658D4C: jz      short loc_658D89
0x658D4E: mov     ecx, [edi]
0x658D50: push    ecx; a1
0x658D51: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x658D56: mov     edx, [edi+5]
0x658D59: add     esp, 4
0x658D5C: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658D61: push    247h
0x658D66: push    edx
0x658D67: mov     edx, [eax]
0x658D69: mov     ecx, eax
0x658D6B: mov     eax, [edx+0D4h]
0x658D71: call    eax
0x658D73: mov     ecx, [edi]
0x658D75: push    eax
0x658D76: push    ecx
0x658D77: sub     esi, ebx
0x658D79: push    esi; ArgList
0x658D7A: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x658D7F: call    sub_40FEC0
0x658D84: add     esp, 1Ch
0x658D87: jmp     short loc_658DA3
0x658D89: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658D8E: push    247h
0x658D93: sub     esi, ebx
0x658D95: push    esi; ArgList
0x658D96: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x658D9B: call    sub_40FEC0
0x658DA0: add     esp, 10h
0x658DA3: mov     ecx, ds:0B33B00h
0x658DA9: call    TESSaveLoadGame_UseSaveGameBlocks
0x658DAE: test    al, al
0x658DB0: jz      short loc_658DE2
0x658DB2: mov     edx, ds:0B33B00h
0x658DB8: mov     esi, [edx+14h]
0x658DBB: lea     eax, [ebp+0FFFFh]
0x658DC1: cmp     esi, eax
0x658DC3: jbe     short loc_658DDC
0x658DC5: push    247h
0x658DCA: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658DCF: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x658DD4: call    PrintError
0x658DD9: add     esp, 0Ch
0x658DDC: sub     esi, ebp
0x658DDE: mov     [ebp+0], si
0x658DE2: pop     edi
0x658DE3: pop     esi
0x658DE4: pop     ebp
0x658DE5: pop     ebx
0x658DE6: retn    8
