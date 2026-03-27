void __thiscall sub_45A300(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  unsigned int v3; // esi
  unsigned int v4; // eax
  _DWORD **i; // edx
  _DWORD *v6; // edi
  int v7; // edx
  int v8; // esi
  int v9; // edx

  v2 = (_DWORD *)*(this + 7);
  if ( v2 )
  {
    v3 = v2[3];
    v4 = 0;
    if ( v3 )
    {
      for ( i = (_DWORD **)v2[1]; ; ++i )
      {
        v6 = *i;
        if ( *i )
        {
          if ( *v6 == a2 )
            break;
        }
        if ( ++v4 >= v3 )
          return;
      }
      if ( v4 < v3 )
      {
        v7 = v2[1];
        v8 = *(_DWORD *)(v7 + 4 * v4);
        *(_DWORD *)(v7 + 4 * v4) = 0;
        if ( v8 )
          --v2[4];
        v9 = v2[3] - 1;
        if ( v4 == v9 )
          v2[3] = v9;
      }
      FormHeapFree((unsigned int)v6);
    }
  }
}
