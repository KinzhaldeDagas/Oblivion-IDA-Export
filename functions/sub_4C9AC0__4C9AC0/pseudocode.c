void __thiscall sub_4C9AC0(TESObjectCELL *this, SInt32 a2, SInt32 a3)
{
  CellCoordinates *coords; // eax

  if ( (this->members.flags0 & 1) == 0 )
  {
    coords = this->members.coordOrLight.coords;
    if ( coords )
    {
      coords->x = a2;
      coords->y = a3;
    }
  }
}
