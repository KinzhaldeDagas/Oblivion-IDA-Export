char __thiscall sub_7301D0(unsigned int *this, int a2)
{
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // edx
  float *v6; // ecx
  int v7; // edi

  if ( !a2 )
    return 0;
  v3 = *(this + 3);
  if ( v3 != *(_DWORD *)(a2 + 0xC) )
    return 0;
  v4 = *(this + 4);
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0x10) )
    {
      v5 = 0;
      if ( v3 )
      {
        v6 = *(float **)(a2 + 0x10);
        v7 = v4 - (_DWORD)v6;
        while ( *v6 == *(float *)((char *)v6 + v7) )
        {
          ++v5;
          ++v6;
          if ( v5 >= v3 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  else if ( !*(_DWORD *)(a2 + 0x10) )
  {
    return 1;
  }
  return 0;
}
