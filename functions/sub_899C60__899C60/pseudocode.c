int __thiscall sub_899C60(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x3A; /*0x899c67*/
  if ( *(this + 0x3B) == (const void *)((unsigned int)*(this + 0x3C) & 0x3FFFFFFF) ) /*0x899c77*/
    sub_8A6EE0(v2, 4); /*0x899c7c*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899c8d*/
  v2[1] = (char *)v2[1] + 1; /*0x899c90*/
  return a2; /*0x899c93*/
}
