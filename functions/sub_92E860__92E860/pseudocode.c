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
  int v22; // eax
  double v23; // st5
  int v24; // ecx
  int v25; // eax
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
  int v40; // [esp+44h] [ebp-4Ch]
  int v41; // [esp+48h] [ebp-48h]
  int v42; // [esp+4Ch] [ebp-44h]
  float v43; // [esp+50h] [ebp-40h]
  int v44; // [esp+54h] [ebp-3Ch]
  int v45; // [esp+58h] [ebp-38h]
  int v46; // [esp+5Ch] [ebp-34h]
  __m128 v47; // [esp+60h] [ebp-30h] BYREF
  __int128 v48; // [esp+70h] [ebp-20h]
  __int128 v49; // [esp+80h] [ebp-10h]

  sub_92CD60((int)a1, (int)&v30); /*0x92e878*/
  a3->m128_f32[0] = v30 + v34; /*0x92e893*/
  a3->m128_f32[1] = v31 + v35; /*0x92e8ad*/
  a3->m128_f32[2] = v32 + v36; /*0x92e8b8*/
  a3->m128_f32[3] = v33 + v37; /*0x92e8c3*/
  v3 = v34 - v30; /*0x92e8d0*/
  *a3 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *a3); /*0x92e8d4*/
  *a2 = v3; /*0x92e8d7*/
  a2[1] = v35 - v31; /*0x92e8e1*/
  a2[2] = v36 - v32; /*0x92e8ec*/
  a2[3] = v37 - v33; /*0x92e8f7*/
  v5 = fConstant_1; /*0x92e903*/
  if ( !(v6 | v7) ) /*0x92e90b*/
    v5 = v5 / a2[2]; /*0x92e910*/
  v9 = fConstant_1; /*0x92e91c*/
  if ( !(v10 | v11) ) /*0x92e924*/
    v9 = v9 / a2[1]; /*0x92e929*/
  v13 = fConstant_1; /*0x92e934*/
  if ( !(v14 | v15) ) /*0x92e93c*/
    v13 = v13 / *a2; /*0x92e941*/
  result = a1[1]; /*0x92e943*/
  v47 = 0; /*0x92e949*/
  v47.m128_f32[0] = v13; /*0x92e94e*/
  v48 = 0; /*0x92e952*/
  v17 = 0; /*0x92e957*/
  *((float *)&v48 + 1) = v9; /*0x92e959*/
  v49 = 0; /*0x92e95f*/
  *((float *)&v49 + 2) = v5; /*0x92e967*/
  v29 = 0; /*0x92e96e*/
  if ( result > 0 ) /*0x92e972*/
  {
    do /*0x92ea2f*/
    {
      v18 = *(float *)(*a1 + v17) - a3->m128_f32[0]; /*0x92e98b*/
      v19 = v17 + *a1; /*0x92e98d*/
      v20 = *(float *)(v19 + 4) - a3->m128_f32[1]; /*0x92e994*/
      v21 = *(float *)(v19 + 8); /*0x92e997*/
      v22 = dword_BA7A44[0]; /*0x92e99a*/
      v23 = v21 - a3->m128_f32[2]; /*0x92e99f*/
      v38.m128_i32[1] = LODWORD(unk_BA7A40.x); /*0x92e9a2*/
      v24 = v22; /*0x92e9a6*/
      v38.m128_u64[1] = v38.m128_u32[1]; /*0x92e9a8*/
      v32 = v23; /*0x92e9ac*/
      v40 = v22; /*0x92e9b4*/
      v25 = dword_BA7A44[1]; /*0x92e9ba*/
      v38.m128_f32[0] = v18; /*0x92e9bf*/
      v41 = v24; /*0x92e9c3*/
      v39 = v20; /*0x92e9c9*/
      v43 = v32; /*0x92e9cd*/
      v45 = v25; /*0x92e9d5*/
      v42 = 0; /*0x92e9e6*/
      v44 = v25; /*0x92e9ee*/
      v46 = 0; /*0x92e9f2*/
      hkMatrix3_MultiplyInPlace(&v38, &v47); /*0x92e9fa*/
      v26 = v43; /*0x92e9ff*/
      v27 = v39; /*0x92ea05*/
      v28 = v17 + *a1; /*0x92ea0d*/
      *(_DWORD *)v28 = v38.m128_i32[0]; /*0x92ea0f*/
      *(float *)(v28 + 4) = v27; /*0x92ea11*/
      v17 += 0x10; /*0x92ea14*/
      *(float *)(v28 + 8) = v26; /*0x92ea17*/
      *(_DWORD *)(v28 + 0xC) = 0; /*0x92ea1a*/
      result = ++v29; /*0x92ea28*/
    }
    while ( v29 < a1[1] ); /*0x92ea2f*/
  }
  return result; /*0x92ea35*/
}
