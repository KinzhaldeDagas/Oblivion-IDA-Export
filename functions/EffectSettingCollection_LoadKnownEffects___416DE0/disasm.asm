0x416DE0: sub     esp, 14h
0x416DE3: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x416DE9: push    ebx; int
0x416DEA: push    ebp; int
0x416DEB: push    esi; int
0x416DEC: xor     ebp, ebp
0x416DEE: push    edi
0x416DEF: mov     dword ptr [esp+24h+destination], ebp; __int16
0x416DF3: xor     ebx, ebx
0x416DF5: call    TESSaveLoadGame_UseSaveGameBlocks
0x416DFA: test    al, al
0x416DFC: jz      EffectSettingCollection_LoadKnownEffects?___LoadKnownEffects
0x416E02: mov     ecx, g_TESSaveLoadGame; self
0x416E08: push    4; byteCount
0x416E0A: lea     eax, [esp+28h+Dst]
0x416E0E: push    eax; destination
0x416E0F: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x416E14: cmp     [esp+24h+Dst], 4B4F4C42h
0x416E1C: jz      short loc_416E86
0x416E1E: mov     eax, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x416E23: mov     esi, [eax+80h]
0x416E29: cmp     esi, ebp
0x416E2B: jz      short loc_416E6A
0x416E2D: mov     ecx, [esi]
0x416E2F: push    ecx; a1
0x416E30: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x416E35: mov     edx, [esi+5]
0x416E38: movzx   ecx, byte ptr [esi+9]
0x416E3C: add     esp, 4
0x416E3F: push    edx
0x416E40: mov     edx, [eax]
0x416E42: push    ecx
0x416E43: mov     ecx, eax
0x416E45: mov     eax, [edx+0D4h]
0x416E4B: call    eax
0x416E4D: mov     ecx, [esi]
0x416E4F: push    eax
0x416E50: push    ecx
0x416E51: push    0A4h ; '¤'
0x416E56: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416E5B: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x416E60: call    PrintError
0x416E65: add     esp, 1Ch
0x416E68: jmp     short loc_416E86
0x416E6A: movzx   edx, byte ptr [eax+7Ch]
0x416E6E: push    edx
0x416E6F: push    0A4h ; '¤'
0x416E74: push    offset a__TesSharedMag; "..\\TES Shared\\Magic\\EffectSettingCol"...
0x416E79: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x416E7E: call    PrintError
0x416E83: add     esp, 10h
0x416E86: mov     ecx, g_TESSaveLoadGame; self
0x416E8C: mov     ebx, [ecx+14h]
0x416E8F: push    2; byteCount
0x416E91: lea     eax, [esp+28h+destination]
0x416E95: push    eax; destination
0x416E96: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
