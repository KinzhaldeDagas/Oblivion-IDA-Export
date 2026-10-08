char __thiscall sub_707770(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 3); /*0x707771*/
  if ( !v1 ) /*0x707776*/
    return 0; /*0x70778c*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v1 + 0x5C))(v1) ) /*0x707783*/
  {
    v1 = (_DWORD *)v1[0xD]; /*0x707785*/
    if ( !v1 ) /*0x70778a*/
      return 0; /*0x70778a*/
  }
  return 1; /*0x70778e*/
}
