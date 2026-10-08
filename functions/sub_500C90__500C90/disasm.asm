0x500C90: mov     eax, ds:0B333C4h
0x500C95: mov     ecx, ds:0B33B00h
0x500C9B: push    esi
0x500C9C: push    0
0x500C9E: push    eax
0x500C9F: call    sub_4533F0
0x500CA4: mov     ecx, ds:0B33B00h
0x500CAA: push    1
0x500CAC: mov     esi, eax
0x500CAE: call    sub_45A530
0x500CB3: mov     ecx, ds:0B33B00h; self
0x500CB9: push    0; initializationMode
0x500CBB: call    TESSaveLoadGame_ReconcileExistingChanges; Verified: LoadGame finalization (caller 466889) ensures incoming map at manager+4, walks current map at +0, reconciles extant forms through sub45F180/ResetObject and reconstructs missing moved references from their old locations, then destroys old current map and promotes incoming map to +0. Probable Fallout homolog BGSSaveLoadGame::RevertCurrentChanges 825F1938: same existing-form reconciliation, missing moved-reference handling, and final map swap. Fallout uses TESForm::Revert and BGSReconstructFormsInAllFilesMap; Oblivion uses sub45F180 plus source-file search at 45C4F0. Note: function also has a separate game/world initialization branch; the map reconciliation and swap are in the save-load branch.
0x500CC0: mov     ecx, ds:0B33B00h; self
0x500CC6: call    TESSaveLoadGame_ProcessDeferredDeletions
0x500CCB: mov     ecx, ds:0B33B00h
0x500CD1: push    0
0x500CD3: call    sub_45A530
0x500CD8: mov     ecx, ds:0B33B00h
0x500CDE: call    sub_45C320
0x500CE3: mov     ecx, (offset qword_B3BB2C+1D4h)
0x500CE8: call    sub_675310
0x500CED: mov     ecx, ds:0B33A98h
0x500CF3: call    sub_447300
0x500CF8: mov     ecx, ds:0B333C4h
0x500CFE: push    esi
0x500CFF: call    sub_663340
0x500D04: mov     al, 1
0x500D06: pop     esi
0x500D07: retn
