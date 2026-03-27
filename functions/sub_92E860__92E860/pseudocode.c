int __cdecl sub_92E860(_DWORD *a1, float *a2, __m128 *a3)
{
  double v3; // st7
  double v5; // st7
  unsigned __int8 v6; // c0
  unsigned __int8 v7; // c3
  double v9; // st6
  unsigned __int8 v10; // c0
  unsigned __int8 v11; // c3
  double v13; // st5
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  int result; // eax
  int v17; // ebx
  double v18; // st7
  int v19; // eax
  double v20; // st6
  double v21; // st5
  float y; // eax
  double v23; // st5
  float v24; // ecx
  float z; // eax
  double v26; // st7
  double v27; // st6
  int v28; // eax
  int v29; // [esp+Ch] [ebp-84h]
  float v30; // [esp+10h] [ebp-80h] BYREF
  float v31; // [esp+14h] [ebp-7Ch]
  float v32; // [esp+18h] [ebp-78h]
  float v33; // [esp+1Ch] [ebp-74h]
  float v34; // [esp+20h] [ebp-70h]
  float v35; // [esp+24h] [ebp-6Ch]
  float v36; // [esp+28h] [ebp-68h]
  float v37; // [esp+2Ch] [ebp-64h]
  __m128 v38; // [esp+30h] [ebp-60h] BYREF
  float v39; // [esp+40h] [ebp-50h]
  float v40; // [esp+44h] [ebp-4Ch]
  float v41; // [esp+48h] [ebp-48h]
  int v42; // [esp+4Ch] [ebp-44h]
  float v43; // [esp+50h] [ebp-40h]
  float v44; // [esp+54h] [ebp-3Ch]
  float v45; // [esp+58h] [ebp-38h]
  int v46; // [esp+5Ch] [ebp-34h]
  __m128 v47; // [esp+60h] [ebp-30h] BYREF
  __int128 v48; // [esp+70h] [ebp-20h]
  __int128 v49; // [esp+80h] [ebp-10h]

  sub_92CD60((int)a1, (int)&v30);
  a3->m128_f32[0] = v30 + v34;
  a3->m128_f32[1] = v31 + v35;
  a3->m128_f32[2] = v32 + v36;
  a3->m128_f32[3] = v33 + v37;
  v3 = v34 - v30;
  *a3 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *a3);
  *a2 = v3;
  a2[1] = v35 - v31;
  a2[2] = v36 - v32;
  a2[3] = v37 - v33;
  v5 = fConstant_1;
  if ( !(v6 | v7) )
    v5 = v5 / a2[2];
  v9 = fConstant_1;
  if ( !(v10 | v11) )
    v9 = v9 / a2[1];
  v13 = fConstant_1;
  if ( !(v14 | v15) )
    v13 = v13 / *a2;
  result = a1[1];
  v47 = 0;
  v47.m128_f32[0] = v13;
  v48 = 0;
  v17 = 0;
  *((float *)&v48 + 1) = v9;
  v49 = 0;
  *((float *)&v49 + 2) = v5;
  v29 = 0;
  if ( result > 0 )
  {
    do
    {
      v18 = *(float *)(*a1 + v17) - a3->m128_f32[0];
      v19 = v17 + *a1;
      v20 = *(float *)(v19 + 4) - a3->m128_f32[1];
      v21 = *(float *)(v19 + 8);
      y = stru_BA7A40.y;
      v23 = v21 - a3->m128_f32[2];
      v38.m128_i32[1] = LODWORD(stru_BA7A40.x);
      v24 = y;
      v38.m128_u64[1] = v38.m128_u32[1];
      v32 = v23;
      v40 = y;
      z = stru_BA7A40.z;
      v38.m128_f32[0] = v18;
      v41 = v24;
      v39 = v20;
      v43 = v32;
      v45 = z;
      v42 = 0;
      v44 = z;
      v46 = 0;
      sub_8D2C20(&v38, &v47);
      v26 = v43;
      v27 = v39;
      v28 = v17 + *a1;
      *(_DWORD *)v28 = v38.m128_i32[0];
      *(float *)(v28 + 4) = v27;
      v17 += 0x10;
      *(float *)(v28 + 8) = v26;
      *(_DWORD *)(v28 + 0xC) = 0;
      result = ++v29;
    }
    while ( v29 < a1[1] );
  }
  return result;
}
