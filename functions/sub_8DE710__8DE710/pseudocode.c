int __thiscall sub_8DE710(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x17; /*0x8de714*/
  if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) ) /*0x8de721*/
    sub_8A6EE0(v2, 4); /*0x8de726*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8de737*/
  v2[1] = (char *)v2[1] + 1; /*0x8de73a*/
  return a2; /*0x8de73d*/
}
