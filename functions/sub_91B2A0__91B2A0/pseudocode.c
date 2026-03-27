int __thiscall sub_91B2A0(int *this, int a2)
{
  int v2; // edx
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD **i; // esi

  v2 = *(this + 5);
  v3 = this + 0xFFFFFFF8;
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD **)v3[0xC]; **i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 )
      return sub_91B160(v3, result);
  }
  return result;
}
