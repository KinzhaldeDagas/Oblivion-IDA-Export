char __thiscall sub_72CDF0(unsigned int *this, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edi
  bool v5; // zf
  _WORD *v6; // edx

  v2 = 0;
  v3 = 0;
  if ( !a2[2] )
    return 1;
  v4 = *(this + 2);
  while ( 1 )
  {
    v5 = v2 == v4;
    if ( v2 < v4 )
    {
      v6 = (_WORD *)(*this + 2 * v2);
      do
      {
        if ( *v6 >= *(_WORD *)(*a2 + 2 * v3) )
          break;
        ++v2;
        ++v6;
      }
      while ( v2 < v4 );
      v5 = v2 == v4;
    }
    if ( v5 || *(_WORD *)(*this + 2 * v2) != *(_WORD *)(*a2 + 2 * v3) )
      break;
    ++v3;
    ++v2;
    if ( v3 >= a2[2] )
      return 1;
  }
  return 0;
}
