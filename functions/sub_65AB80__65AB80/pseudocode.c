char __thiscall sub_65AB80(_DWORD *this)
{
  char v2; // al
  _WORD *v3; // esi
  char v4; // bl

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x1C8))(this);
  v3 = (_WORD *)*(this + 0xF);
  v4 = v2;
  if ( v3 )
  {
    sub_88CD50(v3, 1, 0);
    return v4 | 1;
  }
  return v4;
}
