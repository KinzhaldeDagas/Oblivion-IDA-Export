// Oblivion CIndexedGeometry::AddVertexColor. Packs four float channels to the engine's uint color format and appends one packed color.
void __thiscall OB_CIndexedGeometry_AddVertexColor_010201A0(OB_CIndexedGeometry_010201A0 *this, const float *rgba)
{
  rgba = (const float *)OB_CIndexedGeometry_ColorFloatsToUInt_010201A0(rgba); /*0x796245*/
  OB_stVectorUInt32_PushBack_010201A0(&this->packedColors, (const unsigned int *)&rgba); /*0x796249*/
}
