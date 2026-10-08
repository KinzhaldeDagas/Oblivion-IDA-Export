0x626230: push    0FFFFFFFFh; Loads DialoguePackage resume state. Modern saves (version >=0x20) restore the serialized conversation and exact cursors; no TESTopic selection, AddTopicList, or INFO result script runs in this load phase.
0x626232: push    offset SEH_626230
0x626237: mov     eax, large fs:0
0x62623D: push    eax
0x62623E: sub     esp, 30h
0x626241: push    ebx
0x626242: push    ebp
0x626243: push    esi
0x626244: push    edi
0x626245: mov     eax, ds:0B30AACh
0x62624A: xor     eax, esp
0x62624C: push    eax
0x62624D: lea     eax, [esp+50h+var_C]
0x626251: mov     large fs:0, eax
0x626257: mov     esi, ecx
0x626259: call    TESPackage_LoadGame
0x62625E: mov     ecx, ds:0B33B00h
0x626264: xor     ebp, ebp
0x626266: mov     [esp+50h+destination], ebp
0x62626A: xor     ebx, ebx
0x62626C: call    TESSaveLoadGame_UseSaveGameBlocks
0x626271: test    al, al
0x626273: jz      loc_626312
0x626279: mov     ecx, ds:0B33B00h; self
0x62627F: push    4; byteCount
0x626281: lea     eax, [esp+54h+Dst]
0x626285: push    eax; destination
0x626286: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x62628B: cmp     [esp+50h+Dst], 4B4F4C42h
0x626293: jz      short loc_6262FD
0x626295: mov     eax, ds:0B33B00h
0x62629A: mov     edi, [eax+80h]
0x6262A0: cmp     edi, ebp
0x6262A2: jz      short loc_6262E1
0x6262A4: mov     ecx, [edi]
0x6262A6: push    ecx; a1
0x6262A7: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x6262AC: mov     edx, [edi+5]
0x6262AF: movzx   ecx, byte ptr [edi+9]
0x6262B3: add     esp, 4
0x6262B6: push    edx
0x6262B7: mov     edx, [eax]
0x6262B9: push    ecx
0x6262BA: mov     ecx, eax
0x6262BC: mov     eax, [edx+0D4h]
0x6262C2: call    eax
0x6262C4: mov     ecx, [edi]
0x6262C6: push    eax
0x6262C7: push    ecx
0x6262C8: push    182h
0x6262CD: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6262D2: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6262D7: call    PrintError
0x6262DC: add     esp, 1Ch
0x6262DF: jmp     short loc_6262FD
0x6262E1: movzx   edx, byte ptr [eax+7Ch]
0x6262E5: push    edx
0x6262E6: push    182h
0x6262EB: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x6262F0: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6262F5: call    PrintError
0x6262FA: add     esp, 10h
0x6262FD: mov     ecx, ds:0B33B00h; self
0x626303: mov     ebx, [ecx+14h]
0x626306: push    2; byteCount
0x626308: lea     eax, [esp+54h+destination]
0x62630C: push    eax; destination
0x62630D: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x626312: push    4; byteCount
0x626314: lea     ecx, [esi+44h]
0x626317: push    ecx; destination
0x626318: mov     ecx, esi; self
0x62631A: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x62631F: mov     edx, ds:0B33B00h
0x626325: cmp     byte ptr [edx+7Ch], 6Ah ; 'j'
0x626329: jb      short loc_626338
0x62632B: push    1; byteCount
0x62632D: lea     eax, [esi+4Ch]
0x626330: push    eax; destination
0x626331: mov     ecx, esi; self
0x626333: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x626338: push    4; byteCount
0x62633A: lea     ecx, [esp+54h+a1]
0x62633E: push    ecx; destination
0x62633F: mov     ecx, esi; self
0x626341: call    TESForm_LoadFormIDFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadFormIDFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadFormID.
0x626346: mov     edx, [esp+58h+destination]
0x62634A: push    4
0x62634C: lea     eax, [esp+5Ch+Dst]
0x626350: push    eax
0x626351: mov     ecx, esi
0x9C3600: mov     eax, [ebp-10h]
0x9C3603: push    eax
0x9C3604: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3609: pop     ecx
0x9C360A: retn
0x9C360B: mov     edx, [esp+arg_4]
0x9C360F: lea     eax, [edx-40h]
0x9C3612: mov     ecx, [edx-44h]
0x9C3615: xor     ecx, eax
0x9C3617: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C361C: mov     eax, offset stru_AEC1E4
0x9C3621: jmp     ___CxxFrameHandler3
