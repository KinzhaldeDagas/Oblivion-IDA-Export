int __thiscall sub_7AA4A0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)*(this + 0x88C); /*0x7aa4a0*/
  if ( !v2 ) /*0x7aa4a8*/
    return 0; /*0x7aa4c4*/
  while ( 1 ) /*0x7aa4b3*/
  {
    v3 = v2[2]; /*0x7aa4b3*/
    v2 = (_DWORD *)*v2; /*0x7aa4b7*/
    if ( v3 ) /*0x7aa4b9*/
    {
      if ( *(_DWORD *)(v3 + 0x10) == a2 ) /*0x7aa4be*/
        break; /*0x7aa4be*/
    }
    if ( !v2 ) /*0x7aa4c2*/
      return 0; /*0x7aa4c2*/
  }
  return *(_DWORD *)(v3 + 0x1C); /*0x7aa4c6*/
}
