0x4259E0: push    0FFFFFFFFh; Common ExtraDataList single-chunk dispatcher reached by REFR/ACHR/ACRE. TESFile_GetChunkData(max) semantics at 0x450C20: length 0 leaves destination unchanged; <=max copies a prefix only; >max copies max-1 and writes a terminal zero. Each explicitly zeroed scratch therefore gives deterministic malformed-width behavior; singleton setters make repeats last-wins/remove as noted per branch.
0x4259E2: push    offset ExtraDataList_Load_SEH
0x4259E7: mov     eax, large fs:0
0x4259ED: push    eax
0x4259EE: sub     esp, 18h
0x4259F1: push    ebx
0x4259F2: push    ebp
0x4259F3: push    esi
0x4259F4: push    edi
0x4259F5: mov     eax, ___security_cookie
0x4259FA: xor     eax, esp
0x4259FC: push    eax; ArgList
0x4259FD: lea     eax, [esp+38h+var_C]
0x425A01: mov     large fs:0, eax
0x425A07: mov     ebx, ecx
0x425A09: mov     edi, [esp+38h+a2]
0x425A0D: mov     ecx, edi
0x425A0F: call    TESFile_GetChunkType
0x425A14: cmp     eax, 4D434358h
0x425A19: jg      loc_425EED
0x425A1F: jz      loc_425EC8
0x425A25: cmp     eax, 47484358h
0x425A2A: jg      loc_425D17
0x425A30: jz      loc_425CF1
0x425A36: cmp     eax, 44455358h
0x425A3B: jg      loc_425BDD
0x425A41: jz      loc_425B83
0x425A47: cmp     eax, 424C4758h
0x425A4C: jz      loc_425B5E
0x425A52: cmp     eax, 434F4C58h
0x425A57: jz      short loc_425A89
0x425A59: cmp     eax, 43524D58h
0x425A5E: jnz     loc_426251
0x425A64: lea     eax, [esp+38h+a2]
0x425A68: push    eax
0x425A69: mov     ecx, edi
0x425A6B: mov     [esp+3Ch+a2], 0; XMRC: fresh zeroed bounded U32; 0 removes, nonzero sets/replaces. Common REFR/ACHR/ACRE loader accepts it regardless of narrower schema placement.
0x425A73: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425A78: mov     ecx, [esp+38h+a2]
0x425A7C: push    ecx
0x425A7D: mov     ecx, ebx
0x425A7F: call    ExtraDataList_SetMerchantContainer; Creates/updates ExtraMerchantContainer; null removes type 0x44.
0x425A84: jmp     loc_426251
0x425A89: push    31h ; '1'; a2
0x425A8B: mov     ecx, ebx; this
0x425A8D: call    BaseExtraList_GetExtraData; XLOC: reuse or create 12-byte ExtraLockData. Accepts only exact 12 (direct struct copy) or exact legacy 16 (level=byte0, key=dword4, dword8 ignored, flags=byte12). Other widths print error, remove the entire lock extra, and return. Accepted input always ORs flag bit 0; repeats update the singleton, while malformed repeats remove it.
0x425A92: mov     ebp, eax
0x425A94: xor     esi, esi
0x425A96: cmp     ebp, esi
0x425A98: jnz     short loc_425AEE
0x425A9A: push    0Ch; Size
0x425A9C: call    FormHeapAlloc
0x425AA1: add     esp, 4
0x425AA4: cmp     eax, esi; MEF v34 verified XLOC OOM guard: null 12-byte lock-data allocation must skip the unconsumed chunk at 0x426251 instead of constructing an ExtraLock around null.
0x425AA6: jz      short loc_425AB4
0x425AA8: mov     [eax+4], esi
0x425AAB: mov     byte ptr [eax], 0
0x425AAE: mov     byte ptr [eax+8], 0
0x425AB2: mov     esi, eax
0x425AB4: push    10h; Size
0x425AB6: call    FormHeapAlloc
0x425ABB: add     esp, 4
0x425ABE: mov     [esp+38h+a2], eax
0x425AC2: test    eax, eax; MEF v51 crash correction: hook entry is a JMP, so ESP is identical to vanilla. Replay the following SEH construction-state store with raw displacement [ESP+34h], not [ESP+38h]. The old bridge zeroed ExtraDataList_Load's return address on every successful XLOC wrapper allocation, producing RET to EIP 0.
0x425AC4: mov     [esp+38h+var_4], 0; Authoritative replay byte sequence is C7 44 24 34 00 00 00 00 (mov dword ptr [esp+34h],0). MEF v51 preserves this exact stack slot before continuing at 0x425ACC.
0x425ACC: jz      short loc_425AD8
0x425ACE: push    esi; lockData
0x425ACF: mov     ecx, eax; this
0x425AD1: call    ExtraLock_ctor; Verified ExtraLock constructor: initializes BSExtraData type 0x31 and wrapper vtable, clears the +8 base field, and stores the ExtraLockData* payload at +0x0C.
0x425AD6: jmp     short loc_425ADA
0x425AD8: xor     eax, eax
0x425ADA: push    eax; BSExtraData *
0x425ADB: mov     ecx, ebx; ExtraDataList *
0x425ADD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425AE5: mov     ebp, eax
0x425AE7: call    BaseExtraList_AddExtra
0x425AEC: jmp     short loc_425AF1
0x425AEE: mov     esi, [ebp+0Ch]
0x425AF1: mov     eax, [edi+254h]
0x425AF7: cmp     eax, 0Ch
0x425AFA: jnz     short loc_425B16
0x425AFC: push    eax; a4
0x425AFD: push    esi; Dst
0x425AFE: mov     ecx, edi; a1
0x425B00: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425B05: test    esi, esi
0x425B07: jz      loc_426251
0x425B0D: or      byte ptr [esi+8], 1; XLOC runtime-only load mutation verified 2026-09-05: both accepted12 andlegacy16 paths converge at0x425B05 then OR byte[lockData+8] with1 here. Thus loaded flags = serialized flags |0x01, including zero input. TESCS peers0x45F4A8/0x45F4D5 exit without this OR. CELL rich semantics expose flags by executable; lossless raw recompile/remapping preserve serialized flags. This shared-loader instruction also applies to placed owners, whose broader flag presentation is a separate audit target.
0x425B11: jmp     loc_426251
0x425B16: cmp     eax, 10h
0x425B19: jnz     short loc_425B3E
0x425B1B: push    eax; a4
0x425B1C: lea     edx, [esp+3Ch+a1]
0x425B20: push    edx; Dst
0x425B21: mov     ecx, edi; a1
0x425B23: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425B28: mov     al, byte ptr [esp+38h+var_18]
0x425B2C: mov     cl, byte ptr [esp+38h+a1]
0x425B30: mov     edx, [esp+38h+var_20]
0x425B34: mov     [esi+8], al
0x425B37: mov     [esi], cl
0x425B39: mov     [esi+4], edx
0x425B3C: jmp     short loc_425B05
0x425B3E: add     edi, 1Ch
0x425B41: push    edi; ArgList
0x425B42: push    offset aUnrecognizedFo; "Unrecognized format for lock data in fi"...
0x425B47: call    PrintError
0x425B4C: add     esp, 8
0x425B4F: push    1
0x425B51: push    ebp
0x425B52: mov     ecx, ebx
0x425B54: call    BaseExtraList_RemoveExtraByPtr
0x425B59: jmp     loc_426251
0x425B5E: lea     eax, [esp+38h+a2]
0x425B62: push    eax
0x425B63: mov     ecx, edi
0x425B65: mov     [esp+3Ch+a2], 0; XGLB: fresh zeroed bounded U32. Effective 0 removes ExtraGlobal; nonzero sets/replaces.
0x425B6D: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425B72: mov     ecx, [esp+38h+a2]
0x425B76: push    ecx; global
0x425B77: mov     ecx, ebx; this
0x425B79: call    ExtraDataList_SetGlobal; Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
0x425B7E: jmp     loc_426251
0x425B83: cmp     dword ptr [edi+254h], 4; XSED tree seed: length 4 reads a zeroed dword and uses byte0; every other length reads with max=1 from a zeroed byte (0=>0, 1=>byte, >1=>forced 0). Seed 0xFF removes ExtraSeed; other values create/replace it. Repeats are ordered last-wins/removal.
0x425B8A: mov     byte ptr [esp+38h+a2], 0
0x425B8F: jnz     short loc_425BBE
0x425B91: lea     edx, [esp+38h+a1]
0x425B95: push    edx
0x425B96: mov     ecx, edi
0x425B98: mov     [esp+3Ch+a1], 0
0x425BA0: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425BA5: mov     al, byte ptr [esp+38h+a1]
0x425BA9: mov     byte ptr [esp+38h+a2], al
0x425BAD: mov     edx, [esp+38h+a2]
0x425BB1: push    edx; seed
0x425BB2: mov     ecx, ebx; this
0x425BB4: call    ExtraDataList_SetOrRemoveTreeSeed; Verified singleton ExtraData_Seed behavior: signed byte 0xFF removes the extra; other bytes add or replace it. Combined with TESObjectTREE_GetIndexForSeed, this means an empty/missing tree seed entry cannot be persisted as a concrete per-reference seed.
0x425BB9: jmp     loc_426251
0x425BBE: push    1; a4
0x425BC0: lea     ecx, [esp+3Ch+a2]
0x425BC4: push    ecx; Dst
0x425BC5: mov     ecx, edi; a1
0x425BC7: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425BCC: mov     edx, [esp+38h+a2]
0x425BD0: push    edx; seed
0x425BD1: mov     ecx, ebx; this
0x425BD3: call    ExtraDataList_SetOrRemoveTreeSeed; Verified singleton ExtraData_Seed behavior: signed byte 0xFF removes the extra; other bytes add or replace it. Combined with TESObjectTREE_GetIndexForSeed, this means an empty/missing tree seed entry cannot be persisted as a concrete per-reference seed.
0x425BD8: jmp     loc_426251
0x425BDD: cmp     eax, 44475258h
0x425BE2: jz      short loc_425C4E
0x425BE4: cmp     eax, 444F4C58h
0x425BE9: jz      short loc_425C1B
0x425BEB: cmp     eax, 45535558h
0x425BF0: jnz     loc_426251
0x425BF6: lea     eax, [esp+38h+a2]
0x425BFA: push    eax
0x425BFB: mov     ecx, edi
0x425BFD: mov     [esp+3Ch+a2], 0; XUSE loader: fresh zeroed u32 plus bounded max-4 read, then stores only low byte in ExtraUses. Always creates/updates, including empty=>0; high 24 bits are discarded.
0x425C05: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425C0A: mov     ecx, [esp+38h+a2]
0x425C0E: push    ecx
0x425C0F: mov     ecx, ebx
0x425C11: call    ExtraDataList_SetUses; ExtraUses singleton setter always creates/updates and narrows to u8; no removal sentinel. Repeated XUSE retains node position and replaces the byte.
0x425C16: jmp     loc_426251
0x425C1B: fldz; Verified Oblivion XLOD load path defaults a NiPoint3 normal to (0,0,0.97), overlays the 12-byte chunk, and stores it in ExtraDistantData.normal_00C. Fallout's ExtraDataList::Load routes XLOD_ID to its normal setter at the same offset, despite the different ExtraData EType.
0x425C1D: push    0Ch; a4
0x425C1F: fst     [esp+3Ch+a1]; XLOD: fresh (0,0,0.97000003f) 12-byte scratch plus bounded overlay; every occurrence creates/replaces the singleton, including empty/malformed input.
0x425C23: lea     edx, [esp+3Ch+a1]
0x425C27: fstp    [esp+3Ch+var_20]
0x425C2B: push    edx; Dst
0x425C2C: fld     ds:kDistantLODNormalLimit_097
0x425C32: mov     ecx, edi; a1
0x425C34: fstp    [esp+40h+var_1C]
0x425C38: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425C3D: lea     eax, [esp+38h+a1]
0x425C41: push    eax; normal
0x425C42: mov     ecx, ebx; this
0x425C44: call    ExtraDataList_SetDistantDataNormal; Verified Oblivion setter writes the supplied NiPoint3 into ExtraDistantData.normal_00C (+0x0C..+0x17). Fallout's same-named setter uses LandNormal at the same +0x0C offset; its EType is 0x13 versus Oblivion's 0x18.
0x425C49: jmp     loc_426251
0x425C4E: push    19h; a2
0x425C50: mov     ecx, ebx; this
0x425C52: call    BaseExtraList_GetExtraData
0x425C57: mov     esi, eax
0x425C59: test    esi, esi
0x425C5B: jnz     short loc_425CC4
0x425C5D: push    10h; Size
0x425C5F: call    FormHeapAlloc
0x425C64: add     esp, 4
0x425C67: mov     [esp+38h+a2], eax
0x425C6B: test    eax, eax
0x425C6D: mov     [esp+38h+var_4], 4
0x425C75: jz      short loc_425C82; MEF v51 audited sibling ExtraData OOM bridge: restore construction state at [ESP+34h] on wrapper allocation failure.
0x425C77: mov     ecx, eax; this
0x425C79: call    ??0ExtraRagDollData@@QAE@XZ; MEF v35 cleanup proof: ExtraRagDollData constructor only sets type/vtable and zeroes fields +8/+C. Before payload attachment, direct FormHeapFree is complete cleanup.
0x425C7E: mov     esi, eax
0x425C80: jmp     short loc_425C84
0x425C82: xor     esi, esi
0x425C84: push    8; Size
0x425C86: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425C8E: call    FormHeapAlloc
0x425C93: add     esp, 4
0x425C96: mov     [esp+38h+a2], eax
0x425C9A: test    eax, eax
0x425C9C: mov     [esp+38h+var_4], 5
0x425CA4: jz      short loc_425CAF; MEF v51 audited sibling ExtraData OOM bridge: after freeing the unlinked wrapper, restore construction state at [ESP+34h].
0x425CA6: mov     ecx, eax
0x425CA8: call    sub_497210
0x425CAD: jmp     short loc_425CB1
0x425CAF: xor     eax, eax
0x425CB1: push    esi; BSExtraData *
0x425CB2: mov     ecx, ebx; ExtraDataList *
0x425CB4: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425CBC: mov     [esi+0Ch], eax
0x425CBF: call    BaseExtraList_AddExtra
0x425CC4: mov     ecx, [esi+0Ch]
0x425CC7: push    edi
0x425CC8: call    ExtraRagDollDataArray_LoadXRGD; XRGD singleton loader: count=(size/28)&0xFF, then size % count is tested instead of %28. count==0 faults (including 0..27 and canonical 256-bone size); nonzero remainder cleanly fails and the caller removes the singleton; remainder zero with size!=count*28 is accepted, allocates count*28, then reads size and overflows. Safe success is 1..255 complete 28-byte bones. Successful repeats replace count/buffer and leak the prior buffer.
0x425CCD: test    al, al
0x425CCF: jnz     loc_426251
0x425CD5: push    offset aFailedToLoadRa; "Failed to load RagDoll Data."
0x425CDA: call    PrintError
0x425CDF: add     esp, 4
0x425CE2: push    1
0x425CE4: push    esi
0x425CE5: mov     ecx, ebx
0x425CE7: call    BaseExtraList_RemoveExtraByPtr
0x425CEC: jmp     loc_426251
0x425CF1: fldz
0x425CF3: lea     ecx, [esp+38h+a2]
0x425CF7: push    ecx
0x425CF8: fstp    [esp+3Ch+a2]; XCHG: fresh zeroed 4-byte scratch, bounded max-4 read, interpreted as float bits. Empty=>0.0; short input zero-fills the untouched suffix; oversized input preserves only first 3 bytes and forces byte3=0. ExtraCharge always creates/updates, including zero; repeats last-win.
0x425CFC: mov     ecx, edi
0x425CFE: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425D03: fld     [esp+38h+a2]
0x425D07: push    ecx
0x425D08: mov     ecx, ebx
0x425D0A: fstp    [esp+3Ch+var_3C]; float
0x425D0D: call    ExtraDataList_SetCharge; Updates or creates ExtraCharge type 0x2E with the supplied float.
0x425D12: jmp     loc_426251
0x425D17: cmp     eax, 4B524D58h
0x425D1C: jg      loc_425DE4
0x425D22: jz      short loc_425D93
0x425D24: cmp     eax, 47525458h
0x425D29: jz      short loc_425D6E
0x425D2B: cmp     eax, 49435058h
0x425D30: jz      short loc_425D62
0x425D32: cmp     eax, 4B4E5258h
0x425D37: jnz     loc_426251
0x425D3D: lea     edx, [esp+38h+a2]
0x425D41: push    edx
0x425D42: mov     ecx, edi
0x425D44: mov     [esp+3Ch+a2], 0; XRNK: fresh zeroed bounded U32 interpreted as signed int32. Effective -1 removes ExtraRank; all other values, including 0, set/replace.
0x425D4C: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425D51: mov     eax, [esp+38h+a2]
0x425D55: push    eax; rank
0x425D56: mov     ecx, ebx; this
0x425D58: call    ExtraDataList_SetRank; Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
0x425D5D: jmp     loc_426251
0x425D62: mov     ecx, edi
0x425D64: call    TESFile_GetNextChunk
0x425D69: jmp     loc_426251
0x425D6E: lea     ecx, [esp+38h+a2]
0x425D72: push    ecx
0x425D73: mov     ecx, edi
0x425D75: mov     [esp+3Ch+a2], 0; XTRG: fresh zeroed bounded U32; 0 removes, nonzero sets/replaces. Common REFR/ACHR/ACRE loader accepts it.
0x425D7D: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425D82: mov     edx, [esp+38h+a2]
0x425D86: push    edx
0x425D87: mov     ecx, ebx
0x425D89: call    ExtraDataList_SetXTarget; Sets ExtraXTarget; null removes type 0x4D, otherwise updates or creates it.
0x425D8E: jmp     loc_426251
0x425D93: mov     ecx, ebx
0x425D95: call    ExtraDataList_MapMarker
0x425D9A: mov     esi, eax; XMRK: create a zeroed MapMarkerData only if absent, otherwise reuse inherited/current data, then call the internal companion-stream loader. The helper itself advances over FNAM/FULL/TNAM; outer dispatch must not process those consumed chunks. Loader failure is ignored and can leave a partially updated/default marker.
0x425D9C: test    esi, esi
0x425D9E: jnz     short loc_425DD7
0x425DA0: push    10h; Size
0x425DA2: call    FormHeapAlloc
0x425DA7: add     esp, 4
0x425DAA: mov     [esp+38h+a2], eax
0x425DAE: test    eax, eax
0x425DB0: mov     [esp+38h+var_4], 2
0x425DB8: jz      short loc_425DC3; MEF v51 audited sibling ExtraData OOM bridge: JMP entry means SEH state restoration uses [ESP+34h]. Previous +38h failure-only path would corrupt the return slot.
0x425DBA: mov     ecx, eax; this
0x425DBC: call    MapMarkerData_ctor; MapMarkerData constructor zeros TESFullName storage, FNAM flags byte, and TNAM u16 type. unused0D is not explicitly initialized.
0x425DC1: jmp     short loc_425DC5
0x425DC3: xor     eax, eax
0x425DC5: push    eax; data
0x425DC6: mov     ecx, ebx; this
0x425DC8: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425DD0: mov     esi, eax
0x425DD2: call    ExtraDataList_SetMapMarkerData
0x425DD7: push    edi; tesFile
0x425DD8: mov     ecx, esi; this
0x425DDA: call    MapMarkerData_LoadXMRKSequence; XMRK companion loader owns cursor advancement. After XMRK it advances once, optionally consumes adjacent FNAM, requires/loads adjacent FULL, then advances and requires/loads adjacent TNAM. A nonmatching chunk at either required position is swallowed from outer dispatch. FNAM max1: empty retains, exact1 replaces, >1 forces 0. TNAM max2: empty retains, exact/short prefix-overlays existing u16, >2 keeps byte0 and forces byte1=0. FULL empty clears; nonempty replaces via unbounded read+strlen and is unsafe without terminal NUL. Existing marker state is reused across repeated/partial sequences.
0x425DDF: jmp     loc_426251
0x425DE4: cmp     eax, 4C455458h
0x425DE9: jz      loc_425E77
0x425DEF: cmp     eax, 4C4F5358h
0x425DF4: jz      short loc_425E45
0x425DF6: cmp     eax, 4C535058h
0x425DFB: jnz     loc_426251
0x425E01: xor     eax, eax
0x425E03: mov     [esp+38h+a1], eax; XPSL loader: fresh zeroed 20-byte bounded scratch. Dword0=start-location FormID, dwords1..3=position XYZ, dword4=rotZ. First creation stores all; repeats replace FormID/XYZ but preserve first rotZ.
0x425E07: mov     [esp+38h+var_20], eax
0x425E0B: mov     [esp+38h+var_1C], eax
0x425E0F: mov     [esp+38h+var_18], eax
0x425E13: mov     [esp+38h+var_14], eax
0x425E17: push    14h; a4
0x425E19: lea     eax, [esp+3Ch+a1]
0x425E1D: push    eax; Dst
0x425E1E: mov     ecx, edi; a1
0x425E20: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425E25: fld     [esp+38h+var_14]
0x425E29: mov     edx, [esp+38h+a1]
0x425E2D: push    ecx
0x425E2E: fstp    [esp+3Ch+var_3C]; float
0x425E31: lea     ecx, [esp+3Ch+var_20]
0x425E35: push    ecx; int
0x425E36: push    0; int
0x425E38: push    edx; int
0x425E39: mov     ecx, ebx
0x425E3B: call    ExtraDataList_SetStartLocation; ExtraPackageStartLocation setter: first creation stores selected location FormID, XYZ, and rotZ; updating an extant singleton replaces only location/XYZ and preserves existing rotZ.
0x425E40: jmp     loc_426251
0x425E45: cmp     dword ptr [edi+254h], 1
0x425E4C: jnz     loc_426251; XSOL: processed only when chunk length is exactly 1. Valid input reads one byte and creates/updates ExtraSoul, including zero/0xFF; all other widths are ignored without changing inherited/current soul data. Repeated valid chunks last-win.
0x425E52: push    1; a4
0x425E54: lea     eax, [esp+3Ch+a2]
0x425E58: push    eax; Dst
0x425E59: mov     ecx, edi; a1
0x425E5B: mov     byte ptr [esp+40h+a2], 0
0x425E60: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x425E65: movsx   ecx, byte ptr [esp+38h+a2]
0x425E6A: push    ecx
0x425E6B: mov     ecx, ebx
0x425E6D: call    BaseExtraList_SetSoulLevel
0x425E72: jmp     loc_426251
0x425E77: mov     ecx, ebx; this
0x425E79: call    ExtraDataList_GetTeleport
0x425E7E: mov     esi, eax; XTEL: reuse existing TeleportData or allocate one initialized to FLT_MAX sentinels/linkedDoor NULL. TeleportData_LoadXTEL then reads into a fresh zeroed 28-byte scratch and overwrites all seven dwords, so empty=>all zero, short=>prefix+zeros, >28=>first 27 bytes+forced zero. Repeats replace the whole singleton state.
0x425E80: test    esi, esi
0x425E82: jnz     short loc_425EBB
0x425E84: push    1Ch; Size
0x425E86: call    FormHeapAlloc
0x425E8B: add     esp, 4
0x425E8E: mov     [esp+38h+a2], eax
0x425E92: test    eax, eax
0x425E94: mov     [esp+38h+var_4], 1
0x425E9C: jz      short loc_425EA7; MEF v51 audited sibling ExtraData OOM bridge: restore construction state at [ESP+34h] on allocation failure.
0x425E9E: mov     ecx, eax; this
0x425EA0: call    TeleportData_InitSentinels; TeleportData constructor initializes linkedDoor=NULL and all six transform floats to FLT_MAX sentinels. Any XTEL immediately replaces them from a fresh zeroed scratch in TeleportData_LoadXTEL.
0x425EA5: jmp     short loc_425EA9
0x425EA7: xor     eax, eax
0x425EA9: push    eax
0x425EAA: mov     ecx, ebx
0x425EAC: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x425EB4: mov     esi, eax
0x425EB6: call    ExtraDataList__SetTeleportData
0x425EBB: push    edi; tesFile
0x425EBC: mov     ecx, esi; this
0x425EBE: call    TeleportData_LoadXTEL; XTEL loader: verifies current type, zero-initializes 28-byte scratch every call, bounded-read max 28, then copies all seven dwords to TeleportData. Empty therefore clears all; short is prefix+zero; oversized is 27 bytes plus forced final zero; repeats replace rather than prefix-overlay prior data.
0x425EC3: jmp     loc_426251
0x425EC8: lea     edx, [esp+38h+a2]
0x425ECC: push    edx
0x425ECD: mov     ecx, edi
0x425ECF: mov     [esp+3Ch+a2], 0
0x425ED7: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425EDC: mov     eax, [esp+38h+a2]
0x425EE0: push    eax; climate
0x425EE1: mov     ecx, ebx; this
0x425EE3: call    TESObjectCELL_SetInteriorClimate; Oblivion common XCCM path uses a fresh zeroed bounded U32 then TESObjectCELL_SetInteriorClimate; it installs ExtraCellClimate with no owner-class guard. The subsequent common LinkFormIDs climate case0x0C at0x426429 validates the target as TESClimate and removes failure. Shared writer emits retained XCCM as exact4.
0x425EE8: jmp     loc_426251
0x425EED: cmp     eax, 53524858h
0x425EF2: jg      loc_426145
0x425EF8: jz      loc_426120
0x425EFE: cmp     eax, 4E535058h
0x425F03: jg      loc_425FBD
0x425F09: jz      loc_425F98
0x425F0F: cmp     eax, 4D434C58h
0x425F14: jz      short loc_425F73
0x425F16: cmp     eax, 4D495458h
0x425F1B: jz      short loc_425F4D
0x425F1D: cmp     eax, 4D545258h
0x425F22: jnz     loc_426251
0x425F28: lea     ecx, [esp+38h+a2]
0x425F2C: push    ecx
0x425F2D: mov     ecx, edi
0x425F2F: mov     [esp+3Ch+a2], 0; XRTM: fresh zeroed bounded U32; 0 removes, nonzero sets/replaces. Common REFR/ACHR/ACRE loader accepts it.
0x425F37: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425F3C: mov     edx, [esp+38h+a2]
0x425F40: push    edx; markerReference
0x425F41: mov     ecx, ebx; this
0x425F43: call    ExtraDataList_SetRandomTeleportMarker; Verified ExtraDataList random-marker setter: null removes ExtraData type 0x43; non-null updates or allocates an ExtraRandomTeleportMarker and stores the TESObjectREFR* marker at +0x0C.
0x425F48: jmp     loc_426251
0x425F4D: fldz
0x425F4F: lea     eax, [esp+38h+a2]
0x425F53: push    eax
0x425F54: fstp    [esp+3Ch+a2]; XTIM loader: fresh zeroed u32 plus bounded max-4 read, bit-cast as float32 into ExtraTimeLeft. Always creates/updates, including zero/NaN; repeats last-win.
0x425F58: mov     ecx, edi
0x425F5A: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425F5F: fld     [esp+38h+a2]
0x425F63: push    ecx
0x425F64: mov     ecx, ebx
0x425F66: fstp    [esp+3Ch+var_3C]; float
0x425F69: call    ExtraDataList_SetTimeLeft; ExtraTimeLeft singleton setter always creates/updates the supplied float32 bit pattern; no zero or NaN removal sentinel.
0x425F6E: jmp     loc_426251
0x425F73: lea     ecx, [esp+38h+a4]
0x425F77: push    ecx
0x425F78: mov     ecx, edi
0x425F7A: mov     [esp+3Ch+a4], 0; XLCM: fresh zeroed dword plus bounded max-4 read. Zero removes ExtraLevCreaModifier; nonzero creates/replaces. Short input is prefix+zeros; oversized preserves 3 bytes and forces byte3=0. Repeats can replace or remove inherited/current state.
0x425F82: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425F87: mov     edx, [esp+38h+a4]
0x425F8B: push    edx
0x425F8C: mov     ecx, ebx
0x425F8E: call    ExtraDataList_SetLevCreaModifier; Creates/updates ExtraLevCreaModifier; null removes type 0x24.
0x425F93: jmp     loc_426251
0x425F98: lea     eax, [esp+38h+a2]
0x425F9C: push    eax
0x425F9D: mov     ecx, edi
0x425F9F: mov     [esp+3Ch+a2], 0; XPSN loader: fresh zeroed u32 plus bounded max-4 read, then always creates/updates raw ExtraPoison FormID. ResolveLoadedFormIDs later requires AlchemyItem and removes invalid state.
0x425FA7: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x425FAC: mov     ecx, [esp+38h+a2]
0x425FB0: push    ecx
0x425FB1: mov     ecx, ebx
0x425FB3: call    ExtraDataList_SetPoison; ExtraPoison setter always creates/updates raw serialized FormID, including zero. Post-load resolution removes zero/unresolved/non-AlchemyItem targets.
0x425FB8: jmp     loc_426251
0x425FBD: cmp     eax, 4E574F58h
0x425FC2: jz      loc_4260FB
0x425FC8: cmp     eax, 50534558h
0x425FCD: jz      loc_4260C6
0x425FD3: cmp     eax, 524C4358h
0x425FD8: jnz     loc_426251
0x425FDE: mov     eax, [edi+254h]
0x425FE4: mov     ebp, eax
0x425FE6: shr     ebp, 2
0x425FE9: test    al, 3
0x425FEB: mov     [esp+38h+a4], eax
0x425FEF: jz      short loc_426007
0x425FF1: add     edi, 1Ch
0x425FF4: push    edi; ArgList
0x425FF5: push    offset aInvalidExtraDa; "Invalid Extra Data - Region List in fil"...
0x425FFA: call    PrintError
0x425FFF: add     esp, 8
0x426002: jmp     loc_426251
0x426007: push    10h; Size
0x426009: call    FormHeapAlloc
0x42600E: add     esp, 4
0x426011: mov     [esp+38h+a2], eax
0x426015: test    eax, eax
0x426017: mov     [esp+38h+var_4], 3
0x42601F: jz      short loc_426030; MEF v51 audited sibling ExtraData OOM bridge: restore construction state at [ESP+34h] on region-list allocation failure.
0x426021: push    0
0x426023: mov     ecx, eax
0x426025: call    TESRegionList_constr; Verified: mode byte at +0xC controls ownership and shared region-data cache lifetime. Owning lists reset cache on first owner and increment the manager/list refcount.
0x42602A: mov     [esp+38h+a2], eax
0x42602E: jmp     short loc_426038
0x426030: mov     [esp+38h+a2], 0
0x426038: xor     ecx, ecx
0x42603A: mov     eax, ebp
0x42603C: mov     edx, 4
0x426041: mul     edx
0x426043: seto    cl
0x426046: mov     [esp+38h+var_4], 0FFFFFFFFh
0x42604E: neg     ecx
0x426050: or      ecx, eax
0x426052: push    ecx; Size
0x426053: call    FormHeapAlloc; MEF v51 bridge-stack audit: replacement CALL entry adds return and retains pending size. Vanilla region-list object is [ESP+3Ch] before size push/call, therefore bridge cleanup pointer [ESP+44h] is exact.
0x426058: mov     ecx, [esp+3Ch+a4]
0x42605C: add     esp, 4
0x42605F: push    ecx; a4
0x426060: push    eax; Dst
0x426061: mov     ecx, edi; a1
0x426063: mov     [esp+40h+a1], eax
0x426067: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x42606C: test    ebp, ebp
0x42606E: jbe     short loc_4260A8
0x426070: mov     esi, [esp+38h+a1]
0x426074: push    edi; a2
0x426075: push    esi; a1
0x426076: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x42607B: mov     edx, g_TESDataHandler; Verified singleton pointer: allocated as TESDataHandler (0xCE0 bytes) and published at TES_constr 441B8A; passed to LoadFiles and form APIs; TES_destr 446915 destroys and clears it. Field +0x74 is the Global list head used by TESSaveLoadGame_LoadGlobalValues; surrounding layout remains Unknown.
0x426081: mov     eax, [esi]
0x426083: mov     ecx, [edx+0BCh]; self
0x426089: add     esp, 8
0x42608C: push    eax; formID
0x42608D: call    TESRegionList_FindRegionByFormID; Verified: linear search over region list comparing TESRegion formID at object offset +0x0C.
0x426092: test    eax, eax
0x426094: jz      short loc_4260A0
0x426096: mov     ecx, [esp+38h+a2]; self
0x42609A: push    eax; region
0x42609B: call    TESRegionList_AddUniqueRegion; Verified: inserts region only when not already present, preserving unique TESRegion membership.
0x4260A0: add     esi, 4
0x4260A3: sub     ebp, 1
0x4260A6: jnz     short loc_426074
0x4260A8: mov     ecx, [esp+38h+a2]
0x4260AC: push    ecx
0x4260AD: mov     ecx, ebx
0x4260AF: call    ExtraDataList_SetRegionList; 0x4241E0: Named ExtraDataList_SetRegionList after direct decompilation: a nonnull candidate list replaces/frees prior region-list payload; null removes type8. Shared XCLR calls this for placed reference and CELL owners, with no record-kind gate.
0x4260B4: mov     edx, [esp+38h+a1]
0x4260B8: push    edx
0x4260B9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4260BE: add     esp, 4
0x4260C1: jmp     loc_426251; MEF v33 XCLR allocation-failure continuation. Matches the invalid-length behavior: leave the current chunk unconsumed for the outer loader and exit this ExtraDataList_Load dispatch.
0x4260C6: xor     eax, eax
0x4260C8: mov     [esp+38h+a1], eax; XESP: fresh zeroed bounded 8-byte scratch. Parent dword0 zero removes; otherwise set/replaces. Byte4 is stored verbatim as u8 flags; bytes5..7 are ignored.
0x4260CC: mov     [esp+38h+var_20], eax
0x4260D0: push    8; a4
0x4260D2: lea     eax, [esp+3Ch+a1]
0x4260D6: push    eax; Dst
0x4260D7: mov     ecx, edi; a1
0x4260D9: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4260DE: mov     ecx, [esp+38h+a1]
0x4260E2: push    ecx
0x4260E3: mov     ecx, ebx
0x4260E5: call    ExtraDataList_SetEnableStateParent; Creates or updates ExtraEnableStateParent; a null parent removes extra type 0x3F.
0x4260EA: mov     edx, [esp+38h+var_20]
0x4260EE: push    edx
0x4260EF: mov     ecx, ebx
0x4260F1: call    ExtraDataList_SetEnableStateFlags; Replaces the complete ExtraEnableStateParent flags byte.
0x4260F6: jmp     loc_426251
0x4260FB: lea     eax, [esp+38h+a2]
0x4260FF: push    eax
0x426100: mov     ecx, edi
0x426102: mov     [esp+3Ch+a2], 0; XOWN: fresh zeroed bounded U32 per occurrence. Effective 0 removes ExtraOwnership; nonzero sets/replaces. Short input overlays zero; >4 copies first3 and forces high byte zero.
0x42610A: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x42610F: mov     ecx, [esp+38h+a2]
0x426113: push    ecx; owner
0x426114: mov     ecx, ebx; this
0x426116: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x42611B: jmp     loc_426251
0x426120: lea     edx, [esp+38h+a2]
0x426124: push    edx
0x426125: mov     ecx, edi
0x426127: mov     [esp+3Ch+a2], 0; XHRS: fresh zeroed bounded U32; 0 removes, nonzero sets/replaces. Common REFR/ACHR/ACRE loader accepts it.
0x42612F: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x426134: mov     eax, [esp+38h+a2]
0x426138: push    eax
0x426139: mov     ecx, ebx
0x42613B: call    ExtraDataList_SetTravelHorse; Creates/updates ExtraTravelHorse type 0x58; null removes the travel-horse link.
0x426140: jmp     loc_426251
0x426145: cmp     eax, 544E4358h
0x42614A: jg      loc_426200
0x426150: jz      loc_4261DE
0x426156: cmp     eax, 54434158h
0x42615B: jz      short loc_4261BC
0x42615D: cmp     eax, 544C4858h
0x426162: jz      short loc_426194
0x426164: cmp     eax, 544D4358h
0x426169: jnz     loc_426251
0x42616F: push    1; a4
0x426171: lea     ecx, [esp+3Ch+a2]
0x426175: push    ecx; Dst
0x426176: mov     ecx, edi; a1
0x426178: mov     byte ptr [esp+40h+a2], 0
0x42617D: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x426182: movsx   edx, byte ptr [esp+38h+a2]
0x426187: push    edx
0x426188: mov     ecx, ebx
0x42618A: call    ExtraDataList_SetCellMusicType; Oblivion common XCMT loader reads a fresh zeroed byte with bounded max1 and calls ExtraDataList_SetCellMusicType0x4242C0. Zero removes; nonzero stores the byte regardless of owner. Shared writer case0x0B emits retained XCMT size1. xEdit declares the field on CELL.
0x42618F: jmp     loc_426251
0x426194: lea     eax, [esp+38h+a2]
0x426198: push    eax
0x426199: mov     ecx, edi
0x42619B: mov     [esp+3Ch+a2], 0; XHLT: fresh zeroed signed dword plus bounded max-4 read, then FILD converts SInt32 to runtime float ExtraHealth. Empty=>0.0; short=>sign/value from prefix+zeros; oversized=>first 3 bytes with high byte forced zero. Zero is retained as an ExtraHealth singleton; repeats last-win.
0x4261A3: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x4261A8: fild    [esp+38h+a2]
0x4261AC: push    ecx
0x4261AD: mov     ecx, ebx
0x4261AF: fstp    [esp+3Ch+var_3C]; float
0x4261B2: call    ExtraDataList_SetHealthValue
0x4261B7: jmp     loc_426251
0x4261BC: lea     ecx, [esp+38h+a2]
0x4261C0: push    ecx
0x4261C1: mov     ecx, edi
0x4261C3: mov     [esp+3Ch+a2], 0; XACT: fresh zeroed dword plus bounded max-4 read; setter consumes only byte0 as action flags. Value 1 is default and removes/omits ExtraAction only when no companion action state exists; other values create/replace. Later XACT can clear ONAM/open bit 0x08 because it replaces the whole flag byte.
0x4261CB: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x4261D0: mov     edx, [esp+38h+a2]
0x4261D4: push    edx; flags
0x4261D5: mov     ecx, ebx; this
0x4261D7: call    ExtraDataList_SetActionFlags; Replace ExtraAction flag byte. Default value 1 removes/omits the extra only when its companion action-state dword is zero; otherwise retain/update. This is the XACT consumer.
0x4261DC: jmp     short loc_426251
0x4261DE: lea     eax, [esp+38h+a2]
0x4261E2: push    eax
0x4261E3: mov     ecx, edi
0x4261E5: mov     [esp+3Ch+a2], 0; XCNT: fresh zeroed dword plus bounded max-4 read; setter consumes signed/low 16-bit count. Counts 0 or 1 remove ExtraCount (implicit default count), all other low-16 values create/replace. Repeats are ordered replace/remove.
0x4261ED: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x4261F2: mov     ecx, [esp+38h+a2]
0x4261F6: push    ecx
0x4261F7: mov     ecx, ebx
0x4261F9: call    ExtraDataList_SetExtraCount
0x4261FE: jmp     short loc_426251
0x426200: cmp     eax, 54574358h
0x426205: jz      short loc_426231
0x426207: cmp     eax, 574C4358h
0x42620C: jnz     short loc_426251
0x42620E: fldz
0x426210: lea     edx, [esp+38h+a2]
0x426214: push    edx
0x426215: fstp    [esp+3Ch+a2]
0x426219: mov     ecx, edi
0x42621B: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x426220: fld     [esp+38h+a2]
0x426224: push    ecx
0x426225: mov     ecx, ebx
0x426227: fstp    [esp+3Ch+var_3C]; float
0x42622A: call    ExtraDataList_SetWaterHeight; Oblivion common XCLW loader reads fresh-zero bounded U32, bitcasts float, then calls ExtraDataList_SetWaterHeight0x423FF0. Either signed zero removes; nonzero and NaN values store/update. Common writer case4 emits retained raw float bits as exact4, with no owner-type filter.
0x42622F: jmp     short loc_426251
0x426231: lea     eax, [esp+38h+a2]
0x426235: push    eax
0x426236: mov     ecx, edi
0x426238: mov     [esp+3Ch+a2], 0
0x426240: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x426245: mov     ecx, [esp+38h+a2]
0x426249: push    ecx
0x42624A: mov     ecx, ebx
0x42624C: call    ExtraDataList_SetWaterType; Oblivion common XCWT loader uses fresh-zero bounded U32 then ExtraDataList_SetWaterType; no owner filter. Shared LinkFormIDs water case0x05 casts to TESWaterForm and removes unresolved/wrong-kind data. Common writer emits retained XCWT size4.
0x426251: mov     ecx, [esp+38h+var_C]; MEF v34 shared pre-consumption ExtraDataList_Load allocation-failure exit for XLOC/XMRK/XTEL.
0x426255: mov     large fs:0, ecx
0x42625C: pop     ecx
0x42625D: pop     edi
0x42625E: pop     esi
0x42625F: pop     ebp
0x426260: pop     ebx
0x426261: add     esp, 24h
0x426264: retn    8
0x9AB8C0: mov     eax, [ebp+4]
0x9AB8C3: push    eax
0x9AB8C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB8C9: pop     ecx
0x9AB8CA: retn
0x9AB8CB: mov     eax, [ebp+4]
0x9AB8CE: push    eax
0x9AB8CF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB8D4: pop     ecx
0x9AB8D5: retn
0x9AB8D6: mov     eax, [ebp+4]
0x9AB8D9: push    eax
0x9AB8DA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB8DF: pop     ecx
0x9AB8E0: retn
0x9AB8E1: mov     eax, [ebp+4]
0x9AB8E4: push    eax
0x9AB8E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB8EA: pop     ecx
0x9AB8EB: retn
0x9AB8EC: mov     eax, [ebp+4]
0x9AB8EF: push    eax
0x9AB8F0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB8F5: pop     ecx
0x9AB8F6: retn
0x9AB8F7: mov     eax, [ebp+4]
0x9AB8FA: push    eax
0x9AB8FB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AB900: pop     ecx
0x9AB901: retn
0x9AB902: mov     edx, [esp+owner]
0x9AB906: lea     eax, [edx-28h]
0x9AB909: mov     ecx, [edx-2Ch]
0x9AB90C: xor     ecx, eax
0x9AB90E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB913: mov     eax, offset stru_AD8708
0x9AB918: jmp     ___CxxFrameHandler3
