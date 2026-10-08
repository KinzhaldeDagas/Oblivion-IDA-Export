int __thiscall sub_8ACD60(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x20; /*0x8acd67*/
  if ( *(this + 0x21) == (const void *)((unsigned int)*(this + 0x22) & 0x3FFFFFFF) ) /*0x8acd77*/
    sub_8A6EE0(v2, 4); /*0x8acd7c*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8acd8d*/
  v2[1] = (char *)v2[1] + 1; /*0x8acd90*/
  return a2; /*0x8acd93*/
}
