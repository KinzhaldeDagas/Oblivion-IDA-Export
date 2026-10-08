// Restore and deform FaceGenHair positions for hair length, then unlock. Native code does not recompute normals or the local NiGeometryData bounding sphere.
void __cdecl BSFaceGen_ApplyHairLengthMorph(NiGeometry *hairGeometry, float hairLength)
{
  BSFaceGenMorphDataHair *hairMorphData; // edi
  NiGeometryData *geometryData; // ecx
  NiStridedVertexStream vertexStream; // [esp+Ch] [ebp-Ch] BYREF

  if ( hairGeometry ) /*0x55098a*/
  {                                             // Native negative-length test uses x87 FCOMP followed by test AH,0x41 / JZ skip; unordered NaN sets C0 and C3, so comparison does not take skip and NaN can reach BSFaceGenMorphDataHair vertex deformation at 0x550A1B. +Inf also passes. PF 1.19.14 rejects nonfinite hairLength during randomized refresh; no evidence normal RNG/UI produces it.
    if ( hairLength >= 0.0 ) /*0x55099b*/
    {
      hairMorphData = NiGeometry_GetFaceGenHairMorphData(hairGeometry); /*0x5509a8*/
      if ( hairMorphData ) /*0x5509af*/
      {                                         // Native hair morph dereferences hairGeometry->geomData (+0xB4) for NiGeometryData_LockVertexStream after confirming hairMorphData, without checking geomData nonnull. If malformed FaceGenHair geometry retains morph extra data but has null geomData, lock dereferences null. PF 1.19.14 rejects this state only during randomized character refresh. Trigger reachability with shipped assets unproven.
        if ( NiGeometryData_LockVertexStream(hairGeometry->member.geomData, 1) ) /*0x5509b9*/
        {
          geometryData = hairGeometry->member.geomData; /*0x5509c2*/
          memset(&vertexStream, 0, 9); /*0x5509cd*/
          NiGeometryData_GetLockedVertexStream(geometryData, &vertexStream); /*0x5509e2*/
          NiGeometry_RestoreFaceGenBaseVertices(hairGeometry, &vertexStream); /*0x5509ed*/
          if ( vertexStream.data ) /*0x5509fa*/
            (*(void (__thiscall **)(BSFaceGenMorphDataHair *, NiStridedVertexStream *, _DWORD, _DWORD))(*(_DWORD *)hairMorphData + 0x18))( /*0x550a1b*/
              hairMorphData,
              &vertexStream,
              hairGeometry->member.geomData->member.m_usVertices,
              LODWORD(hairLength));             // Calls hair morph-data vfunc with raw hairLength. Native path checks only negative values, not finite or upper bound; nonfinite values can propagate into vertex positions. PF 1.19.14 filters nonfinite input during randomized character refresh without changing valid >1 modded lengths.
          NiGeometryData_UnlockVertexStream(hairGeometry->member.geomData);// Verified existing Prettier Faces repair boundary: native hair morph unlocks after position changes, without local sphere or normal recomputation. Plugin rebuild is restricted to direct CPU vertex storage, skips additional geometry, and skips normal rebuilding for NBT data. Runtime visual correctness still requires in-game testing. /*0x550a23*/
        }
      }
    }
  }
}
