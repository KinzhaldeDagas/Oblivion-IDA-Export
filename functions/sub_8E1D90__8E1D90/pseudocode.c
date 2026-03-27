int __thiscall sub_8E1D90(__m128 *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // edi

  v3 = *((_DWORD *)this + 0x11);
  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF) < v3 )
    sub_8A6E40((const void **)a2, v3, 0x20);
  *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 0x11);
  result = *((_DWORD *)this + 0x11);
  v5 = 0;
  if ( result > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      sub_8E1060(this, (unsigned __int16 *)(v6 + *((_DWORD *)this + 0x10)), (__m128 *)(v7 + *(_DWORD *)a2));
      result = *((_DWORD *)this + 0x11);
      ++v5;
      v7 += 0x20;
      v6 += 0x10;
    }
    while ( v5 < result );
  }
  return result;
}
