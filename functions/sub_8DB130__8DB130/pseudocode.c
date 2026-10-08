unsigned __int16 __thiscall sub_8DB130(_DWORD *this, int a2, int a3, int a4, __m128 *a5)
{
  int v6; // ebx
  __m128 *v7; // ecx
  __m128 v8; // xmm3
  int v9; // edi
  __m128 *v10; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD v18[7]; // [esp+Ch] [ebp-28h] BYREF
  int v19; // [esp+28h] [ebp-Ch]
  _DWORD *v20; // [esp+2Ch] [ebp-8h]
  __int16 v21; // [esp+30h] [ebp-4h]
  __int16 v22; // [esp+32h] [ebp-2h]

  v6 = *(this + 4); /*0x8db146*/
  v7 = *(__m128 **)(v6 + 0x50); /*0x8db149*/
  v8 = v7[0xE]; /*0x8db14c*/
  v9 = *(this + 3); /*0x8db158*/
  v10 = *(__m128 **)(v9 + 0x50); /*0x8db15b*/
  v11 = _mm_sub_ps(*a5, v10[6]); /*0x8db169*/
  v12 = _mm_sub_ps(*a5, v7[6]); /*0x8db170*/
  v13 = _mm_mul_ps( /*0x8db1da*/
          _mm_sub_ps(
            _mm_add_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9))),
              v7[0xD]),
            _mm_add_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v10[0xE], v10[0xE], 0xC9), _mm_shuffle_ps(v11, v11, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v10[0xE], v10[0xE], 0xD2), _mm_shuffle_ps(v11, v11, 0xC9))),
              v10[0xD])),
          a5[1]);
  v18[1] = a3; /*0x8db1fe*/
  v18[4] = a5; /*0x8db204*/
  v18[5] = 0; /*0x8db20c*/
  v19 = 0; /*0x8db210*/
  v21 = 0; /*0x8db214*/
  v22 = 0; /*0x8db219*/
  v14 = *(this + 2); /*0x8db21e*/
  v18[0] = a2; /*0x8db221*/
  v18[2] = 1; /*0x8db22b*/
  *(float *)&v18[6] = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x8db233*/
                    + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
  v20 = this; /*0x8db237*/
  sub_8DC800(v14, v14, (int)v18); /*0x8db23b*/
  v15 = *(_DWORD *)(v9 + 0x98); /*0x8db240*/
  if ( v15 ) /*0x8db24b*/
    sub_8DBF80(v15, v9, (int)v18); /*0x8db253*/
  v16 = *(_DWORD *)(v6 + 0x98); /*0x8db25b*/
  if ( v16 ) /*0x8db263*/
    sub_8DBF80(v16, v6, (int)v18); /*0x8db26b*/
  if ( v19 ) /*0x8db279*/
    return 0xFFFF; /*0x8db292*/
  *((_WORD *)this + 0xA) = v22; /*0x8db280*/
  return 0; /*0x8db28a*/
}
