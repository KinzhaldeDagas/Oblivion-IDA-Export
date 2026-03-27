void __thiscall sub_5A56F0(unsigned int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int i; // eax

  v2 = *(this + 4);
  v3 = *(this + 3);
  if ( v2 != v3 )
  {
    if ( v2 )
    {
      v4 = 0;
      if ( v3 )
      {
        v5 = 0;
        do
        {
          v6 = *(this + 1);
          v7 = *(_DWORD *)(v6 + 4 * v4);
          if ( v7 )
          {
            if ( *(_DWORD *)(v5 + v6) != v7 )
              *(_DWORD *)(v5 + v6) = v7;
            v5 += 4;
          }
          ++v4;
        }
        while ( v4 < *(this + 3) );
      }
    }
    v8 = *(this + 4);
    v9 = *(this + 1);
    *(this + 3) = v8;
    *(this + 2) = v8;
    if ( v8 )
    {
      *(this + 1) = FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
      for ( i = 0; i < *(this + 3); ++i )
        *(_DWORD *)(*(this + 1) + 4 * i) = *(_DWORD *)(v9 + 4 * i);
    }
    else
    {
      *(this + 1) = 0;
    }
    FormHeapFree(v9);
  }
}
