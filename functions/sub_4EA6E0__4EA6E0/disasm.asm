0x4EA6E0: mov     ecx, ds:0B333A0h; Verified position-triggered LandLOD refresh wrapper: resolves current WorldSpace, climbs parentWorldspace to the root, obtains root terrainLODQuadRoots via TESWorldSpace_GetRootTerrainLODQuadMap, and delegates to DistantLOD_UpdateLandLODMap.
0x4EA6E6: push    esi
0x4EA6E7: call    TES__GetCurrentWorldspace
0x4EA6EC: mov     esi, eax
0x4EA6EE: test    esi, esi
0x4EA6F0: jz      short loc_4EA742
0x4EA6F2: mov     ecx, esi; this
0x4EA6F4: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x4EA6F9: test    eax, eax
0x4EA6FB: jz      short loc_4EA714
0x4EA6FD: lea     ecx, [ecx+0]
0x4EA700: mov     ecx, esi; this
0x4EA702: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x4EA707: mov     esi, eax
0x4EA709: mov     ecx, esi; this
0x4EA70B: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x4EA710: test    eax, eax
0x4EA712: jnz     short loc_4EA700
0x4EA714: mov     eax, [esp+4+a4]
0x4EA718: push    eax; a5
0x4EA719: mov     ecx, esi; worldspace
0x4EA71B: call    TESWorldSpace_GetRootTerrainLODQuadMap; Verified: climbs parentWorldspace to the root TESWorldSpace and returns its embedded terrainLODQuadRoots map at +0x38.
0x4EA720: mov     ecx, [esp+8+a1]
0x4EA724: mov     edx, [esp+8+a2]
0x4EA728: push    eax; terrainLODQuadRoots
0x4EA729: sub     esp, 0Ch
0x4EA72C: mov     eax, esp
0x4EA72E: mov     [eax], ecx
0x4EA730: mov     ecx, [esp+18h+a3]
0x4EA734: mov     [eax+4], edx
0x4EA737: mov     [eax+8], ecx
0x4EA73A: call    DistantLOD_UpdateLandLODMap; Verified LandLOD update loop passes each quad's parent LandLOD node, maximum visibility distance, and view X/Y into TESTerrainLODQuad_Update; worldspace mode bit 0x4 and bDisplayLODLand gate the update.
0x4EA73F: add     esp, 14h
0x4EA742: pop     esi
0x4EA743: retn
