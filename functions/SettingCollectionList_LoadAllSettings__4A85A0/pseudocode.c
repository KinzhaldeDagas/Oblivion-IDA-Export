char __thiscall SettingCollectionList_LoadAllSettings(_DWORD *this)
{
  char v2; // bl
  _DWORD *v3; // esi

  v2 = *(this + 0x42) != 0;
  if ( !*(this + 0x42) )
    return 0;
  v3 = this + 0x43;
  if ( this != (_DWORD *)0xFFFFFEF4 )
  {
    do
    {
      if ( *v3 )
        v2 &= (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x10))(this, *v3);
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
  }
  return v2;
}
