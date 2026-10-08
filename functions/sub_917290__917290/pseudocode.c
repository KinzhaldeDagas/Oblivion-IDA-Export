__m128 *__thiscall sub_917290(__m128 *this, char *a2, int a3, signed int a4)
{
  int v4; // edi
  __m128 *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  char *v13; // eax
  int v14; // edx
  int v15; // ebx
  char *v16; // eax
  unsigned int v17; // edx
  int v18; // ebx
  char *v19; // eax
  unsigned int v20; // edx
  int v21; // edx
  char *v22; // eax
  int v23; // edx
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  unsigned int v27; // [esp+14h] [ebp-2Ch]
  signed int v28; // [esp+18h] [ebp-28h]
  __m128 v30; // [esp+20h] [ebp-20h] BYREF
  __m128 v31; // [esp+30h] [ebp-10h]

  v4 = a4; /*0x91729c*/
  v28 = (a4 + 3) & 0xFFFFFFFC; /*0x9172a5*/
  v5 = this + 3; /*0x9172b1*/
  *((_DWORD *)this + 0xF) = a4; /*0x9172b4*/
  v6 = v28 / 4; /*0x9172ba*/
  v7 = *((_DWORD *)this + 0xE) & 0x3FFFFFFF; /*0x9172bd*/
  if ( v7 < v28 / 4 ) /*0x9172c8*/
  {
    v8 = 2 * v7; /*0x9172ca*/
    if ( v6 >= v8 ) /*0x9172ce*/
      v8 = v28 / 4; /*0x9172d0*/
    sub_8A6E40((const void **)this + 0xC, v8, 0x30); /*0x9172d6*/
  }
  v9 = a2; /*0x9172de*/
  v10 = 0; /*0x9172e1*/
  v5->m128_i32[1] = v6; /*0x9172e6*/
  if ( a4 >= 4 ) /*0x9172e9*/
  {
    v27 = 1; /*0x9172ef*/
    do /*0x9173d4*/
    {
      v11 = (v10 & 3) + 0xC * ((unsigned int)v10 >> 2); /*0x917306*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11) = *(_DWORD *)v9; /*0x91730b*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11 + 0x10) = *((_DWORD *)v9 + 1); /*0x917313*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v11 + 0x20) = *((_DWORD *)v9 + 2); /*0x91731c*/
      v12 = *(_DWORD *)&v9[a3]; /*0x917323*/
      v13 = &v9[a3]; /*0x91732a*/
      v14 = (v27 & 3) + 0xC * (v27 >> 2); /*0x917337*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14) = v12; /*0x91733c*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14 + 0x10) = *((_DWORD *)v13 + 1); /*0x917344*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v14 + 0x20) = *((_DWORD *)v13 + 2); /*0x91734d*/
      v15 = *(_DWORD *)&v13[a3]; /*0x917358*/
      v16 = &v13[a3]; /*0x91735b*/
      v17 = (((_BYTE)v27 + 1) & 3) + 0xC * ((v27 + 1) >> 2); /*0x91736a*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17) = v15; /*0x91736f*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17 + 0x10) = *((_DWORD *)v16 + 1); /*0x917377*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v17 + 0x20) = *((_DWORD *)v16 + 2); /*0x917380*/
      v18 = *(_DWORD *)&v16[a3]; /*0x91738b*/
      v19 = &v16[a3]; /*0x91738e*/
      v20 = (((_BYTE)v27 - 2) & 3) + 0xC * ((v27 + 2) >> 2); /*0x91739f*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20) = v18; /*0x9173a4*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20 + 0x10) = *((_DWORD *)v19 + 1); /*0x9173ac*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v20 + 0x20) = *((_DWORD *)v19 + 2); /*0x9173b5*/
      v4 = a4; /*0x9173bd*/
      v27 += 4; /*0x9173c6*/
      v10 += 4; /*0x9173ca*/
      v9 = &v19[a3]; /*0x9173d0*/
    }
    while ( v10 < a4 - 3 ); /*0x9173d4*/
  }
  if ( v10 < v4 ) /*0x9173dc*/
  {
    do /*0x917414*/
    {
      v21 = (v10 & 3) + 0xC * ((unsigned int)v10 >> 2); /*0x9173ef*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21) = *(_DWORD *)v9; /*0x9173f4*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21 + 0x10) = *((_DWORD *)v9 + 1); /*0x9173fc*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v21 + 0x20) = *((_DWORD *)v9 + 2); /*0x917405*/
      v4 = a4; /*0x91740c*/
      v9 += a3; /*0x91740f*/
      ++v10; /*0x917411*/
    }
    while ( v10 < a4 ); /*0x917414*/
  }
  v22 = &v9[-a3]; /*0x91741d*/
  if ( v10 < v28 ) /*0x917421*/
  {
    do /*0x917453*/
    {
      v23 = (v10 & 3) + 0xC * (v10 >> 2); /*0x917432*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23) = *(_DWORD *)v22; /*0x917437*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23 + 0x10) = *((_DWORD *)v22 + 1); /*0x91743f*/
      *(_DWORD *)(v5->m128_i32[0] + 4 * v23 + 0x20) = *((_DWORD *)v22 + 2); /*0x917448*/
      ++v10; /*0x917450*/
    }
    while ( v10 < v28 ); /*0x917453*/
    v4 = a4; /*0x917455*/
  }
  sub_8B8800(a2, v4, a3, (int)&v30); /*0x917466*/
  v25 = v30; /*0x91746f*/
  v26 = v31; /*0x917474*/
  *(this + 2) = _mm_add_ps(v30, v31); /*0x91747f*/
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *(this + 2)); /*0x9174a5*/
  *(this + 1) = _mm_sub_ps(v26, v25); /*0x9174aa*/
  *(this + 1) = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), *(this + 1)); /*0x9174bd*/
  return this; /*0x9174c1*/
}
