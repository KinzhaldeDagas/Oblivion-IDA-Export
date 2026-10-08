0x525380: mov     eax, [esp+Size]; TESNPC vtable+0x54 modified-save loader. Calls TESActorBase_LoadModified; mask 0x200 reads 21 bytes to NPC+0xEC; mask 0x400 resolves combat style to +0x1E4. FormID 7 skips 0x5239C0 recomputation. No direct FaceGen matrix restoration or cache clear in this short wrapper; does NOT prove appearance state is omitted globally (player/special save paths must be traced).
0x525384: push    esi
0x525385: push    edi
0x525386: mov     edi, [esp+8+changeMask]
0x52538A: push    eax; currentFlags
0x52538B: push    edi; changeMask
0x52538C: mov     esi, ecx
0x52538E: call    TESActorBase_LoadModified
0x525393: test    edi, 200h
0x525399: jz      short loc_5253AB
0x52539B: push    15h; byteCount
0x52539D: lea     ecx, [esi+0ECh]
0x5253A3: push    ecx; destination
0x5253A4: mov     ecx, esi; self
0x5253A6: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x5253AB: test    edi, 400h
0x5253B1: jz      short loc_5253EB
0x5253B3: push    4; byteCount
0x5253B5: lea     edx, [esp+0Ch+Size]
0x5253B9: push    edx; destination
0x5253BA: mov     ecx, esi; self
0x5253BC: call    TESForm_LoadFormIDFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadFormIDFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadFormID.
0x5253C1: mov     eax, [esp+8+Size]
0x5253C5: push    0; int
0x5253C7: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x5253CC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5253D1: push    0; int
0x5253D3: push    eax; a1
0x5253D4: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x5253D9: add     esp, 4
0x5253DC: push    eax; void *
0x5253DD: call    OblivionDynamicCast
0x5253E2: add     esp, 14h
0x5253E5: mov     [esi+1E4h], eax
0x5253EB: cmp     dword ptr [esi+0Ch], 7
0x5253EF: jz      short loc_5253F8
0x5253F1: mov     ecx, esi
0x5253F3: call    TESNPC_RecomputeBaseVampirismFromSpells; Non-player base vampirism reconstruction: skips formID 7; scans NPC and race spell lists, selects spell-type 4 and VAMP effect code 0x504D4156, sums EffectItem magnitudes, converts to integer, sets base AV 0x45 via virtual+0x134. Supports identifying FaceGen bank selector 0x45 as vampirism, not sex.
0x5253F8: pop     edi
0x5253F9: pop     esi
0x5253FA: retn    8
