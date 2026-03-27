int __thiscall sub_8E1440(
        const void **this,
        int a2,
        __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        _WORD *a6,
        _WORD *a7)
{
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax

  v8 = (int)*(this + 1) + 2;
  v9 = (unsigned int)*(this + 2) & 0x3FFFFFFF;
  if ( v9 < v8 )
  {
    v10 = 2 * v9;
    if ( v8 >= v10 )
      v10 = (int)*(this + 1) + 2;
    sub_8A6E40(this, v10, 4);
  }
  v11 = (int)*this + 4 * v8 - 0xC;
  for ( *(this + 1) = (const void *)v8; a5 <= *(_WORD *)v11; v11 -= 4 )
    *(_DWORD *)(v11 + 8) = *(_DWORD *)v11;
  *(_WORD *)(v11 + 8) = a5;
  *(_WORD *)(v11 + 0xA) = a3;
  for ( *a7 = ((v11 - (int)*this) >> 2) + 2; a4 < *(_WORD *)v11; v11 -= 4 )
    *(_DWORD *)(v11 + 4) = *(_DWORD *)v11;
  *(_WORD *)(v11 + 6) = a3;
  *(_WORD *)(v11 + 4) = a4;
  result = ((v11 - (int)*this) >> 2) + 1;
  *a6 = result;
  return result;
}
