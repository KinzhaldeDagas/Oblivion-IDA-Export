0x625FE0: sub     esp, 24h; Serializes exact random-conversation resume state. The generated Conversation is saved rather than regenerated; package-level current item/response indices complement the list-internal cursors. Save does not execute INFO results.
0x625FE3: push    ebx
0x625FE4: push    ebp
0x625FE5: push    esi
0x625FE6: push    edi
0x625FE7: mov     esi, ecx
0x625FE9: call    TESPackage_SaveGame
0x625FEE: mov     ecx, ds:0B33B00h
0x625FF4: xor     ebx, ebx
0x625FF6: mov     [esp+34h+source], ebx
0x625FFA: mov     ebp, [ecx+14h]
0x625FFD: mov     [esp+34h+var_8], ebx
0x626001: call    TESSaveLoadGame_UseSaveGameBlocks
0x626006: test    al, al
0x626008: jz      short loc_62603D
0x62600A: mov     ecx, ds:0B33B00h; self
0x626010: push    4; byteCount
0x626012: lea     eax, [esp+38h+Src]
0x626016: push    eax; source
0x626017: mov     [esp+3Ch+Src], 4B4F4C42h
0x62601F: call    SaveLoad_SaveData
0x626024: mov     ecx, ds:0B33B00h; self
0x62602A: mov     edx, [ecx+14h]
0x62602D: push    2; byteCount
0x62602F: lea     eax, [esp+38h+source]
0x626033: push    eax; source
0x626034: mov     [esp+3Ch+var_8], edx
0x626038: call    SaveLoad_SaveData
0x62603D: push    4; byteCount
0x62603F: lea     ecx, [esi+44h]
0x626042: push    ecx; source
0x626043: mov     ecx, esi; self
0x626045: call    TESForm_SaveDataToCurrentSaveGame; Persist responseTimeRemaining so a loaded in-progress line retains its remaining package delay.
0x62604A: mov     edx, ds:0B33B00h
0x626050: cmp     byte ptr [edx+7Ch], 6Ah ; 'j'
0x626054: jb      short loc_626063
0x626056: push    1; byteCount
0x626058: lea     eax, [esi+4Ch]
0x62605B: push    eax; source
0x62605C: mov     ecx, esi; self
0x62605E: call    TESForm_SaveDataToCurrentSaveGame; For save version >=0x6A, persist waitingForLip. A restored true value makes DialoguePackage::Speak retain the current response rather than advancing it while asynchronous LIP loading completes.
0x626063: mov     eax, [esi+48h]
0x626066: cmp     eax, ebx
0x626068: mov     [esp+34h+var_20], ebx
0x62606C: jz      short loc_626075
0x62606E: mov     ecx, [eax+0Ch]
0x626071: mov     [esp+34h+var_20], ecx
0x626075: push    4; byteCount
0x626077: lea     edx, [esp+38h+var_20]
0x62607B: push    edx; source
0x62607C: mov     ecx, esi; self
0x62607E: call    TESForm_SaveFormIDToCurrentSaveGame
0x626083: mov     eax, [esi+5Ch]
0x626086: cmp     eax, ebx
0x626088: mov     [esp+34h+var_1C], ebx
0x62608C: jz      short loc_626095
0x62608E: mov     eax, [eax+0Ch]
0x626091: mov     [esp+34h+var_1C], eax
0x626095: push    4; byteCount
0x626097: lea     ecx, [esp+38h+var_1C]
0x62609B: push    ecx; source
0x62609C: mov     ecx, esi; self
0x62609E: call    TESForm_SaveFormIDToCurrentSaveGame
0x6260A3: mov     eax, [esi+60h]
0x6260A6: cmp     eax, ebx
0x6260A8: mov     [esp+34h+var_18], ebx
0x6260AC: jz      short loc_6260B5
0x6260AE: mov     edx, [eax+0Ch]
0x6260B1: mov     [esp+34h+var_18], edx
0x6260B5: push    4; byteCount
0x6260B7: lea     eax, [esp+38h+var_18]
0x6260BB: push    eax; source
0x6260BC: mov     ecx, esi; self
0x6260BE: call    TESForm_SaveFormIDToCurrentSaveGame
0x6260C3: mov     eax, [esi+40h]
0x6260C6: cmp     eax, ebx
0x6260C8: mov     [esp+34h+var_14], ebx
0x6260CC: jz      short loc_6260D5
0x6260CE: mov     ecx, [eax+0Ch]
0x6260D1: mov     [esp+34h+var_14], ecx
0x6260D5: push    4; byteCount
0x6260D7: lea     edx, [esp+38h+var_14]
0x6260DB: push    edx; source
0x6260DC: mov     ecx, esi; self
0x6260DE: call    TESForm_SaveFormIDToCurrentSaveGame
0x6260E3: mov     ecx, [esi+50h]; this
0x6260E6: cmp     ecx, ebx
0x6260E8: mov     [esp+34h+var_24], ebx
0x6260EC: jz      short loc_6260FA
0x6260EE: call    Conversation__GetSaveSize; Conversation save-size calculation includes every DialogueItem plus the saved current-item index.
0x6260F3: movzx   eax, ax
0x6260F6: mov     [esp+34h+var_24], eax; Compute serialized size of the already-generated Conversation; zero means no conversation payload.
0x6260FA: push    2; byteCount
0x6260FC: lea     ecx, [esp+38h+var_24]
0x626100: push    ecx; source
0x626101: mov     ecx, ds:0B33B00h; self
0x626107: call    SaveLoad_SaveData
0x62610C: cmp     word ptr [esp+34h+var_24], bx
0x626111: jz      short loc_626174
0x626113: mov     ecx, [esi+50h]; this
0x626116: call    Conversation__SaveGame; Persist the complete generated item/response chain and its internal cursors. Modern load therefore does not call INFO selection again.
0x62611B: mov     eax, [esi+54h]
0x62611E: or      edi, 0FFFFFFFFh
0x626121: cmp     eax, ebx
0x626123: mov     [esp+34h+var_10], edi
0x626127: jz      short loc_626139
0x626129: mov     ecx, [esi+50h]; this
0x62612C: push    eax; item
0x62612D: call    Conversation__GetDialogueItemIndex
0x626132: movzx   edx, ax
0x626135: mov     [esp+34h+var_10], edx; Persist DialoguePackage.currentItem as a UInt16 index into the serialized Conversation; FFFF means null.
0x626139: push    2; byteCount
0x62613B: lea     eax, [esp+38h+var_10]
0x62613F: push    eax; source
0x626140: mov     ecx, esi; self
0x626142: call    TESForm_SaveDataToCurrentSaveGame
0x626147: mov     ecx, [esi+54h]; this
0x62614A: cmp     ecx, ebx
0x62614C: mov     [esp+34h+Src], edi
0x626150: jz      short loc_626166
0x626152: mov     eax, [esi+58h]
0x626155: cmp     eax, ebx
0x626157: jz      short loc_626166
0x626159: push    eax; response
0x62615A: call    DialogueItem__GetDialogueResponseIndex
0x62615F: movzx   ecx, ax
0x626162: mov     [esp+34h+Src], ecx; Persist DialoguePackage.currentResponse as a UInt16 index within currentItem; FFFF means null.
0x626166: push    2; byteCount
0x626168: lea     edx, [esp+38h+Src]
0x62616C: push    edx; source
0x62616D: mov     ecx, esi; self
0x62616F: call    TESForm_SaveDataToCurrentSaveGame
0x626174: cmp     ds:0B05BACh, bl
0x62617A: jz      short loc_6261E3
0x62617C: mov     eax, ds:0B33B00h
0x626181: mov     edi, [eax+84h]
0x626187: cmp     edi, ebx
0x626189: mov     esi, [eax+14h]
0x62618C: jz      short loc_6261C9
0x62618E: mov     eax, [edi]
0x626190: push    eax; a1
0x626191: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x626196: mov     ecx, [edi+5]
0x626199: mov     edx, [eax]
0x62619B: add     esp, 4
0x62619E: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6261A3: push    17Ah
0x6261A8: push    ecx
0x6261A9: mov     ecx, eax
0x6261AB: mov     eax, [edx+0D4h]
0x6261B1: call    eax
0x6261B3: mov     ecx, [edi]
0x6261B5: push    eax
0x6261B6: push    ecx
0x6261B7: sub     esi, ebp
0x6261B9: push    esi; ArgList
0x6261BA: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x6261BF: call    sub_40FEC0
0x6261C4: add     esp, 1Ch
0x6261C7: jmp     short loc_6261E3
0x6261C9: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6261CE: push    17Ah
0x6261D3: sub     esi, ebp
0x6261D5: push    esi; ArgList
0x6261D6: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x6261DB: call    sub_40FEC0
0x6261E0: add     esp, 10h
0x6261E3: mov     ecx, ds:0B33B00h
0x6261E9: call    TESSaveLoadGame_UseSaveGameBlocks
0x6261EE: test    al, al
0x6261F0: jz      short loc_626225
0x6261F2: mov     edx, ds:0B33B00h
0x6261F8: mov     edi, [esp+34h+var_8]
0x6261FC: mov     esi, [edx+14h]
0x6261FF: lea     eax, [edi+0FFFFh]
0x626205: cmp     esi, eax
0x626207: jbe     short loc_626220
0x626209: push    17Ah
0x62620E: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x626213: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x626218: call    PrintError
0x62621D: add     esp, 0Ch
0x626220: sub     esi, edi
0x626222: mov     [edi], si
0x626225: pop     edi
0x626226: pop     esi
0x626227: pop     ebp
0x626228: pop     ebx
0x626229: add     esp, 24h
0x62622C: retn
