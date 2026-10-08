int __thiscall sub_899CE0(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x37; /*0x899ce7*/
  if ( *(this + 0x38) == (const void *)((unsigned int)*(this + 0x39) & 0x3FFFFFFF) ) /*0x899cf7*/
    sub_8A6EE0(v2, 4); /*0x899cfc*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899d0d*/
  v2[1] = (char *)v2[1] + 1; /*0x899d10*/
  return a2; /*0x899d13*/
}
