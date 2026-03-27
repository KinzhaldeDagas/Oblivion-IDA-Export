__int16 __thiscall sub_8DBA50(int this, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // ebp
  float *v7; // eax
  int v8; // ebx
  unsigned __int16 v9; // ax
  unsigned int v10; // edi
  unsigned int *v11; // eax
  bool v12; // cf
  char *v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // edx
  __m128 *v18; // ecx
  __m128 v19; // xmm0
  int v21; // [esp+10h] [ebp-41Ch]
  int v22; // [esp+14h] [ebp-418h]
  _DWORD v23[4]; // [esp+18h] [ebp-414h] BYREF
  char v24; // [esp+28h] [ebp-404h] BYREF
  int v25; // [esp+428h] [ebp-4h]

  v5 = a5;
  LOWORD(v7) = *(_WORD *)(this + 0xE);
  *(_WORD *)(this + 0xE) = (_WORD)v7 - 1;
  if ( !(_WORD)v7 )
  {
    v8 = a2 + *(_DWORD *)(a2 + 0x10);
    v21 = a3 + *(_DWORD *)(a3 + 0x10);
    v9 = *(_WORD *)(v21 + 0x8E);
    v22 = v8;
    if ( *(_WORD *)(v8 + 0x8E) < v9 )
      v9 = *(_WORD *)(v8 + 0x8E);
    *(_WORD *)(this + 0xE) = v9;
    v10 = *a5;
    v11 = a5 + 0xC;
    v12 = (unsigned int)(a5 + 0xC) < *a5;
    v23[1] = a3;
    v23[0] = a2;
    v23[3] = a5;
    v25 = this;
    v13 = &v24;
    if ( v12 )
    {
      v14 = *(_DWORD *)(this + 0x1C);
      v15 = *(_DWORD *)(this + 0x48);
      do
      {
        *(_DWORD *)v13 = v15 + 0x14 * *(unsigned __int8 *)(*((unsigned __int16 *)v11 + 0x10) + v14);
        v11 += 0xC;
        v13 += 4;
      }
      while ( (unsigned int)v11 < v10 );
      v8 = v22;
      v5 = a5;
    }
    sub_8DC9B0(*(_DWORD *)(this + 8), *(_DWORD *)(this + 8), (int)v23);
    v16 = *(_DWORD *)(v8 + 0x98);
    if ( v16 )
      sub_8DC130(v16, v8, (int)v23);
    LOWORD(v7) = v21;
    if ( *(_DWORD *)(v21 + 0x98) )
      LOWORD(v7) = sub_8DC130(v21, v21, (int)v23);
  }
  v17 = *v5;
  v18 = (__m128 *)(v5 + 0xC);
  if ( (unsigned int)(v5 + 0xC) < *v5 )
  {
    do
    {
      v7 = (float *)(*(_DWORD *)(this + 0x30)
                   + 0x20 * *(unsigned __int8 *)(v18[2].m128_u16[0] + *(_DWORD *)(this + 0x1C)));
      _mm_stream_ps(v7, *v18);
      v19 = v18[1];
      v18 += 3;
      _mm_stream_ps(v7 + 4, v19);
    }
    while ( (unsigned int)v18 < v17 );
  }
  return (__int16)v7;
}
