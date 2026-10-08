int __thiscall sub_8DA080(const void **this, _WORD *a2)
{
  int v3; // eax
  int v4; // ecx
  const void **v5; // esi
  int result; // eax

  if ( a2 ) /*0x8da08a*/
  {
    sub_8BC720(a2); /*0x8da08e*/
    v3 = (int)*(this + 4); /*0x8da093*/
    v4 = (int)*(this + 3); /*0x8da096*/
    v5 = this + 2; /*0x8da099*/
    result = v3 & 0x3FFFFFFF; /*0x8da09c*/
    if ( v4 == result ) /*0x8da0a3*/
      result = sub_8A6EE0(v5, 4); /*0x8da0a8*/
    *((_DWORD *)*v5 + (_DWORD)v5[1]) = a2; /*0x8da0b5*/
    v5[1] = (char *)v5[1] + 1; /*0x8da0b8*/
  }
  return result; /*0x8da0bb*/
}
