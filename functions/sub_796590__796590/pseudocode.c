// Oblivion CIndexedGeometry::AddVertexTangent. Appends one xyz tangent to the indexed vertex stream.
void __thiscall OB_CIndexedGeometry_AddVertexTangent_010201A0(OB_CIndexedGeometry_010201A0 *this, const float *tangent)
{
  OB_stVector16_010201A0 *p_vertexTangents; // esi
  float value; // [esp+4h] [ebp-Ch] BYREF
  float v4; // [esp+8h] [ebp-8h] BYREF
  float v5; // [esp+Ch] [ebp-4h] BYREF

  value = *tangent; /*0x79659a*/
  p_vertexTangents = (OB_stVector16_010201A0 *)&this->vertexTangents; /*0x79659e*/
  v4 = tangent[1]; /*0x7965a9*/
  v5 = tangent[2]; /*0x7965b5*/
  OB_stVector_float_PushBack_010201A0((OB_stVector16_010201A0 *)&this->vertexTangents, &value); /*0x7965b9*/
  OB_stVector_float_PushBack_010201A0(p_vertexTangents, &v4); /*0x7965c5*/
  OB_stVector_float_PushBack_010201A0(p_vertexTangents, &v5); /*0x7965d1*/
}
