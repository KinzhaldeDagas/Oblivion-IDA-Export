char __thiscall SettingCollectionList_LoadAllSettings(_DWORD *this)
{
  char v2; // bl
  _DWORD *v3; // esi

  v2 = *(this + 0x42) != 0; /*0x4a85ab*/
  if ( !*(this + 0x42) ) /*0x4a85a4*/
    return 0; /*0x4a85e0*/
  v3 = this + 0x43; /*0x4a85b3*/
  if ( this != (_DWORD *)0xFFFFFEF4 ) /*0x4a85bb*/
  {
    do /*0x4a85d7*/
    {
      if ( *v3 ) /*0x4a85c0*/
        v2 &= (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x10))(this, *v3); /*0x4a85d0*/
      v3 = (_DWORD *)v3[1]; /*0x4a85d2*/
    }
    while ( v3 ); /*0x4a85d7*/
  }
  return v2; /*0x4a85da*/
}
