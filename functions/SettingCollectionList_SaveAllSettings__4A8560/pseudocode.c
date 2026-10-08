char __thiscall SettingCollectionList_SaveAllSettings(_DWORD *this)
{
  char v2; // bl
  _DWORD *v3; // esi
  char v4; // al

  v2 = *(this + 0x42) != 0; /*0x4a856b*/
  if ( !*(this + 0x42) ) /*0x4a8564*/
    return 0; /*0x4a859c*/
  v3 = this + 0x43; /*0x4a8573*/
  if ( this != (_DWORD *)0xFFFFFEF4 ) /*0x4a857b*/
  {
    do /*0x4a8593*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0xC))(this, *v3); /*0x4a858a*/
      v3 = (_DWORD *)v3[1]; /*0x4a858c*/
      v2 &= v4; /*0x4a858f*/
    }
    while ( v3 ); /*0x4a8593*/
  }
  return v2; /*0x4a8596*/
}
