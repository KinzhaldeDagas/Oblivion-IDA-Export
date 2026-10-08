// Indexed geometry LOD strip reset helper: sets active LOD field, zeroes strip counter, and clears triangle count for that LOD.
void __thiscall OB_CIndexedGeometry_ResetStripCounter_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int16 lodLevel)
{
  int v2; // ebx
  _DWORD *begin; // ecx

  this->activeLodLevel = lodLevel; /*0x794a98*/
  this->currentStripCounter = 0; /*0x794a9c*/
  begin = this->perLodTriangleCounts.begin; /*0x794aa2*/
  if ( begin && lodLevel < (unsigned int)(((char *)this->perLodTriangleCounts.end - (char *)begin) >> 2) ) /*0x794ab7*/
  {
    begin[lodLevel] = 0; /*0x794acd*/
  }
  else
  {
    _invalid_parameter_noinfo(v2, lodLevel, (int)this); /*0x794ab9*/
    *((_DWORD *)this->perLodTriangleCounts.begin + lodLevel) = 0; /*0x794ac1*/
  }
}
