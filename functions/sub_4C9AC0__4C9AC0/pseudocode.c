void __thiscall sub_4C9AC0(TESObjectCELL *this, SInt32 a2, SInt32 a3)
{
  CellCoordinates *coords; // eax

  if ( (this->members.flags0 & 1) == 0 ) /*0x4c9ac4*/
  {
    coords = this->members.coordOrLight.coords; /*0x4c9ac6*/
    if ( coords ) /*0x4c9acb*/
    {
      coords->x = a2; /*0x4c9ad5*/
      coords->y = a3; /*0x4c9ad7*/
    }
  }
}
