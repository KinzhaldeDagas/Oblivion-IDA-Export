char __thiscall sub_7077A0(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // ecx

  v1 = (_DWORD *)*(this + 0x27); /*0x7077a0*/
  if ( !v1 ) /*0x7077a8*/
    return 0; /*0x7077c5*/
  while ( 1 ) /*0x7077b3*/
  {
    v2 = v1[2]; /*0x7077b3*/
    v1 = (_DWORD *)*v1; /*0x7077b7*/
    if ( v2 ) /*0x7077b9*/
    {
      if ( *(_DWORD *)(v2 + 0xC) ) /*0x7077bb*/
        break; /*0x7077bb*/
    }
    if ( !v1 ) /*0x7077c3*/
      return 0; /*0x7077c3*/
  }
  return 1; /*0x7077c7*/
}
