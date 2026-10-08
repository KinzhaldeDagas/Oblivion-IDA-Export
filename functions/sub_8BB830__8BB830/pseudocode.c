int __thiscall sub_8BB830(const void **this, int a2, int a3)
{
  const void **v3; // esi

  v3 = this + 5; /*0x8bb834*/
  if ( *(this + 6) == (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF) ) /*0x8bb841*/
    sub_8A6EE0(v3, 4); /*0x8bb846*/
  *((_DWORD *)*v3 + (_DWORD)v3[1]) = a2; /*0x8bb857*/
  v3[1] = (char *)v3[1] + 1; /*0x8bb85a*/
  return a2; /*0x8bb85d*/
}
