int __thiscall sub_899C20(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x31; /*0x899c27*/
  if ( *(this + 0x32) == (const void *)((unsigned int)*(this + 0x33) & 0x3FFFFFFF) ) /*0x899c37*/
    sub_8A6EE0(v2, 4); /*0x899c3c*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899c4d*/
  v2[1] = (char *)v2[1] + 1; /*0x899c50*/
  return a2; /*0x899c53*/
}
