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

  v3 = *(_DWORD *)(*((_DWORD *)this + 0xA) + 8 * (a2 >> 0x14)); /*0x915d2c*/
  v4 = *(_DWORD *)(v3 + 0x48); /*0x915d2f*/
  v5 = *(_WORD *)(v3 + 0x44); /*0x915d33*/
  v6 = *(_DWORD *)(v3 + 0x4C); /*0x915d38*/
  v7 = *(_DWORD *)(v3 + 0x1C); /*0x915d3c*/
  v8 = *(_DWORD *)(v3 + 0x20); /*0x915d3f*/
  v35 = v4; /*0x915d42*/
  v9 = a2 & 0xFFFFF; /*0x915d46*/
  v10 = 0; /*0x915d4c*/
  v34 = v8; /*0x915d55*/
  for ( i = a2 & 0xFFFFF; v10 < v5; i = v9 ) /*0x915d5d*/
  {
    v9 = i; /*0x915d71*/
    if ( i < (unsigned int)*(unsigned __int16 *)(v35 + 2 * v10) - 2 ) /*0x915d7a*/
      break; /*0x915d7a*/
    v11 = *(unsigned __int16 *)(v35 + 2 * v10); /*0x915d80*/
    v9 = 2 - v11 + i; /*0x915d8a*/
    ++v10; /*0x915d8c*/
    v6 += 2 * v11; /*0x915d94*/
    v8 = v34; /*0x915d97*/
  }
  v12 = (unsigned __int16 *)(v6 + 2 * v9); /*0x915da1*/
  v13 = *v12; /*0x915da4*/
  v14 = v12[1]; /*0x915da7*/
  v15 = v12[2]; /*0x915db1*/
  if ( v13 == v14 || v13 == v15 || v14 == v15 ) /*0x915dc7*/
    return 0; /*0x915fa7*/
  v16 = 0xC * v13; /*0x915de5*/
  v17 = 0xC * v14; /*0x915de7*/
  v18 = 0xC * v15; /*0x915de9*/
  if ( a3 ) /*0x915df0*/
  {
    v33 = *((float *)this + 8); /*0x915dfd*/
    a3->m128_i16[3] = 1; /*0x915e01*/
    a3->m128_i32[2] = 0; /*0x915e0b*/
    a3->m128_f32[3] = v33; /*0x915e12*/
    a3->m128_i32[0] = (__int32)&hkNormalTriangleShape::`vftable'; /*0x915e15*/
    v25 = a3; /*0x915e1b*/
  }
  else
  {
    v25 = 0; /*0x915e21*/
  }
  v19 = hkFactor; /*0x915e42*/
  v39.m128_f32[0] = *(float *)(v16 + v7) * v19; /*0x915e44*/
  v39.m128_f32[1] = *(float *)(v16 + v7 + 4) * v19; /*0x915e4e*/
  v39.m128_f32[2] = *(float *)(v16 + v7 + 8) * v19; /*0x915e58*/
  v20 = _mm_mul_ps(*(this + 1), v39); /*0x915e61*/
  v25[1] = v20; /*0x915e64*/
  v40.m128_i32[3] = v20.m128_i32[3]; /*0x915e71*/
  v40.m128_f32[0] = *(float *)(v17 + v7) * v19; /*0x915e7e*/
  v40.m128_f32[1] = *(float *)(v17 + v7 + 4) * v19; /*0x915e88*/
  v40.m128_f32[2] = *(float *)(v17 + v7 + 8) * v19; /*0x915e92*/
  v21 = _mm_mul_ps(*(this + 1), v40); /*0x915e9b*/
  v25[2] = v21; /*0x915e9e*/
  v40.m128_i32[3] = v21.m128_i32[3]; /*0x915ea7*/
  v40.m128_f32[0] = *(float *)(v18 + v7) * v19; /*0x915eac*/
  v40.m128_f32[1] = *(float *)(v18 + v7 + 4) * v19; /*0x915eb6*/
  v40.m128_f32[2] = v19 * *(float *)(v18 + v7 + 8); /*0x915ec6*/
  v41 = _mm_mul_ps(*(this + 1), v40); /*0x915ed2*/
  v25[3] = v41; /*0x915ed7*/
  if ( v8 ) /*0x915edb*/
  {
    v36 = *(float *)(v17 + v8) + *(float *)(v16 + v8); /*0x915ee7*/
    v37 = *(float *)(v17 + v8 + 4) + *(float *)(v16 + v8 + 4); /*0x915ef3*/
    v38 = *(float *)(v17 + v8 + 8) + *(float *)(v16 + v8 + 8); /*0x915eff*/
    v27 = *(float *)(v18 + v8) + v36; /*0x915f0a*/
    v29 = *(float *)(v18 + v8 + 4) + v37; /*0x915f16*/
    v31 = *(float *)(v18 + v8 + 8) + v38; /*0x915f24*/
    v23 = dbl_A99440; /*0x915f34*/
    v28 = v27 * v23; /*0x915f36*/
    v30 = v29 * v23; /*0x915f40*/
    v32 = v23 * v31; /*0x915f48*/
    v41.m128_f32[0] = v28; /*0x915f50*/
    v41.m128_f32[1] = v30; /*0x915f58*/
    v41.m128_f32[2] = v32; /*0x915f60*/
    v25[4] = v41; /*0x915f69*/
  }
  else
  {
    sub_9155C0(v25); /*0x915f83*/
  }
  return v25; /*0x915f6d*/
}
