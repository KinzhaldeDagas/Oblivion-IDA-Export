bool __thiscall sub_566830(unsigned int *this, char a2)
{
  bool result; // al

  result = TESDataHandler_IsFormIDCreated_(*(this + 3));
  if ( result )
  {
    if ( a2 )
      *(this + 7) |= 0x800u;
    else
      *(this + 7) &= ~0x800u;
  }
  return result;
}
