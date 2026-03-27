int __thiscall sub_494E90(unsigned int *this, int a2)
{
  int result; // eax
  unsigned int v3; // esi
  int v4; // edx
  _DWORD *i; // ecx

  result = 0xFFFFFFFF;
  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = 0;
      for ( i = (_DWORD *)*(this + 1); *i != a2; ++i )
      {
        if ( ++v4 >= v3 )
          return result;
      }
      return v4;
    }
  }
  return result;
}
