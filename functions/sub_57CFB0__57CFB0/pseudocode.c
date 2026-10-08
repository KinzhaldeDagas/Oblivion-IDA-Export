char __thiscall sub_57CFB0(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *i; // ecx

  v2 = 0; /*0x57cfb4*/
  for ( i = this + 0x38; *i != a2; ++i ) /*0x57cfb6*/
  {
    if ( (unsigned int)++v2 >= 0xA ) /*0x57cfcd*/
      return 0; /*0x57cfd1*/
  }
  return 1; /*0x57cfd1*/
}
