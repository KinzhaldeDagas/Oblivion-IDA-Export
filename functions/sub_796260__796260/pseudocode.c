// Oblivion CIndexedGeometry::AddVertexCoord. Appends xyz; when CPU wind is active it also preserves xyz in originalVertexCoords for later deformation.
void __thiscall OB_CIndexedGeometry_AddVertexCoord_010201A0(OB_CIndexedGeometry_010201A0 *this, const float *coord)
{
  OB_stVector16_010201A0 *p_vertexCoords; // edi
  OB_stVector16_010201A0 *p_originalVertexCoords; // esi
  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v5 = *(int *)coord; /*0x79626a*/
  v6 = *((int *)coord + 1); /*0x796274*/
  p_vertexCoords = &this->vertexCoords; /*0x796278*/
  v7 = *((int *)coord + 2); /*0x796283*/
  OB_stVector_float_PushBack_010201A0(&this->vertexCoords.allocatorState, &v5); /*0x796289*/
  OB_stVector_float_PushBack_010201A0(&p_vertexCoords->allocatorState, &v6); /*0x796295*/
  OB_stVector_float_PushBack_010201A0(&p_vertexCoords->allocatorState, &v7); /*0x7962a1*/
  if ( this->vertexWeighting ) /*0x7962a6*/
  {
    if ( this->windMethod == 1 ) /*0x7962b0*/
    {
      p_originalVertexCoords = &this->originalVertexCoords; /*0x7962b6*/
      OB_stVector_float_PushBack_010201A0(&p_originalVertexCoords->allocatorState, &v5); /*0x7962bc*/
      OB_stVector_float_PushBack_010201A0(&p_originalVertexCoords->allocatorState, &v6); /*0x7962c8*/
      OB_stVector_float_PushBack_010201A0(&p_originalVertexCoords->allocatorState, &v7); /*0x7962d4*/
    }
  }
}
