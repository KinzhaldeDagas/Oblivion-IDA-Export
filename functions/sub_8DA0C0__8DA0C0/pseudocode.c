int __thiscall sub_8DA0C0(const void **this, _WORD *a2)
{
  int v3; // eax
  int v4; // ecx
  const void **v5; // esi
  int result; // eax

  if ( a2 )
  {
    sub_8BC720(a2);
    v3 = (int)*(this + 0xD);
    v4 = (int)*(this + 0xC);
    v5 = this + 0xB;
    result = v3 & 0x3FFFFFFF;
    if ( v4 == result )
      result = sub_8A6EE0(v5, 4);
    *((_DWORD *)*v5 + (_DWORD)v5[1]) = a2;
    v5[1] = (char *)v5[1] + 1;
  }
  return result;
}
