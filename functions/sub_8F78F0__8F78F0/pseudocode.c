_DWORD *__thiscall sub_8F78F0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  const void **v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax

  *(this + 2) = a5;
  v6 = (const void **)(this + 3);
  *((_WORD *)this + 3) = 1;
  *this = &off_A9B5CC;
  *(this + 3) = this + 6;
  *(this + 4) = 0;
  *(this + 5) = 0x80000004;
  v7 = *(_DWORD *)(*(_DWORD *)a2 + 0x10);
  v8 = *(this + 5) & 0x3FFFFFFF;
  if ( v8 < v7 )
  {
    v9 = 2 * v8;
    if ( v7 >= v9 )
      v9 = *(_DWORD *)(*(_DWORD *)a2 + 0x10);
    sub_8A6E40(v6, v9, 2);
  }
  v10 = 0;
  for ( v6[1] = (const void *)v7; v10 < v7; ++v10 )
    *((_WORD *)*v6 + v10) = 0xFFFF;
  return this;
}
