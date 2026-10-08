0x4EB370: push    ebx; Verified quad lookup and terrain pick; Probable auxiliary output role: triangle geometry pick records supply the normalized surface normal at NiPickRecord +0x28..+0x30. Bounds-only fallback records do not explicitly populate that field. The embedded parser remaps the vector and adds it to rounded record positions; the purpose of its 0.97/128 clamp remains Unknown.
0x4EB371: xor     bl, bl
0x4EB373: cmp     ds:0B06AB8h, bl
0x4EB379: push    ebp
0x4EB37A: mov     ebp, ecx
0x4EB37C: jz      short loc_4EB3DD
0x4EB37E: push    esi
0x4EB37F: push    edi
0x4EB380: mov     edi, [esp+10h+worldPosition]
0x4EB384: fld     dword ptr [edi]
0x4EB386: fmul    qword ptr ds:0A47A28h
0x4EB38C: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4EB391: fld     dword ptr [edi+4]
0x4EB394: fmul    qword ptr ds:0A47A20h
0x4EB39A: or      esi, 0FFFFFFFFh
0x4EB39D: sub     esi, eax; Verified world-to-quad X conversion multiplies by kTerrainLODQuadWorldToGridScaleNegX (-1/131072), converts to signed integer, then computes 0xFFFFFFFF minus that result. Preserve this X-axis inversion in the key calculation.
0x4EB39F: call    Double_To_SInt32; Verified world-to-quad Y conversion multiplies by kTerrainLODQuadWorldToGridScale (+1/131072) and converts to signed integer.
0x4EB3A4: push    0; createIfMissing
0x4EB3A6: push    eax; quadY
0x4EB3A7: push    esi; quadX
0x4EB3A8: mov     ecx, ebp; this
0x4EB3AA: call    TESWorldSpaceTerrainLODQuadMap_GetOrCreateRoot; Verified quad-root lookup/creation: accepts signed 16-bit quadX/quadY, packs them as (quadX << 16) | uint16(quadY), and optionally allocates/inserts a TESTerrainLODQuadRoot containing quad data, owner map, and coordinates.
0x4EB3AF: mov     ecx, eax
0x4EB3B1: test    ecx, ecx
0x4EB3B3: jz      short loc_4EB3D4
0x4EB3B5: mov     ecx, [ecx]; this
0x4EB3B7: xor     al, al
0x4EB3B9: test    ecx, ecx
0x4EB3BB: jz      short loc_4EB3CD
0x4EB3BD: mov     eax, [esp+10h+terrainHitPositionOut]
0x4EB3C1: mov     edx, [esp+10h+hitMetadataOut]
0x4EB3C5: push    eax; pickVectorOut
0x4EB3C6: push    edx; hitPointZOut
0x4EB3C7: push    edi; worldPosition
0x4EB3C8: call    TESTerrainLODQuad_PickSurfacePoint; Verified terrain ray query: uses NiPick against terrainLODNode with a vertical ray from worldPosition.z + 1,000,000 toward -Z. It returns the selected record's hit Z at +0x10 and copies a separate 3-float vector at +0x28..+0x30; the latter's meaning remains Unknown.
0x4EB3CD: pop     edi
0x4EB3CE: pop     esi
0x4EB3CF: pop     ebp
0x4EB3D0: pop     ebx
0x4EB3D1: retn    0Ch
0x4EB3D4: pop     edi
0x4EB3D5: pop     esi
0x4EB3D6: pop     ebp
0x4EB3D7: mov     al, bl
0x4EB3D9: pop     ebx
0x4EB3DA: retn    0Ch
0x4EB3DD: pop     ebp
0x4EB3DE: mov     al, bl
0x4EB3E0: pop     ebx
0x4EB3E1: retn    0Ch
