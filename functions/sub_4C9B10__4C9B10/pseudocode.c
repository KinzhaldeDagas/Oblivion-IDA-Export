int __thiscall sub_4C9B10(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  v3 = *(this + 0x11); /*0x4c9b13*/
  if ( v3 != a2 ) /*0x4c9b1d*/
  {
    if ( v3 ) /*0x4c9b21*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x4c9b2a*/
    *(this + 0x11) = a2; /*0x4c9b2c*/
  }
  return result; /*0x4c9b2f*/
}
