_WORD *__thiscall sub_8BC030(_WORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  *(this + 3) = 1;
  *(_DWORD *)this = &off_A98330;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 4) = a3;
  v4 = *(_DWORD *)(a2 + 4) + 1;
  v5 = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
  if ( v5 < v4 )
  {
    v6 = 2 * v5;
    if ( v4 < v6 )
      v4 = v6;
    sub_8A6E40((const void **)a2, v4, 1);
  }
  *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 2) + 4) + **((_DWORD **)this + 2)) = 0;
  return this;
}
