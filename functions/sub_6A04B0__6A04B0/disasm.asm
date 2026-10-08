0x6A04B0: mov     eax, [esp+Dst]; Verified (Oblivion): loads base hit-effect payload and elapsedVisualSeconds_38, then for version >=0x37 restores weaponAttachmentFlag_28, effectCode_2C, and a FormID resolved to TESBoundObject* at +0x30.
0x6A04B4: push    esi
0x6A04B5: mov     esi, ecx
0x6A04B7: mov     ecx, [esp+4+ownerActiveEffect]
0x6A04BB: push    eax; targetReference
0x6A04BC: push    ecx; ownerActiveEffect
0x6A04BD: mov     ecx, esi; this
0x6A04BF: call    MagicHitEffect_LoadExtraData; Verified load callback arguments: ownerActiveEffect is stored at +0x18 and targetReference at +0x1C; it restores elapsedSeconds and bFinished, plus durationSeconds on version 0x72+.
0x6A04C4: mov     ecx, ds:0B33B00h; self
0x6A04CA: push    4; byteCount
0x6A04CC: lea     edx, [esi+38h]
0x6A04CF: push    edx; destination
0x6A04D0: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A04D5: mov     ecx, ds:0B33B00h; self
0x6A04DB: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6A04DF: jb      short loc_6A053A
0x6A04E1: push    1; byteCount
0x6A04E3: lea     eax, [esi+28h]
0x6A04E6: push    eax; destination
0x6A04E7: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A04EC: push    4; byteCount
0x6A04EE: lea     ecx, [esi+2Ch]
0x6A04F1: push    ecx; destination
0x6A04F2: mov     ecx, ds:0B33B00h; self
0x6A04F8: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A04FD: mov     ecx, ds:0B33B00h; self
0x6A0503: push    4; byteCount
0x6A0505: lea     edx, [esp+8+Dst]
0x6A0509: push    edx; destination
0x6A050A: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x6A050F: mov     eax, [esp+0Ch]
0x6A0513: test    eax, eax
0x6A0515: jz      short loc_6A053A
0x6A0517: push    0; int
0x6A0519: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x6A051E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0523: push    0; int
0x6A0525: push    eax; a1
0x6A0526: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x6A052B: add     esp, 4
0x6A052E: push    eax; void *
0x6A052F: call    OblivionDynamicCast
0x6A0534: add     esp, 14h
0x6A0537: mov     [esi+30h], eax
0x6A053A: pop     esi
0x6A053B: retn    8
