unsigned int __thiscall sub_49F520(_DWORD *this)
{
  unsigned int result; // eax
  int v2; // edx

  result = 0;
  if ( *(this + 3) )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)(*(this + 5) + v2 + 8) = 0;
      ++result;
      v2 += 0x10;
    }
    while ( result < *(this + 3) );
  }
  return result;
}
