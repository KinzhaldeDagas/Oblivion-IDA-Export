signed int __thiscall sub_8BC180(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int i; // eax
  _DWORD *v12; // [esp+4h] [ebp-4h]

  v3 = *(this + 3);
  v12 = this;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 += a2;
    }
    else if ( a3 == 2 )
    {
      v3 = *(_DWORD *)(*(this + 2) + 4) - a2;
    }
  }
  else
  {
    v3 = a2;
  }
  if ( v3 < 0 )
    return 1;
  v4 = *(this + 2);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v3 > v5 )
  {
    v6 = v3 + 1;
    v7 = *(_DWORD *)(v4 + 4);
    if ( v3 + 1 > v5 )
    {
      v8 = *(_DWORD *)(v4 + 8) & 0x3FFFFFFF;
      if ( v8 < v6 )
      {
        v9 = 2 * v8;
        if ( v6 >= v9 )
          v9 = v3 + 1;
        sub_8A6E40((const void **)v4, v9, 1);
        this = v12;
      }
      for ( i = v7; i < v6; ++i )
        *(_BYTE *)(i + *(_DWORD *)v4) = 0;
    }
    *(_DWORD *)(v4 + 4) = v6;
    *(_DWORD *)(*(this + 2) + 4) = v3;
  }
  *(this + 3) = v3;
  return 0;
}
