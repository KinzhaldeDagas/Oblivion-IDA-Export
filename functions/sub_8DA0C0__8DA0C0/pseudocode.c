int __thiscall sub_8DA0C0(const void **this, _WORD *a2)
{
  int v3; // eax
  int v4; // ecx
  const void **v5; // esi
  int result; // eax

  if ( a2 ) /*0x8da0ca*/
  {
    sub_8BC720(a2); /*0x8da0ce*/
    v3 = (int)*(this + 0xD); /*0x8da0d3*/
    v4 = (int)*(this + 0xC); /*0x8da0d6*/
    v5 = this + 0xB; /*0x8da0d9*/
    result = v3 & 0x3FFFFFFF; /*0x8da0dc*/
    if ( v4 == result ) /*0x8da0e3*/
      result = sub_8A6EE0(v5, 4); /*0x8da0e8*/
    *((_DWORD *)*v5 + (_DWORD)v5[1]) = a2; /*0x8da0f5*/
    v5[1] = (char *)v5[1] + 1; /*0x8da0f8*/
  }
  return result; /*0x8da0fb*/
}
