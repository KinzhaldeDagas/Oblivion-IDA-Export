char __thiscall sub_8F5790(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = this; /*0x8f5790*/
  v3 = *(this + 2); /*0x8f5792*/
  if ( v3 ) /*0x8f5797*/
    LOBYTE(v2) = sub_89BCC0((int)v2, v3, (int)v2); /*0x8f579d*/
  return (char)v2; /*0x8f57a2*/
}
