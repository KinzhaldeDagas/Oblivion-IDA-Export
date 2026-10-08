char __thiscall sub_708CE0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  bool v3; // zf

  v2 = (_DWORD *)*(this + 0x34); /*0x708ce0*/
  if ( !v2 ) /*0x708ce8*/
    return 0; /*0x708cfe*/
  while ( 1 ) /*0x708cf0*/
  {
    v3 = v2[2] == a2; /*0x708cf0*/
    v2 = (_DWORD *)*v2; /*0x708cf6*/
    if ( v3 ) /*0x708cf8*/
      break; /*0x708cf8*/
    if ( !v2 ) /*0x708cfc*/
      return 0; /*0x708cfc*/
  }
  return 1; /*0x708d00*/
}
