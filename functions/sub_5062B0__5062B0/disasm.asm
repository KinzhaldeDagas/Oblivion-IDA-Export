0x5062B0: mov     eax, [esp+reference]; Verified callback behavior: when its TESObjectREFR argument is non-null, enables that reference's linked PathGrid points across the active interior or loaded exterior grids, then returns success. Candidate command-name association: Oblivion contains an `EnableLinkedPathPoints` string at A4E3D4, which matches this behavior; no direct string/table xref was recovered, so the registration link is not Verified.
0x5062B4: test    eax, eax
0x5062B6: jz      short loc_5062C3
0x5062B8: push    1; enabled
0x5062BA: push    eax; reference
0x5062BB: call    TESPathGrid_SetLinkedPointsEnabledForCurrentCells; Verified — linked-point state dispatcher. In an interior, it obtains the current interior cell's PathGrid and applies the reference toggle. Otherwise it scans the loaded exterior grid as a uGridsToLoad × uGridsToLoad array, obtains each present cell's PathGrid, and applies the same toggle. The exterior loop and call to SetLinkedPointsEnabled are confirmed in disassembly at 0x4E5247–0x4E5264. Fallout comparison: Fallout PathBuilder::BuildNavMeshInfoPath (0x82241A48) reconstructs a route through NavMeshInfo nodes and linked-door references into VirtualPathingNodes; that is a different navigation representation and does not establish Oblivion linked-point semantics.
0x5062C0: add     esp, 8
0x5062C3: mov     al, 1
0x5062C5: retn
