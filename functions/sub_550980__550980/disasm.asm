0x550980: sub     esp, 0Ch; Applies FaceGenRenderState/TESNPC hair length to a FaceGenHair geometry. Resolves BSFaceGenMorphDataHair, locks the vertex stream, restores base hair vertices, invokes the hair morph-data vfunc with the scalar weight, then unlocks.
0x550983: push    esi
0x550984: mov     esi, [esp+10h+hairGeometry]
0x550988: test    esi, esi
0x55098A: jz      loc_550A29
0x550990: fldz
0x550992: fcomp   [esp+10h+hairLength]
0x550996: fnstsw  ax
0x550998: test    ah, 41h
0x55099B: jz      loc_550A29; Native negative-length test uses x87 FCOMP followed by test AH,0x41 / JZ skip; unordered NaN sets C0 and C3, so comparison does not take skip and NaN can reach BSFaceGenMorphDataHair vertex deformation at 0x550A1B. +Inf also passes. PF 1.19.14 rejects nonfinite hairLength during randomized refresh; no evidence normal RNG/UI produces it.
0x5509A1: push    edi
0x5509A2: push    esi; geometry
0x5509A3: call    NiGeometry_GetFaceGenHairMorphData; Resolve BSFaceGenMorphDataHair attached to a FaceGenHair geometry through its FaceGen model extra data.
0x5509A8: mov     edi, eax
0x5509AA: add     esp, 4
0x5509AD: test    edi, edi
0x5509AF: jz      short loc_550A28
0x5509B1: mov     ecx, [esi+0B4h]; Native hair morph dereferences hairGeometry->geomData (+0xB4) for NiGeometryData_LockVertexStream after confirming hairMorphData, without checking geomData nonnull. If malformed FaceGenHair geometry retains morph extra data but has null geomData, lock dereferences null. PF 1.19.14 rejects this state only during randomized character refresh. Trigger reachability with shipped assets unproven.
0x5509B7: push    1; writeAccess
0x5509B9: call    NiGeometryData_LockVertexStream; Lock the geometry vertex stream for writing. The hair path requests positions only.
0x5509BE: test    al, al
0x5509C0: jz      short loc_550A28
0x5509C2: mov     ecx, [esi+0B4h]; self
0x5509C8: lea     eax, [esp+14h+outVertices]
0x5509CC: push    eax; outVertices
0x5509CD: mov     [esp+18h+outVertices.data], 0
0x5509D5: mov     [esp+18h+outVertices.stride], 0
0x5509DD: mov     [esp+18h+outVertices.unknown08], 0
0x5509E2: call    NiGeometryData_GetLockedVertexStream; Resolve the writable vertex pointer and stride into a 12-byte NiStridedVertexStream descriptor.
0x5509E7: lea     ecx, [esp+14h+outVertices]
0x5509EB: push    ecx; vertices
0x5509EC: push    esi; geometry
0x5509ED: call    NiGeometry_RestoreFaceGenBaseVertices; Restore authored base hair positions into the locked stream before applying the length morph; marks only the vertex-position channel dirty.
0x5509F2: add     esp, 8
0x5509F5: cmp     [esp+14h+outVertices.data], 0
0x5509FA: jz      short loc_550A1D
0x5509FC: mov     eax, [esi+0B4h]
0x550A02: fld     [esp+14h+hairLength]
0x550A06: mov     edx, [edi]
0x550A08: mov     edx, [edx+18h]
0x550A0B: push    ecx
0x550A0C: movzx   ecx, word ptr [eax+8]
0x550A10: fstp    [esp+18h+var_18]
0x550A13: push    ecx
0x550A14: lea     eax, [esp+1Ch+outVertices]
0x550A18: push    eax
0x550A19: mov     ecx, edi
0x550A1B: call    edx; Calls hair morph-data vfunc with raw hairLength. Native path checks only negative values, not finite or upper bound; nonfinite values can propagate into vertex positions. PF 1.19.14 filters nonfinite input during randomized character refresh without changing valid >1 modded lengths.
0x550A1D: mov     ecx, [esi+0B4h]; self
0x550A23: call    NiGeometryData_UnlockVertexStream; Verified existing Prettier Faces repair boundary: native hair morph unlocks after position changes, without local sphere or normal recomputation. Plugin rebuild is restricted to direct CPU vertex storage, skips additional geometry, and skips normal rebuilding for NBT data. Runtime visual correctness still requires in-game testing.
0x550A28: pop     edi
0x550A29: pop     esi
0x550A2A: add     esp, 0Ch
0x550A2D: retn
