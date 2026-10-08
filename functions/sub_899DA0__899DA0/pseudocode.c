int __thiscall sub_899DA0(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x3D; /*0x899da7*/
  if ( *(this + 0x3E) == (const void *)((unsigned int)*(this + 0x3F) & 0x3FFFFFFF) ) /*0x899db7*/
    sub_8A6EE0(v2, 4); /*0x899dbc*/
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x899dcd*/
  v2[1] = (char *)v2[1] + 1; /*0x899dd0*/
  return a2; /*0x899dd3*/
}
