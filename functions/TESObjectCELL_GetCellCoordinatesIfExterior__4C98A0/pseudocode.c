CellCoordinates *__thiscall TESObjectCELL::GetCellCoordinatesIfExterior(TESObjectCELL *this)
{
  if ( (this->members.flags0 & kFlags0_Interior) != 0 )
    return 0;
  else
    return this->members.coordOrLight.coords;
}
