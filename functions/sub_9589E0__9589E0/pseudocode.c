int __thiscall sub_9589E0(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // edx
  int result; // eax
  _DWORD *v4; // edx

  v1 = 0;
  if ( (int)*(this + 4) > 0 )
  {
    v2 = this + 0x3ED;
    do
    {
      *v2 = 0;
      ++v1;
      v2 += 0x14;
    }
    while ( v1 < *(this + 4) );
  }
  result = 0;
  if ( (int)*(this + 2) > 0 )
  {
    v4 = this + 0x14;
    do
    {
      *v4 = 0;
      ++result;
      v4 += 0x10;
    }
    while ( result < *(this + 2) );
  }
  return result;
}
