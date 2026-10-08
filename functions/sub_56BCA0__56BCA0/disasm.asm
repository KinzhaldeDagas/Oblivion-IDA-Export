0x56BCA0: push    ecx; Verified base load path reads duration, elapsed and parent-cell FormID; resolves FormID, RTTI-casts to TESObjectCELL, stores at +0x0C, and succeeds only if the cell has a NiNode.
0x56BCA1: push    ebx
0x56BCA2: push    esi
0x56BCA3: mov     esi, ecx
0x56BCA5: mov     ecx, ds:0B33B00h; self
0x56BCAB: push    4; byteCount
0x56BCAD: lea     eax, [esi+8]
0x56BCB0: push    eax; destination
0x56BCB1: mov     bl, 1
0x56BCB3: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x56BCB8: push    4; byteCount
0x56BCBA: lea     ecx, [esi+10h]
0x56BCBD: push    ecx; destination
0x56BCBE: mov     ecx, ds:0B33B00h; self
0x56BCC4: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x56BCC9: mov     ecx, ds:0B33B00h; self
0x56BCCF: push    4; byteCount
0x56BCD1: lea     edx, [esp+10h+Dst]
0x56BCD5: push    edx; destination
0x56BCD6: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x56BCDB: mov     eax, [esp+14h+a1]
0x56BCDF: push    0; int
0x56BCE1: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x56BCE6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56BCEB: push    0; int
0x56BCED: push    eax; a1
0x56BCEE: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x56BCF3: add     esp, 4
0x56BCF6: push    eax; void *
0x56BCF7: call    OblivionDynamicCast
0x56BCFC: add     esp, 14h
0x56BCFF: test    eax, eax
0x56BD01: mov     [esi+0Ch], eax
0x56BD04: jz      short loc_56BD11
0x56BD06: mov     ecx, eax; object
0x56BD08: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x56BD0D: test    eax, eax
0x56BD0F: jnz     short loc_56BD17
0x56BD11: pop     esi
0x56BD12: xor     al, al
0x56BD14: pop     ebx
0x56BD15: pop     ecx
0x56BD16: retn
0x56BD17: pop     esi
0x56BD18: mov     al, bl
0x56BD1A: pop     ebx
0x56BD1B: pop     ecx
0x56BD1C: retn
