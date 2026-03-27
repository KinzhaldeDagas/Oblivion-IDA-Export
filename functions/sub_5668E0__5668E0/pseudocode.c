char __thiscall sub_5668E0(_DWORD *this, char a2)
{
  char result; // al
  int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3);
  if ( a2 )
  {
    *(this + 7) |= 0x10000u;
    result = TESDataHandler_IsFormIDCreated_(v4);
    if ( !result )
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 0x8000000);
  }
  else
  {
    *(this + 7) &= ~0x10000u;
    result = TESDataHandler_IsFormIDCreated_(v4);
    if ( !result )
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, 0x8000000);
  }
  return result;
}
