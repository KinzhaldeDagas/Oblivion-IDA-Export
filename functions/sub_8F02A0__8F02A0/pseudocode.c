__m128 *__userpurge sub_8F02A0@<eax>(__m128 *a1@<ecx>, double a2@<st0>, __m128 *a3, unsigned int a4, __m128 *a5)
{
  __int32 i; // ebx
  __int32 j; // edi
  double v8; // st7
  double v9; // st7
  double v10; // st6
  float v12; // [esp+18h] [ebp-28h]
  float v13; // [esp+18h] [ebp-28h]
  float v14; // [esp+1Ch] [ebp-24h]
  float v15; // [esp+1Ch] [ebp-24h]
  __m128 v16; // [esp+20h] [ebp-20h] BYREF
  __m128 v17; // [esp+30h] [ebp-10h] BYREF

  (*(void (__thiscall **)(__m128 *, _DWORD, _DWORD))(a1->m128_i32[0] + 0x24))(a1, 0, 0); /*0x8f02b4*/
  v12 = a2; /*0x8f02b7*/
  v14 = v12; /*0x8f02c8*/
  if ( a1[5].m128_f32[1] < (double)*(float *)&SrcStr ) /*0x8f02d1*/
  {
    for ( i = 0; i < a1->m128_i32[3]; ++i ) /*0x8f02de*/
    {
      for ( j = 0; j < a1[1].m128_i32[0]; ++j ) /*0x8f02e7*/
      {
        v8 = ((double (__thiscall *)(__m128 *, __int32, __int32))*(_DWORD *)(a1->m128_i32[0] + 0x24))(a1, i, j); /*0x8f02f6*/
        if ( v12 >= v8 ) /*0x8f0304*/
          v12 = v8; /*0x8f0306*/
        if ( v14 <= v8 ) /*0x8f0315*/
          v14 = v8; /*0x8f0317*/
      }
    }
    v13 = v12 * a1[2].m128_f32[1]; /*0x8f0336*/
    v9 = v14 * a1[2].m128_f32[1]; /*0x8f033e*/
    v10 = v13; /*0x8f0341*/
    v15 = v13; /*0x8f0345*/
    if ( v13 >= v9 ) /*0x8f0354*/
      v13 = v9; /*0x8f0358*/
    if ( v10 > v9 ) /*0x8f0363*/
      v9 = v15; /*0x8f0367*/
    a1[1].m128_f32[1] = (v13 + v9) * kHeadBodyNormalMatchRadius; /*0x8f0377*/
    a1[5].m128_f32[1] = v9 - v13; /*0x8f037e*/
  }
  v16 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), a1[5]); /*0x8f039d*/
  v17 = v16; /*0x8f03ae*/
  v16.m128_i32[1] = a1[1].m128_i32[1]; /*0x8f03d0*/
  return sub_8F00E0(a3, &v17, &v16, a4, a5); /*0x8f03e7*/
}
