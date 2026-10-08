TESTerrainLODQuadRoot_OblivionLayout_010Verified *__thiscall sub_4EA670(
        TESWorldSpaceTerrainLODQuadMap *this,
        float *a2,
        _DWORD *a3)
{
  int v4; // eax
  int v6; // [esp+8h] [ebp-10h]
  float v7; // [esp+14h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+4h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]

  v7 = *a2 * kTerrainLODQuadWorldToGridScale; /*0x4ea684*/
  v8 = kTerrainLODQuadWorldToGridScale * a2[1]; /*0x4ea693*/
  v9 = floor(v8); /*0x4ea6a3*/
  v6 = Double_To_SInt32(v9); /*0x4ea6b7*/
  v10 = floor(v7); /*0x4ea6c3*/
  v4 = Double_To_SInt32(v10); /*0x4ea6ce*/
  return TESWorldSpaceTerrainLODQuadMap_GetOrCreateRoot(this, v4, v6, (bool)a3); /*0x4ea6db*/
}
