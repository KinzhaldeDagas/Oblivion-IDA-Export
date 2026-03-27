char __cdecl sub_92D6D0(int *a1, int a2, int *a3, __m128 *a4)
{
  int v4; // ecx
  unsigned __int16 *v5; // edx
  float *v6; // esi
  float *v7; // edi
  char result; // al
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  float *v13; // ecx
  __m128 v14; // xmm0
  int v15; // eax
  unsigned __int16 *v16; // edx
  float *v17; // ecx
  __m128 v18; // xmm0
  int v19; // [esp+14h] [ebp-3Ch]
  int v20; // [esp+14h] [ebp-3Ch]
  char v21; // [esp+18h] [ebp-38h]
  int v22; // [esp+1Ch] [ebp-34h]
  int i; // [esp+20h] [ebp-30h]
  int v24; // [esp+2Ch] [ebp-24h]
  __m128 v25; // [esp+30h] [ebp-20h]
  __m128 v26; // [esp+40h] [ebp-10h]

  v4 = *a1;
  *a3 = a1[1];
  a3[1] = *(_DWORD *)(a2 + 4);
  a3[2] = 0;
  a3[4] = 0;
  v5 = (unsigned __int16 *)*a3;
  a3[3] = 0xFFFFFFFF;
  v6 = (float *)(v4 + 0x10 * *(unsigned __int16 *)a3[1]);
  v7 = (float *)(v4 + 0x10 * *v5);
  v22 = v4;
  sub_92D400(v7, v6, a4);
  v24 = 2 * (*(_DWORD *)(a2 + 8) + a1[2]);
  result = 2 * (*(_BYTE *)(a2 + 8) + *((_BYTE *)a1 + 8));
  for ( i = 0; i < v24; result = ++i )
  {
    v9 = a1[2] - 1;
    v21 = 0;
    v19 = v9;
    if ( v9 >= 0 )
    {
      while ( 1 )
      {
        v10 = a1[1];
        v11 = *(unsigned __int16 *)(v10 + 8 * v9);
        v12 = v10 + 8 * v9;
        v13 = (float *)(v22 + 0x10 * v11);
        v25.m128_f32[0] = *v13 - *v7;
        v25.m128_f32[1] = v13[1] - v7[1];
        v25.m128_f32[2] = v13[2] - v7[2];
        v25.m128_f32[3] = v13[3] - v7[3];
        v14 = _mm_mul_ps(*a4, v25);
        if ( (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) > (double)flt_AA1C44 )
        {
          *a3 = v12;
          v7 = v13;
          sub_92D400(v13, v6, a4);
          v21 = 1;
        }
        if ( --v19 < 0 )
          break;
        v9 = v19;
      }
    }
    v15 = *(_DWORD *)(a2 + 8) - 1;
    v20 = v15;
    if ( v15 >= 0 )
    {
      while ( 1 )
      {
        v16 = (unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 8 * v15);
        v17 = (float *)(v22 + 0x10 * *v16);
        v26.m128_f32[0] = *v17 - *v6;
        v26.m128_f32[1] = v17[1] - v6[1];
        v26.m128_f32[2] = v17[2] - v6[2];
        v26.m128_f32[3] = v17[3] - v6[3];
        v18 = _mm_mul_ps(*a4, v26);
        if ( (float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0])) > (double)flt_AA1C44 )
        {
          a3[1] = (int)v16;
          v6 = v17;
          sub_92D400(v7, v17, a4);
          v21 = 1;
        }
        if ( --v20 < 0 )
          break;
        v15 = v20;
      }
    }
    result = v21;
    if ( !v21 )
      break;
    sub_92D400(v7, v6, a4);
  }
  return result;
}
