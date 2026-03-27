signed int __thiscall sub_90D3B0(_DWORD *this, int a2, int *a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int i; // edx
  int v6; // edi
  int v7; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // ebp
  int v12; // eax

  v3 = this;
  v4 = *(this + 1);
  for ( i = *(this + 7); v4; i += v6 )
  {
    v6 = *(_DWORD *)(v4 + 0x1C);
    v4 = *(_DWORD *)(v4 + 4);
  }
  v7 = a2 - i;
  while ( 1 )
  {
    v7 += *(this + 7);
    if ( v7 >= 0 )
      break;
    this = (_DWORD *)*(this + 1);
    if ( !this )
      return 1;
  }
  v9 = (_DWORD *)*(this + 8);
  if ( !v9 )
    return 1;
  v10 = *(_DWORD *)(*v9 + 4 * v7);
  if ( v10 < 0 )
    return 1;
  v11 = *a3;
  v12 = sub_940B80(v3[6] + 0x14 * v7);
  (*(void (__thiscall **)(int *, int, int))(v11 + 0xC))(a3, v10 + v3[8], v12);
  return 0;
}
