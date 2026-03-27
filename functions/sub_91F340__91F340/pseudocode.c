_DWORD **__thiscall sub_91F340(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax

  *this = a2;
  v4 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v4 < a3 )
  {
    v5 = 2 * v4;
    if ( a3 >= v5 )
      v5 = a3;
    sub_8A6E40((const void **)a2, v5, 4);
  }
  v6 = 0;
  for ( *(_DWORD *)(a2 + 4) = a3; v6 < a3; ++v6 )
    *(_DWORD *)(*(_DWORD *)*this + 4 * v6) = 0xFFFFFFFF;
  return (_DWORD **)this;
}
