// CIndexedGeometry::GetVertexCoord: returns &coords[index*3] from the coord float vector.
const float *__thiscall OB_CIndexedGeometry_GetVertexCoord_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned int vertexIndex)
{
  float *begin; // eax

  begin = this->vertexCoords.begin; /*0x794734*/
  if ( !begin || !(this->vertexCoords.end - begin) ) /*0x794740*/
    _invalid_parameter_noinfo(); /*0x794745*/
  return &this->vertexCoords.begin[3 * vertexIndex]; /*0x794757*/
}
