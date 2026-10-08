char __thiscall sub_5668E0(_DWORD *this, char a2)
{
  char result; // al
  int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3); /*0x5668eb*/
  if ( a2 ) /*0x5668ec*/
  {
    *(this + 7) |= 0x10000u; /*0x5668ee*/
    result = TESDataHandler_IsFormIDCreated_(v4); /*0x5668fb*/
    if ( !result ) /*0x566902*/
      return (*(char (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 0x8000000); /*0x566910*/
  }
  else
  {
    *(this + 7) &= ~0x10000u; /*0x566916*/
    result = TESDataHandler_IsFormIDCreated_(v4); /*0x566923*/
    if ( !result ) /*0x56692a*/
      return (*(char (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, 0x8000000); /*0x566938*/
  }
  return result; /*0x566912*/
}
