int __cdecl sub_92EA40(_DWORD *a1, int *a2, __m128 *a3)
{
  __int32 v3; // ecx
  int v4; // edx
  int v5; // eax
  int result; // eax
  int v7; // ebx
  int v8; // edi
  float x; // edx
  int v10; // eax
  float y; // ecx
  float v12; // edx
  float z; // ecx
  double v14; // st7
  double v15; // st6
  int v16; // eax
  __m128 v17; // [esp+8h] [ebp-60h] BYREF
  float v18; // [esp+18h] [ebp-50h]
  float v19; // [esp+1Ch] [ebp-4Ch]
  float v20; // [esp+20h] [ebp-48h]
  int v21; // [esp+24h] [ebp-44h]
  float v22; // [esp+28h] [ebp-40h]
  float v23; // [esp+2Ch] [ebp-3Ch]
  float v24; // [esp+30h] [ebp-38h]
  int v25; // [esp+34h] [ebp-34h]
  __m128 v26; // [esp+38h] [ebp-30h] BYREF
  __int128 v27; // [esp+48h] [ebp-20h]
  __int128 v28; // [esp+58h] [ebp-10h]

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v28 = 0;
  DWORD2(v28) = v5;
  result = a1[1];
  v7 = 0;
  v26 = 0;
  v27 = 0;
  v26.m128_i32[0] = v3;
  DWORD1(v27) = v4;
  if ( result > 0 )
  {
    v8 = 0;
    do
    {
      x = stru_BA7A40.x;
      v10 = v8 + *a1;
      v17.m128_i32[0] = *(_DWORD *)v10;
      v17.m128_u64[1] = LODWORD(x);
      y = stru_BA7A40.y;
      v17.m128_f32[1] = x;
      v18 = *(float *)(v10 + 4);
      v12 = y;
      v19 = y;
      z = stru_BA7A40.z;
      v20 = v12;
      v21 = 0;
      v22 = *(float *)(v10 + 8);
      v23 = z;
      v24 = z;
      v25 = 0;
      sub_8D2C20(&v17, &v26);
      v14 = v22;
      v15 = v18;
      v16 = v8 + *a1;
      *(_DWORD *)v16 = v17.m128_i32[0];
      *(float *)(v16 + 4) = v15;
      *(float *)(v16 + 8) = v14;
      *(_DWORD *)(v16 + 0xC) = 0;
      *(__m128 *)(v8 + *a1) = _mm_add_ps(*(__m128 *)(*a1 + v8), *a3);
      result = a1[1];
      ++v7;
      v8 += 0x10;
    }
    while ( v7 < result );
  }
  return result;
}
