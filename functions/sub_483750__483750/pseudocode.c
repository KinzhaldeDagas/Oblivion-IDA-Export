unsigned int __thiscall sub_483750(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // edi
  unsigned int i; // edx
  unsigned int v6; // eax

  result = *(this + 3);
  v2 = result >> 1;
  v3 = 0;
  if ( result )
  {
    v4 = -v2;
    do
    {
      for ( i = 0; i < result; ++i )
      {
        v6 = *(this + 4) + 0x10 * (i + v3 * result);
        if ( !*(_DWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 0xC) )
        {
          *(_DWORD *)(v6 + 8) = v4 + *(this + 1);
          *(_DWORD *)(v6 + 0xC) = i + *(this + 2) - v2;
        }
        result = *(this + 3);
      }
      result = *(this + 3);
      ++v3;
      ++v4;
    }
    while ( v3 < result );
  }
  return result;
}
