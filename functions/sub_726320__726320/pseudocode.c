char __thiscall sub_726320(
        int this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax

  if ( a2 >= *(_DWORD *)(this + 0x10) )
    return 0;
  v9 = *(_DWORD *)(this + 0x14);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(v9 + 0x1C * a2 + 4);
  v11 = (_DWORD *)(v9 + 0x1C * a2);
  *a4 = v10;
  if ( !v10 )
    return 0;
  *a5 = *(_WORD *)(this + 0xC);
  *a6 = v11[3];
  *a7 = v11[2];
  *a8 = v11[4];
  v12 = v11[5];
  if ( v12 > *(unsigned __int16 *)(this + 0x26) )
    return 0;
  v13 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 4 * v12);
  if ( !v13 )
    return 0;
  v14 = v11[6];
  if ( *(_DWORD *)(v13 + 4) < v14 )
    return 0;
  *a3 = v14 + *(_DWORD *)(v13 + 8);
  return 1;
}
