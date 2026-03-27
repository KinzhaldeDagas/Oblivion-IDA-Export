int __thiscall TESObjectCELL_GetYCoordinate(TESObjectCELL *this)
{
  TESCELL_CoordOrLight v1; // eax

  if ( (this->members.flags0 & 1) != 0 )
    return 0;
  v1.coords = (CellCoordinates *)this->members.coordOrLight;
  if ( !v1.coords )
    return 0;
  else
    return v1.coords->y;
}
