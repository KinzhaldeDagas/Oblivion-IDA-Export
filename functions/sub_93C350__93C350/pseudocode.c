int __thiscall sub_93C350(_DWORD *this, int *a2, int *a3, __m128 *a4)
{
  int v5; // eax
  int v6; // edx
  __m128 *v7; // ecx
  __m128 *v8; // eax
  int result; // eax
  __m128 v10; // xmm0
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  int v22; // ecx
  __m128 *v23; // eax
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  int v26; // [esp+Ch] [ebp-94h] BYREF
  __m128 v27; // [esp+10h] [ebp-90h] BYREF
  __m128 v28; // [esp+20h] [ebp-80h] BYREF
  __m128 v29[3]; // [esp+30h] [ebp-70h] BYREF
  int v30[16]; // [esp+60h] [ebp-40h] BYREF

  v5 = *(this + 1); /*0x93c360*/
  v6 = 4; /*0x93c366*/
  v26 = 4; /*0x93c36c*/
  if ( v5 < 3 ) /*0x93c370*/
  {
    if ( (int)*this < 3 ) /*0x93c3cc*/
    {
      v6 = 1; /*0x93c460*/
      v26 = 1; /*0x93c465*/
    }
    else
    {
      if ( (int)*this <= 3 ) /*0x93c3d2*/
      {
        if ( v5 <= 1 ) /*0x93c3f5*/
        {
          v6 = 3; /*0x93c41d*/
          v26 = 3; /*0x93c422*/
        }
        else
        {
          *((_OWORD *)this + 5) = *((_OWORD *)this + 2); /*0x93c3fb*/
          *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xF); /*0x93c406*/
          *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xB); /*0x93c414*/
        }
      }
      else
      {
        *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xE); /*0x93c3db*/
        *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xA); /*0x93c3e9*/
      }
      *((_OWORD *)this + 0xF) = *((_OWORD *)this + 0xE); /*0x93c42d*/
      *((_OWORD *)this + 0xB) = *((_OWORD *)this + 0xA); /*0x93c43b*/
      *((_OWORD *)this + 0x10) = *((_OWORD *)this + 0xE); /*0x93c449*/
      *((_OWORD *)this + 0xC) = *((_OWORD *)this + 0xA); /*0x93c457*/
    }
  }
  else
  {
    if ( v5 <= 3 ) /*0x93c372*/
    {
      if ( (int)*this <= 1 ) /*0x93c381*/
      {
        v6 = 3; /*0x93c3a9*/
        v26 = 3; /*0x93c3ae*/
      }
      else
      {
        *((_OWORD *)this + 5) = *((_OWORD *)this + 3); /*0x93c387*/
        *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xE); /*0x93c392*/
        *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xA); /*0x93c3a0*/
      }
    }
    else
    {
      *((_OWORD *)this + 5) = *((_OWORD *)this + 2); /*0x93c378*/
    }
    *((_OWORD *)this + 3) = *((_OWORD *)this + 2); /*0x93c3b6*/
    *((_OWORD *)this + 4) = *((_OWORD *)this + 2); /*0x93c3be*/
  }
  v7 = (__m128 *)v30; /*0x93c46d*/
  v8 = (__m128 *)(this + 8); /*0x93c471*/
  do /*0x93c497*/
  {
    *v7 = _mm_sub_ps(*v8, v8[8]); /*0x93c48d*/
    ++v8; /*0x93c490*/
    ++v7; /*0x93c493*/
    --v6; /*0x93c496*/
  }
  while ( v6 ); /*0x93c497*/
  sub_952B90(a2, a3, a4, 0x38D1B717u, (_OWORD *)this + 2, (__int128 *)this + 0xE, (int)v30, &v26, v29); /*0x93c4c4*/
  result = 1; /*0x93c4cd*/
  if ( v26 == 1 ) /*0x93c4d7*/
  {
    v10 = v29[0]; /*0x93c4d9*/
    *(this + 1) = 1; /*0x93c4de*/
    *this = 1; /*0x93c4e1*/
    *(this + 5) = 1; /*0x93c4e3*/
    *((__m128 *)this + 0x12) = v10; /*0x93c4e6*/
  }
  else
  {
    v11 = *(this + 0x13) & 0xC0FFFFFF; /*0x93c4fc*/
    v12 = *(this + 0xF) & 0xC0FFFFFF; /*0x93c501*/
    *(this + 1) = 3; /*0x93c509*/
    *this = 3; /*0x93c510*/
    if ( v12 == v11 || (*(this + 0xB) & 0xC0FFFFFF) == v11 ) /*0x93c523*/
      *this = 2; /*0x93c525*/
    if ( (*(this + 0xB) & 0xC0FFFFFF) == v12 ) /*0x93c535*/
    {
      v13 = --*this + 2; /*0x93c53c*/
      *((_OWORD *)this + 2) = *((_OWORD *)this + v13); /*0x93c548*/
    }
    v14 = *(this + 0x43) & 0xC0FFFFFF; /*0x93c557*/
    v15 = *(this + 0x3F) & 0xC0FFFFFF; /*0x93c55c*/
    if ( v15 == v14 || (*(this + 0x3B) & 0xC0FFFFFF) == v14 ) /*0x93c574*/
      --*(this + 1); /*0x93c576*/
    v16 = *(this + 1); /*0x93c579*/
    if ( v16 >= 2 && (*(this + 0x3B) & 0xC0FFFFFF) == v15 ) /*0x93c58f*/
    {
      v17 = v16 - 1; /*0x93c591*/
      *(this + 1) = v17; /*0x93c592*/
      *((_OWORD *)this + 0xE) = *((_OWORD *)this + v17 + 0xE); /*0x93c59f*/
    }
    v18 = *a4; /*0x93c5a6*/
    v19 = a4[1]; /*0x93c5a9*/
    v20 = a4[2]; /*0x93c5ad*/
    v21 = a4[3]; /*0x93c5b1*/
    v22 = *(this + 1); /*0x93c5b5*/
    v23 = (__m128 *)(this + 0x38); /*0x93c5c6*/
    do /*0x93c60d*/
    {
      v23[0xFFFFFFFC] = _mm_add_ps( /*0x93c603*/
                          _mm_add_ps(
                            _mm_mul_ps(v18, _mm_shuffle_ps(*v23, *v23, 0)),
                            _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0x55))),
                          _mm_add_ps(_mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0xAA)), v21));
      ++v23; /*0x93c607*/
      --v22; /*0x93c60a*/
    }
    while ( v22 > 0 ); /*0x93c60d*/
    result = *(this + 1) + *this; /*0x93c611*/
    if ( result > 4 ) /*0x93c617*/
      result = (int)sub_93B7D0((__m128 *)this); /*0x93c61b*/
    if ( *this == 2 && *(this + 1) == 2 ) /*0x93c629*/
    {
      v24 = *((__m128 *)this + 0xA); /*0x93c645*/
      v27 = _mm_sub_ps(*((__m128 *)this + 3), *((__m128 *)this + 2)); /*0x93c64d*/
      v28 = _mm_sub_ps(*((__m128 *)this + 0xB), v24); /*0x93c65e*/
      result = sub_8D1A30((__m128 *)this + 2, &v27, (__m128 *)this + 0xA, &v28, (__m128 *)this + 0x13); /*0x93c663*/
    }
    v25 = v29[0]; /*0x93c66b*/
    *(this + 5) = 1; /*0x93c671*/
    *((__m128 *)this + 0x12) = v25; /*0x93c678*/
  }
  return result; /*0x93c4ed*/
}
