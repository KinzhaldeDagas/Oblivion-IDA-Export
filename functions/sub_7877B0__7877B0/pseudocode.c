// Returns the number of indexed vertices as vertexCoords.floatCount / 3.
unsigned int __thiscall OB_CIndexedGeometry_GetVertexCount_010201A0(OB_CIndexedGeometry_010201A0 *this)
{
  float *begin; // eax

  begin = this->vertexCoords.begin; /*0x7877b0*/
  if ( begin ) /*0x7877b5*/
    return (this->vertexCoords.end - begin) / 3u; /*0x7877d6*/
  else
    return 0; /*0x7877c2*/
}
