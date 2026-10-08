0x465860: push    0FFFFFFFFh
0x465862: push    offset TESSaveLoadGame_LoadGame_SEH
0x465867: mov     eax, large fs:0
0x46586D: push    eax
0x46586E: sub     esp, 310h
0x465874: mov     eax, ds:0B30AACh
0x465879: xor     eax, esp
0x46587B: mov     [esp+31Ch+var_10], eax
0x465882: push    ebx
0x465883: push    ebp
0x465884: push    esi
0x465885: push    edi
0x465886: mov     eax, ds:0B30AACh
0x46588B: xor     eax, esp
0x46588D: push    eax
0x46588E: lea     eax, [esp+330h+var_C]
0x465895: mov     large fs:0, eax
0x46589B: mov     esi, [esp+330h+arg_0]
0x4658A2: mov     edi, [esp+330h+Str]
0x4658A9: mov     ebp, ecx
0x4658AB: mov     [esp+330h+var_280], esi
0x4658B2: call    dword ptr ds:0A280D0h
0x4658B8: push    414h
0x4658BD: mov     [esp+334h+var_2CC], eax
0x4658C1: mov     byte ptr [ebp+0A9h], 0
0x4658C8: call    Menu_GetOpenMenuTile
0x4658CD: add     esp, 4
0x4658D0: test    eax, eax
0x4658D2: jz      short loc_4658E6
0x4658D4: mov     ecx, eax
0x4658D6: call    Tile_GetParentMenu
0x4658DB: test    eax, eax
0x4658DD: jz      short loc_4658E6
0x4658DF: mov     byte ptr [ebp+0A9h], 1
0x4658E6: cmp     byte ptr [ebp+0A9h], 0
0x4658ED: jz      short loc_46591D
0x4658EF: mov     eax, ds:0B33398h
0x4658F4: mov     byte ptr ds:0B3C0ECh, 0
0x4658FB: mov     ebx, [eax+24h]
0x4658FE: test    ebx, ebx
0x465900: jz      short loc_46591D
0x465902: push    1
0x465904: push    0
0x465906: push    0FFFFh
0x46590B: mov     ecx, ebx
0x46590D: call    SoundManager_OpenMusicFile
0x465912: test    al, al
0x465914: jz      short loc_46591D
0x465916: mov     ecx, ebx
0x465918: call    SoundManager_PlayMusic
0x46591D: push    1; ContinueFromLastSave decode: TESSaveLoadGame_LoadGame calls Savegame_Rename(this, 0, saveStem, 1); saveStem should be extensionless for normal menu-style load.
0x46591F: push    edi
0x465920: push    esi
0x465921: mov     ecx, ebp
0x465923: call    TESSaveLoadGame_ResolveSaveFile; Load path resolver call. CharacterSpecificSaves applies the same character-qualified stem for quickload/autoload consistency.
0x465928: mov     esi, eax
0x46592A: mov     eax, 32h ; '2'; MEF SAVE PERF PASS2 2026-10-08: PERF-20 VERIFIED: each LoadGame constructs a fresh local NiTLargeArray<FormAndFlags*> with capacity/growBy50 and used/nonzero0, allocating200 bytes at46596D. This post-load queue is separate from retained numeric/worldspace ID arrays (PERF-19). No repeated-hole scan: append5A6AB0 targets used count. Repeated +50 growth copies the prior queue; ordinary completion frees storage466A31.
0x46592F: xor     ecx, ecx
0x465931: xor     ebx, ebx
0x465933: mov     [esp+330h+self.capacity], eax; Verified: capacity field initialized at +8, used in bounds comparisons.
0x46593A: mov     [esp+330h+self.growBy], eax; Verified: growth increment initialized at +0x14.
0x465941: mov     edx, 4
0x465946: mul     edx
0x465948: seto    cl
0x46594B: mov     [esp+330h+stream], esi
0x46594F: mov     [esp+330h+self.vtable], offset ??_7?$NiTLargeArray@PAUFormAndFlags@@@@6B@; Verified: NiTLargeArray vtable pointer.
0x46595A: mov     [esp+330h+self.count], ebx; Verified: logical item count initialized/reset at +0xC.
0x465961: mov     [esp+330h+self.nonzeroCount], ebx; Verified: nonzero element count tracked at +0x10.
0x465968: neg     ecx
0x46596A: or      ecx, eax
0x46596C: push    ecx; Size
0x46596D: call    FormHeapAlloc
0x465972: add     esp, 4
0x465975: mov     [esp+330h+self.data], eax; Verified: pointer to uint32 backing storage.
0x46597C: test    esi, esi
0x46597E: mov     [esp+330h+var_4], ebx
0x465985: jz      loc_466A3D
0x46598B: cmp     [esi+24h], bl
0x46598E: jz      loc_466A3D
0x465994: push    1
0x465996: push    esi
0x465997: mov     ecx, ebp
0x465999: call    TESSaveLoadGame_OpenAndValidateSave
0x46599E: mov     ebx, eax
0x4659A0: test    ebx, ebx
0x4659A2: jz      loc_466A3D
0x4659A8: cmp     ebx, 0FFFFFFFFh
0x4659AB: jz      loc_466A3D
0x4659B1: mov     al, [ebp+7Ch]
0x4659B4: cmp     al, 7Eh ; '~'
0x4659B6: jz      short loc_465A17
0x4659B8: cmp     al, 7Dh ; '}'
0x4659BA: jbe     short loc_465A17
0x4659BC: movzx   eax, al
0x4659BF: push    7Dh ; '}'
0x4659C1: push    eax
0x4659C2: lea     ecx, [esp+338h+var_114]
0x4659C9: push    offset aYouAreLoadingA; "You are loading a savegame with version"...
0x4659CE: push    ecx
0x4659CF: call    __sprintf
0x4659D4: mov     ecx, ds:0B34D90h
0x4659DA: mov     edx, [ecx]
0x4659DC: mov     edx, [edx+18h]
0x4659DF: add     esp, 10h
0x4659E2: lea     eax, [esp+330h+var_114]
0x4659E9: push    eax
0x4659EA: call    edx
0x4659EC: cmp     eax, 3
0x4659EF: jnz     short loc_465A17
0x4659F1: mov     ebp, [ebp+6Ch]
0x4659F4: test    ebp, ebp
0x4659F6: jz      short loc_465A00
0x4659F8: push    esi
0x4659F9: mov     ecx, ebp
0x4659FB: call    BSSimpleList_Remove
0x465A00: mov     eax, [esi]
0x465A02: mov     edx, [eax]
0x465A04: push    1
0x465A06: mov     ecx, esi
0x465A08: call    edx
0x465A0A: mov     eax, [esp+330h+self.data]; Verified: pointer to uint32 backing storage.
0x465A11: push    eax
0x465A12: jmp     loc_466A92
0x465A17: push    0; int
0x465A19: lea     ecx, [ebp+1BCh]
0x465A1F: push    ecx; int
0x465A20: push    0; int
0x465A22: lea     edx, [ebp+1B8h]
0x465A28: push    edx; int
0x465A29: push    0; void *
0x465A2B: lea     eax, [ebp+1B4h]
0x465A31: push    eax; int
0x465A32: lea     ecx, [ebp+0B0h]
0x465A38: push    ecx; Dst
0x465A39: push    0; int
0x465A3B: push    ebx; int
0x465A3C: push    esi; int
0x465A3D: mov     ecx, ebp
0x465A3F: call    TESSaveLoadGame_ReadSaveHeader
0x465A44: cmp     [esp+330h+arg_8], 0
0x465A4C: jz      short loc_465A7E
0x465A4E: push    8; Size
0x465A50: call    FormHeapAlloc
0x465A55: add     esp, 4
0x465A58: mov     [esp+330h+var_2D8], eax
0x465A5C: test    eax, eax
0x465A5E: mov     byte ptr [esp+330h+var_4], 1
0x465A66: jz      short loc_465A71
0x465A68: mov     ecx, eax
0x465A6A: call    sub_45F0F0
0x465A6F: jmp     short loc_465A73
0x465A71: xor     eax, eax
0x465A73: mov     byte ptr [esp+330h+var_4], 0
0x465A7B: mov     [ebp+40h], eax
0x465A7E: push    esi
0x465A7F: mov     ecx, ebp
0x465A81: call    sub_45C9C0; MEF v58 SAVE IMPLEMENTATION: staged SR-1 admission hook replaces this CALL only. Validate/capture before original plugin-list mapping45C9C0, Reset465B12, incoming map construction and world deserialization. AL0 follows existing stream/reference-map/local-array cleanup465A8A. Header/version metadata was already read; no atomic rollback claim. Snapshot protection initially covers native major0/version5E..7D with zero created-object count; other shapes remain explicit native fallback.
0x465A86: test    al, al; MEF v58 SR1 implementation verified: admission at preceding CALL binds immutable bytes only for supported major0/minor5E..7D native-mode0 saves with createdCount0. Malformed framing/acquisition/OOM refuses via AL0 here before Reset; unsupported shapes remain native. Snapshot may retain up to256MiB per stream and adds a full input read. Fixture verifies every-prefix truncation, CON offsets, preview bounds, ownership and PERF4 extent integration. No gameplay timing/roundtrip claim.
0x465A88: jnz     short loc_465AC4
0x465A8A: mov     ecx, [ebp+6Ch]
0x465A8D: test    ecx, ecx
0x465A8F: jz      short loc_465A97
0x465A91: push    esi
0x465A92: call    BSSimpleList_Remove
0x465A97: mov     edx, [esi]
0x465A99: mov     eax, [edx]
0x465A9B: push    1
0x465A9D: mov     ecx, esi
0x465A9F: call    eax
0x465AA1: mov     esi, [ebp+40h]
0x465AA4: test    esi, esi
0x465AA6: jz      short loc_465AB8
0x465AA8: mov     ecx, esi; owner
0x465AAA: call    SaveLoad_ClearReferenceMapState;
0x465AAF: push    esi
0x465AB0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x465AB5: add     esp, 4
0x465AB8: mov     dword ptr [ebp+40h], 0
0x465ABF: jmp     loc_466A8A
0x465AC4: push    esi
0x465AC5: mov     ecx, ebp
0x465AC7: call    sub_45A190
0x465ACC: mov     edx, ds:0B33398h
0x465AD2: mov     edi, [edx+10h]
0x465AD5: call    dword ptr ds:0A2808Ch
0x465ADB: cmp     eax, edi
0x465ADD: mov     edi, 1
0x465AE2: jnz     short loc_465AE9
0x465AE4: or      [ebp+18h], edi
0x465AE7: jmp     short loc_465AF0
0x465AE9: or      dword ptr [ebp+18h], 40000h
0x465AF0: mov     ecx, [ebp+40h]
0x465AF3: or      dword ptr [ebp+18h], 800h
0x465AFA: test    ecx, ecx
0x465AFC: mov     byte ptr [ebp+0A8h], 0
0x465B03: jz      short loc_465B10; MEF v58 contracts/evidence: tests/PERFORMANCE_V58_CONTRACTS.md and build/validation/v58. Seven new signature-gated executable writes cover PERF18 query/consumer/producer/ctor/dtor, PERF20 local append and partial SR1 admission. PERF19 modifies the existing checked lookup helper. Matching exterior restores, manager queues and unsupported SR1 framing remain native.
0x465B05: push    offset aSaveGameHeader; "Save Game Header"
0x465B0A: push    ebx
0x465B0B: call    sub_4531B0
0x465B10: mov     ecx, ebp; MEF v58 contracts/evidence: tests/PERFORMANCE_V58_CONTRACTS.md and build/validation/v58. Seven new signature-gated executable writes cover PERF18 query/consumer/producer/ctor/dtor, PERF20 local append and partial SR1 admission. PERF19 modifies the existing checked lookup helper. Matching exterior restores, manager queues and unsupported SR1 framing remain native.
0x465B12: call    sub_462080
0x465B17: push    10h; Size
0x465B19: call    FormHeapAlloc
0x465B1E: add     esp, 4
0x465B21: mov     [esp+330h+var_2D8], eax
0x465B25: test    eax, eax
0x465B27: mov     byte ptr [esp+330h+var_4], 2
0x465B2F: jz      short loc_465B3A
0x465B31: mov     ecx, eax; self
0x465B33: call    ??0ChangesMap@@QAE@XZ;
0x465B38: jmp     short loc_465B3C
0x465B3A: xor     eax, eax
0x465B3C: mov     [ebp+4], eax
0x465B3F: mov     edx, [esi+4]
0x465B42: push    edi
0x465B43: lea     eax, [esp+334h+arg2]
0x465B47: push    eax
0x465B48: push    4
0x465B4A: lea     ecx, [esp+33Ch+var_300]
0x465B4E: push    ecx
0x465B4F: push    esi
0x465B50: mov     byte ptr [esp+344h+var_4], 0
0x465B58: mov     [esp+344h+arg2], edi
0x465B5C: call    edx; MEF v58 SR1 covered count/header/ID spans are prevalidated against retained snapshot bytes before entering this stage. Native file callback430050 dispatches to per-object cloned read slot+38; seeks and size queries use same snapshot. Custom streams/cursor contracts, unsupported versions and nonzero created-object tables are native fallbacks with outstanding SR1 risk. Do not infer general malformed-save or mid-load abort safety.
0x465B5E: mov     edx, [esi+4]
0x465B61: push    edi
0x465B62: lea     eax, [esp+348h+arg2]
0x465B66: push    eax
0x465B67: push    4
0x465B69: lea     ecx, [esp+350h+var_2FC]
0x465B6D: push    ecx
0x465B6E: push    esi
0x465B6F: mov     [esp+358h+arg2], edi
0x465B73: call    edx; MEF SAVE PERF PASS2 2026-10-08: SR-1 HEADER EXTENSION: four-byte declared change-record count is read through native stream callback without testing returned count. Later loop is unsigned count-driven46686C..46687B. Do not reserve PERF-20 queue directly from this unvalidated value. Validate exact count/header reads and physical extents with checked arithmetic before treating count as an allocation bound.
0x465B75: add     esp, 28h
0x465B78: cmp     [esp+330h+var_300], 0
0x465B7D: jnz     short loc_465BDD
0x465B7F: mov     eax, ds:0B33398h; MEF SAVE PERF PASS2 2026-10-08: SR-1 recovery boundary qualification: this existing early failure path clears loading flags, closes/unlinks stream, destroys incoming map and frees local array, before later lock432860 at465BF0 and global-load callbacks465C4D. It is NOT a safe jump target from a record-loop failure: later lock/state/form/queue side effects need separate cleanup. Reset462080 already ran465B12, so even this early path is not evidence of atomic rollback.
0x465B84: mov     ebx, [eax+10h]
0x465B87: call    dword ptr ds:0A2808Ch
0x465B8D: cmp     eax, ebx
0x465B8F: jnz     short loc_465B97
0x465B91: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x465B95: jmp     short loc_465B9E
0x465B97: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x465B9E: and     dword ptr [ebp+18h], 0FFFFF7FFh
0x465BA5: push    esi
0x465BA6: mov     ecx, ebp
0x465BA8: call    sub_45A4E0
0x465BAD: mov     ecx, [ebp+6Ch]
0x465BB0: test    ecx, ecx
0x465BB2: jz      short loc_465BBA
0x465BB4: push    esi
0x465BB5: call    BSSimpleList_Remove
0x465BBA: mov     edx, [esi]
0x465BBC: mov     eax, [edx]
0x465BBE: push    edi
0x465BBF: mov     ecx, esi
0x465BC1: call    eax
0x465BC3: mov     ecx, [ebp+4]
0x465BC6: test    ecx, ecx
0x465BC8: jz      short loc_465BD1
0x465BCA: mov     edx, [ecx]
0x465BCC: mov     eax, [edx]
0x465BCE: push    edi
0x465BCF: call    eax
0x465BD1: mov     dword ptr [ebp+4], 0
0x465BD8: jmp     loc_466A8A
0x465BDD: mov     edx, ds:0B33A10h
0x465BE3: mov     dword ptr [edx+38h], 5
0x465BEA: mov     ecx, ds:0B33A10h
0x465BF0: call    sub_432860
0x465BF5: mov     ecx, ebp
0x465BF7: call    sub_459A10; Caller of sub_459A10 in TESSaveLoadGame_LoadGame; load-game start/menu transition path.
0x465BFC: mov     edi, [esi+30h]
0x465BFF: cmp     edi, 0FFFFFFFFh
0x465C02: jnz     short loc_465C0A
0x465C04: mov     edi, [esi+148h]
0x465C0A: mov     ecx, ds:0A853D0h
0x465C10: mov     edx, [ebp+8Ch]
0x465C16: add     edx, [esp+330h+var_300]
0x465C1A: mov     eax, [esi]
0x465C1C: mov     eax, [eax+0Ch]
0x465C1F: push    ecx
0x465C20: push    edx
0x465C21: mov     ecx, esi
0x465C23: call    eax
0x465C25: push    esi; stream
0x465C26: mov     ecx, ebp; self
0x465C28: call    SaveLoad_LoadIDArrays; MEF PERF 2026-09-08: PERF-4 direct LoadGame caller invokes45E3D0 and does not branch on its return before further file seeks/processing. A new fatal reserve/read failure cannot simply invent a boolean early return; propagate through a defined load-abort contract or retain a safe compatible fallback.
0x465C2D: mov     eax, ds:0A853D0h
0x465C32: mov     edx, [esi]
0x465C34: mov     edx, [edx+0Ch]
0x465C37: push    eax
0x465C38: push    edi
0x465C39: mov     ecx, esi
0x465C3B: call    edx
0x465C3D: mov     ecx, ds:0B33A98h
0x465C43: push    0FFFFFFFEh
0x465C45: call    sub_447DB0
0x465C4A: push    esi
0x465C4B: mov     ecx, ebp
0x465C4D: call    SaveLoad_LoadGame_Subroutine?; EnginePatch v2: call patched to install per-file safe read callback before SaveLoad_LoadGame_Subroutine direct read paths.
0x465C52: mov     ecx, ds:0B33A98h
0x465C58: push    0FFFFFFFFh
0x465C5A: call    sub_447DB0
0x465C5F: xor     edi, edi
0x465C61: cmp     [esp+330h+var_2FC], edi
0x465C65: mov     [esp+330h+arg2], edi
0x465C69: mov     [esp+330h+var_2C8], edi
0x465C6D: jbe     loc_466885
0x465C73: push    0
0x465C75: call    sub_5AD980
0x465C7A: mov     edx, [esi+4]
0x465C7D: mov     ebx, 1
0x465C82: push    ebx
0x465C83: lea     eax, [esp+338h+reference]
0x465C87: push    eax
0x465C88: push    0Ch
0x465C8A: lea     ecx, [esp+340h+a1]
0x465C8E: push    ecx
0x465C8F: push    esi
0x465C90: mov     [esp+348h+reference], ebx
0x465C94: call    edx; MEF SAVE PERF PASS2 2026-10-08: SR-1 HEADER EXTENSION VERIFIED: requests12-byte change-record header then immediately loads its FormID at465C96; no returned-count check or per-iteration header clear. Native BSFile short/EOF read leaves remaining bytes untouched. EOF after a missing-plugin, zero-payload header can reprocess that stale header until declared count exhausted (assuming stable stream/mapping and normal callbacks); loop has no local EOF break. No corrupt save or gameplay hang executed.
0x465C96: mov     edi, [esp+348h+a1]
0x465C9A: add     esp, 18h
0x465C9D: cmp     edi, 0FEFFFFFFh
0x465CA3: jnz     short loc_465D04
0x465CA5: fldz
0x465CA7: mov     edx, [esi+4]
0x465CAA: push    ebx
0x465CAB: fstp    [esp+334h+reference]
0x465CAF: lea     eax, [esp+334h+var_304]
0x465CB3: push    eax
0x465CB4: push    ebx
0x465CB5: lea     ecx, [esp+33Ch+var_319]
0x465CB9: push    ecx
0x465CBA: push    esi
0x465CBB: mov     [esp+344h+var_319], 0
0x465CC0: mov     [esp+344h+var_304], ebx
0x465CC4: call    edx
0x465CC6: mov     edx, [esi+4]
0x465CC9: push    ebx
0x465CCA: lea     eax, [esp+348h+var_304]
0x465CCE: push    eax
0x465CCF: push    4
0x465CD1: lea     ecx, [esp+350h+reference]
0x465CD5: push    ecx
0x465CD6: push    esi
0x465CD7: mov     [esp+358h+var_304], ebx
0x465CDB: call    edx
0x465CDD: mov     eax, ds:0B333C4h
0x465CE2: mov     cl, [esp+358h+var_319]
0x465CE6: mov     [eax+116h], cl
0x465CEC: fld     [esp+358h+reference]
0x465CF0: mov     edx, ds:0B333C4h
0x465CF6: fstp    dword ptr [edx+700h]
0x465CFC: add     esp, 28h
0x465CFF: jmp     loc_46686C
0x465D04: push    edi
0x465D05: mov     ecx, ebp
0x465D07: call    SaveLoad_ResolveFormID; Remaps a serialized FormID's high-byte mod index through TESSaveLoad::modRefIDTable. Dynamic 0xFF IDs pass through; missing/out-of-range mods resolve to zero; low 24-bit object ID is preserved.
0x465D0C: test    eax, eax
0x465D0E: jnz     short loc_465D39
0x465D10: push    edi
0x465D11: push    offset aLoadErrorPlugi; "Load Error: Plugin for form with ID %08"...
0x465D16: call    PrintError
0x465D1B: mov     ecx, ds:0A853D4h
0x465D21: movzx   edx, word ptr [esp+338h+var_30B+1]
0x465D26: mov     eax, [esi]
0x465D28: mov     eax, [eax+0Ch]
0x465D2B: add     esp, 8
0x465D2E: push    ecx
0x465D2F: push    edx
0x465D30: mov     ecx, esi
0x465D32: call    eax
0x465D34: jmp     loc_46686C
0x465D39: mov     ecx, [esp+330h+var_30B]
0x465D3D: push    ecx
0x465D3E: mov     ecx, ebp
0x465D40: mov     [esp+334h+a1], eax
0x465D44: call    sub_45A140
0x465D49: mov     edx, [esp+330h+a1]
0x465D4D: push    edx; a1
0x465D4E: mov     [esp+334h+var_319], bl
0x465D52: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x465D57: mov     ebx, eax
0x465D59: mov     eax, [esp+334h+flags]
0x465D5D: add     esp, 4
0x465D60: test    al, 2
0x465D62: jz      loc_4660EA
0x465D68: test    al, 4
0x465D6A: jz      loc_465EB1
0x465D70: mov     ecx, ds:0B33B00h; self
0x465D76: xor     edi, edi
0x465D78: xor     ebx, ebx
0x465D7A: cmp     byte ptr [ecx+7Ch], 5Bh ; '['
0x465D7E: mov     [esp+330h+reference], edi
0x465D82: mov     [esp+330h+var_304], edi
0x465D86: jb      short loc_465DF4
0x465D88: test    eax, 4000000h
0x465D8D: jz      short loc_465DB1
0x465D8F: push    4; byteCount
0x465D91: lea     eax, [esp+334h+destination]
0x465D95: push    eax; destination
0x465D96: push    esi; stream
0x465D97: call    SaveLoad_ReadFileBytes; EnginePatch v2: byte-checked save-file read wrapper. Short reads are zero-filled before callers parse destination buffers.
0x465D9C: movsx   edi, byte ptr [esp+330h+destination+2]
0x465DA1: movsx   ecx, byte ptr [esp+330h+destination+3]
0x465DA6: mov     edx, [esp+330h+destination]
0x465DAA: mov     ebx, 4
0x465DAF: jmp     short loc_465DD8
0x465DB1: test    eax, 2000000h
0x465DB6: jz      short loc_465DEE
0x465DB8: push    6; byteCount
0x465DBA: lea     eax, [esp+334h+var_2C4]
0x465DBE: push    eax; destination
0x465DBF: push    esi; stream
0x465DC0: call    SaveLoad_ReadFileBytes; EnginePatch v2: byte-checked save-file read wrapper. Short reads are zero-filled before callers parse destination buffers.
0x465DC5: movsx   edi, word ptr [esp+330h+var_2C4+2]
0x465DCA: movsx   ecx, [esp+330h+var_2C0]
0x465DCF: mov     edx, [esp+330h+var_2C4]
0x465DD3: mov     ebx, 6
0x465DD8: mov     [esp+330h+var_304], ecx
0x465DDC: push    edx
0x465DDD: mov     ecx, ebp
0x465DDF: call    sub_459990
0x465DE4: mov     ecx, ds:0B33B00h; self
0x465DEA: mov     [esp+330h+reference], eax
0x465DEE: cmp     byte ptr [ecx+7Ch], 5Bh ; '['
0x465DF2: jnb     short loc_465E2E
0x465DF4: push    0Ch; byteCount
0x465DF6: lea     eax, [esp+334h+var_250]
0x465DFD: push    eax; destination
0x465DFE: push    esi; stream
0x465DFF: call    SaveLoad_ReadFileBytes; EnginePatch v2: byte-checked save-file read wrapper. Short reads are zero-filled before callers parse destination buffers.
0x465E04: mov     ecx, [esp+330h+var_248]
0x465E0B: mov     edx, [esp+330h+var_250]
0x465E12: mov     edi, [esp+330h+var_24C]
0x465E19: mov     [esp+330h+var_304], ecx
0x465E1D: push    edx
0x465E1E: mov     ecx, ebp
0x465E20: mov     ebx, 0Ch
0x465E25: call    sub_459950
0x465E2A: mov     [esp+330h+reference], eax
0x465E2E: mov     ecx, ds:0A853D4h
0x465E34: mov     eax, [esi]
0x465E36: mov     edx, [eax+0Ch]
0x465E39: push    ecx
0x465E3A: neg     ebx
0x465E3C: push    ebx
0x465E3D: mov     ecx, esi
0x465E3F: call    edx
0x465E41: mov     eax, [esp+330h+a1]
0x465E45: push    eax; a1
0x465E46: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x465E4B: push    0; int
0x465E4D: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x465E52: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465E57: mov     ebx, eax
0x465E59: push    0; int
0x465E5B: push    ebx; void *
0x465E5C: call    OblivionDynamicCast
0x465E61: mov     esi, eax
0x465E63: add     esp, 18h
0x465E66: test    esi, esi
0x465E68: jz      short loc_465E86
0x465E6A: mov     ecx, esi; this
0x465E6C: call    TESObjectCELL_GetXCoordinate
0x465E71: cmp     eax, edi
0x465E73: jnz     short loc_465E86
0x465E75: mov     ecx, esi; this
0x465E77: call    TESObjectCELL_GetYCoordinate
0x465E7C: cmp     eax, [esp+330h+var_304]
0x465E80: jz      loc_4663FB
0x465E86: mov     ecx, [esp+330h+var_304]
0x465E8A: mov     edx, [esp+330h+a1]
0x465E8E: mov     eax, [esp+330h+reference]
0x465E92: push    ecx; cellY
0x465E93: mov     ecx, [ebp+10h]; self
0x465E96: push    edi; cellX
0x465E97: push    edx; cellFormID
0x465E98: push    eax; worldspaceFormID
0x465E99: call    ExteriorCellNewReferencesMap_AddCell; Verified: exterior-cell coordinate collision path records worldspace/cellID/cellX/cellY before deleting the conflicting cell form.
0x465E9E: test    ebx, ebx
0x465EA0: jz      short loc_465EAA
0x465EA2: push    ebx; form
0x465EA3: mov     ecx, ebp; self
0x465EA5: call    TESSaveLoadGame_DeleteForm
0x465EAA: xor     ebx, ebx
0x465EAC: jmp     loc_4663FB
0x465EB1: push    24h ; '$'; byteCount
0x465EB3: lea     ecx, [esp+334h+data]
0x465EB7: xor     eax, eax
0x465EB9: push    ecx; destination
0x465EBA: mov     ecx, ds:0B33B00h; self
0x465EC0: push    esi; stream
0x465EC1: mov     [esp+33Ch+data.kind], eax; Verified: 36-byte payload read by LoadGame at 465EB1..465ED6.
0x465EC8: mov     [esp+33Ch+data.boundFormIDOrVariant], eax; Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
0x465ECF: mov     [esp+33Ch+data.locationFormID], eax; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x465ED6: call    SaveLoad_ReadFileBytes; Verified: read size 0x24 into initial-reference data. Fields +4 and +8 are subsequently FormID-remapped; +8 identifies the location cell/worldspace.
0x465EDB: mov     edx, [esp+330h+data.boundFormIDOrVariant]; Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
0x465EDF: push    edx
0x465EE0: mov     ecx, ebp
0x465EE2: call    sub_459950
0x465EE7: mov     [esp+330h+data.boundFormIDOrVariant], eax; Verified: kind value tested at +0; branch 1 allocates ArrowProjectile, 2 selects a MagicProjectile subtype, 0/3 feed standard TESObjectREFR construction/reuse at 4603E0.
0x465EEB: mov     eax, [esp+330h+data.locationFormID]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x465EEF: push    eax
0x465EF0: mov     ecx, ebp
0x465EF2: call    sub_459950
0x465EF7: mov     edx, [esi]
0x465EF9: mov     edx, [edx+0Ch]
0x465EFC: mov     [esp+330h+data.locationFormID], eax; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x465F00: mov     eax, ds:0A853D4h
0x465F05: push    eax
0x465F06: push    0FFFFFFDCh
0x465F08: mov     ecx, esi
0x465F0A: call    edx
0x465F0C: mov     eax, [esp+330h+data.locationFormID]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x465F10: push    eax; a1
0x465F11: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x465F16: push    0; int
0x465F18: push    offset ??_R0?AVTESObjectCELL@@@8; worldX
0x465F1D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465F22: mov     edi, eax
0x465F24: push    0; int
0x465F26: push    edi; void *
0x465F27: call    OblivionDynamicCast
0x465F2C: push    0; int
0x465F2E: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x465F33: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465F38: push    0; int
0x465F3A: push    edi; void *
0x465F3B: mov     [esp+35Ch+reference], eax
0x465F3F: call    OblivionDynamicCast
0x465F44: add     esp, 2Ch
0x465F47: lea     ecx, [esp+330h+data.positionX]; Verified: +8 is resolved as FormID and looked up/cast as TESObjectCELL or TESWorldSpace at 465EEB..465F3F.
0x465F4E: push    ecx
0x465F4F: mov     ecx, ebp
0x465F51: mov     edi, eax
0x465F53: call    sub_452430
0x465F58: test    al, al
0x465F5A: jz      short loc_465F66
0x465F5C: mov     [esp+330h+var_319], 0
0x465F61: jmp     loc_4663FB
0x465F66: test    edi, edi
0x465F68: jz      short loc_465F9D
0x465F6A: fld     [esp+330h+data.positionX]; Verified: +8 is resolved as FormID and looked up/cast as TESObjectCELL or TESWorldSpace at 465EEB..465F3F.
0x465F71: fistp   [esp+330h+var_2EC]
0x465F75: fld     [esp+330h+data.positionY]; Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
0x465F7C: fistp   [esp+330h+var_2F0]
0x465F80: mov     edx, [esp+330h+var_2F0]
0x465F84: mov     eax, [esp+330h+var_2EC]
0x465F88: sar     edx, 0Ch
0x465F8B: push    edx; cellY
0x465F8C: sar     eax, 0Ch
0x465F8F: push    eax; cellX
0x465F90: mov     ecx, edi; this
0x465F92: call    TESWorldSpace__GetCellAtCellCoord
0x465F97: mov     [esp+330h+reference], eax
0x465F9B: jmp     short loc_465FA1
0x465F9D: mov     eax, [esp+330h+reference]
0x465FA1: test    eax, eax
0x465FA3: jz      short loc_465FBB
0x465FA5: mov     ecx, ds:0B333A0h
0x465FAB: push    0; worldZ
0x465FAD: push    eax; worldY
0x465FAE: call    TESObjectCELL_IsProcessLevel?LowHigh
0x465FB3: test    al, al
0x465FB5: jnz     short loc_465FC6
0x465FB7: mov     eax, [esp+330h+reference]
0x465FBB: cmp     [esp+330h+data.kind], 3; Verified: 36-byte payload read by LoadGame at 465EB1..465ED6.
0x465FC0: jnz     loc_466049
0x465FC6: mov     ecx, [esp+330h+a1]
0x465FCA: push    ecx; a1
0x465FCB: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x465FD0: mov     edi, eax
0x465FD2: add     esp, 4
0x465FD5: test    edi, edi
0x465FD7: jz      short loc_466031
0x465FD9: mov     ecx, [ebp+0]; self
0x465FDC: push    edi; form
0x465FDD: call    ChangesMap_FindByForm;
0x465FE2: xor     ecx, ecx
0x465FE4: test    eax, eax
0x465FE6: jz      short loc_465FEA
0x465FE8: mov     ecx, [eax]
0x465FEA: push    ecx; flags
0x465FEB: push    edi; form
0x465FEC: mov     ecx, ebp
0x465FEE: call    SaveLoad_AdjustCreatedFormChangeFlags; Verified: created-form predicate at 45353F gates adjustment; RTTI cast TESObjectREFR -> clear bit4/set bit2; RTTI cast TESObjectCELL -> OR6; otherwise preserves flags. Used by LoadForm 463930, LoadGame 465FEE/4664CD and save-side normalization 4535A0. Unknown broader meanings of flag bits outside these form-specific uses.
0x465FF3: mov     esi, [esp+330h+flags]
0x465FF7: not     esi
0x465FF9: and     esi, eax
0x465FFB: and     esi, 0FFFh
0x466001: jz      short loc_466031
0x466003: push    0; int
0x466005: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x46600A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46600F: push    0; int
0x466011: push    edi; void *
0x466012: call    OblivionDynamicCast
0x466017: add     esp, 14h
0x46601A: test    eax, eax
0x46601C: jz      short loc_466021
0x46601E: and     esi, 0FFFFFFBFh
0x466021: and     esi, 0FFFFF7FFh
0x466027: jz      short loc_466031
0x466029: push    edi; form
0x46602A: mov     ecx, ebp; self
0x46602C: call    TESSaveLoadGame_DeleteForm
0x466031: mov     eax, [esp+330h+a1]
0x466035: lea     edx, [esp+330h+data]
0x466039: push    edx; data
0x46603A: push    eax; referenceID
0x46603B: mov     ecx, ebp; self
0x46603D: call    TESSaveLoadGame_CreateReferenceFromInitialData;  Verified created-reference branch behavior from Oblivion RTTI/allocation evidence: kind=1 allocates ArrowProjectile; kind=2 selects MagicBall/Bolt/Fog class; kinds=0/3 use TESBoundObject lookup and standard TESObjectREFR construction or compatible existing REFR reuse. Fallout CreatedReferenceInitialData is 31 bytes and uses a compact 3-byte BoundIDIndex; Oblivion payload is 36 bytes with dword IDs.
0x466042: mov     ebx, eax
0x466044: jmp     loc_4663FB
0x466049: test    eax, eax
0x46604B: jz      short loc_46606C
0x46604D: mov     ecx, eax; this
0x46604F: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x466054: test    al, al
0x466056: jz      short loc_46606C
0x466058: mov     ecx, [esp+330h+a1]
0x46605C: mov     edx, [esp+330h+data.locationFormID]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x466060: push    ecx; referenceID
0x466061: mov     ecx, [ebp+8]; self
0x466064: push    edx; cellFormID
0x466065: call    InteriorCellNewReferencesMap_AddReferenceID; Verified: LoadGame resolves cell/reference FormIDs, confirms the cell is interior, then appends their pair to InteriorCellNewReferencesMap. Exterior references use the adjacent separate map branch.
0x46606A: jmp     short loc_4660A7
0x46606C: test    edi, edi
0x46606E: jz      short loc_4660BE
0x466070: mov     ecx, [esp+330h+data.positionX]; Verified: +8 is resolved as FormID and looked up/cast as TESObjectCELL or TESWorldSpace at 465EEB..465F3F.
0x466077: mov     edx, [esp+330h+data.positionY]; Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
0x46607E: sub     esp, 0Ch
0x466081: mov     eax, esp
0x466083: mov     [eax], ecx
0x466085: mov     ecx, [esp+33Ch+data.positionZ]; Candidate: trailing 12 bytes at +0x18 resemble an angle vector; no Oblivion-side read of these bytes has been established. Fallout uses a separate ReferenceLocationInitialData plus compact type/bound-ID suffix.
0x46608C: mov     [eax+4], edx
0x46608F: mov     edx, [esp+33Ch+a1]
0x466093: mov     [eax+8], ecx
0x466096: mov     eax, [esp+33Ch+data.locationFormID]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x46609D: mov     ecx, [ebp+0Ch]; self
0x4660A0: push    edx; referenceID
0x4660A1: push    eax; worldspaceFormID
0x4660A2: call    ExteriorCellNewReferencesMap_AddReference; Verified: LoadGame resolves worldspace and saved reference location, then inserts worldspace/refID and location into ExteriorCellNewReferencesMap. Fallout BGSSaveLoadReferencesMap::LoadReferencesForCell has the related restore path.
0x4660A7: test    ebx, ebx
0x4660A9: jz      loc_4663FB
0x4660AF: push    ebx; form
0x4660B0: mov     ecx, ebp; self
0x4660B2: call    TESSaveLoadGame_DeleteForm
0x4660B7: xor     ebx, ebx
0x4660B9: jmp     loc_4663FB
0x4660BE: mov     ecx, [esp+330h+data.locationFormID]; Candidate: value is passed through the saved-form-ID resolver at 465EE2; its meaning is bound-form ID for normal references and may be type-dependent for projectiles.
0x4660C2: push    ecx
0x4660C3: push    offset aWorldspace08xC; "Worldspace %08X could not be found whil"...
0x4660C8: call    PrintError
0x4660CD: movzx   ecx, word ptr [esp+338h+var_30B+1]
0x4660D2: mov     eax, ds:0A853D4h
0x4660D7: mov     edx, [esi]
0x4660D9: mov     edx, [edx+0Ch]
0x4660DC: add     esp, 8
0x4660DF: push    eax
0x4660E0: push    ecx
0x4660E1: mov     ecx, esi
0x4660E3: call    edx
0x4660E5: jmp     loc_46686C
0x4660EA: test    eax, eax
0x4660EC: jns     loc_4662F0
0x4660F2: mov     ecx, ds:0B33B00h; self
0x4660F8: xor     eax, eax
0x4660FA: mov     [esp+330h+var_27C.primaryLocationFormID], eax; Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
0x466101: mov     [esp+330h+var_27C.fallbackLocationFormID], eax; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x466108: push    2Ch ; ','; byteCount
0x46610A: lea     eax, [esp+334h+var_27C]
0x466111: push    eax; destination
0x466112: push    esi; stream
0x466113: call    SaveLoad_ReadFileBytes; EnginePatch v2: byte-checked save-file read wrapper. Short reads are zero-filled before callers parse destination buffers.
0x466118: mov     ecx, [esp+330h+var_27C.primaryLocationFormID]; Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
0x46611F: push    ecx
0x466120: mov     ecx, ebp
0x466122: call    sub_459950
0x466127: mov     edx, [esp+330h+var_27C.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x46612E: push    edx
0x46612F: mov     ecx, ebp
0x466131: mov     [esp+334h+var_27C.primaryLocationFormID], eax; Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
0x466138: call    sub_459950
0x46613D: mov     ecx, ds:0A853D4h
0x466143: mov     [esp+330h+var_27C.fallbackLocationFormID], eax; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x46614A: mov     eax, [esi]
0x46614C: mov     edx, [eax+0Ch]
0x46614F: push    ecx
0x466150: push    0FFFFFFD4h
0x466152: mov     ecx, esi
0x466154: call    edx
0x466156: mov     eax, [esp+330h+var_27C.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x46615D: push    eax; a1
0x46615E: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x466163: push    0; int
0x466165: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x46616A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46616F: mov     edi, eax
0x466171: push    0; int
0x466173: push    edi; void *
0x466174: call    OblivionDynamicCast
0x466179: push    0; int
0x46617B: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x466180: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466185: push    0; int
0x466187: push    edi; void *
0x466188: mov     [esp+35Ch+var_304], eax
0x46618C: call    OblivionDynamicCast
0x466191: mov     edi, eax
0x466193: add     esp, 2Ch
0x466196: test    edi, edi
0x466198: jz      short loc_4661CB
0x46619A: fld     dword ptr [esp+330h+var_27C.unknown14]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
0x4661A1: fistp   [esp+330h+var_2E8]
0x4661A5: fld     dword ptr [esp+330h+var_27C.unknown14+4]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
0x4661AC: fistp   [esp+330h+var_2E4]
0x4661B0: mov     ecx, [esp+330h+var_2E4]
0x4661B4: mov     edx, [esp+330h+var_2E8]
0x4661B8: sar     ecx, 0Ch
0x4661BB: push    ecx; cellY
0x4661BC: sar     edx, 0Ch
0x4661BF: push    edx; cellX
0x4661C0: mov     ecx, edi; this
0x4661C2: call    TESWorldSpace__GetCellAtCellCoord
0x4661C7: mov     [esp+330h+var_304], eax
0x4661CB: cmp     [esp+330h+var_304], 0
0x4661D0: jz      short loc_46620D
0x4661D2: mov     eax, [esp+330h+var_304]
0x4661D6: mov     ecx, ds:0B333A0h
0x4661DC: push    0; a2
0x4661DE: push    eax; a1
0x4661DF: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4661E4: test    al, al
0x4661E6: jz      short loc_46620D
0x4661E8: test    ebx, ebx
0x4661EA: jnz     loc_4663FB
0x4661F0: mov     edx, [esp+330h+a1]
0x4661F4: lea     ecx, [esp+330h+var_27C]
0x4661FB: push    ecx; data
0x4661FC: push    edx; referenceID
0x4661FD: mov     ecx, ebp
0x4661FF: call    TESSaveLoadGame_RebuildReferenceFromLocationOverrides;  Verified: moved-reference rebuild. Resolves primary location ID at +0 (fallback ID +0x10 when zero), casts it to TESObjectCELL or TESWorldSpace, scans its override files for the requested referenceID, loads matching reference records, runs PostFixup, and restores actor/REFR starting location data. Worldspace path quantizes X/Y by >>12 to find the owning cell. Probable role homolog: Fallout ReferenceInitialData::GetOriginalLocationCellAndWorld / LoadChangedReference; Oblivion implementation searches local override files directly. Verified: a2 uses 44-byte moved-reference payload; +0 and +0x10 are remapped FormIDs before call. X/Y at +4/+8 are consumed on the worldspace path. Remaining fields Unknown. Verified cross-reference divergence: Fallout MovedReferenceInitialData is 34 bytes (27-byte location data + compact original-location index and int16 cell XY); Oblivion restore reads 44 bytes and supports primary/fallback full FormIDs at +0/+0x10 plus world XY at +4/+8. Confidence label Probable applies only to s
0x466204: mov     ecx, [esp+330h+var_304]
0x466208: jmp     loc_4663F3
0x46620D: test    ebx, ebx
0x46620F: jz      short loc_466256
0x466211: push    0; int
0x466213: push    offset ??_R0?AVTESObjectREFR@@@8; worldY
0x466218: push    offset ??_R0?AVTESForm@@@8; worldX
0x46621D: push    0; int
0x46621F: push    ebx; void *
0x466220: call    OblivionDynamicCast
0x466225: add     esp, 14h
0x466228: test    eax, eax
0x46622A: mov     [esp+330h+reference], eax
0x46622E: jz      short loc_46624C
0x466230: mov     ecx, eax; this
0x466232: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x466237: test    eax, eax
0x466239: jz      short loc_46624C
0x46623B: mov     ecx, [esp+330h+reference]; this
0x46623F: push    ecx; reference
0x466240: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x466245: mov     ecx, eax; this
0x466247: call    TESObjectCELL_RemoveReference; Verified: removes a reference from the cell object list under the cell lock. For persistent cells, clears the reference's ExtraDataList cell pointer and removes it from the owning WorldSpace persistent-reference index (+0x64); for normal cells, clears its parent cell and updates changed state. No write to the separate SubSpace index (+0x60) is present.
0x46624C: push    ebx; worldZ
0x46624D: mov     ecx, ebp; self
0x46624F: call    TESSaveLoadGame_DeleteForm
0x466254: xor     ebx, ebx
0x466256: cmp     [esp+330h+var_304], 0
0x46625B: jz      short loc_466291
0x46625D: mov     ecx, [esp+330h+var_304]; this
0x466261: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x466266: test    al, al
0x466268: jz      short loc_466291
0x46626A: mov     eax, [esp+330h+a1]
0x46626E: mov     ecx, [esp+330h+var_27C.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x466275: push    eax; referenceID
0x466276: push    ecx; cellFormID
0x466277: mov     ecx, [ebp+8]; self
0x46627A: call    InteriorCellNewReferencesMap_AddReferenceID; Verified: alternate load branch inserts cell/reference IDs into the interior map and also pushes the reference ID to manager list +0x20.
0x46627F: mov     edx, [esp+330h+a1]
0x466283: push    edx
0x466284: lea     ecx, [ebp+20h]
0x466287: call    BSSimpleList_PushFront
0x46628C: jmp     loc_4663FB
0x466291: test    edi, edi
0x466293: jz      short loc_4662DE
0x466295: mov     ecx, dword ptr [esp+330h+var_27C.unknown14]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
0x46629C: mov     edx, dword ptr [esp+330h+var_27C.unknown14+4]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
0x4662A3: sub     esp, 0Ch
0x4662A6: mov     eax, esp
0x4662A8: mov     [eax], ecx
0x4662AA: mov     ecx, dword ptr [esp+33Ch+var_27C.unknown14+8]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
0x4662B1: mov     [eax+4], edx
0x4662B4: mov     edx, [esp+33Ch+a1]
0x4662B8: mov     [eax+8], ecx
0x4662BB: mov     eax, [esp+33Ch+var_27C.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x4662C2: mov     ecx, [ebp+0Ch]; self
0x4662C5: push    edx; referenceID
0x4662C6: push    eax; worldspaceFormID
0x4662C7: call    ExteriorCellNewReferencesMap_AddReference; Verified: exterior load branch inserts worldspace/reference location into exterior map and pushes the reference ID to manager list +0x20.
0x4662CC: mov     ecx, [esp+330h+a1]
0x4662D0: push    ecx
0x4662D1: lea     ecx, [ebp+20h]
0x4662D4: call    BSSimpleList_PushFront
0x4662D9: jmp     loc_4663FB
0x4662DE: mov     edx, [esp+330h+var_27C.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x4662E5: push    edx
0x4662E6: push    offset aWorldspace08_0; "Worldspace %08X could not be found whil"...
0x4662EB: jmp     loc_465D16
0x4662F0: test    ebx, ebx
0x4662F2: jnz     loc_4663FB
0x4662F8: mov     ecx, [esp+330h+a1]
0x4662FC: push    ecx; formID
0x4662FD: mov     ecx, [ebp+0]; self
0x466300: call    ChangesMap_FindByFormID;
0x466305: test    eax, eax
0x466307: jz      loc_4663FB
0x46630D: test    dword ptr [eax], 80000000h
0x466313: jz      loc_4663FB
0x466319: mov     esi, [eax+4]
0x46631C: test    esi, esi
0x46631E: jz      loc_4663FB
0x466324: add     esi, 4
0x466327: mov     ecx, 0Bh
0x46632C: lea     edi, [esp+330h+var_244]
0x466333: rep movsd
0x466335: mov     edx, [esp+330h+var_244.primaryLocationFormID]; Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
0x46633C: push    edx
0x46633D: mov     ecx, ebp
0x46633F: call    sub_459950
0x466344: mov     esi, eax
0x466346: mov     eax, [esp+330h+var_244.fallbackLocationFormID]; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x46634D: push    eax
0x46634E: mov     ecx, ebp
0x466350: mov     [esp+334h+var_244.primaryLocationFormID], esi; Verified: 44-byte payload copied from savedFormBuffer+4; consumed by location reconstruction.
0x466357: call    sub_459950
0x46635C: push    esi; a1
0x46635D: mov     [esp+334h+var_244.fallbackLocationFormID], eax; Verified: fallback source cell/worldspace FormID; used only when primary source locator at +0 is zero.
0x466364: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x466369: push    ebx; int
0x46636A: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x46636F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466374: mov     esi, eax
0x466376: push    ebx; int
0x466377: push    esi; void *
0x466378: call    OblivionDynamicCast
0x46637D: push    ebx; int
0x46637E: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x466383: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466388: push    ebx; int
0x466389: push    esi; void *
0x46638A: mov     edi, eax
0x46638C: call    OblivionDynamicCast
0x466391: add     esp, 2Ch
0x466394: test    eax, eax
0x466396: jz      short loc_4663C7
0x466398: fld     [esp+330h+var_244.worldX]; Verified: source world X; used when source locator is a TESWorldSpace.
0x46639F: fistp   [esp+330h+var_2D4]
0x4663A3: fld     [esp+330h+var_244.worldY]; Verified: source world Y; used when source locator is a TESWorldSpace.
0x4663AA: fistp   [esp+330h+var_2DC]
0x4663AE: mov     ecx, [esp+330h+var_2DC]
0x4663B2: mov     edx, [esp+330h+var_2D4]
0x4663B6: sar     ecx, 0Ch
0x4663B9: push    ecx; cellY
0x4663BA: sar     edx, 0Ch
0x4663BD: push    edx; cellX
0x4663BE: mov     ecx, eax; this
0x4663C0: call    TESWorldSpace__GetCellAtCellCoord
0x4663C5: mov     edi, eax
0x4663C7: test    edi, edi
0x4663C9: jz      short loc_4663FB
0x4663CB: mov     ecx, ds:0B333A0h
0x4663D1: push    0; a2
0x4663D3: push    edi; a1
0x4663D4: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4663D9: test    al, al
0x4663DB: jz      short loc_4663FB
0x4663DD: mov     ecx, [esp+330h+a1]
0x4663E1: lea     eax, [esp+330h+var_244]
0x4663E8: push    eax; data
0x4663E9: push    ecx; referenceID
0x4663EA: mov     ecx, ebp
0x4663EC: call    TESSaveLoadGame_RebuildReferenceFromLocationOverrides;  Verified: moved-reference rebuild. Resolves primary location ID at +0 (fallback ID +0x10 when zero), casts it to TESObjectCELL or TESWorldSpace, scans its override files for the requested referenceID, loads matching reference records, runs PostFixup, and restores actor/REFR starting location data. Worldspace path quantizes X/Y by >>12 to find the owning cell. Probable role homolog: Fallout ReferenceInitialData::GetOriginalLocationCellAndWorld / LoadChangedReference; Oblivion implementation searches local override files directly. Verified: a2 uses 44-byte moved-reference payload; +0 and +0x10 are remapped FormIDs before call. X/Y at +4/+8 are consumed on the worldspace path. Remaining fields Unknown. Verified cross-reference divergence: Fallout MovedReferenceInitialData is 34 bytes (27-byte location data + compact original-location index and int16 cell XY); Oblivion restore reads 44 bytes and supports primary/fallback full FormIDs at +0/+0x10 plus world XY at +4/+8. Confidence label Probable applies only to s
0x4663F1: mov     ecx, edi; this
0x4663F3: mov     ebx, eax
0x4663F5: push    ebx; reference
0x4663F6: call    TESObjectCELL_AddReference; Verified: persistent-cell AddReference updates the WorldSpace coordinate/fallback persistent-reference index (+0x64) through TESWorldSpace_IndexReference. Ordinary cell additions do not index there. This routine does not populate the separate SubSpace spatial index at +0x60.
0x4663FB: push    0; int
0x4663FD: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x466402: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466407: push    0; int
0x466409: push    ebx; void *
0x46640A: call    OblivionDynamicCast
0x46640F: mov     cl, [esp+344h+var_310]
0x466413: add     esp, 14h
0x466416: test    ebx, ebx
0x466418: jz      short loc_466451
0x46641A: mov     dl, [ebx+4]
0x46641D: cmp     dl, cl
0x46641F: jz      short loc_466451
0x466421: movzx   eax, dl
0x466424: lea     edx, [eax+eax*2]
0x466427: mov     eax, ds:0B05E04h[edx*4]
0x46642E: push    eax
0x46642F: movzx   eax, cl
0x466432: lea     ecx, [eax+eax*2]
0x466435: mov     edx, ds:0B05E04h[ecx*4]
0x46643C: mov     eax, [esp+334h+a1]
0x466440: push    edx
0x466441: push    eax
0x466442: push    offset aLoadErrorFormW; "Load Error: Form with ID %08X was saved"...
0x466447: call    PrintError
0x46644C: add     esp, 10h
0x46644F: jmp     short loc_466494
0x466451: test    eax, eax
0x466453: jz      short loc_46648D
0x466455: mov     edx, [eax]
0x466457: mov     ecx, eax
0x466459: mov     eax, [edx+170h]
0x46645F: call    eax
0x466461: test    eax, eax
0x466463: jnz     short loc_466489
0x466465: movzx   eax, [esp+330h+var_310]
0x46646A: lea     ecx, [eax+eax*2]
0x46646D: mov     edx, ds:0B05E04h[ecx*4]
0x466474: mov     eax, [esp+330h+a1]
0x466478: push    edx
0x466479: push    eax
0x46647A: push    offset aLoadErrorRefer; "Load Error: Reference with ID %08X and "...
0x46647F: call    PrintError
0x466484: add     esp, 0Ch
0x466487: jmp     short loc_466494
0x466489: mov     cl, [esp+330h+var_310]
0x46648D: cmp     [esp+330h+var_319], 0
0x466492: jnz     short loc_4664B0
0x466494: mov     eax, ds:0A853D4h
0x466499: mov     ecx, [esp+330h+stream]
0x46649D: mov     edx, [ecx]
0x46649F: mov     edx, [edx+0Ch]
0x4664A2: push    eax
0x4664A3: movzx   eax, word ptr [esp+334h+var_30B+1]
0x4664A8: push    eax
0x4664A9: call    edx
0x4664AB: jmp     loc_466862
0x4664B0: xor     esi, esi
0x4664B2: test    ebx, ebx
0x4664B4: jz      loc_466787
0x4664BA: mov     ecx, [ebp+0]; self
0x4664BD: push    ebx; form
0x4664BE: call    ChangesMap_FindByForm;
0x4664C3: test    eax, eax
0x4664C5: jz      short loc_4664C9
0x4664C7: mov     esi, [eax]
0x4664C9: push    esi; flags
0x4664CA: push    ebx; form
0x4664CB: mov     ecx, ebp
0x4664CD: call    SaveLoad_AdjustCreatedFormChangeFlags; Verified: created-form predicate at 45353F gates adjustment; RTTI cast TESObjectREFR -> clear bit4/set bit2; RTTI cast TESObjectCELL -> OR6; otherwise preserves flags. Used by LoadForm 463930, LoadGame 465FEE/4664CD and save-side normalization 4535A0. Unknown broader meanings of flag bits outside these form-specific uses.
0x4664D2: push    ebx
0x4664D3: mov     ecx, ebp
0x4664D5: mov     edi, eax
0x4664D7: call    sub_459FA0
0x4664DC: mov     [esp+330h+var_304], eax
0x4664E0: mov     dword ptr [ebp+44h], 1FFFF000h
0x4664E7: mov     edx, [ebx]
0x4664E9: mov     edx, [edx+60h]
0x4664EC: mov     eax, edi
0x4664EE: and     eax, 1FFFF080h
0x4664F3: push    eax
0x4664F4: mov     ecx, ebx
0x4664F6: call    edx
0x4664F8: mov     esi, [esp+330h+flags]
0x4664FC: not     esi
0x4664FE: and     esi, edi
0x466500: and     esi, 0FFFh
0x466506: jz      loc_466650
0x46650C: push    0; int
0x46650E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x466513: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466518: push    0; int
0x46651A: push    ebx; void *
0x46651B: call    OblivionDynamicCast
0x466520: add     esp, 14h
0x466523: test    eax, eax
0x466525: jz      short loc_46654B
0x466527: push    0; int
0x466529: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x46652E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466533: push    0; int
0x466535: push    ebx; void *
0x466536: and     esi, 0FFFFF7FFh
0x46653C: call    OblivionDynamicCast
0x466541: add     esp, 14h
0x466544: test    eax, eax
0x466546: jz      short loc_46654B
0x466548: and     esi, 0FFFFFFBFh
0x46654B: test    esi, esi
0x46654D: jz      loc_466650
0x466553: cmp     ebx, ds:0B333C4h
0x466559: jz      loc_466650
0x46655F: mov     eax, [ebx+0Ch]
0x466562: mov     ecx, ds:0B33A98h
0x466568: push    eax; _DWORD
0x466569: call    TESDataHandler_IsFormIDCreated?
0x46656E: test    al, al
0x466570: jnz     loc_466650
0x466576: mov     eax, [ebx+0Ch]
0x466579: mov     ecx, ds:0B33A98h
0x46657F: push    eax; _DWORD
0x466580: call    TESDataHandler_IsFormIDCreated?
0x466585: test    al, al
0x466587: jz      short loc_4665B0
0x466589: mov     eax, [esp+330h+flags]
0x46658D: push    edi
0x46658E: push    eax
0x46658F: movzx   eax, byte ptr [ebx+4]
0x466593: lea     ecx, [eax+eax*2]
0x466596: mov     edx, ds:0B05E04h[ecx*4]
0x46659D: mov     eax, [ebx+0Ch]
0x4665A0: push    esi
0x4665A1: push    edx
0x4665A2: push    eax
0x4665A3: push    offset aCreatedForm08x; "Created form %08X with type %s is going"...
0x4665A8: call    PrintError
0x4665AD: add     esp, 18h
0x4665B0: mov     ecx, [esp+330h+flags]
0x4665B4: push    ecx; mode
0x4665B5: push    esi; changeFlags
0x4665B6: push    ebx; form
0x4665B7: mov     ecx, ebp; self
0x4665B9: call    TESSaveLoadGame_ResetObject; Verified: ResetObject reloads a form’s active override record. Counts override files, casts references/actors, calls UnloadForm-style buffer cleanup where needed, checks parent-cell and process constraints, finds the winning override file, and invokes TESDataHandler_LoadFormRecord under save/load guard. Callers include ResetFormForLoad 45F20E and LoadGame 4665B9.
0x4665BE: mov     ecx, ebp
0x4665C0: call    sub_45A500
0x4665C5: cmp     byte ptr [ebx+4], 30h ; '0'
0x4665C9: mov     byte ptr [esp+330h+var_2D8], al
0x4665CD: jnz     short loc_4665F5
0x4665CF: mov     edx, ds:0B33398h
0x4665D5: mov     eax, [edx+10h]
0x4665D8: mov     [esp+330h+reference], eax
0x4665DC: call    dword ptr ds:0A2808Ch
0x4665E2: cmp     eax, [esp+330h+reference]
0x4665E6: jnz     short loc_4665EE
0x4665E8: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x4665EC: jmp     short loc_4665F5
0x4665EE: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x4665F5: mov     edx, [ebx]
0x4665F7: mov     eax, [edx+6Ch]
0x4665FA: mov     ecx, ebx
0x4665FC: call    eax
0x4665FE: mov     ecx, [esp+330h+var_2D8]
0x466602: push    ecx
0x466603: mov     ecx, ebp
0x466605: call    sub_45A530
0x46660A: push    1
0x46660C: push    esi
0x46660D: push    ebx
0x46660E: mov     ecx, ebp
0x466610: call    sub_45C020; Verified behavior: post-reset reference/process reconciliation; ensures MobileObject LowProcess allocation, handles actor death state, reattaches references to loaded cells by parent cell or worldspace position, and updates scene/process state. Called by ResetFormForLoad (45F2AD), LoadGame (466610), and cell reset path 4CBFE3. Exact class method name Unknown.
0x466615: test    al, al
0x466617: jnz     short loc_466650
0x466619: movzx   edx, [esp+330h+var_310]
0x46661E: mov     eax, [esp+330h+a1]
0x466622: push    edx
0x466623: push    eax
0x466624: push    offset aInitobjectDele; "InitObject deleted form %08X with type "...
0x466629: call    PrintError
0x46662E: mov     eax, ds:0A853D4h
0x466633: mov     ecx, [esp+33Ch+var_280]
0x46663A: mov     edx, [ecx]
0x46663C: mov     edx, [edx+0Ch]
0x46663F: add     esp, 0Ch
0x466642: push    eax
0x466643: movzx   eax, word ptr [esp+334h+var_30B+1]
0x466648: push    eax
0x466649: call    edx
0x46664B: jmp     TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next
0x466650: mov     eax, [esp+330h+flags]
0x466654: mov     ecx, [ebx+0Ch]
0x466657: push    eax; flags
0x466658: push    ecx; formID
0x466659: mov     ecx, [ebp+4]; self
0x46665C: call    ChangesMap_SetChangeFlags; MEF SAVE AUDIT 2026-10-08: SR-1 recovery gate: change flags are set before buffer allocation/read, and earlier branches can reset/init the form before reaching here. A new short-read branch cannot simply skip/continue and claim atomic recovery. Establish coordinated abort/cleanup or stage input before irreversible form changes; zero-fill alone fabricates data.
0x466661: movzx   edx, word ptr [esp+330h+var_30B+1]
0x466666: push    edx
0x466667: mov     ecx, ebp
0x466669: call    sub_453500; EnginePatch v1: save-buffer allocation hook used to track record buffer base/end for later savegame parser count clamps.
0x46666E: mov     ecx, [esp+330h+stream]
0x466672: mov     esi, eax
0x466674: movzx   eax, word ptr [esp+330h+var_30B+1]
0x466679: push    eax; byteCount
0x46667A: push    esi; destination
0x46667B: push    ecx; stream
0x46667C: mov     ecx, ebp; self
0x46667E: call    SaveLoad_ReadFileBytes; MEF SAVE AUDIT 2026-10-08: SR-1 Verified propagation gap: immediate record read uses declaredUInt16 length into newly allocated buffer, but following code ignores return count, calls preparer460BC0 at466695 and virtual loader+54 at4666A7. If read is short, uninitialized tail can be consumed. v57 CreateTrackedSaveBuffer tracks allocated extent, not bytes initialized, and does not zero it.
0x466683: mov     eax, [esp+330h+flags]
0x466687: push    eax
0x466688: lea     edx, [esp+334h+a1]
0x46668C: push    ebx
0x46668D: mov     ecx, ebp
0x46668F: mov     [ebp+80h], edx
0x466695: call    sub_460BC0
0x46669A: mov     edx, [ebx]
0x46669C: mov     eax, [esp+330h+flags]
0x4666A0: mov     edx, [edx+54h]
0x4666A3: push    edi
0x4666A4: push    eax
0x4666A5: mov     ecx, ebx
0x4666A7: call    edx
0x4666A9: push    10h; Size
0x4666AB: mov     dword ptr [ebp+80h], 0
0x4666B5: call    FormHeapAlloc
0x4666BA: add     esp, 4
0x4666BD: test    eax, eax
0x4666BF: jz      short loc_4666D6
0x4666C1: mov     cl, byte ptr [esp+330h+var_30B]
0x4666C5: mov     edx, [esp+330h+flags]
0x4666C9: mov     [eax], ebx
0x4666CB: mov     [eax+4], edx
0x4666CE: mov     [eax+8], edi
0x4666D1: mov     [eax+0Ch], cl
0x4666D4: jmp     short loc_4666D8
0x4666D6: xor     eax, eax
0x4666D8: cmp     ebx, ds:0B333C4h
0x4666DE: mov     [esp+330h+reference], eax
0x4666E2: jz      short loc_4666F7
0x4666E4: lea     eax, [esp+330h+reference]
0x4666E8: push    eax; value
0x4666E9: lea     ecx, [esp+334h+self]; self
0x4666F0: call    NiTLargeArray32_AppendSlot; MEF SAVE PERF PASS2 2026-10-08: PERF-20 producer: one append per immediate non-player loaded form; player record retained separately4666F7. A16-byte record holds form+0,load flags+4,previous flags+8,save version byte+C. Null allocation still passes a null slot to append; preserve slot count/order and native failure behavior. Queue pointer/index storage is not serialized. Raw FormHeap record ownership passes to post-load finalizer45FDA0.
0x4666F5: jmp     short loc_4666FB
0x4666F7: mov     [esp+330h+arg2], eax
0x4666FB: movzx   ecx, word ptr [esp+330h+var_30B+1]
0x466700: mov     eax, [ebp+14h]
0x466703: sub     eax, ecx
0x466705: sub     eax, esi
0x466707: jz      short loc_466720
0x466709: cmp     eax, 0FFFFFFFEh
0x46670C: jz      short loc_466720
0x46670E: mov     ecx, ds:0B34D90h
0x466714: mov     edx, [ecx]
0x466716: mov     eax, [edx+18h]
0x466719: push    offset aLoadgameCallDi; "LoadGame() call did not properly empty "...
0x46671E: call    eax
0x466720: mov     dword ptr [ebp+44h], 60000000h
0x466727: mov     edx, [ebx]
0x466729: mov     eax, [edx+60h]
0x46672C: and     edi, 60000000h
0x466732: push    edi
0x466733: mov     ecx, ebx
0x466735: call    eax
0x466737: mov     ecx, [esp+330h+var_304]
0x46673B: push    ecx
0x46673C: push    ebx
0x46673D: mov     ecx, ebp
0x46673F: call    sub_45A020
0x466744: push    esi
0x466745: mov     ecx, ebp
0x466747: call    sub_452230; EnginePatch v1: save-buffer free hook used to remove tracked record ranges and avoid stale bounds during savegame loading.
0x46674C: mov     edx, [ebx+0Ch]
0x46674F: mov     ecx, [ebp+0]; self
0x466752: push    1; force
0x466754: push    edx; formID
0x466755: call    SaveLoadChangesMap_RemoveChanges;
0x46675A: mov     eax, [ebp+50h]
0x46675D: test    eax, eax
0x46675F: jz      short loc_466772
0x466761: mov     ecx, [ebp+4]; self
0x466764: push    eax; flags
0x466765: push    ebx; form
0x466766: call    ChangesMap_RemoveFormChangeFlags;
0x46676B: mov     dword ptr [ebp+50h], 0
0x466772: mov     ecx, [ebp+40h]
0x466775: test    ecx, ecx
0x466777: jz      loc_466862
0x46677D: lea     eax, [esp+330h+a1]
0x466781: push    eax
0x466782: jmp     loc_46685D
0x466787: mov     ax, word ptr [esp+330h+var_30B+1]
0x46678C: test    ax, ax
0x46678F: jz      loc_466830
0x466795: movzx   edx, ax
0x466798: mov     [esp+330h+var_2DE], cl
0x46679C: mov     cl, byte ptr [esp+330h+var_30B]
0x4667A0: add     edx, 4
0x4667A3: mov     [esp+330h+var_2DD], cl
0x4667A7: push    edx
0x4667A8: mov     ecx, ebp
0x4667AA: mov     [esp+334h+Src], ax
0x4667AF: call    sub_453500; EnginePatch v1: save-buffer allocation hook used to track record buffer base/end for later savegame parser count clamps.
0x4667B4: mov     edi, ds:0A2808Ch
0x4667BA: mov     ebx, eax
0x4667BC: mov     eax, ds:0B33398h
0x4667C1: mov     esi, [eax+10h]
0x4667C4: call    edi ; GetCurrentThreadId
0x4667C6: cmp     eax, esi
0x4667C8: jnz     short loc_4667D0
0x4667CA: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x4667CE: jmp     short loc_4667D7
0x4667D0: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x4667D7: push    4; byteCount
0x4667D9: lea     ecx, [esp+334h+Src]
0x4667DD: push    ecx; source
0x4667DE: mov     ecx, ds:0B33B00h; self
0x4667E4: call    SaveLoad_SaveData
0x4667E9: mov     edx, ds:0B33398h
0x4667EF: mov     esi, [edx+10h]
0x4667F2: call    edi ; GetCurrentThreadId
0x4667F4: cmp     eax, esi
0x4667F6: jnz     short loc_4667FE
0x4667F8: or      dword ptr [ebp+18h], 1
0x4667FC: jmp     short loc_466805
0x4667FE: or      dword ptr [ebp+18h], 40000h
0x466805: movzx   eax, word ptr [esp+330h+var_30B+1]
0x46680A: mov     ecx, [ebp+14h]
0x46680D: mov     edx, [esp+330h+stream]
0x466811: push    eax; byteCount
0x466812: push    ecx; destination
0x466813: push    edx; stream
0x466814: mov     ecx, ebp; self
0x466816: call    SaveLoad_ReadFileBytes; MEF SAVE PERF PASS2 2026-10-08: SR-1 DEFERRED EXTENSION VERIFIED: buffer length+4 allocated4667AF; length/type/version prefix initialized4667E4; this read supplies payload. EAX actual count is overwritten with flags46681B, then buffer published into incoming ChangesMap at466829 with no completion check. Incomplete payload tail remains uninitialized under native BSFile/v57 allocation behavior. Must reject before publication and preserve single ownership on failure.
0x46681B: mov     eax, [esp+330h+flags]
0x46681F: mov     ecx, [esp+330h+a1]
0x466823: push    ebx; buffer
0x466824: push    eax; flags
0x466825: push    ecx; formID
0x466826: mov     ecx, [ebp+4]; self
0x466829: call    ChangesMap_SetChangeBuffer; MEF SAVE PERF PASS2 2026-10-08: SR-1 DEFERRED EXTENSION: ChangesMap_SetChangeBuffer452CF0 assigns entry+4 after SetChangeFlags. Deferred data survives map promotion4648D9..4648E5. LoadForm46386D later activates prefix length+4; v57 range tracking records allocation/declared extent, not initialized input. Current save path465422 can write cached declared payload if retained until a later SaveGame. These are conditional downstream paths, not an observed corrupted save.
0x46682E: jmp     short loc_466842
0x466830: mov     edx, [esp+330h+flags]
0x466834: mov     eax, [esp+330h+a1]
0x466838: mov     ecx, [ebp+4]; self
0x46683B: push    edx; flags
0x46683C: push    eax; formID
0x46683D: call    ChangesMap_SetChangeFlags;
0x466842: mov     ecx, [esp+330h+a1]
0x466846: push    1; force
0x466848: push    ecx; formID
0x466849: mov     ecx, [ebp+0]; self
0x46684C: call    SaveLoadChangesMap_RemoveChanges;
0x466851: mov     ecx, [ebp+40h]
0x466854: test    ecx, ecx
0x466856: jz      short loc_466862
0x466858: lea     edx, [esp+330h+a1]
0x46685C: push    edx
0x46685D: call    sub_45AD00
0x466862: mov     al, [ebp+71h]
0x466865: mov     [ebp+7Ch], al
0x466868: mov     esi, [esp+330h+stream]
0x46686C: mov     eax, [esp+330h+var_2C8]
0x466870: add     eax, 1
0x466873: cmp     eax, [esp+330h+var_2FC]
0x466877: mov     [esp+330h+var_2C8], eax
0x46687B: jb      TESSaveLoadGame_LoadGame___ChangeRecordLoop_Top; MEF SAVE PERF PASS2 2026-10-08: SR-1 HEADER EXTENSION: backedge depends only on incremented record counter < declared count. Missing-plugin branch465D16 logs,465D32 seeks declared payload and jumps here; no successful-read/progress condition. A short-file scenario can perform remaining-count iterations of read/resolve/diagnostic/seek after EOF. This is finite count amplification, not a proved infinite loop; per-iteration loading-menu helper5AD980 may do additional work.
0x466881: mov     edi, [esp+330h+arg2]; arg2
0x466885: push    1; initializationMode
0x466887: mov     ecx, ebp; self
0x466889: call    TESSaveLoadGame_ReconcileExistingChanges; Verified: LoadGame finalization (caller 466889) ensures incoming map at manager+4, walks current map at +0, reconciles extant forms through sub45F180/ResetObject and reconstructs missing moved references from their old locations, then destroys old current map and promotes incoming map to +0. Probable Fallout homolog BGSSaveLoadGame::RevertCurrentChanges 825F1938: same existing-form reconciliation, missing moved-reference handling, and final map swap. Fallout uses TESForm::Revert and BGSReconstructFormsInAllFilesMap; Oblivion uses sub45F180 plus source-file search at 45C4F0. Note: function also has a separate game/world initialization branch; the map reconciliation and swap are in the save-load branch.
0x46688E: mov     ecx, ds:0B33A10h
0x466894: call    sub_432890
0x466899: push    1
0x46689B: push    edi
0x46689C: lea     ecx, [esp+338h+self]
0x4668A3: push    ecx
0x4668A4: mov     ecx, ebp
0x4668A6: call    TESSaveLoadGame_FinalizeLoadedForms
0x4668AB: test    edi, edi
0x4668AD: jz      short loc_4668B8
0x4668AF: push    edi
0x4668B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4668B5: add     esp, 4
0x4668B8: mov     ecx, ebp; self
0x4668BA: call    TESSaveLoadGame_ProcessDeferredDeletions
0x4668BF: mov     ecx, ebp
0x4668C1: call    sub_45C320
0x4668C6: call    sub_57A850
0x4668CB: mov     ecx, (offset qword_B3BB2C+1D4h)
0x4668D0: call    sub_675F40
0x4668D5: push    1
0x4668D7: mov     ecx, (offset qword_B3BB2C+1D4h)
0x4668DC: call    sub_673BD0
0x4668E1: push    2
0x4668E3: mov     ecx, (offset qword_B3BB2C+1D4h)
0x4668E8: call    sub_673BD0
0x4668ED: mov     ecx, ds:0B333A0h
0x4668F3: call    sub_441510
0x4668F8: push    1
0x4668FA: mov     ecx, ebp
0x4668FC: call    sub_461030
0x466901: push    esi
0x466902: mov     ecx, ebp
0x466904: call    TESSaveLoadGame_LoadTempEffectsList; [Verified] TESSaveLoadGame_LoadTempEffectsList version-gates the Temp Effects List chunk and calls ActorProcessManager_LoadTempEffects for save versions >=0x5E; earlier versions skip the chunk body.
0x466909: mov     ecx, (offset qword_B3BB2C+1D4h)
0x46690E: call    sub_677360
0x466913: mov     ecx, (offset qword_B3BB2C+1D4h)
0x466918: call    ProcessLists_RebuildNearbyActorCandidates; MEF PERF 2026-10-02: PERF-10 scoped hook candidate: ECX=B3BD00, target677A90, candidate embedded head=ECX+60=B3BD60. This connects receiver clear to the global destination used by duplicate scans. CALL bytes E8 73 11 21 00. Secondary PERF-7 load cost, not covered by v56 trimming. Only this direct caller was found.
0x46691D: mov     ecx, ds:0B33A1Ch
0x466923: call    sub_43BEB0
0x466928: mov     ecx, ebp
0x46692A: call    sub_459A90
0x46692F: mov     edx, ds:0B33398h
0x466935: mov     edi, [edx+10h]
0x466938: call    dword ptr ds:0A2808Ch
0x46693E: cmp     eax, edi
0x466940: jnz     short loc_466948
0x466942: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x466946: jmp     short loc_46694F
0x466948: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x46694F: and     dword ptr [ebp+18h], 0FFFFF7FFh
0x466956: mov     byte ptr [ebp+0A8h], 0
0x46695D: mov     ecx, ds:0B333C4h
0x466963: call    sub_65E800
0x466968: mov     ecx, ds:0B333C4h
0x46696E: call    sub_65E860
0x466973: mov     ecx, ds:0B333C4h
0x466979: push    ecx
0x46697A: call    sub_665260
0x46697F: mov     ecx, ds:0B333C4h
0x466985: call    sub_663F50
0x46698A: mov     ecx, ds:0B33A98h
0x466990: call    sub_447300
0x466995: mov     ecx, [ebp+40h]; xOBSE source Hooks_SaveLoad.cpp installs serialization load callback hook here; Blockhead registered load/new-game callbacks clear scripted head/mesh/age overrides. Source evidence only for plugin scheduling; no proof this ordering causes OCO face corruption. Capture alongside native head reconstruction during A/B cold/in-process matrix.
0x466998: test    ecx, ecx
0x46699A: mov     byte ptr [ebp+70h], 0
0x46699E: mov     byte ptr [ebp+71h], 7Dh ; '}'
0x4669A2: mov     byte ptr [ebp+7Ch], 7Dh ; '}'
0x4669A6: jz      short loc_4669CF
0x4669A8: lea     eax, [esi+3Ch]
0x4669AB: push    eax; lpString2
0x4669AC: call    TESSaveLoadGame_PrintChangeRecords?
0x4669B1: mov     edi, [ebp+40h]
0x4669B4: test    edi, edi
0x4669B6: jz      short loc_4669C8
0x4669B8: mov     ecx, edi; owner
0x4669BA: call    SaveLoad_ClearReferenceMapState; Verified: LoadGame clears the transient reference-map owner and frees it at 4669C0. Candidate: exact owner layout remains partial.
0x4669BF: push    edi
0x4669C0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4669C5: add     esp, 4
0x4669C8: mov     dword ptr [ebp+40h], 0
0x4669CF: mov     ebp, [ebp+6Ch]
0x4669D2: test    ebp, ebp
0x4669D4: jz      short loc_4669DE
0x4669D6: push    esi
0x4669D7: mov     ecx, ebp
0x4669D9: call    BSSimpleList_Remove
0x4669DE: mov     edx, [esi]
0x4669E0: mov     eax, [edx]
0x4669E2: push    1
0x4669E4: mov     ecx, esi
0x4669E6: call    eax
0x4669E8: mov     byte ptr ds:0B33B04h, 1
0x4669EF: call    dword ptr ds:0A280D0h
0x4669F5: sub     eax, [esp+330h+var_2CC]
0x4669F9: test    eax, eax
0x4669FB: mov     [esp+330h+var_2CC], eax
0x4669FF: fild    [esp+330h+var_2CC]
0x466A03: jge     short loc_466A0B
0x466A05: fadd    dword ptr ds:0A2FC78h
0x466A0B: fdiv    qword ptr ds:0A2FC70h
0x466A11: sub     esp, 8
0x466A14: lea     ecx, [esp+338h+var_218]
0x466A1B: fstp    [esp+338h+var_338]
0x466A1E: push    offset aLoadgameTook_2; "LoadGame took %.2f seconds\n"
0x466A23: push    ecx
0x466A24: call    __sprintf
0x466A29: mov     edx, [esp+340h+self.data]; Verified: pointer to uint32 backing storage.
0x466A30: push    edx
0x466A31: call    FormHeapFree; MEF SAVE PERF PASS2 2026-10-08: PERF-20 lifecycle: ordinary LoadGame completion frees local post-load array storage, so its capacity is not reused by the next load. This distinguishes recurrent queue-growth copies from PERF-19 retained ID-table high-water growth. Finalizer45FDA0 already freed per-slot records in second callback pass; do not free those records twice.
0x466A36: add     esp, 14h
0x466A39: mov     al, 1
0x466A3B: jmp     short loc_466A9C
0x466A3D: test    edi, edi
0x466A3F: jz      short loc_466A53
0x466A41: push    offset aQuicksave; "quicksave"
0x466A46: push    edi; Str
0x466A47: call    _strstr
0x466A4C: add     esp, 8
0x466A4F: test    eax, eax
0x466A51: jnz     short loc_466A6D
0x466A53: test    ebx, ebx
0x466A55: jnz     short loc_466A6D
0x466A57: mov     eax, ds:0B38740h
0x466A5C: push    ebx
0x466A5D: push    offset EmptyString
0x466A62: push    ebx
0x466A63: push    ebx
0x466A64: push    eax
0x466A65: call    ShowUIMessageBox
0x466A6A: add     esp, 14h
0x466A6D: test    esi, esi
0x466A6F: jz      short loc_466A8A
0x466A71: mov     ebp, [ebp+6Ch]
0x466A74: test    ebp, ebp
0x466A76: jz      short loc_466A80
0x466A78: push    esi
0x466A79: mov     ecx, ebp
0x466A7B: call    BSSimpleList_Remove
0x466A80: mov     edx, [esi]
0x466A82: mov     eax, [edx]
0x466A84: push    1
0x466A86: mov     ecx, esi
0x466A88: call    eax
0x466A8A: mov     ecx, [esp+330h+self.data]; Verified: pointer to uint32 backing storage.
0x466A91: push    ecx
0x466A92: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x466A97: add     esp, 4
0x466A9A: xor     al, al
0x466A9C: mov     ecx, dword ptr [esp+330h+var_C]
0x466AA3: mov     large fs:0, ecx
0x466AAA: pop     ecx
0x466AAB: pop     edi
0x466AAC: pop     esi
0x466AAD: pop     ebp
0x466AAE: pop     ebx
0x466AAF: mov     ecx, [esp+31Ch+var_10]
0x466AB6: xor     ecx, esp
0x466AB8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x466ABD: add     esp, 31Ch
0x466AC3: retn    0Ch
0x4526C0: mov     eax, [ecx+4]
0x4526C3: push    eax
0x4526C4: mov     dword ptr [ecx], offset ??_7?$NiTLargeArray@PAUFormAndFlags@@@@6B@; const NiTLargeArray<FormAndFlags *>::`vftable'
0x4526CA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4526CF: pop     ecx
0x4526D0: retn
0x9AE770: lea     ecx, [ebp-298h]
0x9AE776: jmp     loc_4526C0
0x9AE77B: mov     eax, [ebp-2D8h]
0x9AE781: push    eax
0x9AE782: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AE787: pop     ecx
0x9AE788: retn
0x9AE789: mov     eax, [ebp-2D8h]
0x9AE78F: push    eax
0x9AE790: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AE795: pop     ecx
0x9AE796: retn
0x9AE797: mov     edx, [esp+Str]
0x9AE79B: lea     eax, [edx-320h]
0x9AE7A1: mov     ecx, [edx-324h]
0x9AE7A7: xor     ecx, eax
0x9AE7A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE7AE: add     eax, 10h
0x9AE7B1: mov     ecx, [edx-4]
0x9AE7B4: xor     ecx, eax
0x9AE7B6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE7BB: mov     eax, offset stru_ADAF48
0x9AE7C0: jmp     ___CxxFrameHandler3
