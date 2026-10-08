// Oblivion CIndexedGeometry::GetVertexTexCoord0. Returns the selected vertex's two-float diffuse UV pair; projected-shadow UVs live in the separate shadowTexcoords stream.
const float *__thiscall OB_CIndexedGeometry_GetVertexTexCoord0_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned int vertexIndex)
{
  int v2; // ebx
  void *begin; // ecx
  unsigned int v5; // edi

  begin = this->diffuseTexcoords.begin; /*0x794768*/
  v5 = 2 * vertexIndex; /*0x79476e*/
  if ( !begin || v5 >= ((char *)this->diffuseTexcoords.end - (char *)begin) >> 2 ) /*0x794781*/
    _invalid_parameter_noinfo(v2, v5, (int)this); /*0x794783*/
  return (const float *)((char *)this->diffuseTexcoords.begin + 8 * vertexIndex); /*0x794791*/
}
