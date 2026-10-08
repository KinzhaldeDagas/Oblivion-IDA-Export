// Oblivion CIndexedGeometry::AddVertexNormal. Appends one xyz normal. Unlike SpeedTree 4.1 source, this legacy ABI has no up-axis-adjust boolean.
void __thiscall OB_CIndexedGeometry_AddVertexNormal_010201A0(OB_CIndexedGeometry_010201A0 *this, const float *normal)
{
  OB_stVector16_010201A0 *p_vertexNormals; // esi

  p_vertexNormals = (OB_stVector16_010201A0 *)&this->vertexNormals; /*0x7962f6*/
  OB_stVector_float_PushBack_010201A0((OB_stVector16_010201A0 *)&this->vertexNormals, normal); /*0x7962ff*/
  OB_stVector_float_PushBack_010201A0(p_vertexNormals, normal + 1); /*0x79630a*/
  OB_stVector_float_PushBack_010201A0(p_vertexNormals, normal + 2); /*0x796315*/
}
