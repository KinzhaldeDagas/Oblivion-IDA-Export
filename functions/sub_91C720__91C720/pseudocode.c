int __thiscall sub_91C720(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx

  v2 = *(this + 3);
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD *)*(this + 2); *i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 )
    {
      v5 = *(this + 3) - 1;
      *(this + 3) = v5;
      *(_DWORD *)(*(this + 2) + 4 * result) = *(_DWORD *)(*(this + 2) + 4 * v5);
    }
  }
  return result;
}
