bool *__cdecl sub_9513F0(bool *a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, float a7)
{
  bool v7; // cl
  int v8; // ebx
  bool v9; // cl
  int v10; // edx
  __m128 v11; // xmm1
  __int16 v12; // cx
  bool v13; // al
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  __m128 v18; // xmm2
  bool v19; // cc
  int v20; // esi
  char v22[5]; // [esp+13h] [ebp-1Dh] BYREF
  _BYTE v23[4]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v25[4]; // [esp+20h] [ebp-10h] BYREF
  int v26; // [esp+24h] [ebp-Ch]
  int v27; // [esp+28h] [ebp-8h]
  int v28; // [esp+2Ch] [ebp-4h]

  v7 = *sub_9511B0((bool *)v22, a2, a4, a5, a7);
  v8 = a6[1];
  v9 = v7;
  v10 = 0;
  *(_DWORD *)&v22[1] = 0;
  v28 = v8;
  if ( v8 > 0 )
  {
    v11 = (__m128)xmmword_A372D0;
    v26 = 0;
    do
    {
      v13 = 0;
      if ( v9 )
      {
        v12 = **(_WORD **)(*a6 + v10 + 0x14);
        if ( **(_WORD **)(*a6 + v10 + 0x10) != v12 && v12 != **(_WORD **)(v10 + *a6 + 0x18) )
          v13 = 1;
      }
      v14 = 0;
      v23[0] = 0;
      v24[0] = 0;
      v25[0] = 0;
      if ( v8 > 0 )
      {
        v15 = 0;
        do
        {
          if ( v14 != *(_DWORD *)&v22[1] )
          {
            v13 = v13
               && ((v16 = v15 + *a6, v17 = v10 + *a6, **(_WORD **)(v17 + 0x10) != **(_WORD **)(v16 + 0x10))
                || **(_WORD **)(v17 + 0x14) != **(_WORD **)(v16 + 0x14)
                || **(_WORD **)(v17 + 0x18) != **(_WORD **)(v16 + 0x18)
                || (v18 = _mm_sub_ps(*(__m128 *)v17, *(__m128 *)v16),
                    v27 = 0x3A83126F,
                    _mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)0x3A83126Fu, (__m128)0x3A83126Fu, 0), _mm_and_ps(v18, v11)))))
               && *sub_9510E0(v22, (unsigned __int16 **)v17, (unsigned __int16 **)v16, v23, v24, v25);
            v10 = v26;
            v8 = v28;
          }
          ++v14;
          v15 += 0x20;
        }
        while ( v14 < v8 );
      }
      v9 = v13 && v23[0] && v24[0] && v25[0];
      v10 += 0x20;
      v19 = ++*(_DWORD *)&v22[1] < v8;
      v26 = v10;
    }
    while ( v19 );
  }
  v20 = a4[1];
  if ( v20 > 2 )
  {
    if ( v9 && v8 - *(_DWORD *)(a3 + 8) / 2 + v20 == 2 )
    {
      *a1 = 1;
      return a1;
    }
    v9 = 0;
  }
  *a1 = v9;
  return a1;
}
