int __thiscall sub_434F90(int *this)
{
  int v2; // eax
  int v3; // eax

  v2 = *(this + 9);
  if ( v2 )
  {
    sub_4A1F90((_DWORD **)dword_B35300, v2, *(this + 0xA));
  }
  else
  {
    v3 = *(this + 8);
    if ( v3 )
      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)dword_B35300 + 8))(dword_B35300, v3, *(this + 0xA));
  }
  return (*(int (__thiscall **)(int *))(*this + 0x28))(this);
}
