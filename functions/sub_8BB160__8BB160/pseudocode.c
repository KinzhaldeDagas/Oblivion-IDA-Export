BOOL __thiscall sub_8BB160(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 0x28))(this); /*0x8bb165*/
  *(this + 2) = v3; /*0x8bb170*/
  return v3 == 0xFFFFFFFF; /*0x8bb173*/
}
