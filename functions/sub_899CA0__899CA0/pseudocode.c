int __thiscall sub_899CA0(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x34; /*0x899ca7*/
  if ( *(this + 0x35) == (const void *)((unsigned int)*(this + 0x36) & 0x3FFFFFFF) ) /*0x899cb7*/
    sub_8A6EE0(v2, 4); /*0x899cbc*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899ccd*/
  v2[1] = (char *)v2[1] + 1; /*0x899cd0*/
  return a2; /*0x899cd3*/
}
