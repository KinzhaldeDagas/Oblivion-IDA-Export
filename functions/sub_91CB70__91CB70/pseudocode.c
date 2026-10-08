int __thiscall sub_91CB70(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 2; /*0x91cb74*/
  if ( *(this + 3) == (const void *)((unsigned int)*(this + 4) & 0x3FFFFFFF) ) /*0x91cb81*/
    sub_8A6EE0(v2, 4); /*0x91cb86*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x91cb97*/
  v2[1] = (char *)v2[1] + 1; /*0x91cb9a*/
  return a2; /*0x91cb9d*/
}
