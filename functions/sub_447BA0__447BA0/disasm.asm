0x447BA0: push    esi; Verified TESObjectCELL deactivation path. Removes cell temp effects, lowers its process level, invokes cell teardown, clears pathgrid graph/render resources, removes the scene node and inactive cell forms, then for exteriors asks TESWorldSpace_UnloadExteriorCellIfEligible to either preserve or remove the cell. Nine call sites are in world/cell transition and TES destruction paths; inspect xrefs for the full lifecycle context.
0x447BA1: mov     esi, [esp+4+a2]
0x447BA5: test    esi, esi
0x447BA7: jz      loc_447C3E
0x447BAD: mov     eax, [esi+8]
0x447BB0: shr     eax, 5
0x447BB3: test    al, 1
0x447BB5: jnz     loc_447C3E
0x447BBB: push    esi; cell
0x447BBC: mov     ecx, (offset qword_B3BB2C+1D4h); self
0x447BC1: call    ActorProcessManager_RemoveTempEffectsForCell; [Verified] Called by TESObjectCELL_Deactivate. Removes active and extended temp effects whose BSTempEffect parentCell field at +0x0C equals the unloading cell, irrespective of remaining duration, then releases the list's reference. Thus decal lifetime survives normal updates but not unloading its owning cell.
0x447BC6: mov     ecx, esi
0x447BC8: mov     byte ptr [esi+26h], 1
0x447BCC: call    sub_4CB4D0
0x447BD1: mov     ecx, ds:0B33A98h
0x447BD7: cmp     byte ptr [ecx+0CD4h], 0
0x447BDE: jnz     short loc_447BE9
0x447BE0: push    1
0x447BE2: mov     ecx, esi
0x447BE4: call    sub_4CB010
0x447BE9: mov     ecx, esi
0x447BEB: call    sub_4AF170
0x447BF0: test    eax, eax
0x447BF2: jz      short loc_447BFB
0x447BF4: mov     ecx, eax
0x447BF6: call    TESPathGrid_ClearGraphOnCellUnload; Verified PathGrid lifecycle edge: cell deactivation obtains the cell's TESPathGrid and calls TESPathGrid_ClearGraphOnCellUnload before interior/exterior content teardown.
0x447BFB: mov     ecx, esi; this
0x447BFD: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x447C02: test    al, al
0x447C04: jnz     short loc_447C14
0x447C06: mov     ecx, esi; this
0x447C08: call    sub_4CE3C0
0x447C0D: mov     ecx, eax
0x447C0F: call    sub_4C6280
0x447C14: mov     ecx, esi; this
0x447C16: call    TESObjectCELL_DestroySceneNode; Verified scene-node teardown: temporarily sets cellProcessLevel=1, detaches the cell NiNode from its parent, clears/releases its child array, releases the NiNode and cell extra-data component, then resets cellProcessLevel to 0.
0x447C1B: mov     ecx, esi; this
0x447C1D: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x447C22: test    al, al
0x447C24: mov     ecx, esi; this
0x447C26: jz      short loc_447C31
0x447C28: call    TESObjectCELL_ClearInactiveRuntimeForms; Verified inactive-cell form cleanup. Preserves persistent references and references whose winning override is a non-master file; unloads/destroys other nonpersistent references. Also destroys a PathGrid when it has no override or its winning override is a master, clears eligible LAND data, and clears cell flag 0x10. This is called during both interior and exterior teardown.
0x447C2D: pop     esi
0x447C2E: retn    4
0x447C31: push    esi; cell
0x447C32: call    TESObjectCELL_GetWorldSpace
0x447C37: mov     ecx, eax; this
0x447C39: call    TESWorldSpace_UnloadExteriorCellIfEligible; Verified exterior unload edge: after deactivation cleanup, passes the cell and owning TESWorldSpace into TESWorldSpace_UnloadExteriorCellIfEligible; map removal and destruction occur only for absent/master winning overrides.
0x447C3E: pop     esi
0x447C3F: retn    4
