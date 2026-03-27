GridDistantArray *__thiscall GridDistantArray::GridDistantArray(GridDistantArray *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  unsigned int v5; // ecx
  int *v6; // eax
  _DWORD *v7; // ebp
  unsigned int i; // ebp
  unsigned int j; // edi
  UInt32 v10; // edi
  double v11; // st7
  double v12; // st6
  double v14; // st7
  float v15; // [esp+10h] [ebp-14h]

  sub_481DE0(this);
  *(_DWORD *)this = &GridDistantArray::`vftable';
  sub_483320();
  v2 = dword_B06A98;
  v3 = uGridsToLoad + 2 * GridDistantCount;
  dword_B34418 = GridDistantCount;
  dword_B3441C = v2;
  *((_DWORD *)this + 3) = v3;
  v4 = v3 * v3;
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v4;
  v6 = (int *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  if ( v6 )
  {
    v7 = v6 + 1;
    *v6 = v4;
    ArrayConstructor(v6 + 1, 0x10u, v4, (int)sub_6D73E0, (void (__thiscall *)(void *))sub_483600);
  }
  else
  {
    v7 = 0;
  }
  *((_DWORD *)this + 4) = v7;
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    for ( j = 0; j < *((_DWORD *)this + 3); ++j )
      sub_483680(this, i, j);
  }
  v10 = dword_B34424;
  if ( dword_B34424 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
    {
      if ( v10 )
        (**(void (__thiscall ***)(UInt32, int))v10)(v10, 1);
    }
    dword_B34424 = 0;
  }
  v11 = (double)(uGridsToLoad << 0xC);
  if ( (uGridsToLoad & 0x80000) != 0 )
    v11 = v11 + flt_A2FC78;
  v12 = (double)(dword_B34418 << 0xC);
  if ( (dword_B34418 & 0x80000) != 0 )
    v12 = v12 + flt_A2FC78;
  v15 = v11 * dbl_A2FAA0;
  flt_B34414 = v15 + v12;
  v14 = flt_B06AB0;
  flt_B34410 = flt_B34414 - v14;
  flt_B2C334 = flt_B34410;
  flt_B2C338 = v14;
  return this;
}
