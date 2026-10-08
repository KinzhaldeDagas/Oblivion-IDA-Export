int __thiscall sub_899D60(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x52; /*0x899d67*/
  if ( *(this + 0x53) == (const void *)((unsigned int)*(this + 0x54) & 0x3FFFFFFF) ) /*0x899d77*/
    sub_8A6EE0(v2, 4); /*0x899d7c*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899d8d*/
  v2[1] = (char *)v2[1] + 1; /*0x899d90*/
  return a2; /*0x899d93*/
}
