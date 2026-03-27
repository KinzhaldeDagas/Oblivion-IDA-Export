__m128 *__thiscall sub_915D00(__m128 *this, unsigned int a2, __m128 *a3)
{
  int v3; // eax
  int v4; // edx
  unsigned __int16 v5; // bx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int16 v10; // dx
  int v11; // eax
  unsigned __int16 *v12; // esi
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // si
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  double v19; // rt0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  double v23; // rt1
  unsigned int i; // [esp+Ch] [ebp-54h]
  __m128 *v25; // [esp+Ch] [ebp-54h]
  float v27; // [esp+14h] [ebp-4Ch]
  float v28; // [esp+14h] [ebp-4Ch]
  float v29; // [esp+18h] [ebp-48h]
  float v30; // [esp+18h] [ebp-48h]
  float v31; // [esp+1Ch] [ebp-44h]
  float v32; // [esp+1Ch] [ebp-44h]
  float v33; // [esp+20h] [ebp-40h]
  int v34; // [esp+24h] [ebp-3Ch]
  int v35; // [esp+2Ch] [ebp-34h]
  float v36; // [esp+30h] [ebp-30h]
  float v37; // [esp+34h] [ebp-2Ch]
  float v38; // [esp+38h] [ebp-28h]
  __m128 v39; // [esp+40h] [ebp-20h]
  __m128 v40; // [esp+40h] [ebp-20h]
  __m128 v41; // [esp+40h] [ebp-20h]

  v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 8 * (a2 >> 0x14));
  v4 = *(_DWORD *)(v3 + 0x48);
  v5 = *(_WORD *)(v3 + 0x44);
  v6 = *(_DWORD *)(v3 + 0x4C);
  v7 = *(_DWORD *)(v3 + 0x1C);
  v8 = *(_DWORD *)(v3 + 0x20);
  v35 = v4;
  v9 = a2 & 0xFFFFF;
  v10 = 0;
  v34 = v8;
  for ( i = a2 & 0xFFFFF; v10 < v5; i = v9 )
  {
    v9 = i;
    if ( i < (unsigned int)*(unsigned __int16 *)(v35 + 2 * v10) - 2 )
      break;
    v11 = *(unsigned __int16 *)(v35 + 2 * v10);
    v9 = 2 - v11 + i;
    ++v10;
    v6 += 2 * v11;
    v8 = v34;
  }
  v12 = (unsigned __int16 *)(v6 + 2 * v9);
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  if ( v13 == v14 || v13 == v15 || v14 == v15 )
    return 0;
  v16 = 0xC * v13;
  v17 = 0xC * v14;
  v18 = 0xC * v15;
  if ( a3 )
  {
    v33 = *((float *)this + 8);
    a3->m128_i16[3] = 1;
    a3->m128_i32[2] = 0;
    a3->m128_f32[3] = v33;
    a3->m128_i32[0] = (__int32)&hkNormalTriangleShape::`vftable';
    v25 = a3;
  }
  else
  {
    v25 = 0;
  }
  v19 = hkFactor;
  v39.m128_f32[0] = *(float *)(v16 + v7) * v19;
  v39.m128_f32[1] = *(float *)(v16 + v7 + 4) * v19;
  v39.m128_f32[2] = *(float *)(v16 + v7 + 8) * v19;
  v20 = _mm_mul_ps(*(this + 1), v39);
  v25[1] = v20;
  v40.m128_i32[3] = v20.m128_i32[3];
  v40.m128_f32[0] = *(float *)(v17 + v7) * v19;
  v40.m128_f32[1] = *(float *)(v17 + v7 + 4) * v19;
  v40.m128_f32[2] = *(float *)(v17 + v7 + 8) * v19;
  v21 = _mm_mul_ps(*(this + 1), v40);
  v25[2] = v21;
  v40.m128_i32[3] = v21.m128_i32[3];
  v40.m128_f32[0] = *(float *)(v18 + v7) * v19;
  v40.m128_f32[1] = *(float *)(v18 + v7 + 4) * v19;
  v40.m128_f32[2] = v19 * *(float *)(v18 + v7 + 8);
  v41 = _mm_mul_ps(*(this + 1), v40);
  v25[3] = v41;
  if ( v8 )
  {
    v36 = *(float *)(v17 + v8) + *(float *)(v16 + v8);
    v37 = *(float *)(v17 + v8 + 4) + *(float *)(v16 + v8 + 4);
    v38 = *(float *)(v17 + v8 + 8) + *(float *)(v16 + v8 + 8);
    v27 = *(float *)(v18 + v8) + v36;
    v29 = *(float *)(v18 + v8 + 4) + v37;
    v31 = *(float *)(v18 + v8 + 8) + v38;
    v23 = dbl_A99440;
    v28 = v27 * v23;
    v30 = v29 * v23;
    v32 = v23 * v31;
    v41.m128_f32[0] = v28;
    v41.m128_f32[1] = v30;
    v41.m128_f32[2] = v32;
    v25[4] = v41;
  }
  else
  {
    sub_9155C0(v25);
  }
  return v25;
}
