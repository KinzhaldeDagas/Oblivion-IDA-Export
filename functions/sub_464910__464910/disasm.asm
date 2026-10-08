0x464910: mov     eax, ds:0B33398h; Verified: called by TESObjectCELL_LinkForm at 4CDA22. Requires save-load flag bit 0; loads the cell via LoadForm then restores references indexed for that cell. Interior path drains cellID->referenceID list. Exterior path selects worldspace map, scans records by exact cell X/Y, restores matching references, and removes consumed records/empty containers. Probable Fallout homolog BGSSaveLoadReferencesMap::LoadReferencesForCell 825F9CB8; Fallout derives a cell-coordinate key and reads an ID array, while Oblivion linearly scans linked records per worldspace.
0x464915: sub     esp, 10h; MEF v58 PERF18 consumer scope: wrapper at464910 tracks TLS depth and invalidates on abnormal unwind; nested consumers refuse indexing, preventing callback-time cache publication during outer restoration. Top-level negative queries can reuse state across normal invocations. AddReference, map ctor/dtor scopes suspend queries; existing generic-map/pressure observers invalidate before native work.
0x464918: push    ebx
0x464919: push    esi
0x46491A: mov     esi, [eax+10h]
0x46491D: mov     ebx, ecx
0x46491F: call    dword ptr ds:0A2808Ch
0x464925: cmp     eax, esi
0x464927: jnz     short loc_46492E
0x464929: mov     al, [ebx+18h]
0x46492C: jmp     short loc_464934
0x46492E: mov     eax, [ebx+18h]
0x464931: shr     eax, 12h
0x464934: and     al, 1
0x464936: test    al, al
0x464938: jnz     short loc_464942
0x46493A: pop     esi
0x46493B: pop     ebx
0x46493C: add     esp, 10h
0x46493F: retn    4
0x464942: mov     esi, [esp+18h+cell]
0x464946: push    edi
0x464947: push    esi
0x464948: mov     ecx, ebx
0x46494A: call    TESSaveLoadGame_LoadForm
0x46494F: mov     ecx, esi; this
0x464951: mov     [esp+1Ch+var_D], al
0x464955: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x46495A: test    al, al
0x46495C: jz      short loc_4649C8
0x46495E: mov     esi, [esi+0Ch]
0x464961: lea     ecx, [esp+1Ch+var_C]
0x464965: push    ecx
0x464966: mov     ecx, [ebx+8]
0x464969: push    esi
0x46496A: call    NiTMap_GetAt
0x46496F: test    al, al
0x464971: jz      loc_464AA0
0x464977: mov     edi, [esp+1Ch+var_C]
0x46497B: test    edi, edi
0x46497D: mov     esi, edi
0x46497F: jz      short loc_46499B
0x464981: mov     eax, [esi]
0x464983: test    eax, eax
0x464985: jz      short loc_464994
0x464987: push    eax; referenceID
0x464988: mov     ecx, ebx; self
0x46498A: call    TESSaveLoadGame_RestoreChangedReference;  Verified: keyed lookup of ChangeData by reference FormID. If flags bit 1 is set, copies a 36-byte initial-reference record from savedFormBuffer+4, resolves the two embedded FormIDs, creates the reference, and calls LoadForm unless RTTI identifies MagicProjectile (which it immediately deletes). Otherwise negative flags select the 44-byte moved-reference record; resolves primary/fallback location IDs, reconstructs from source-location override files, loads, then removes the reference ID from manager deferred list. Probable Fallout homolog BGSSaveLoadReferencesMap::LoadChangedReference at 825F9840; both classify a saved ref, consume its change-map buffer, create/move and load it. Verified divergence: Oblivion uses 36/44-byte records and FormID table; Fallout uses compact initial-data structs and BGS numeric ID indices. Verified: created data copy size 0x24; source is owned ChangeData buffer after 4-byte header. Payload structure attached as OblivionCreatedReferenceInitialData. Verified flag classification: Chan
0x46498F: mov     [esp+1Ch+var_D], 1
0x464994: mov     esi, [esi+4]
0x464997: test    esi, esi
0x464999: jnz     short loc_464981
0x46499B: mov     edx, [esp+1Ch+cell]
0x46499F: mov     eax, [edx+0Ch]
0x4649A2: mov     ecx, [ebx+8]
0x4649A5: push    eax
0x4649A6: call    NiTMap_RemoveAt
0x4649AB: mov     ecx, edi
0x4649AD: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x4649B2: push    edi
0x4649B3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4649B8: mov     al, [esp+20h+var_D]
0x4649BC: add     esp, 4
0x4649BF: pop     edi
0x4649C0: pop     esi
0x4649C1: pop     ebx
0x4649C2: add     esp, 10h
0x4649C5: retn    4
0x4649C8: mov     ecx, esi; this
0x4649CA: call    TESObjectCELL_GetWorldSpace
0x4649CF: mov     eax, [eax+0Ch]
0x4649D2: lea     ecx, [esp+1Ch+var_C]
0x4649D6: push    ecx
0x4649D7: mov     ecx, [ebx+0Ch]
0x4649DA: push    eax
0x4649DB: call    NiTMap_GetAt; MEF SAVE AUDIT 2026-10-08: PERF-18 partition boundary: map key is worldspace FormID, not cell coordinates. Initial head comes from this GetAt on owner+C; same world's unrelated pending references are revisited for each loaded cell. Auxiliary index must include worldspace plus both signed stored coordinate words, not merely cellFormID.
0x4649E0: test    al, al
0x4649E2: jz      loc_464AA0
0x4649E8: mov     edi, [esp+1Ch+var_C]
0x4649EC: push    ebp
0x4649ED: mov     ecx, esi; this
0x4649EF: xor     ebp, ebp
0x4649F1: call    TESObjectCELL_GetXCoordinate
0x4649F6: mov     ecx, esi; this
0x4649F8: mov     [esp+20h+var_8], eax
0x4649FC: call    TESObjectCELL_GetYCoordinate
0x464A01: mov     [esp+20h+var_4], eax
0x464A05: mov     eax, edi; MEF v58 PERF18 staged query bridge: after cell LoadForm/map lookup/coordinate getters; EBX=owner,EDI=list, X=[ESP+18],Y=[ESP+1C]. Only a proven absent coordinate pair skips to464A74 with EAX=list. Positive/refused cases replay MOV EAX,EDI/TEST/JZ and continue464A0B. Preserve x87/XMM state; list cleanup and saved EBP remain native. Two bounded main-thread TLS coordinate tables own no engine nodes/records.
0x464A07: test    eax, eax
0x464A09: jz      short loc_464A74
0x464A0B: jmp     short loc_464A10; MEF SAVE AUDIT 2026-10-08: PERF-18 full-list scan: each nonnull record tested at+4 X and+8 Y; match restores ID at+0, unlinks/frees record, then loop continues rather than stopping after one match. Preserve native match order, duplicate records and initial LoadForm return contribution.
0x464A10: mov     esi, [edi]; MEF SAVE AUDIT 2026-10-08: PERF-18 full-list scan: each nonnull record tested at+4 X and+8 Y; match restores ID at+0, unlinks/frees record, then loop continues rather than stopping after one match. Preserve native match order, duplicate records and initial LoadForm return contribution.
0x464A12: test    esi, esi
0x464A14: jz      short loc_464A63
0x464A16: mov     edx, [esp+20h+var_8]
0x464A1A: cmp     edx, [esi+4]
0x464A1D: jnz     short loc_464A63
0x464A1F: mov     eax, [esp+20h+var_4]
0x464A23: cmp     eax, [esi+8]
0x464A26: jnz     short loc_464A63
0x464A28: mov     ecx, [esi]
0x464A2A: push    ecx; referenceID
0x464A2B: mov     ecx, ebx; self
0x464A2D: call    TESSaveLoadGame_RestoreChangedReference;  Verified: keyed lookup of ChangeData by reference FormID. If flags bit 1 is set, copies a 36-byte initial-reference record from savedFormBuffer+4, resolves the two embedded FormIDs, creates the reference, and calls LoadForm unless RTTI identifies MagicProjectile (which it immediately deletes). Otherwise negative flags select the 44-byte moved-reference record; resolves primary/fallback location IDs, reconstructs from source-location override files, loads, then removes the reference ID from manager deferred list. Probable Fallout homolog BGSSaveLoadReferencesMap::LoadChangedReference at 825F9840; both classify a saved ref, consume its change-map buffer, create/move and load it. Verified divergence: Oblivion uses 36/44-byte records and FormID table; Fallout uses compact initial-data structs and BGS numeric ID indices. Verified: created data copy size 0x24; source is owned ChangeData buffer after 4-byte header. Payload structure attached as OblivionCreatedReferenceInitialData. Verified flag classification: Chan
0x464A32: test    ebp, ebp
0x464A34: mov     [esp+20h+var_D], 1
0x464A39: jz      short loc_464A51
0x464A3B: push    esi
0x464A3C: mov     ecx, ebp
0x464A3E: call    BSSimpleList_Remove; MEF SAVE AUDIT 2026-10-08: PERF-18 negative subclaim: ECX=previous node EBP, not world-list head. For a well-formed unique record-pointer list, matching successor is reached locally; do not multiply cost by another whole-list scan. Head branch464A53 promotes successor inline. Restore callback464A2D runs BEFORE unlink/free, so borrowed positions need a mutation/lifetime contract.
0x464A43: mov     edi, [ebp+4]
0x464A46: push    esi
0x464A47: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x464A4C: add     esp, 4
0x464A4F: jmp     short loc_464A68
0x464A51: mov     ecx, edi
0x464A53: call    BSSimpleList_PopHeadWithoutPayloadFree; Verified generic BSSimpleList head removal helper: advances the inline first-node header to its successor and frees the detached list node; if there is no successor, clears the head data pointer.
0x464A58: push    esi
0x464A59: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x464A5E: add     esp, 4
0x464A61: jmp     short loc_464A68
0x464A63: mov     ebp, edi
0x464A65: mov     edi, [edi+4]
0x464A68: test    edi, edi
0x464A6A: jnz     short loc_464A10; MEF SAVE AUDIT 2026-10-08: PERF-18 full-list scan: each nonnull record tested at+4 X and+8 Y; match restores ID at+0, unlinks/frees record, then loop continues rather than stopping after one match. Preserve native match order, duplicate records and initial LoadForm return contribution.
0x464A6C: mov     esi, [esp+20h+cell]
0x464A70: mov     eax, [esp+20h+var_C]
0x464A74: cmp     dword ptr [eax+4], 0
0x464A78: pop     ebp
0x464A79: jnz     short loc_464AA0
0x464A7B: cmp     dword ptr [eax], 0
0x464A7E: jnz     short loc_464AA0
0x464A80: mov     ecx, esi; this
0x464A82: call    TESObjectCELL_GetWorldSpace
0x464A87: mov     edx, [eax+0Ch]
0x464A8A: mov     ecx, [ebx+0Ch]
0x464A8D: push    edx
0x464A8E: call    NiTMap_RemoveAt
0x464A93: mov     eax, [esp+1Ch+var_C]
0x464A97: push    eax
0x464A98: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x464A9D: add     esp, 4
0x464AA0: mov     al, [esp+1Ch+var_D]
0x464AA4: pop     edi
0x464AA5: pop     esi
0x464AA6: pop     ebx
0x464AA7: add     esp, 10h
0x464AAA: retn    4
