int __thiscall sub_899D20(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x43; /*0x899d27*/
  if ( *(this + 0x44) == (const void *)((unsigned int)*(this + 0x45) & 0x3FFFFFFF) ) /*0x899d37*/
    sub_8A6EE0(v2, 4); /*0x899d3c*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899d4d*/
  v2[1] = (char *)v2[1] + 1; /*0x899d50*/
  return a2; /*0x899d53*/
}
