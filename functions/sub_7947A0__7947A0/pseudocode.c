// Accumulates branch/frond indexed-geometry extents into the Compute bounds object.
void __thiscall OB_CIndexedGeometry_ComputeExtents_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        OB_stRegion_010201A0 *extents)
{
  OB_CIndexedGeometry_010201A0 *v2; // esi
  float *begin; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  float *v10; // eax
  int v11; // [esp+14h] [ebp-58h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  OB_stVec3_010201A0 point; // [esp+24h] [ebp-48h] BYREF
  OB_stRegion_010201A0 outRegion; // [esp+30h] [ebp-3Ch] BYREF
  unsigned int v17; // [esp+68h] [ebp-4h]
  float extentsa; // [esp+70h] [ebp+4h]

  v2 = this; /*0x7947c7*/
  begin = this->vertexCoords.begin; /*0x7947cd*/
  if ( begin ) /*0x7947d2*/
    v4 = this->vertexCoords.end - begin; /*0x7947dd*/
  else
    v4 = 0; /*0x7947d4*/
  if ( (unsigned __int16)(v4 / 3) ) /*0x7947e9*/
  {
    v6 = 0; /*0x7947fb*/
    v11 = (unsigned __int16)(v4 / 3); /*0x7947fd*/
    while ( 1 ) /*0x794807*/
    {
      v7 = v2->vertexCoords.begin; /*0x794807*/
      if ( !v7 || !(v2->vertexCoords.end - v7) ) /*0x794813*/
        _invalid_parameter_noinfo(); /*0x794818*/
      v8 = v2->vertexCoords.begin; /*0x79481d*/
      v9 = v8[v6]; /*0x794820*/
      v10 = &v8[v6]; /*0x794823*/
      extentsa = v9; /*0x794825*/
      v13 = v10[1]; /*0x794831*/
      v14 = v10[2]; /*0x79483e*/
      point.x = extentsa; /*0x794847*/
      point.y = v13; /*0x79484f*/
      point.z = v14; /*0x794857*/
      qmemcpy(extents, OB_stRegion_IncludePointCopy_010201A0(extents, &outRegion, &point), sizeof(OB_stRegion_010201A0)); /*0x794869*/
      v17 = 0; /*0x79486f*/
      Shared_NoOpVirtual_60D0A0(&outRegion.max); /*0x794877*/
      v17 = 0xFFFFFFFF; /*0x794880*/
      Shared_NoOpVirtual_60D0A0(&outRegion); /*0x794888*/
      v6 += 3; /*0x79488d*/
      if ( !--v11 ) /*0x794895*/
        break; /*0x794895*/
      v2 = this; /*0x794803*/
    }
  }
}
