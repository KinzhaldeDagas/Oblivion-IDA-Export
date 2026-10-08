// 3DTheft decode: dynamic package marker only sets packageFlags bit 0x800 when TESDataHandler_IsFormIDCreated_(formID) returns true. Do not force 0x800 on arbitrary heap packages before Actor_AddPackage_.
bool __thiscall sub_566830(unsigned int *this, char a2)
{
  bool result; // al

  result = TESDataHandler_IsFormIDCreated_(*(this + 3)); /*0x56683d*/
  if ( result ) /*0x566844*/
  {
    if ( a2 ) /*0x56684b*/
      *(this + 7) |= 0x800u; /*0x56684d*/
    else
      *(this + 7) &= ~0x800u; /*0x566858*/
  }
  return result; /*0x566854*/
}
