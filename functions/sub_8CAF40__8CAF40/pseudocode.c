int __thiscall sub_8CAF40(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx

  v2 = *(this + 0x1B);
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD *)*(this + 0x1A); *i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 )
    {
      v5 = *(this + 0x1B) - 1;
      *(this + 0x1B) = v5;
      *(_DWORD *)(*(this + 0x1A) + 4 * result) = *(_DWORD *)(*(this + 0x1A) + 4 * v5);
    }
  }
  return result;
}
