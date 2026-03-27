int __thiscall sub_8B0D50(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // ecx

  v2 = *(this + 2);
  result = a2 + 1;
  if ( a2 + 1 <= v2 )
  {
    v4 = (_DWORD *)(*this + 4 * result);
    do
    {
      if ( *v4 )
        break;
      ++result;
      ++v4;
    }
    while ( result <= v2 );
  }
  return result;
}
