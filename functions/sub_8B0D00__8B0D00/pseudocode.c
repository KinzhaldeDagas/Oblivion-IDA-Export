int __thiscall sub_8B0D00(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = *(this + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v3 = (_DWORD *)*this;
    do
    {
      if ( *v3 )
        break;
      ++result;
      ++v3;
    }
    while ( result <= v1 );
  }
  return result;
}
