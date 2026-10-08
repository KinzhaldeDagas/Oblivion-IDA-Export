const void *__thiscall sub_4CD2D0(const void **this, int a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  const void **v5; // esi
  const void *result; // eax

  if ( this ) /*0x4cd2da*/
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(const void **))*this + 0x16))(this); /*0x4cd2e1*/
    if ( v3 ) /*0x4cd2e5*/
      sub_899CA0(v3, a2); /*0x4cd2ea*/
  }
  v4 = (int)*(this + 0x1A); /*0x4cd2ef*/
  v5 = this + 0x18; /*0x4cd2f2*/
  result = (const void *)(v4 & 0x3FFFFFFF); /*0x4cd2f5*/
  if ( v5[1] == result ) /*0x4cd2fd*/
    result = (const void *)sub_8A6EE0(v5, 4); /*0x4cd302*/
  *((_DWORD *)*v5 + (_DWORD)v5[1]) = a2; /*0x4cd30f*/
  v5[1] = (char *)v5[1] + 1; /*0x4cd312*/
  return result; /*0x4cd316*/
}
