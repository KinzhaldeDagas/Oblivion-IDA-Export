char __thiscall SettingCollectionList_SaveAllSettings(_DWORD *this)
{
  char v2; // bl
  _DWORD *v3; // esi
  char v4; // al

  v2 = *(this + 0x42) != 0;
  if ( !*(this + 0x42) )
    return 0;
  v3 = this + 0x43;
  if ( this != (_DWORD *)0xFFFFFEF4 )
  {
    do
    {
      v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xC))(this, *v3);
      v3 = (_DWORD *)v3[1];
      v2 &= v4;
    }
    while ( v3 );
  }
  return v2;
}
