int __thiscall sub_675EF0(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // ecx
  int result; // eax
  _DWORD *v5; // edx

  if ( a2 > 6 )
    return 0;
  v3 = (_DWORD *)*(this + a2 + 0xA);
  result = 0;
  if ( v3 )
  {
    if ( a3 )
    {
      v5 = v3;
      do
      {
        if ( !*v5 )
          break;
        if ( *(_DWORD *)(*v5 + 0xC) == a3 )
          ++result;
        v5 = (_DWORD *)v5[1];
      }
      while ( v5 );
    }
    else
    {
      return BSSimpleList_Count(v3);
    }
  }
  return result;
}
