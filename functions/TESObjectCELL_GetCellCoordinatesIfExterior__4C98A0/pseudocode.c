CellCoordinates *__thiscall TESObjectCELL::GetCellCoordinatesIfExterior(TESObjectCELL *this)
{
  if ( (this->members.flags0 & kFlags0_Interior) != 0 ) /*0x4c98a4*/
    return 0; /*0x4c98a6*/
  else
    return this->members.coordOrLight.coords; /*0x4c98a9*/
}
