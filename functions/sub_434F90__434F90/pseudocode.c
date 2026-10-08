int __thiscall sub_434F90(int *this)
{
  int v2; // eax
  int v3; // eax

  v2 = *(this + 9); /*0x434f93*/
  if ( v2 ) /*0x434f98*/
  {
    sub_4A1F90((_DWORD **)unk_B35300, v2, *(this + 0xA)); /*0x434fa5*/
  }
  else
  {
    v3 = *(this + 8); /*0x434fac*/
    if ( v3 ) /*0x434fb1*/
      (*(void (__thiscall **)(UInt32, int, _DWORD))(*(_DWORD *)unk_B35300 + 8))(unk_B35300, v3, *(this + 0xA)); /*0x434fc4*/
  }
  return (*(int (__thiscall **)(int *))(*this + 0x28))(this);
}
