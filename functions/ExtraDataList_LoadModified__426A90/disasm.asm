0x426A90: push    0FFFFFFFFh
0x426A92: push    offset ExtraDataList_LoadModified_SEH
0x426A97: mov     eax, large fs:0
0x426A9D: push    eax
0x426A9E: sub     esp, 230h
0x426AA4: mov     eax, ___security_cookie
0x426AA9: xor     eax, esp
0x426AAB: mov     [esp+23Ch+var_10], eax
0x426AB2: push    ebx
0x426AB3: push    ebp
0x426AB4: push    esi
0x426AB5: push    edi
0x426AB6: mov     eax, ___security_cookie
0x426ABB: xor     eax, esp
0x426ABD: push    eax
0x426ABE: lea     eax, [esp+250h+var_C]
0x426AC5: mov     large fs:0, eax
0x426ACB: mov     ebp, [esp+250h+arg_8]
0x426AD2: mov     ebx, ecx
0x426AD4: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x426ADA: xor     edi, edi
0x426ADC: mov     [esp+250h+var_208], ebp
0x426AE0: mov     [esp+250h+destination], edi
0x426AE4: mov     [esp+250h+var_210], edi
0x426AE8: call    TESSaveLoadGame_UseSaveGameBlocks
0x426AED: test    al, al
0x426AEF: jz      loc_426B98
0x426AF5: mov     ecx, g_TESSaveLoadGame; self
0x426AFB: push    4; byteCount
0x426AFD: lea     eax, [esp+254h+Dst]
0x426B04: push    eax; destination
0x426B05: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426B0A: cmp     [esp+250h+Dst], 4B4F4C42h
0x426B15: jz      short loc_426B7F
0x426B17: mov     eax, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x426B1C: mov     esi, [eax+80h]
0x426B22: cmp     esi, edi
0x426B24: jz      short loc_426B63
0x426B26: mov     ecx, [esi]
0x426B28: push    ecx; a1
0x426B29: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x426B2E: mov     edx, [esi+5]
0x426B31: movzx   ecx, byte ptr [esi+9]
0x426B35: add     esp, 4
0x426B38: push    edx
0x426B39: mov     edx, [eax]
0x426B3B: push    ecx
0x426B3C: mov     ecx, eax
0x426B3E: mov     eax, [edx+0D4h]
0x426B44: call    eax
0x426B46: mov     ecx, [esi]
0x426B48: push    eax
0x426B49: push    ecx
0x426B4A: push    1B6Fh
0x426B4F: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x426B54: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x426B59: call    PrintError
0x426B5E: add     esp, 1Ch
0x426B61: jmp     short loc_426B7F
0x426B63: movzx   edx, byte ptr [eax+7Ch]
0x426B67: push    edx
0x426B68: push    1B6Fh
0x426B6D: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x426B72: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x426B77: call    PrintError
0x426B7C: add     esp, 10h
0x426B7F: mov     ecx, g_TESSaveLoadGame; self
0x426B85: mov     eax, [ecx+14h]
0x426B88: push    2; byteCount
0x426B8A: lea     edx, [esp+254h+destination]
0x426B8E: push    edx; destination
0x426B8F: mov     [esp+258h+var_210], eax
0x426B93: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426B98: push    edi; int
0x426B99: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x426B9E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x426BA3: push    edi; int
0x426BA4: push    ebp; void *
0x426BA5: mov     [esp+264h+var_238], 0
0x426BAA: mov     [esp+264h+var_235], 0
0x426BAF: mov     [esp+264h+var_237], 0
0x426BB4: call    OblivionDynamicCast
0x426BB9: mov     ecx, g_TESSaveLoadGame; self
0x426BBF: add     esp, 14h
0x426BC2: mov     esi, eax
0x426BC4: push    2; byteCount
0x426BC6: lea     eax, [esp+254h+var_224]
0x426BCA: push    eax; destination
0x426BCB: mov     [esp+258h+var_1FC], esi
0x426BCF: call    SaveLoad_LoadData; EngineIssues review: ExtraDataList_LoadModified reads save-controlled UInt16 entry count; no local clamp to remaining record bytes before per-entry loop.
0x426BD4: cmp     [esp+250h+var_224], di; EnginePatch v3: ExtraDataList modified-entry count is clamped using remaining save-record bytes and a hard ceiling before the loop.
0x426BD9: mov     [esp+250h+var_204], edi
0x426BDD: jbe     loc_428003
0x426BE3: jmp     short loc_426BE9
0x426BE5: mov     esi, [esp+250h+var_1FC]
0x426BE9: push    1; byteCount
0x426BEB: lea     ecx, [esp+254h+var_22B]
0x426BEF: push    ecx; destination
0x426BF0: mov     ecx, g_TESSaveLoadGame; self
0x426BF6: mov     edi, 200000h
0x426BFB: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426C00: movzx   eax, [esp+250h+var_22B]
0x426C05: lea     ecx, [eax-11h]; switch 76 cases
0x426C08: cmp     ecx, 4Bh
0x426C0B: ja      ExtraDataList_LoadModified___def_426C18; jumptable 00426C18 default case, cases 19-22,24-26,29,36,38,48,52,56,59,63,64,67,68,73,76,77,81,86-88,91
0x426C11: movzx   edx, ds:byte_428254[ecx]
0x426C18: jmp     ds:jpt_426C18[edx*4]; switch jump
0x426C1F: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 42
0x426C27: jz      loc_427FE4
0x426C2D: mov     ecx, g_TESSaveLoadGame; self
0x426C33: push    2; byteCount
0x426C35: lea     eax, [esp+254h+var_178]
0x426C3C: push    eax; destination
0x426C3D: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426C42: mov     ecx, [esp+250h+var_178]
0x426C49: push    ecx
0x426C4A: mov     ecx, ebx
0x426C4C: call    ExtraDataList_SetExtraCount
0x426C51: jmp     loc_427FE4
0x426C56: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 43
0x426C5E: jz      loc_427FE4
0x426C64: mov     ecx, g_TESSaveLoadGame; self
0x426C6A: push    4; byteCount
0x426C6C: lea     edx, [esp+254h+var_158]
0x426C73: push    edx; destination
0x426C74: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426C79: fld     [esp+250h+var_158]
0x426C80: push    ecx
0x426C81: mov     ecx, ebx
0x426C83: fstp    [esp+254h+value]; float
0x426C86: call    ExtraDataList_SetHealthValue
0x426C8B: jmp     loc_427FE4
0x426C90: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 44
0x426C98: jz      loc_427FE4
0x426C9E: mov     ecx, g_TESSaveLoadGame; self
0x426CA4: push    1; byteCount
0x426CA6: lea     eax, [esp+254h+var_1EC]
0x426CAA: push    eax; destination
0x426CAB: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426CB0: mov     ecx, [esp+250h+var_1EC]
0x426CB4: push    ecx
0x426CB5: mov     ecx, ebx
0x426CB7: call    ExtraDataList_SetUses; ExtraUses singleton setter always creates/updates and narrows to u8; no removal sentinel. Repeated XUSE retains node position and replaces the byte.
0x426CBC: jmp     loc_427FE4
0x426CC1: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 45
0x426CC9: jz      loc_427FE4
0x426CCF: mov     ecx, g_TESSaveLoadGame; self
0x426CD5: push    4; byteCount
0x426CD7: lea     edx, [esp+254h+var_18C]
0x426CDE: push    edx; destination
0x426CDF: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426CE4: fld     [esp+250h+var_18C]
0x426CEB: push    ecx
0x426CEC: mov     ecx, ebx
0x426CEE: fstp    [esp+254h+value]; float
0x426CF1: call    ExtraDataList_SetTimeLeft; ExtraTimeLeft singleton setter always creates/updates the supplied float32 bit pattern; no zero or NaN removal sentinel.
0x426CF6: jmp     loc_427FE4
0x426CFB: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 46
0x426D03: jz      loc_427FE4
0x426D09: mov     ecx, g_TESSaveLoadGame; self
0x426D0F: push    4; byteCount
0x426D11: lea     eax, [esp+254h+var_1E4]
0x426D15: push    eax; destination
0x426D16: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426D1B: fld     [esp+250h+var_1E4]
0x426D1F: push    ecx
0x426D20: mov     ecx, ebx
0x426D22: fstp    [esp+254h+value]; float
0x426D25: call    ExtraDataList_SetCharge; Updates or creates ExtraCharge type 0x2E with the supplied float.
0x426D2A: jmp     loc_427FE4
0x426D2F: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 47
0x426D37: jz      loc_427FE4
0x426D3D: push    1; byteCount
0x426D3F: lea     ecx, [esp+254h+var_22D]
0x426D43: push    ecx; destination
0x426D44: mov     ecx, g_TESSaveLoadGame; self
0x426D4A: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426D4F: movsx   edx, [esp+250h+var_22D]
0x426D54: push    edx
0x426D55: mov     ecx, ebx
0x426D57: call    BaseExtraList_SetSoulLevel
0x426D5C: jmp     loc_427FE4
0x426D61: test    byte ptr [esp+250h+arg_0], 40h; jumptable 00426C18 case 49
0x426D69: jz      loc_427FE4
0x426D6F: push    0Ch; Size
0x426D71: call    FormHeapAlloc
0x426D76: add     esp, 4
0x426D79: test    eax, eax
0x426D7B: jz      short loc_426D8F
0x426D7D: mov     byte ptr [eax], 0
0x426D80: mov     dword ptr [eax+4], 0
0x426D87: mov     byte ptr [eax+8], 0
0x426D8B: mov     esi, eax
0x426D8D: jmp     short loc_426D91
0x426D8F: xor     esi, esi
0x426D91: mov     ecx, g_TESSaveLoadGame; self
0x426D97: cmp     byte ptr [ecx+7Ch], 15h
0x426D9B: jb      loc_426E24
0x426DA1: push    1; byteCount
0x426DA3: push    esi; EnginePatch faithful-patch candidate: ExtraDataList case reads into an allocation result that may be null. EnginePatch central LoadData hook can safely discard/advance on null dst.
0x426DA4: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426DA9: mov     ecx, g_TESSaveLoadGame; self
0x426DAF: push    4; byteCount
0x426DB1: lea     eax, [esp+254h+var_15C]
0x426DB8: push    eax; destination
0x426DB9: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x426DBE: mov     ecx, g_TESSaveLoadGame; self
0x426DC4: cmp     byte ptr [ecx+7Ch], 1Ah
0x426DC8: jnb     short loc_426DDF
0x426DCA: push    4; byteCount
0x426DCC: lea     edx, [esp+25Ch+var_134]
0x426DD3: push    edx; destination
0x426DD4: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x426DD9: mov     ecx, g_TESSaveLoadGame; self
0x426DDF: push    1; byteCount
0x426DE1: lea     eax, [esi+8]
0x426DE4: push    eax; destination
0x426DE5: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426DEA: mov     eax, [esp+260h+a1]
0x426DF1: test    eax, eax
0x426DF3: jz      short loc_426E18
0x426DF5: push    0; int
0x426DF7: push    offset ??_R0?AVTESKey@@@8; struct TypeDescriptor *
0x426DFC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426E01: push    0; int
0x426E03: push    eax; a1
0x426E04: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x426E09: add     esp, 4
0x426E0C: push    eax; void *
0x426E0D: call    OblivionDynamicCast
0x426E12: add     esp, 14h
0x426E15: mov     [esi+4], eax
0x426E18: mov     ecx, g_TESSaveLoadGame; self
0x426E1E: cmp     byte ptr [ecx+7Ch], 15h
0x426E22: jnb     short loc_426E77
0x426E24: push    10h; byteCount
0x426E26: lea     edx, [esp+264h+var_134]
0x426E2D: push    edx; destination
0x426E2E: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426E33: mov     eax, [esp+260h+var_130]
0x426E3A: test    eax, eax
0x426E3C: mov     cl, [esp+260h+var_134]
0x426E43: mov     dl, [esp+260h+var_128]
0x426E4A: mov     [esi+4], eax
0x426E4D: mov     [esi], cl
0x426E4F: mov     [esi+8], dl
0x426E52: jz      short loc_426E77
0x426E54: push    0; int
0x426E56: push    offset ??_R0?AVTESKey@@@8; struct TypeDescriptor *
0x426E5B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426E60: push    0; int
0x426E62: push    eax; a1
0x426E63: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x426E68: add     esp, 4
0x426E6B: push    eax; void *
0x426E6C: call    OblivionDynamicCast
0x426E71: add     esp, 14h
0x426E74: mov     [esi+4], eax
0x426E77: push    esi; lockData
0x426E78: mov     ecx, ebx; this
0x426E7A: call    ExtraDataList_SetLock; Verified ExtraLock lifecycle setter: if type 0x31 exists, frees its old ExtraLockData payload and replaces it; otherwise allocates a 16-byte ExtraLock wrapper, constructs it with the supplied 12-byte ExtraLockData*, and adds it to ExtraDataList.
0x426E7F: jmp     loc_427FE4
0x426E84: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 55
0x426E8A: cmp     byte ptr [ecx+7Ch], 43h ; 'C'
0x426E8E: jnb     short loc_426EC2
0x426E90: test    byte ptr [esp+250h+arg_0], 30h
0x426E98: jz      short loc_426EC2
0x426E9A: push    4; byteCount
0x426E9C: lea     eax, [esp+254h+var_200]
0x426EA0: push    eax; destination
0x426EA1: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426EA6: fld     [esp+250h+var_200]
0x426EAA: test    ebp, ebp
0x426EAC: push    ecx
0x426EAD: fstp    [esp+254h+value]; float
0x426EB0: jz      short loc_426EBB
0x426EB2: mov     ecx, ebp
0x426EB4: call    sub_4DB520
0x426EB9: jmp     short loc_426EC2
0x426EBB: mov     ecx, ebx
0x426EBD: call    sub_423A30
0x426EC2: mov     ecx, g_TESSaveLoadGame; self
0x426EC8: cmp     byte ptr [ecx+7Ch], 43h ; 'C'
0x426ECC: jb      loc_427FE4
0x426ED2: test    byte ptr [esp+250h+arg_0], 20h
0x426EDA: jz      loc_427FE4
0x426EE0: push    4; byteCount
0x426EE2: lea     edx, [esp+254h+var_1DC]
0x426EE6: push    edx; destination
0x426EE7: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426EEC: fld     [esp+250h+var_1DC]
0x426EF0: push    ecx
0x426EF1: mov     ecx, ebx
0x426EF3: fstp    [esp+254h+value]; float
0x426EF6: call    sub_423A30
0x426EFB: jmp     loc_427FE4
0x426F00: test    [esp+250h+arg_0], 2000h; jumptable 00426C18 case 60
0x426F0B: jz      loc_427FE4
0x426F11: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x426F17: push    4
0x426F19: call    SaveLoad_AdvanceBufferOffset; EnginePatch v2: byte-checked SaveLoad_AdvanceBufferOffset hook. Clamps save cursor movement to active tracked record buffer.
0x426F1E: jmp     loc_427FE4
0x426F23: test    [esp+250h+arg_0], 2000h; jumptable 00426C18 case 82
0x426F2E: jz      loc_427FE4
0x426F34: mov     ecx, g_TESSaveLoadGame; self
0x426F3A: push    4; byteCount
0x426F3C: lea     eax, [esp+254h+var_184]
0x426F43: push    eax; destination
0x426F44: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426F49: mov     ecx, [esp+250h+var_184]
0x426F50: push    ecx
0x426F51: mov     ecx, ebx
0x426F53: call    ExtraDataList_SetInvestmentGold; Updates or creates ExtraInvestmentGold type 0x52 with the supplied integer amount.
0x426F58: jmp     loc_427FE4
0x426F5D: test    byte ptr [esp+250h+arg_0], 80h; jumptable 00426C18 case 61
0x426F65: jz      loc_427FE4
0x426F6B: mov     ecx, ebx
0x426F6D: call    sub_424770
0x426F72: mov     ecx, g_TESSaveLoadGame; self
0x426F78: push    4; byteCount
0x426F7A: lea     edx, [esp+254h+var_1D4]
0x426F81: push    edx; destination
0x426F82: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x426F87: fld     [esp+250h+var_1D4]
0x426F8B: push    ecx
0x426F8C: mov     ecx, ebx
0x426F8E: fstp    [esp+254h+value]; float
0x426F91: call    sub_4269E0
0x426F96: jmp     loc_427FE4
0x426F9B: test    byte ptr [esp+250h+arg_0], 0A0h; jumptable 00426C18 case 39
0x426FA3: jz      loc_427FE4
0x426FA9: mov     ecx, g_TESSaveLoadGame; self
0x426FAF: push    4; byteCount
0x426FB1: lea     eax, [esp+254h+var_14C]
0x426FB8: push    eax; destination
0x426FB9: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x426FBE: mov     ecx, [esp+258h+var_154]
0x426FC5: push    ecx; a1
0x426FC6: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x426FCB: add     esp, 4
0x426FCE: push    eax; owner
0x426FCF: mov     ecx, ebx; this
0x426FD1: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x426FD6: mov     [esp+258h+var_240], 1
0x426FDB: jmp     loc_427FE4
0x426FE0: test    [esp+250h+arg_0], 120h; jumptable 00426C18 case 40
0x426FEB: jz      loc_427FE4
0x426FF1: mov     ecx, g_TESSaveLoadGame; self
0x426FF7: push    4; byteCount
0x426FF9: lea     edx, [esp+254h+var_1CC]
0x427000: push    edx; destination
0x427001: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427006: mov     eax, [esp+258h+var_1D4]
0x42700D: push    0; int
0x42700F: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x427014: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427019: push    0; int
0x42701B: push    eax; a1
0x42701C: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427021: add     esp, 4
0x427024: push    eax; void *
0x427025: call    OblivionDynamicCast
0x42702A: add     esp, 14h
0x42702D: test    eax, eax
0x42702F: jz      loc_427FE4
0x427035: push    eax; global
0x427036: mov     ecx, ebx; this
0x427038: call    ExtraDataList_SetGlobal; Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
0x42703D: jmp     loc_427FE4
0x427042: test    [esp+250h+arg_0], 220h; jumptable 00426C18 case 41
0x42704D: jz      loc_427FE4
0x427053: push    4; byteCount
0x427055: lea     ecx, [esp+254h+rank]
0x42705C: push    ecx; destination
0x42705D: mov     ecx, g_TESSaveLoadGame; self
0x427063: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427068: mov     edx, [esp+250h+rank]
0x42706F: push    edx; rank
0x427070: mov     ecx, ebx; this
0x427072: call    ExtraDataList_SetRank; Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
0x427077: jmp     loc_427FE4
0x42707C: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 27
0x427084: jz      loc_427FE4
0x42708A: push    0
0x42708C: push    1
0x42708E: mov     ecx, ebx
0x427090: call    SetWorn
0x427095: jmp     loc_427FE4
0x42709A: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 28
0x4270A2: jz      loc_427FE4
0x4270A8: push    1
0x4270AA: push    1
0x4270AC: mov     ecx, ebx
0x4270AE: call    SetWorn
0x4270B3: jmp     loc_427FE4
0x4270B8: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 71
0x4270C0: jz      loc_427FE4
0x4270C6: push    1
0x4270C8: mov     ecx, ebx
0x4270CA: call    ExtraDataList_SetCannotWear; Adds or removes marker extra ExtraCannotWear type 0x47 according to the requested state.
0x4270CF: jmp     loc_427FE4
0x4270D4: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 80
0x4270DC: jz      loc_427FE4
0x4270E2: mov     ecx, ebx
0x4270E4: call    ExtraDataList_AddBoundArmor; Adds marker extra ExtraBoundArmor type 0x50 when it is not already present.
0x4270E9: jmp     loc_427FE4
0x4270EE: push    1; jumptable 00426C18 case 37
0x4270F0: mov     ecx, ebx
0x4270F2: call    ExtraDataList_SetGhost?
0x4270F7: jmp     loc_427FE4
0x4270FC: test    [esp+250h+arg_0], 4000020h; jumptable 00426C18 case 18
0x427107: jz      loc_427FE4
0x42710D: mov     ecx, g_TESSaveLoadGame; self
0x427113: push    4; byteCount
0x427115: lea     eax, [esp+254h+var_1C4]
0x42711C: push    eax; destination
0x42711D: mov     [esp+258h+var_235], 1
0x427122: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427127: mov     ecx, [esp+258h+var_1CC]
0x42712E: push    0; int
0x427130: push    offset ??_R0?AVScript@@@8; struct TypeDescriptor *
0x427135: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42713A: push    0; int
0x42713C: push    ecx; a1
0x42713D: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427142: add     esp, 4
0x427145: push    eax; void *
0x427146: call    OblivionDynamicCast
0x42714B: mov     esi, eax
0x42714D: add     esp, 14h
0x427150: test    esi, esi
0x427152: jz      short loc_42715C
0x427154: push    esi
0x427155: mov     ecx, ebx
0x427157: call    ExtraDataList_AddScript
0x42715C: mov     ecx, ebx; this
0x42715E: call    ExtraDataList_GetExtraScriptEventList
0x427163: mov     edi, eax
0x427165: test    edi, edi
0x427167: jnz     short loc_4271D7
0x427169: test    esi, esi
0x42716B: jz      short loc_427176
0x42716D: mov     ecx, esi
0x42716F: call    Script_CreateEventList
0x427174: mov     edi, eax
0x427176: push    edi
0x427177: mov     ecx, ebx
0x427179: call    ExtraDataList_SetScriptEventList
0x42717E: test    edi, edi
0x427180: jnz     short loc_4271D7
0x427182: push    14h; Size
0x427184: call    FormHeapAlloc
0x427189: add     esp, 4
0x42718C: mov     [esp+258h+var_23C], eax
0x427190: test    eax, eax
0x427192: mov     [esp+258h+var_C], edi
0x427199: jz      short loc_4271A6
0x42719B: mov     ecx, eax
0x42719D: call    sub_4F9DB0
0x4271A2: mov     esi, eax
0x4271A4: jmp     short loc_4271A8
0x4271A6: xor     esi, esi
0x4271A8: mov     ecx, esi
0x4271AA: mov     [esp+258h+var_C], 0FFFFFFFFh
0x4271B5: call    ScriptEventList_Load?
0x4271BA: test    esi, esi
0x4271BC: jz      loc_427FE4
0x4271C2: mov     ecx, esi
0x4271C4: call    ScriptEventList_destr??
0x4271C9: push    esi
0x4271CA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4271CF: add     esp, 4
0x4271D2: jmp     loc_427FE4
0x4271D7: mov     ecx, edi
0x4271D9: call    ScriptEventList_Load?
0x4271DE: jmp     loc_427FE4
0x4271E3: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 54
0x4271EB: jz      loc_427FE4
0x4271F1: mov     ecx, g_TESSaveLoadGame; self
0x4271F7: push    4; byteCount
0x4271F9: lea     edx, [esp+254h+var_1F8]
0x4271FD: push    edx; destination
0x4271FE: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427203: mov     ecx, g_TESSaveLoadGame; self
0x427209: push    1; byteCount
0x42720B: lea     eax, [esp+254h+var_1BC]
0x427212: push    eax; destination
0x427213: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427218: mov     ecx, [esp+250h+var_1F8]
0x42721C: push    ecx
0x42721D: mov     ecx, ebx
0x42721F: call    ExtraDataList_AddExtraLeveledItem
0x427224: mov     edx, [esp+250h+var_1BC]
0x42722B: push    edx
0x42722C: mov     ecx, ebx
0x42722E: call    sub_41FF40
0x427233: jmp     loc_427FE4
0x427238: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 31
0x42723E: push    4; byteCount
0x427240: lea     eax, [esp+254h+var_20C]
0x427244: push    eax; destination
0x427245: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x42724A: push    4; byteCount
0x42724C: lea     ecx, [esp+25Ch+var_174]
0x427253: push    ecx; destination
0x427254: mov     ecx, g_TESSaveLoadGame; self
0x42725A: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42725F: mov     ecx, g_TESSaveLoadGame; self
0x427265: push    4; byteCount
0x427267: lea     edx, [esp+25Ch+var_1B4]
0x42726E: push    edx; destination
0x42726F: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427274: mov     ecx, g_TESSaveLoadGame; self
0x42727A: push    1; byteCount
0x42727C: lea     eax, [esp+264h+var_164]
0x427283: push    eax; destination
0x427284: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427289: push    1; byteCount
0x42728B: lea     ecx, [esp+264h+var_1C4]
0x427292: push    ecx; destination
0x427293: mov     ecx, g_TESSaveLoadGame; self
0x427299: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42729E: mov     edx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x4272A4: cmp     byte ptr [edx+7Ch], 40h ; '@'
0x4272A8: jb      short loc_427312
0x4272AA: mov     eax, [esp+260h+destination]
0x4272AE: mov     ecx, g_TESDataHandler; Verified singleton pointer: allocated as TESDataHandler (0xCE0 bytes) and published at TES_constr 441B8A; passed to LoadFiles and form APIs; TES_destr 446915 destroys and clears it. Field +0x74 is the Global list head used by TESSaveLoadGame_LoadGlobalValues; surrounding layout remains Unknown.
0x4272B4: push    eax; _DWORD
0x4272B5: call    TESDataHandler_IsFormIDCreated?
0x4272BA: test    al, al
0x4272BC: jz      short loc_427312
0x4272BE: push    1; byteCount
0x4272C0: lea     ecx, [esp+264h+var_184]
0x4272C7: push    ecx; destination
0x4272C8: mov     ecx, g_TESSaveLoadGame; self
0x4272CE: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4272D3: test    esi, esi
0x4272D5: jnz     short loc_4272E9
0x4272D7: mov     ecx, ds:0B34D90h
0x4272DD: mov     edx, [ecx]
0x4272DF: mov     eax, [edx+18h]
0x4272E2: push    offset aPackageBeingCr; "Package being created on non-actor!"
0x4272E7: call    eax
0x4272E9: mov     ecx, dword ptr [esp+264h+packageType]
0x4272F0: mov     edx, [esp+264h+formID]
0x4272F4: push    ecx; packageType
0x4272F5: mov     ecx, g_TESSaveLoadGame; self
0x4272FB: push    esi; combatContext
0x4272FC: push    edx; formID
0x4272FD: call    TESSaveLoadGame_CreatePackage
0x427302: mov     esi, eax
0x427304: mov     eax, [esi]
0x427306: mov     edx, [eax+0E4h]
0x42730C: mov     ecx, esi
0x42730E: call    edx
0x427310: jmp     short loc_427340
0x427312: mov     eax, [esp+260h+destination]
0x427316: push    0; int
0x427318: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x42731D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427322: push    0; int
0x427324: push    eax; a1
0x427325: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x42732A: add     esp, 4
0x42732D: push    eax; void *
0x42732E: call    OblivionDynamicCast
0x427333: mov     esi, eax
0x427335: add     esp, 14h
0x427338: test    esi, esi
0x42733A: jz      loc_427FE4
0x427340: mov     ecx, [esp+264h+var_1C8]
0x427347: mov     edx, dword ptr [esp+264h+noRumors]
0x42734E: mov     eax, [esp+264h+var_1C0]
0x427355: push    ecx
0x427356: mov     ecx, [esp+268h+var_180]
0x42735D: push    edx
0x42735E: push    eax
0x42735F: push    ecx
0x427360: push    esi
0x427361: mov     ecx, ebx
0x427363: call    sub_4268B0
0x427368: jmp     loc_427FE4
0x42736D: test    [esp+250h+arg_0], 40000h; jumptable 00426C18 case 32
0x427378: jz      loc_427FE4
0x42737E: mov     ecx, g_TESSaveLoadGame; self
0x427384: push    4; byteCount
0x427386: lea     edx, [esp+254h+var_1A4]
0x42738D: push    edx; destination
0x42738E: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427393: mov     eax, [esp+258h+var_1AC]
0x42739A: test    eax, eax
0x42739C: jz      loc_427FE4
0x4273A2: mov     ecx, g_TESSaveLoadGame; self
0x4273A8: push    11h; packageType
0x4273AA: push    0; combatContext
0x4273AC: push    eax; formID
0x4273AD: call    TESSaveLoadGame_CreatePackage
0x4273B2: mov     esi, eax
0x4273B4: mov     eax, [esi]
0x4273B6: mov     edx, [eax+0E4h]
0x4273BC: mov     ecx, esi
0x4273BE: call    edx
0x4273C0: push    esi
0x4273C1: mov     ecx, ebx
0x4273C3: call    ExtraDataList_SetTrespassPackageExtra; Replaces or creates ExtraTresPassPackage. An existing package object is destructed before the supplied TrespassPackage is installed.
0x4273C8: jmp     loc_427FE4
0x4273CD: test    [esp+250h+arg_0], 400000h; jumptable 00426C18 case 23
0x4273D8: jz      loc_427FE4
0x4273DE: mov     ecx, g_TESSaveLoadGame; self
0x4273E4: push    4; byteCount
0x4273E6: lea     eax, [esp+254h+var_128]
0x4273ED: push    eax; destination
0x4273EE: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4273F3: jmp     loc_427FE4
0x4273F8: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 34
0x427400: jz      loc_427FE4
0x427406: push    4; byteCount
0x427408: lea     ecx, [esp+254h+var_148]
0x42740F: push    ecx; destination
0x427410: mov     ecx, g_TESSaveLoadGame; self
0x427416: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x42741B: mov     edx, [esp+258h+reference]
0x427422: push    edx; reference
0x427423: mov     ecx, ebx; this
0x427425: call    ExtraDataList_SetReferencePointer; Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
0x42742A: jmp     loc_427FE4
0x42742F: test    [esp+250h+arg_0], 10000000h; jumptable 00426C18 case 53
0x42743A: jz      loc_427FE4
0x427440: push    1
0x427442: mov     ecx, ebx
0x427444: call    ExtraDataList_SetLeveledCreatureFlag; Oblivion marker toggle: false removes ExtraLeveledCreature (type 0x35); true creates the marker only if absent. No Fallout field layout is assumed.
0x427449: jmp     loc_427FE4
0x42744E: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 33
0x427454: push    2; byteCount
0x427456: lea     eax, [esp+254h+formID]
0x42745A: push    eax; destination
0x42745B: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427460: xor     esi, esi
0x427462: cmp     word ptr [esp+250h+formID], si
0x427467: jbe     loc_427FE4
0x42746D: lea     ecx, [ecx+0]
0x427470: push    4; byteCount
0x427472: lea     ecx, [esp+254h+var_19C]
0x427479: push    ecx; destination
0x42747A: mov     ecx, g_TESSaveLoadGame; self
0x427480: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427485: mov     ecx, g_TESSaveLoadGame; self
0x42748B: push    1; byteCount
0x42748D: lea     edx, [esp+25Ch+a1]
0x427494: push    edx; destination
0x427495: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42749A: mov     eax, [esp+258h+var_1A4]
0x4274A1: push    0; int
0x4274A3: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x4274A8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4274AD: push    0; int
0x4274AF: push    eax; a1
0x4274B0: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4274B5: add     esp, 4
0x4274B8: push    eax; void *
0x4274B9: call    OblivionDynamicCast
0x4274BE: add     esp, 14h
0x4274C1: test    eax, eax
0x4274C3: jz      short loc_4274D5
0x4274C5: mov     ecx, [esp+258h+a1]
0x4274CC: push    ecx
0x4274CD: push    eax
0x4274CE: mov     ecx, ebx
0x4274D0: call    ExtraDataList_SetRunOnceExtraPackage; Ensures ExtraRunOncePacks exists, then adds or updates a package record with the supplied package and state byte.
0x4274D5: movzx   edx, [esp+258h+var_228]
0x4274DA: add     esi, 1
0x4274DD: cmp     esi, edx
0x4274DF: jl      short loc_427470
0x4274E1: jmp     loc_427FE4
0x4274E6: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 30
0x4274EC: push    4; byteCount
0x4274EE: lea     eax, [esp+254h+var_194]
0x4274F5: push    eax; destination
0x4274F6: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x4274FB: push    0Ch; byteCount
0x4274FD: lea     ecx, [esp+25Ch+Dst]
0x427504: push    ecx; destination
0x427505: mov     ecx, g_TESSaveLoadGame; self
0x42750B: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427510: mov     ecx, g_TESSaveLoadGame; self
0x427516: push    4; byteCount
0x427518: lea     edx, [esp+25Ch+var_138]
0x42751F: push    edx; destination
0x427520: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427525: mov     eax, [esp+258h+var_19C]
0x42752C: push    eax; a1
0x42752D: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427532: push    0; int
0x427534: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x427539: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42753E: push    0; int
0x427540: push    eax; void *
0x427541: mov     [esp+270h+var_148], eax
0x427548: call    OblivionDynamicCast
0x42754D: mov     ecx, [esp+270h+var_148]
0x427554: push    0; int
0x427556: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x42755B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427560: push    0; int
0x427562: push    ecx; void *
0x427563: mov     esi, eax
0x427565: call    OblivionDynamicCast
0x42756A: add     esp, 2Ch
0x42756D: test    esi, esi
0x42756F: jnz     short loc_427579
0x427571: test    eax, eax
0x427573: jz      loc_427FE4
0x427579: fld     [esp+258h+var_138]
0x427580: push    ecx
0x427581: fstp    [esp+25Ch+var_25C]; float
0x427584: lea     edx, [esp+25Ch+Dst]
0x42758B: push    edx; int
0x42758C: push    eax; int
0x42758D: push    esi; int
0x42758E: mov     ecx, ebx
0x427590: call    ExtraDataList_SetStartLocation; ExtraPackageStartLocation setter: first creation stores selected location FormID, XYZ, and rotZ; updating an extant singleton replaces only location/XYZ and preserves existing rotZ.
0x427595: jmp     loc_427FE4
0x42759A: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 35
0x4275A0: push    2; byteCount
0x4275A2: lea     eax, [esp+254h+var_228]
0x4275A6: push    eax; destination
0x4275A7: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4275AC: xor     esi, esi
0x4275AE: cmp     [esp+250h+var_228], si
0x4275B3: jbe     loc_427FE4
0x4275B9: lea     esp, [esp+0]
0x4275C0: push    4; byteCount
0x4275C2: lea     ecx, [esp+254h+var_1F4]
0x4275C6: push    ecx; destination
0x4275C7: mov     ecx, g_TESSaveLoadGame; self
0x4275CD: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x4275D2: mov     edx, [esp+258h+var_1FC]
0x4275D6: push    edx
0x4275D7: mov     ecx, ebx
0x4275D9: call    sub_424C50; 3DTheft decode: Add/link ExtraFollower entry on target ExtraDataList; creates ExtraFollower if absent and pushes follower actor pointer if not already listed.
0x4275DE: movzx   eax, [esp+258h+var_230]
0x4275E3: add     esi, 1
0x4275E6: cmp     esi, eax
0x4275E8: jl      short loc_4275C0
0x4275EA: jmp     loc_427FE4
0x4275EF: test    [esp+250h+arg_0], edi; jumptable 00426C18 case 57
0x4275F6: jz      loc_427FE4
0x4275FC: push    4; byteCount
0x4275FE: lea     ecx, [esp+254h+var_1E8]
0x427602: push    ecx; destination
0x427603: mov     ecx, g_TESSaveLoadGame; self
0x427609: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x42760E: mov     ecx, g_TESSaveLoadGame; self
0x427614: push    4; byteCount
0x427616: lea     edx, [esp+25Ch+var_1E8]
0x42761A: push    edx; destination
0x42761B: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427620: mov     ecx, g_TESSaveLoadGame; self
0x427626: push    4; byteCount
0x427628: lea     eax, [esp+264h+var_200]
0x42762C: push    eax; destination
0x42762D: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427632: push    24h ; '$'; Size
0x427634: call    FormHeapAlloc
0x427639: add     esp, 4
0x42763C: mov     [esp+268h+var_24C], eax
0x427640: test    eax, eax
0x427642: mov     [esp+268h+var_1C], 1
0x42764D: jz      short loc_42765F
0x42764F: mov     ecx, [esp+268h+var_208]
0x427653: push    ecx
0x427654: mov     ecx, eax; this
0x427656: call    ??0NonActorMagicCaster@@QAE@XZ; NonActorMagicCaster::NonActorMagicCaster(void)
0x42765B: mov     edi, eax
0x42765D: jmp     short loc_427661
0x42765F: xor     edi, edi
0x427661: mov     edx, [edi+0Ch]
0x427664: mov     eax, [esp+268h+var_200]
0x427668: mov     edx, [edx+34h]
0x42766B: lea     esi, [edi+0Ch]
0x42766E: push    eax
0x42766F: mov     ecx, esi
0x427671: mov     [esp+26Ch+var_1C], 0FFFFFFFFh
0x42767C: call    edx
0x42767E: mov     ecx, [esp+26Ch+var_1FC]
0x427682: mov     eax, [esi]
0x427684: mov     edx, [eax+3Ch]
0x427687: push    ecx
0x427688: mov     ecx, esi
0x42768A: call    edx
0x42768C: push    edi; BSExtraData *
0x42768D: mov     ecx, ebx; ExtraDataList *
0x42768F: call    BaseExtraList_AddExtra
0x427694: jmp     loc_427FE4
0x427699: test    [esp+250h+arg_0], edi; jumptable 00426C18 case 58
0x4276A0: jz      loc_427FE4
0x4276A6: mov     ecx, g_TESSaveLoadGame; self
0x4276AC: push    4; byteCount
0x4276AE: lea     eax, [esp+254h+var_1D8]
0x4276B2: push    eax; destination
0x4276B3: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x4276B8: push    20h ; ' '; Size
0x4276BA: call    FormHeapAlloc
0x4276BF: add     esp, 4
0x4276C2: mov     [esp+258h+var_23C], eax
0x4276C6: test    eax, eax
0x4276C8: mov     [esp+258h+var_C], 2
0x4276D3: jz      short loc_4276E5
0x4276D5: mov     ecx, [esp+258h+parentReference]
0x4276D9: push    ecx; parentReference
0x4276DA: mov     ecx, eax; this
0x4276DC: call    NonActorMagicTarget_constr; Verified cross-build layout divergence: Fallout NonActorMagicTarget has MagicTarget size 16 and total size 40; constructor places parent ref at +0x1C and BSSimpleList header at +0x20. Oblivion MagicTarget is 8 bytes and NonActorMagicTarget is 32 bytes, with parent at +0x14 and ActiveEffectList header at +0x18. Fallout's extra IsInvulnerable vtable slot is absent in Oblivion; do not transfer its later vtable offsets or data offsets.
0x4276E1: mov     esi, eax
0x4276E3: jmp     short loc_4276E7
0x4276E5: xor     esi, esi
0x4276E7: mov     edx, [esi+0Ch]
0x4276EA: mov     eax, [edx+8]
0x4276ED: lea     ecx, [esi+0Ch]
0x4276F0: push    0
0x4276F2: mov     [esp+25Ch+var_C], 0FFFFFFFFh
0x4276FD: call    eax
0x4276FF: push    eax
0x427700: call    ActiveEffect_Base_LoadAEList; Verified active-effect list load lifecycle: destroys current effects and clears old list nodes, reads the UInt16 effect count (and optional BLOK header), loads each record through ActiveEffect_Base_Load, then inserts valid effects sorted by MagicTarget_ActiveEffectComparisonFunc. The loop also retains save-buffer boundary checks and handles the Vampirism-effect special case.
0x427705: add     esp, 8
0x427708: push    esi; BSExtraData *
0x427709: mov     ecx, ebx; ExtraDataList *
0x42770B: call    BaseExtraList_AddExtra
0x427710: jmp     loc_427FE4
0x427715: test    [esp+250h+arg_0], 100000h; jumptable 00426C18 case 50
0x427720: jz      loc_427FE4
0x427726: push    1Ch; Size
0x427728: call    FormHeapAlloc
0x42772D: add     esp, 4
0x427730: mov     [esp+250h+var_234], eax
0x427734: test    eax, eax
0x427736: mov     [esp+250h+var_4], 3
0x427741: jz      short loc_42774E
0x427743: mov     ecx, eax; this
0x427745: call    TeleportData_InitSentinels; TeleportData constructor initializes linkedDoor=NULL and all six transform floats to FLT_MAX sentinels. Any XTEL immediately replaces them from a fresh zeroed scratch in TeleportData_LoadXTEL.
0x42774A: mov     esi, eax
0x42774C: jmp     short loc_427750
0x42774E: xor     esi, esi
0x427750: mov     ecx, esi
0x427752: mov     [esp+250h+var_4], 0FFFFFFFFh
0x42775D: call    sub_42B500
0x427762: push    esi
0x427763: mov     ecx, ebx
0x427765: call    ExtraDataList__SetTeleportData
0x42776A: jmp     loc_427FE4
0x42776F: test    [esp+250h+arg_0], 4000h; jumptable 00426C18 case 62
0x42777A: jz      loc_427FE4
0x427780: push    1Ch; Size
0x427782: call    FormHeapAlloc
0x427787: add     esp, 4
0x42778A: mov     [esp+250h+var_234], eax
0x42778E: test    eax, eax
0x427790: mov     [esp+250h+var_4], 4
0x42779B: jz      short loc_4277A8
0x42779D: mov     ecx, eax
0x42779F: call    sub_42A510
0x4277A4: mov     esi, eax
0x4277A6: jmp     short loc_4277AA
0x4277A8: xor     esi, esi
0x4277AA: push    4; byteCount
0x4277AC: lea     ecx, [esp+254h+var_1D0]
0x4277B3: push    ecx; destination
0x4277B4: mov     ecx, g_TESSaveLoadGame; self
0x4277BA: mov     [esp+258h+var_4], 0FFFFFFFFh
0x4277C5: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x4277CA: mov     edx, [esp+258h+var_1D8]
0x4277D1: push    0Ch; byteCount
0x4277D3: lea     eax, [esi+0Ch]
0x4277D6: mov     [esi+18h], edx
0x4277D9: push    eax; destination
0x4277DA: mov     ecx, g_TESSaveLoadGame; self
0x4277E0: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4277E5: push    esi; BSExtraData *
0x4277E6: mov     ecx, ebx; ExtraDataList *
0x4277E8: call    BaseExtraList_AddExtra
0x4277ED: jmp     loc_427FE4
0x4277F2: test    [esp+250h+arg_0], 1000h; jumptable 00426C18 case 70
0x4277FD: jz      loc_427FE4
0x427803: push    1Ch; Size
0x427805: call    FormHeapAlloc
0x42780A: add     esp, 4
0x42780D: mov     [esp+250h+var_234], eax
0x427811: test    eax, eax
0x427813: mov     [esp+250h+var_4], 5
0x42781E: jz      short loc_42782B
0x427820: mov     ecx, eax
0x427822: call    ExtraPersuasionPercent_ctor; Constructs Oblivion ExtraPersuasionPercent (type 0x46) with zeroed payload fields.
0x427827: mov     esi, eax
0x427829: jmp     short loc_42782D
0x42782B: xor     esi, esi
0x42782D: push    4; byteCount
0x42782F: lea     ecx, [esi+0Ch]
0x427832: push    ecx; destination
0x427833: mov     ecx, g_TESSaveLoadGame; self
0x427839: mov     [esp+258h+var_4], 0FFFFFFFFh
0x427844: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427849: mov     ecx, g_TESSaveLoadGame; self
0x42784F: push    4; byteCount
0x427851: lea     edx, [esi+10h]
0x427854: push    edx; destination
0x427855: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42785A: mov     ecx, g_TESSaveLoadGame; self
0x427860: push    1; byteCount
0x427862: lea     eax, [esi+14h]
0x427865: push    eax; destination
0x427866: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42786B: push    4
0x42786D: lea     ecx, [esi+18h]
0x427870: push    ecx
0x427871: jmp     loc_4277DA
0x427876: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 72
0x42787E: jz      loc_427FE4
0x427884: mov     ecx, g_TESSaveLoadGame; self
0x42788A: push    4; byteCount
0x42788C: lea     edx, [esp+254h+var_1C8]
0x427893: push    edx; destination
0x427894: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427899: mov     eax, [esp+258h+var_1D0]
0x4278A0: push    eax
0x4278A1: mov     ecx, ebx
0x4278A3: call    ExtraDataList_SetPoison; ExtraPoison setter always creates/updates raw serialized FormID, including zero. Post-load resolution removes zero/unresolved/non-AlchemyItem targets.
0x4278A8: jmp     loc_427FE4
0x4278AD: test    [esp+250h+arg_0], 2000000h; jumptable 00426C18 case 74
0x4278B8: jz      loc_427FE4
0x4278BE: mov     ecx, g_TESSaveLoadGame; self
0x4278C4: mov     al, [ecx+7Ch]
0x4278C7: cmp     al, 15h
0x4278C9: jb      short loc_4278FC
0x4278CB: cmp     al, 17h
0x4278CD: jnb     short loc_4278FC
0x4278CF: push    4; byteCount
0x4278D1: lea     edx, [esp+254h+var_1C0]
0x4278D8: push    edx; destination
0x4278D9: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4278DE: mov     eax, [esp+250h+var_1C0]
0x4278E5: cmp     eax, 2Bh ; '+'
0x4278E8: jge     short loc_4278FC
0x4278EA: lea     eax, [eax+eax*8]
0x4278ED: mov     ecx, animGroupInfos_ptr[eax*4]; ExtraDataList modified-load path observed near animation save/load evidence; peripheral serialization support, not a KF registry.
0x4278F4: push    ecx
0x4278F5: mov     ecx, ebx
0x4278F7: call    sub_424DE0
0x4278FC: mov     ecx, g_TESSaveLoadGame; self
0x427902: mov     al, [ecx+7Ch]
0x427905: cmp     al, 15h
0x427907: jb      short loc_427911
0x427909: cmp     al, 17h
0x42790B: jb      loc_427FE4
0x427911: push    1; byteCount
0x427913: lea     edx, [esp+254h+var_229]
0x427917: push    edx; destination
0x427918: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42791D: push    104h
0x427922: lea     eax, [esp+254h+var_114]
0x427929: push    0
0x42792B: push    eax
0x42792C: call    __memset
0x427931: movzx   ecx, [esp+25Ch+var_229]
0x427936: add     esp, 0Ch
0x427939: push    ecx; byteCount
0x42793A: mov     ecx, g_TESSaveLoadGame; self
0x427940: lea     edx, [esp+254h+var_114]
0x427947: push    edx; destination
0x427948: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42794D: lea     eax, [esp+250h+var_114]
0x427954: push    eax
0x427955: mov     ecx, ebx
0x427957: call    sub_424DE0
0x42795C: jmp     loc_427FE4
0x427961: test    [esp+250h+arg_0], 400h; jumptable 00426C18 case 51
0x42796C: jz      loc_427FE4
0x427972: push    1; byteCount
0x427974: lea     ecx, [esp+254h+var_22A]
0x427978: push    ecx; destination
0x427979: mov     ecx, g_TESSaveLoadGame; self
0x42797F: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427984: push    33h ; '3'; a2
0x427986: mov     ecx, ebx; this
0x427988: call    BaseExtraList_GetExtraData
0x42798D: test    eax, eax
0x42798F: jz      loc_427FE4
0x427995: mov     edx, [eax+0Ch]
0x427998: mov     al, [esp+250h+var_22A]
0x42799C: mov     [edx+0Ch], al
0x42799F: jmp     loc_427FE4
0x4279A4: test    ebp, ebp; jumptable 00426C18 case 17
0x4279A6: jz      loc_427FE4
0x4279AC: mov     edx, [ebp+0]
0x4279AF: mov     eax, [edx+190h]
0x4279B5: mov     ecx, ebp
0x4279B7: call    eax
0x4279B9: test    al, al
0x4279BB: jz      loc_427FE4
0x4279C1: mov     ecx, ebx
0x4279C3: call    ExtraDataList_GetPersistentCell; Returns the TESObjectCELL stored in ExtraPersistentCell, or null.
0x4279C8: mov     esi, eax
0x4279CA: test    esi, esi
0x4279CC: jz      short loc_4279ED
0x4279CE: push    11h; a2
0x4279D0: mov     ecx, ebx; this
0x4279D2: call    BaseExtraList_GetExtraData
0x4279D7: test    eax, eax
0x4279D9: jz      short loc_4279E5
0x4279DB: push    1
0x4279DD: push    eax
0x4279DE: mov     ecx, ebx
0x4279E0: call    BaseExtraList_RemoveExtraByPtr
0x4279E5: push    ebp; reference
0x4279E6: mov     ecx, esi; this
0x4279E8: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x4279ED: push    4; byteCount
0x4279EF: lea     ecx, [esp+254h+var_1B8]
0x4279F6: push    ecx; destination
0x4279F7: mov     ecx, g_TESSaveLoadGame; self
0x4279FD: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427A02: mov     ecx, ebp; this
0x427A04: call    TESObjectREFR_IsPersistent
0x427A09: test    al, al
0x427A0B: jz      loc_427FE4
0x427A11: cmp     ebp, dword ptr reference
0x427A17: jz      loc_427FE4
0x427A1D: mov     edx, [esp+258h+var_1C0]
0x427A24: push    0; int
0x427A26: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x427A2B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427A30: push    0; int
0x427A32: push    edx; a1
0x427A33: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427A38: add     esp, 4
0x427A3B: push    eax; void *
0x427A3C: call    OblivionDynamicCast
0x427A41: mov     esi, eax
0x427A43: add     esp, 14h
0x427A46: test    esi, esi
0x427A48: jz      loc_427FE4
0x427A4E: mov     ecx, esi
0x427A50: call    sub_4EF1E0
0x427A55: push    eax
0x427A56: mov     ecx, ebx
0x427A58: call    sub_4247B0
0x427A5D: push    ebp; reference
0x427A5E: mov     ecx, esi
0x427A60: call    sub_4EF1E0
0x427A65: mov     ecx, eax; this
0x427A67: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x427A6C: mov     ecx, ebp; this
0x427A6E: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x427A73: test    eax, eax
0x427A75: jz      loc_427FE4
0x427A7B: mov     ecx, ebp; this
0x427A7D: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x427A82: mov     ecx, eax; this
0x427A84: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x427A89: test    al, al
0x427A8B: jz      loc_427FE4
0x427A91: push    ebp; reference
0x427A92: mov     ecx, ebp; this
0x427A94: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x427A99: mov     ecx, eax; this
0x427A9B: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x427AA0: jmp     loc_427FE4
0x427AA5: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 66
0x427AAB: push    1; byteCount
0x427AAD: lea     eax, [esp+254h+var_236]
0x427AB1: push    eax; destination
0x427AB2: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427AB7: xor     esi, esi
0x427AB9: cmp     [esp+250h+var_236], 0
0x427ABE: jbe     loc_427FE4
0x427AC4: push    4; byteCount
0x427AC6: lea     ecx, [esp+254h+var_1B0]
0x427ACD: push    ecx; destination
0x427ACE: mov     ecx, g_TESSaveLoadGame; self
0x427AD4: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427AD9: mov     eax, [esp+258h+var_1B8]
0x427AE0: test    eax, eax
0x427AE2: jz      short loc_427AEC
0x427AE4: push    eax
0x427AE5: mov     ecx, ebx
0x427AE7: call    sub_424B60
0x427AEC: movzx   edx, [esp+258h+var_23E]
0x427AF1: add     esi, 1
0x427AF4: cmp     esi, edx
0x427AF6: jb      short loc_427AC4
0x427AF8: jmp     loc_427FE4
0x427AFD: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 65
0x427B03: push    4; byteCount
0x427B05: lea     eax, [esp+254h+var_1A8]
0x427B0C: push    eax; destination
0x427B0D: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427B12: mov     eax, [esp+258h+var_1B0]
0x427B19: test    eax, eax
0x427B1B: jz      loc_427FE4
0x427B21: push    eax
0x427B22: mov     ecx, ebx
0x427B24: call    ExtraDataList_SetItemDropper; Creates/updates ExtraItemDropper; a null dropper removes extra type 0x41.
0x427B29: jmp     loc_427FE4
0x427B2E: test    [esp+250h+arg_0], 1000000h; jumptable 00426C18 case 75
0x427B39: jz      loc_427FE4
0x427B3F: push    2; byteCount
0x427B41: lea     ecx, [esp+254h+var_23C]
0x427B45: push    ecx; destination
0x427B46: mov     ecx, g_TESSaveLoadGame; self
0x427B4C: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427B51: mov     ax, word ptr [esp+250h+var_23C]
0x427B56: test    ax, ax
0x427B59: jz      short loc_427B83
0x427B5B: movzx   edx, ax
0x427B5E: push    edx; int
0x427B5F: call    MemoryHeap_Alloc_ZlibCallback
0x427B64: mov     ecx, g_TESSaveLoadGame; self
0x427B6A: mov     esi, eax
0x427B6C: movzx   eax, word ptr [esp+254h+var_23C]
0x427B71: add     esp, 4
0x427B74: push    eax; byteCount
0x427B75: push    esi; destination
0x427B76: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427B7B: push    esi
0x427B7C: mov     ecx, ebx
0x427B7E: call    ExtraDataList_SetSavedAnimation; Gets/creates Oblivion ExtraSavedMovementData (type 0x4B) and stores its saved-animation pointer. Runtime diagnostic explicitly names SetSavedAnimation.
0x427B83: push    2; byteCount
0x427B85: lea     ecx, [esp+254h+var_23C]
0x427B89: push    ecx; destination
0x427B8A: mov     ecx, g_TESSaveLoadGame; self
0x427B90: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427B95: mov     ax, word ptr [esp+250h+var_23C]
0x427B9A: test    ax, ax
0x427B9D: jz      short loc_427BC7
0x427B9F: movzx   edx, ax
0x427BA2: push    edx; int
0x427BA3: call    MemoryHeap_Alloc_ZlibCallback
0x427BA8: mov     ecx, g_TESSaveLoadGame; self
0x427BAE: mov     esi, eax
0x427BB0: movzx   eax, word ptr [esp+254h+var_23C]
0x427BB5: add     esp, 4
0x427BB8: push    eax; byteCount
0x427BB9: push    esi; destination
0x427BBA: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427BBF: push    esi
0x427BC0: mov     ecx, ebx
0x427BC2: call    ExtraDataList_SetSavedAttachedAnimation; Gets/creates Oblivion ExtraSavedMovementData and stores the saved-attached-animation pointer; replacement is diagnosed at runtime.
0x427BC7: push    2; byteCount
0x427BC9: lea     ecx, [esp+254h+var_23C]
0x427BCD: push    ecx; destination
0x427BCE: mov     ecx, g_TESSaveLoadGame; self
0x427BD4: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427BD9: mov     ax, word ptr [esp+250h+var_23C]
0x427BDE: test    ax, ax
0x427BE1: jz      short loc_427C0B
0x427BE3: movzx   edx, ax
0x427BE6: push    edx; int
0x427BE7: call    MemoryHeap_Alloc_ZlibCallback
0x427BEC: mov     ecx, g_TESSaveLoadGame; self
0x427BF2: mov     esi, eax
0x427BF4: movzx   eax, word ptr [esp+254h+var_23C]
0x427BF9: add     esp, 4
0x427BFC: push    eax; byteCount
0x427BFD: push    esi; destination
0x427BFE: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427C03: push    esi
0x427C04: mov     ecx, ebx
0x427C06: call    ExtraDataList_SetSavedHavokData; Gets/creates Oblivion ExtraSavedMovementData and stores its saved-Havok-data pointer; runtime diagnostic confirms the field purpose.
0x427C0B: cmp     dword ptr [ebp+3Ch], 0
0x427C0F: jz      loc_427FE4
0x427C15: mov     [esp+250h+var_237], 1
0x427C1A: jmp     loc_427FE4
0x427C1F: push    4; jumptable 00426C18 case 69
0x427C21: lea     ecx, [esp+254h+var_1A0]
0x427C28: push    ecx; destination
0x427C29: mov     ecx, g_TESSaveLoadGame; self
0x427C2F: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427C34: mov     edx, [esp+258h+var_1A8]
0x427C3B: push    0; int
0x427C3D: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x427C42: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427C47: push    0; int
0x427C49: push    edx; a1
0x427C4A: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427C4F: add     esp, 4
0x427C52: push    eax; void *
0x427C53: call    OblivionDynamicCast
0x427C58: add     esp, 14h
0x427C5B: test    esi, esi
0x427C5D: jz      loc_427FE4
0x427C63: test    eax, eax
0x427C65: jz      loc_427FE4
0x427C6B: mov     edx, [esi]
0x427C6D: push    eax
0x427C6E: mov     eax, [edx+12Ch]
0x427C74: mov     ecx, esi
0x427C76: call    eax
0x427C78: jmp     loc_427FE4
0x427C7D: push    2; jumptable 00426C18 case 78
0x427C7F: lea     ecx, [esp+254h+var_214]
0x427C83: push    ecx; destination
0x427C84: mov     ecx, g_TESSaveLoadGame; self
0x427C8A: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427C8F: push    10h; Size
0x427C91: call    FormHeapAlloc
0x427C96: add     esp, 4
0x427C99: mov     [esp+250h+var_234], eax
0x427C9D: test    eax, eax
0x427C9F: mov     [esp+250h+var_4], 7
0x427CAA: jz      short loc_427CB7
0x427CAC: mov     ecx, eax; this
0x427CAE: call    ??0ExtraFriendHitList@@QAE@XZ; ExtraFriendHitList::ExtraFriendHitList(void)
0x427CB3: mov     ebp, eax
0x427CB5: jmp     short loc_427CB9
0x427CB7: xor     ebp, ebp
0x427CB9: xor     edi, edi
0x427CBB: cmp     [esp+250h+var_214], di
0x427CC0: mov     [esp+250h+var_4], 0FFFFFFFFh
0x427CCB: jbe     loc_427D5E
0x427CD1: mov     ecx, g_TESSaveLoadGame; self
0x427CD7: push    4; byteCount
0x427CD9: lea     edx, [esp+254h+var_198]
0x427CE0: push    edx; destination
0x427CE1: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427CE6: push    0Ch; Size
0x427CE8: call    FormHeapAlloc
0x427CED: add     esp, 4
0x427CF0: mov     [esp+258h+var_23C], eax
0x427CF4: test    eax, eax
0x427CF6: mov     [esp+258h+var_C], 8
0x427D01: jz      short loc_427D16
0x427D03: mov     ecx, [esp+258h+var_1A0]
0x427D0A: push    ecx
0x427D0B: mov     ecx, eax
0x427D0D: call    sub_4298A0
0x427D12: mov     esi, eax
0x427D14: jmp     short loc_427D18
0x427D16: xor     esi, esi
0x427D18: mov     ecx, g_TESSaveLoadGame; self
0x427D1E: push    2; byteCount
0x427D20: lea     edx, [esi+4]
0x427D23: push    edx; destination
0x427D24: mov     [esp+260h+var_C], 0FFFFFFFFh
0x427D2F: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427D34: mov     ecx, g_TESSaveLoadGame; self
0x427D3A: push    4; byteCount
0x427D3C: lea     eax, [esi+8]
0x427D3F: push    eax; destination
0x427D40: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427D45: mov     ecx, [ebp+0Ch]
0x427D48: push    esi
0x427D49: call    BSSimpleList_PushFront
0x427D4E: movzx   ecx, word ptr [esp+258h+destination]
0x427D53: add     edi, 1
0x427D56: cmp     edi, ecx
0x427D58: jb      loc_427CD1
0x427D5E: push    ebp; BSExtraData *
0x427D5F: mov     ecx, ebx; ExtraDataList *
0x427D61: call    BaseExtraList_AddExtra
0x427D66: mov     ebp, [esp+258h+var_210]
0x427D6A: jmp     loc_427FE4
0x427D6F: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 79
0x427D75: push    4; byteCount
0x427D77: lea     edx, [esp+254h+var_190]
0x427D7E: push    edx; destination
0x427D7F: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427D84: mov     eax, [esp+258h+var_198]
0x427D8B: test    eax, eax
0x427D8D: jz      loc_427FE4
0x427D93: push    eax
0x427D94: mov     ecx, ebx
0x427D96: call    sub_423970
0x427D9B: jmp     loc_427FE4
0x427DA0: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 83
0x427DA8: jz      loc_427FE4
0x427DAE: mov     ecx, g_TESSaveLoadGame; self
0x427DB4: push    4; byteCount
0x427DB6: lea     eax, [esp+254h+packageType]
0x427DBD: push    eax; destination
0x427DBE: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x427DC3: mov     eax, [esp+258h+var_190]
0x427DCA: test    eax, eax
0x427DCC: jz      loc_427FE4
0x427DD2: push    eax; a1
0x427DD3: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x427DD8: push    0; int
0x427DDA: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x427DDF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427DE4: mov     esi, eax
0x427DE6: push    0; int
0x427DE8: push    esi; void *
0x427DE9: call    OblivionDynamicCast
0x427DEE: add     esp, 18h
0x427DF1: test    eax, eax
0x427DF3: jnz     short loc_427E12
0x427DF5: push    eax; int
0x427DF6: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x427DFB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x427E00: push    eax; int
0x427E01: push    esi; void *
0x427E02: call    OblivionDynamicCast
0x427E07: add     esp, 14h
0x427E0A: test    eax, eax
0x427E0C: jz      loc_427FE4
0x427E12: push    esi
0x427E13: mov     ecx, ebx
0x427E15: call    sub_423C90
0x427E1A: jmp     loc_427FE4
0x427E1F: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 84
0x427E25: cmp     byte ptr [ecx+7Ch], 44h ; 'D'
0x427E29: jnb     loc_427FE4
0x427E2F: push    2; byteCount
0x427E31: lea     edx, [esp+254h+var_218]
0x427E35: push    edx; destination
0x427E36: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427E3B: xor     edi, edi
0x427E3D: cmp     [esp+250h+var_218], di
0x427E42: jbe     loc_427FE4
0x427E48: mov     ebp, [esp+250h+var_1FC]
0x427E4C: add     ebp, 88h ; 'ˆ'
0x427E52: mov     ecx, g_TESSaveLoadGame; self
0x427E58: push    1; byteCount
0x427E5A: lea     eax, [esp+254h+var_22C]
0x427E5E: push    eax; destination
0x427E5F: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427E64: push    4; byteCount
0x427E66: lea     ecx, [esp+254h+var_180]
0x427E6D: push    ecx; destination
0x427E6E: mov     ecx, g_TESSaveLoadGame; self
0x427E74: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427E79: push    8; Size
0x427E7B: call    FormHeapAlloc
0x427E80: mov     esi, eax
0x427E82: add     esp, 4
0x427E85: mov     [esp+250h+reference], esi
0x427E8C: test    esi, esi
0x427E8E: mov     [esp+250h+var_4], 9
0x427E99: jz      short loc_427EBD
0x427E9B: fld     [esp+250h+var_180]
0x427EA2: mov     dl, [esp+250h+var_22C]
0x427EA6: fstp    [esp+250h+var_234]
0x427EAA: push    ecx
0x427EAB: fld     [esp+254h+var_234]
0x427EAF: mov     ecx, esi; this
0x427EB1: fstp    [esp+254h+value]; value
0x427EB4: mov     [esi], dl
0x427EB6: call    SetFloatAtOffset_04; Verified raw float setter at object+4. A* uses it for TESConnectedPoint G/pathCost; unrelated callers use the same helper for their own +4 float field.
0x427EBB: jmp     short loc_427EBF
0x427EBD: xor     esi, esi
0x427EBF: push    esi
0x427EC0: mov     ecx, ebp
0x427EC2: mov     [esp+254h+var_4], 0FFFFFFFFh
0x427ECD: call    BSSimpleList_PushFront
0x427ED2: movzx   eax, [esp+250h+var_218]
0x427ED7: add     edi, 1
0x427EDA: cmp     edi, eax
0x427EDC: jb      loc_427E52
0x427EE2: mov     ebp, [esp+250h+var_208]
0x427EE6: jmp     loc_427FE4
0x427EEB: test    byte ptr [esp+250h+arg_0], 20h; jumptable 00426C18 case 85
0x427EF3: jz      loc_427FE4
0x427EF9: push    1; byteCount
0x427EFB: lea     ecx, [esp+254h+var_170]
0x427F02: push    ecx; destination
0x427F03: mov     ecx, g_TESSaveLoadGame; self
0x427F09: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427F0E: mov     edx, [esp+250h+var_170]
0x427F15: push    edx
0x427F16: mov     ecx, ebx
0x427F18: call    sub_422BA0
0x427F1D: jmp     loc_427FE4
0x427F22: push    28h ; '('; ExtraDataList load case 0x59: allocates a 0x28-byte MenuTopic, loads it, and attaches ExtraInfoGeneralTopic only if the saved TESTopicInfo pointer resolves.
0x427F24: call    FormHeapAlloc; Load extra type 0x59 by allocating an empty MenuTopic, restoring its persistent fields, and conditionally transferring it to ExtraInfoGeneralTopic.
0x427F29: add     esp, 4
0x427F2C: mov     [esp+250h+reference], eax
0x427F33: test    eax, eax
0x427F35: mov     [esp+250h+var_4], 0Ah
0x427F40: jz      short loc_427F4D
0x427F42: mov     ecx, eax; this
0x427F44: call    MenuTopic__InitializeEmpty; Initialize an empty MenuTopic for extra-data loading: clear response nodes/cursors and all identity pointers, then initialize an empty display string.
0x427F49: mov     esi, eax
0x427F4B: jmp     short loc_427F4F
0x427F4D: xor     esi, esi
0x427F4F: push    ebp; speaker
0x427F50: mov     ecx, esi; this
0x427F52: mov     [esp+254h+var_4], 0FFFFFFFFh
0x427F5D: call    MenuTopic__LoadGame; Restore cached MenuTopic identity/display/UI state only. DialogueResponses remain empty for lazy reconstruction.
0x427F62: cmp     dword ptr [esi+18h], 0; Retention gate checks only whether the saved INFO FormID resolved to TESTopicInfo. ownerQuest and topic may still be null; they are not validated here.
0x427F66: jz      short loc_427F75
0x427F68: push    esi; menuTopic
0x427F69: mov     ecx, ebx; this
0x427F6B: call    ExtraDataList__SetInfoGeneralTopic; Resolved INFO: transfer the restored MenuTopic pointer to ExtraInfoGeneralTopic. SetInfoGeneralTopic itself does not free a previous cached pointer.
0x427F70: jmp     loc_427FE4
0x427F75: mov     ecx, esi; this
0x427F77: call    MenuTopic__Destroy; Unresolved INFO: destroy and free the restored MenuTopic instead of retaining extra type 0x59.
0x427F7C: push    esi
0x427F7D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x427F82: add     esp, 4
0x427F85: jmp     short loc_427FE4
0x427F87: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 90
0x427F8D: push    1; Load extra type 0x5A (ExtraHasNoRumors) as one persistent boolean, independently of the cached INFOGENERAL MenuTopic.
0x427F8F: lea     eax, [esp+254h+noRumors]
0x427F96: push    eax; destination
0x427F97: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427F9C: mov     ecx, dword ptr [esp+250h+noRumors]
0x427FA3: push    ecx; noRumors
0x427FA4: mov     ecx, ebx; this
0x427FA6: call    ExtraDataList__SetNoRumors; Set/update only ExtraHasNoRumors (0x5A), the actor-local eligibility override. This does not remove or replace an existing ExtraInfoGeneralTopic cache (0x59); disabling the gate can expose the old cache again.
0x427FAB: jmp     short loc_427FE4
0x427FAD: mov     ecx, g_TESSaveLoadGame; jumptable 00426C18 case 92
0x427FB3: push    4; byteCount
0x427FB5: lea     edx, [esp+254h+var_160]
0x427FBC: push    edx; destination
0x427FBD: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x427FC2: fld     [esp+250h+var_160]
0x427FC9: push    ecx
0x427FCA: mov     ecx, ebx
0x427FCC: fstp    [esp+254h+value]; float
0x427FCF: call    sub_422D20
0x427FD4: jmp     short loc_427FE4
0x427FD6: push    eax; jumptable 00426C18 default case, cases 19-22,24-26,29,36,38,48,52,56,59,63,64,67,68,73,76,77,81,86-88,91
0x427FD7: push    offset aNoLoadingCodeF; "No loading code found in ExtraDataList:"...
0x427FDC: call    PrintError
0x427FE1: add     esp, 8
0x427FE4: mov     eax, [esp+250h+var_204]; EngineIssues review: ExtraDataList_LoadModified loop increments entry index and compares against save-controlled UInt16 count; malformed count can force long zero-filled parsing.
0x427FE8: movzx   ecx, [esp+250h+var_224]
0x427FED: add     eax, 1
0x427FF0: cmp     eax, ecx
0x427FF2: mov     [esp+250h+var_204], eax
0x427FF6: jl      loc_426BE5
0x427FFC: cmp     [esp+250h+var_235], 0
0x428001: jnz     short loc_428019
0x428003: test    [esp+250h+arg_0], 4000000h
0x42800E: jz      short loc_428019
0x428010: push    12h
0x428012: mov     ecx, ebx
0x428014: call    BaseExtraList_RemoveExtraByType
0x428019: cmp     [esp+250h+var_238], 0
0x42801E: jnz     short loc_428033
0x428020: test    byte ptr [esp+250h+arg_0], 80h
0x428028: jz      short loc_428033
0x42802A: push    27h ; '''
0x42802C: mov     ecx, ebx
0x42802E: call    BaseExtraList_RemoveExtraByType
0x428033: cmp     [esp+250h+var_237], 0
0x428038: jz      short loc_42804A
0x42803A: push    ebp
0x42803B: mov     ecx, ebx
0x42803D: call    ExtraDataList_RestoreSavedAnimationData
0x428042: push    ebp
0x428043: mov     ecx, ebx
0x428045: call    ExtraDataList_RestoreSavedHavokData
0x42804A: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x428050: call    TESSaveLoadGame_UseSaveGameBlocks
0x428055: test    al, al
0x428057: jz      loc_42815B
0x42805D: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x428063: mov     edi, [ecx+80h]
0x428069: test    edi, edi
0x42806B: mov     esi, [ecx+14h]
0x42806E: jz      loc_42810D
0x428074: mov     edx, [edi]
0x428076: push    edx; a1
0x428077: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x42807C: mov     ebx, [esp+254h+var_210]
0x428080: mov     ecx, eax
0x428082: movzx   eax, word ptr [esp+254h+destination]
0x428087: add     eax, ebx
0x428089: add     esp, 4
0x42808C: cmp     esi, eax
0x42808E: jbe     short loc_4280CD
0x428090: mov     edx, [edi+5]
0x428093: movzx   eax, byte ptr [edi+9]
0x428097: push    edx
0x428098: mov     edx, [ecx]
0x42809A: push    eax
0x42809B: mov     eax, [edx+0D4h]
0x4280A1: call    eax
0x4280A3: mov     ecx, [edi]
0x4280A5: movzx   edx, word ptr [esp+258h+destination]
0x4280AA: push    eax
0x4280AB: push    ecx
0x4280AC: push    1E93h
0x4280B1: sub     esi, edx
0x4280B3: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x4280B8: sub     esi, ebx
0x4280BA: push    esi; ArgList
0x4280BB: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x4280C0: call    PrintError
0x4280C5: add     esp, 20h
0x4280C8: jmp     loc_42815B
0x4280CD: jnb     loc_42815B
0x4280D3: mov     eax, [edi+5]
0x4280D6: movzx   edx, byte ptr [edi+9]
0x4280DA: push    eax
0x4280DB: mov     eax, [ecx]
0x4280DD: push    edx
0x4280DE: mov     edx, [eax+0D4h]
0x4280E4: call    edx
0x4280E6: movzx   ecx, word ptr [esp+258h+destination]
0x4280EB: push    eax
0x4280EC: mov     eax, [edi]
0x4280EE: push    eax
0x4280EF: push    1E93h
0x4280F4: sub     ecx, esi
0x4280F6: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x4280FB: add     ecx, ebx
0x4280FD: push    ecx; ArgList
0x4280FE: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x428103: call    PrintError
0x428108: add     esp, 20h
0x42810B: jmp     short loc_42815B
0x42810D: movzx   eax, word ptr [esp+250h+destination]
0x428112: mov     edi, [esp+250h+var_210]
0x428116: lea     edx, [eax+edi]
0x428119: cmp     esi, edx
0x42811B: jbe     short loc_428138
0x42811D: movzx   edx, byte ptr [ecx+7Ch]
0x428121: push    edx
0x428122: push    1E93h
0x428127: sub     esi, eax
0x428129: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x42812E: sub     esi, edi
0x428130: push    esi
0x428131: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x428136: jmp     short loc_428153
0x428138: jnb     short loc_42815B
0x42813A: movzx   ecx, byte ptr [ecx+7Ch]
0x42813E: push    ecx
0x42813F: push    1E93h
0x428144: sub     eax, esi
0x428146: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x42814B: add     eax, edi
0x42814D: push    eax; ArgList
0x42814E: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x428153: call    PrintError
0x428158: add     esp, 14h
0x42815B: mov     ecx, [esp+250h+var_C]
0x428162: mov     large fs:0, ecx
0x428169: pop     ecx
0x42816A: pop     edi
0x42816B: pop     esi
0x42816C: pop     ebp
0x42816D: pop     ebx
0x42816E: mov     ecx, [esp+23Ch+var_10]
0x428175: xor     ecx, esp
0x428177: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42817C: add     esp, 23Ch
0x428182: retn    0Ch
0x9AB920: mov     eax, [ebp-234h]
0x9AB926: push    eax
0x9AB927: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB92C: pop     ecx
0x9AB92D: retn
0x9AB92E: mov     eax, [ebp-234h]
0x9AB934: push    eax
0x9AB935: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB93A: pop     ecx
0x9AB93B: retn
0x9AB93C: mov     eax, [ebp-234h]
0x9AB942: push    eax
0x9AB943: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB948: pop     ecx
0x9AB949: retn
0x9AB94A: mov     eax, [ebp-234h]
0x9AB950: push    eax
0x9AB951: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB956: pop     ecx
0x9AB957: retn
0x9AB958: mov     eax, [ebp-234h]
0x9AB95E: push    eax
0x9AB95F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB964: pop     ecx
0x9AB965: retn
0x9AB966: mov     eax, [ebp-234h]
0x9AB96C: push    eax
0x9AB96D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB972: pop     ecx
0x9AB973: retn
0x9AB974: mov     eax, [ebp-234h]
0x9AB97A: push    eax
0x9AB97B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB980: pop     ecx
0x9AB981: retn
0x9AB982: mov     eax, [ebp-234h]
0x9AB988: push    eax
0x9AB989: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB98E: pop     ecx
0x9AB98F: retn
0x9AB990: mov     eax, [ebp-150h]
0x9AB996: push    eax
0x9AB997: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB99C: pop     ecx
0x9AB99D: retn
0x9AB99E: mov     eax, [ebp-150h]
0x9AB9A4: push    eax
0x9AB9A5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB9AA: pop     ecx
0x9AB9AB: retn
0x9AB9AC: mov     edx, [esp+arg_4]
0x9AB9B0: lea     eax, [edx-240h]
0x9AB9B6: mov     ecx, [edx-244h]
0x9AB9BC: xor     ecx, eax
0x9AB9BE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB9C3: add     eax, 10h
0x9AB9C6: mov     ecx, [edx-4]
0x9AB9C9: xor     ecx, eax
0x9AB9CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB9D0: mov     eax, offset stru_AD875C
0x9AB9D5: jmp     ___CxxFrameHandler3
