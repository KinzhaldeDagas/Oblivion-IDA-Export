int __thiscall sub_700A90(_DWORD *this, float a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] ) /*0x700a96*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2)); /*0x700aaf*/
  return result; /*0x700ab8*/
}
