void __thiscall sub_46AA00(_DWORD *this, char a2)
{
  bool v3; // al

  v3 = sub_45A500(SaveLoad_CurrentSavegame);
  if ( a2 )
  {
    if ( !v3 )
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 0x10000);
    *(this + 2) |= 0x2000u;
  }
  else
  {
    if ( !v3 )
      (*(void (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, 0x10000);
    *(this + 2) &= ~0x2000u;
  }
}
