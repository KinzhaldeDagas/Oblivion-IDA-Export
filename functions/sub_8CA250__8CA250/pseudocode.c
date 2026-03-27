int __thiscall sub_8CA250(int *this, int a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // edx
  int v5; // edx
  int v6; // esi
  int v7; // edx

  v2 = *(this + 0xD);
  result = 0;
  if ( v2 > 0 )
  {
    for ( i = (_DWORD *)*(this + 0xC); *i != a2; ++i )
    {
      if ( ++result >= v2 )
        return result;
    }
    if ( result >= 0 )
    {
      v5 = *(this + 0xC);
      v6 = *(this + 0xD) - 1;
      *(this + 0xD) = v6;
      *(_DWORD *)(v5 + 4 * result) = *(_DWORD *)(v5 + 4 * v6);
      v7 = *(this + 0x10) - 1;
      *(this + 0x10) = v7;
      *(_DWORD *)(*(this + 0xF) + 4 * result) = *(_DWORD *)(*(this + 0xF) + 4 * v7);
    }
  }
  return result;
}
