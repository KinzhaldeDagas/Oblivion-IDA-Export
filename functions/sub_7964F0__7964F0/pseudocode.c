// Legacy TexCoord1 writer: appends projected-shadow S/T to the dedicated shadowTexcoords vector and applies the same global T-flip policy.
void __thiscall OB_CIndexedGeometry_AddVertexTexCoord1_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        const float *shadowST)
{
  const float *v2; // edi
  OB_stVector16_010201A0 *p_shadowTexcoords; // esi

  v2 = shadowST; /*0x7964f2*/
  p_shadowTexcoords = (OB_stVector16_010201A0 *)&this->shadowTexcoords; /*0x7964f6*/
  OB_stVector_float_PushBack_010201A0((OB_stVector16_010201A0 *)&this->shadowTexcoords, shadowST); /*0x7964ff*/
  if ( CSpeedTreeRT__GetTextureFlip() ) /*0x796504*/
  {
    *(float *)&shadowST = -v2[1]; /*0x796519*/
    OB_stVector_float_PushBack_010201A0(p_shadowTexcoords, (const float *)&shadowST); /*0x79651d*/
  }
  else
  {
    OB_stVector_float_PushBack_010201A0(p_shadowTexcoords, v2 + 1); /*0x79652b*/
  }
}
