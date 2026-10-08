0x4BD1F0: push    esi; Verified task cleanup callback: for states other than 6, applies/frees parsed cell-object payloads, then removes the packed cell key from the owner map at task+0x28. The special state 6 meaning remains Unknown.
0x4BD1F1: mov     esi, ecx
0x4BD1F3: cmp     dword ptr [esi+0Ch], 6
0x4BD1F7: jz      short loc_4BD224; Verified state-6 guard on the DistantLOD task cleanup callback: when IOTask_Cancel has already transitioned the task to 6, this hook skips its own payload cleanup/map removal; the cancel path invokes task completion and the destructor remains responsible for any unreleased payload. The canonical enum name for 6 remains Unknown.
0x4BD1F9: mov     eax, [esi+2Ch]
0x4BD1FC: mov     ecx, [esi+28h]
0x4BD1FF: push    eax; taskData
0x4BD200: call    DistantLODLoaderTaskData_CleanupCellObjects; Verified: consumes DistantLODLoaderTaskData, walks its form-pointer -> DistantLODCellObjectData map, dispatches each key through virtual slot +0x11C, then frees the three arrays and clears the map. The external .lod parser RTTI-casts keys to TESBoundObject; the embedded REFR parser stores a NAME-resolved TESForm* without a local cast, so that path's bound-object invariant is Probable, not Verified.
0x4BD205: mov     eax, [esi+2Ch]
0x4BD208: mov     ecx, [eax+4]
0x4BD20B: mov     eax, [eax]
0x4BD20D: mov     esi, [esi+28h]
0x4BD210: push    ecx; group_y
0x4BD211: push    eax; group_x
0x4BD212: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4BD217: mov     edx, [esi]
0x4BD219: add     esp, 8
0x4BD21C: push    eax
0x4BD21D: mov     eax, [edx+10h]
0x4BD220: mov     ecx, esi
0x4BD222: call    eax
0x4BD224: pop     esi
0x4BD225: retn
