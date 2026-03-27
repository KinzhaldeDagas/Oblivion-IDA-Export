int __thiscall sub_8CDB00(const void **this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  const void **v6; // esi

  result = sub_88D780(this, a2);
  if ( !result )
  {
    v4 = (int)*(this + 0x26);
    v5 = (int)*(this + 0x25);
    v6 = this + 0x24;
    result = v4 & 0x3FFFFFFF;
    if ( v5 == result )
      result = sub_8A6EE0(v6, 4);
    *((_DWORD *)*v6 + (_DWORD)v6[1]) = a2;
    v6[1] = (char *)v6[1] + 1;
  }
  return result;
}
