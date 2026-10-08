int __thiscall TESObjectCELL_GetYCoordinate(TESObjectCELL *this)
{
  TESCELL_CoordOrLight v1; // eax

  if ( (this->members.flags0 & 1) != 0 ) /*0x4c9aa4*/
    return 0; /*0x4c9aa4*/
  v1.coords = (CellCoordinates *)this->members.coordOrLight; /*0x4c9aa6*/
  if ( !v1.coords ) /*0x4c9aab*/
    return 0; /*0x4c9ab1*/
  else
    return v1.coords->y; /*0x4c9aad*/
}
