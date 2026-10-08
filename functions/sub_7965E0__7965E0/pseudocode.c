// Oblivion CIndexedGeometry::AddVertexBinormal. Appends one xyz binormal to the indexed vertex stream.
void __thiscall OB_CIndexedGeometry_AddVertexBinormal_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        const float *binormal)
{
  OB_stVector16_010201A0 *p_vertexBinormals; // esi
  float value; // [esp+4h] [ebp-Ch] BYREF
  float v4; // [esp+8h] [ebp-8h] BYREF
  float v5; // [esp+Ch] [ebp-4h] BYREF

  value = *binormal; /*0x7965ea*/
  p_vertexBinormals = (OB_stVector16_010201A0 *)&this->vertexBinormals; /*0x7965ee*/
  v4 = binormal[1]; /*0x7965f9*/
  v5 = binormal[2]; /*0x796605*/
  OB_stVector_float_PushBack_010201A0((OB_stVector16_010201A0 *)&this->vertexBinormals, &value); /*0x796609*/
  OB_stVector_float_PushBack_010201A0(p_vertexBinormals, &v4); /*0x796615*/
  OB_stVector_float_PushBack_010201A0(p_vertexBinormals, &v5); /*0x796621*/
}
