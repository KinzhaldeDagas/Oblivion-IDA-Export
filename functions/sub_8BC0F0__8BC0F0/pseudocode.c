signed int __thiscall sub_8BC0F0(_DWORD *this, const void *a2, signed int a3)
{
  int v4; // edx
  int v5; // eax
  signed int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax

  v4 = *(this + 2);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = v5 - *(this + 3);
  if ( a3 <= v6 )
  {
    if ( (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) > v5 )
      *(_BYTE *)(v5 + *(_DWORD *)v4) = 0;
  }
  else
  {
    v7 = a3 + v5 - v6;
    v8 = *(_DWORD *)(v4 + 8) & 0x3FFFFFFF;
    if ( v8 < v7 + 1 )
    {
      v9 = 2 * v8;
      if ( v7 + 1 >= v9 )
        v9 = v7 + 1;
      sub_8A6E40((const void **)v4, v9, 1);
    }
    *(_DWORD *)(*(this + 2) + 4) = v7;
    *(_BYTE *)(v7 + *(_DWORD *)*(this + 2)) = 0;
  }
  sub_8B1890((void *)(*(this + 3) + *(_DWORD *)*(this + 2)), a2, a3);
  *(this + 3) += a3;
  return a3;
}
