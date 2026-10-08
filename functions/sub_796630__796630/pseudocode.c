//
//
// [2026-10-03 atlas/material correspondence] Embedded remap uses retained local coordinates for matching map IDs. Final export may therefore be atlas-space rather than local-space. Plugin selects final UVs unchanged only with a resolved composite texture and a corresponding embedded frond-map entry; individual textures use retained local coordinates. Atlas UVs cannot silently fall back to an individual texture when local data is unavailable.
void __thiscall OB_CIndexedGeometry_ChangeTexCoord_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int8 changedMapIndex,
        float *newTexCoords)
{
  unsigned __int8 *begin; // ecx
  unsigned int currentVertexWriteCounter; // edi
  float *v6; // ecx
  unsigned int v7; // edi
  float *v8; // edx
  double v9; // st5
  unsigned int v10; // edi
  float diffuseST; // [esp+8h] [ebp-8h] BYREF
  float v12; // [esp+Ch] [ebp-4h]

  begin = this->retainedMapIndices.begin; /*0x796636*/
  currentVertexWriteCounter = this->currentVertexWriteCounter; /*0x79663f*/
  if ( !begin || currentVertexWriteCounter >= this->retainedMapIndices.end - begin ) /*0x79664f*/
    _invalid_parameter_noinfo(); /*0x796651*/
  if ( changedMapIndex == this->retainedMapIndices.begin[currentVertexWriteCounter] ) /*0x796663*/
  {
    v6 = this->retainedDiffuseTexcoords.begin; /*0x79666d*/
    v7 = 2 * this->currentVertexWriteCounter; /*0x796673*/
    if ( !v6 || v7 >= this->retainedDiffuseTexcoords.end - v6 ) /*0x796686*/
      _invalid_parameter_noinfo(); /*0x796688*/
    v8 = this->retainedDiffuseTexcoords.begin; /*0x79668d*/
    v9 = v8[v7]; /*0x7966ad*/
    v10 = 2 * this->currentVertexWriteCounter + 1; /*0x7966b4*/
    diffuseST = (*newTexCoords - newTexCoords[2]) * v9 + newTexCoords[2]; /*0x7966bc*/
    if ( !v8 || v10 >= this->retainedDiffuseTexcoords.end - v8 ) /*0x7966cf*/
      _invalid_parameter_noinfo(); /*0x7966d1*/
    v12 = (newTexCoords[1] - newTexCoords[5]) * this->retainedDiffuseTexcoords.begin[v10] + newTexCoords[5]; /*0x7966f5*/
    if ( CSpeedTreeRT__GetTextureFlip() ) /*0x7966f9*/
      v12 = -v12; /*0x796709*/
    OB_CIndexedGeometry_AddVertexTexCoord0_010201A0(this, &diffuseST, 0xFFFFFFFF); /*0x796716*/
  }
}
