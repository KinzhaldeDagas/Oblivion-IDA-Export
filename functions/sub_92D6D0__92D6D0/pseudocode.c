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

  v4 = *a1; /*0x92d6dc*/
  *a3 = a1[1]; /*0x92d6e4*/
  a3[1] = *(_DWORD *)(a2 + 4); /*0x92d6ec*/
  a3[2] = 0; /*0x92d6f5*/
  a3[4] = 0; /*0x92d6f8*/
  v5 = (unsigned __int16 *)*a3; /*0x92d6fb*/
  a3[3] = 0xFFFFFFFF; /*0x92d6fe*/
  v6 = (float *)(v4 + 0x10 * *(unsigned __int16 *)a3[1]); /*0x92d712*/
  v7 = (float *)(v4 + 0x10 * *v5); /*0x92d718*/
  v22 = v4; /*0x92d71c*/
  sub_92D400(v7, v6, a4); /*0x92d720*/
  v24 = 2 * (*(_DWORD *)(a2 + 8) + a1[2]); /*0x92d738*/
  result = 2 * (*(_BYTE *)(a2 + 8) + *((_BYTE *)a1 + 8)); /*0x92d731*/
  for ( i = 0; i < v24; result = ++i ) /*0x92d744*/
  {
    v9 = a1[2] - 1; /*0x92d756*/
    v21 = 0; /*0x92d757*/
    v19 = v9; /*0x92d75c*/
    if ( v9 >= 0 ) /*0x92d760*/
    {
      while ( 1 ) /*0x92d773*/
      {
        v10 = a1[1]; /*0x92d773*/
        v11 = *(unsigned __int16 *)(v10 + 8 * v9); /*0x92d776*/
        v12 = v10 + 8 * v9; /*0x92d77a*/
        v13 = (float *)(v22 + 0x10 * v11); /*0x92d784*/
        v25.m128_f32[0] = *v13 - *v7; /*0x92d791*/
        v25.m128_f32[1] = v13[1] - v7[1]; /*0x92d79b*/
        v25.m128_f32[2] = v13[2] - v7[2]; /*0x92d7a5*/
        v25.m128_f32[3] = v13[3] - v7[3]; /*0x92d7af*/
        v14 = _mm_mul_ps(*a4, v25); /*0x92d7b8*/
        if ( (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x92d7e4*/
                   + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) > (double)flt_AA1C44 )
        {
          *a3 = v12; /*0x92d7ec*/
          v7 = v13; /*0x92d7ee*/
          sub_92D400(v13, v6, a4); /*0x92d7f0*/
          v21 = 1; /*0x92d7f8*/
        }
        if ( --v19 < 0 ) /*0x92d801*/
          break; /*0x92d801*/
        v9 = v19; /*0x92d768*/
      }
    }
    v15 = *(_DWORD *)(a2 + 8) - 1; /*0x92d80d*/
    v20 = v15; /*0x92d80e*/
    if ( v15 >= 0 ) /*0x92d812*/
    {
      while ( 1 ) /*0x92d826*/
      {
        v16 = (unsigned __int16 *)(*(_DWORD *)(a2 + 4) + 8 * v15); /*0x92d826*/
        v17 = (float *)(v22 + 0x10 * *v16); /*0x92d833*/
        v26.m128_f32[0] = *v17 - *v6; /*0x92d840*/
        v26.m128_f32[1] = v17[1] - v6[1]; /*0x92d84a*/
        v26.m128_f32[2] = v17[2] - v6[2]; /*0x92d854*/
        v26.m128_f32[3] = v17[3] - v6[3]; /*0x92d85e*/
        v18 = _mm_mul_ps(*a4, v26); /*0x92d867*/
        if ( (float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x92d893*/
                   + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0])) > (double)flt_AA1C44 )
        {
          a3[1] = (int)v16; /*0x92d89b*/
          v6 = v17; /*0x92d89e*/
          sub_92D400(v7, v17, a4); /*0x92d8a0*/
          v21 = 1; /*0x92d8a8*/
        }
        if ( --v20 < 0 ) /*0x92d8b1*/
          break; /*0x92d8b1*/
        v15 = v20; /*0x92d81a*/
      }
    }
    result = v21; /*0x92d8b7*/
    if ( !v21 ) /*0x92d8bd*/
      break; /*0x92d8bd*/
    sub_92D400(v7, v6, a4); /*0x92d8c2*/
  }
  return result; /*0x92d8df*/
}
