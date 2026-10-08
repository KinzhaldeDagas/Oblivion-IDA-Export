0x4E51F0: mov     eax, ds:0B333A0h; Verified — linked-point state dispatcher. In an interior, it obtains the current interior cell's PathGrid and applies the reference toggle. Otherwise it scans the loaded exterior grid as a uGridsToLoad × uGridsToLoad array, obtains each present cell's PathGrid, and applies the same toggle. The exterior loop and call to SetLinkedPointsEnabled are confirmed in disassembly at 0x4E5247–0x4E5264. Fallout comparison: Fallout PathBuilder::BuildNavMeshInfoPath (0x82241A48) reconstructs a route through NavMeshInfo nodes and linked-door references into VirtualPathingNodes; that is a different navigation representation and does not establish Oblivion linked-point semantics.
0x4E51F5: mov     ecx, [eax+34h]
0x4E51F8: test    ecx, ecx
0x4E51FA: jz      short loc_4E5217
0x4E51FC: call    sub_4AF170
0x4E5201: test    eax, eax
0x4E5203: jz      short sub_4E5275
0x4E5205: mov     ecx, dword ptr [esp+enabled]
0x4E5209: mov     edx, [esp+reference]
0x4E520D: push    ecx; enabled
0x4E520E: push    edx; reference
0x4E520F: mov     ecx, eax; this
0x4E5211: call    TESPathGrid_SetLinkedPointsEnabled; Verified — for pointsByReference[reference], sets every listed node's linkedPointsDisabled flag to !enabled. When disabling and at least one point was found, calls parentCell->MarkAsModified(0x01000000). The exact semantic meaning of this modification mask is Unknown from this call site.
0x4E5216: retn
0x4E5217: push    ebx
0x4E5218: mov     ebx, ds:0B06A2Ch
0x4E521E: push    edi
0x4E521F: xor     edi, edi
0x4E5221: test    ebx, ebx
0x4E5223: jbe     short loc_4E5273
0x4E5225: push    ebp
0x4E5226: mov     ebp, [esp+0Ch+reference]
0x4E522A: push    esi
0x4E522B: jmp     short loc_4E5230
0x4E5230: xor     esi, esi
0x4E5232: mov     eax, ds:0B333A0h
0x4E5237: mov     ecx, [eax+8]
0x4E523A: push    esi
0x4E523B: push    edi
0x4E523C: call    GetGridEntry
0x4E5241: test    eax, eax
0x4E5243: jz      short loc_4E5263
0x4E5245: mov     eax, [eax]
0x4E5263: add     esi, 1
0x4E5266: cmp     esi, ebx
0x4E5268: jb      short loc_4E5232
0x4E526A: add     edi, 1
0x4E526D: cmp     edi, ebx
0x4E526F: jb      short loc_4E5230
0x4E5271: pop     esi
0x4E5272: pop     ebp
0x4E5273: pop     edi
0x4E5274: pop     ebx
