void __thiscall sub_452910(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  _DWORD *v6; // ecx
  unsigned int v7; // edi
  unsigned int i; // eax
  unsigned int j; // eax

  if ( a2 != *(this + 2) )
  {
    if ( a2 < *(this + 3) )
    {
      v3 = a2;
      do
      {
        v4 = *(this + 1);
        v5 = *(_DWORD *)(v4 + 4 * v3) == 0;
        v6 = (_DWORD *)(v4 + 4 * v3);
        if ( !v5 )
        {
          *v6 = 0;
          --*(this + 4);
        }
        ++v3;
      }
      while ( v3 < *(this + 3) );
      *(this + 3) = a2;
    }
    v7 = *(this + 1);
    *(this + 2) = a2;
    if ( a2 )
    {
      *(this + 1) = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      for ( i = 0; i < *(this + 3); ++i )
        *(_DWORD *)(*(this + 1) + 4 * i) = *(_DWORD *)(v7 + 4 * i);
      for ( j = *(this + 3); j < *(this + 2); ++j )
        *(_DWORD *)(*(this + 1) + 4 * j) = 0;
    }
    else
    {
      *(this + 1) = 0;
    }
    FormHeapFree(v7);
  }
}
