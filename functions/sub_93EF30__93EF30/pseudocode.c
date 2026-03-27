int __userpurge sub_93EF30@<eax>(_WORD *a1@<ecx>, int a2@<edi>, int *a3, __m128 *a4, __m128 *a5)
{
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 *v10; // eax
  int v11; // edx
  int v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  int result; // eax
  _BYTE v18[20]; // [esp+Ch] [ebp-60h] BYREF
  __m128 v19; // [esp+20h] [ebp-4Ch]
  __int16 v20; // [esp+38h] [ebp-34h]
  _BYTE v21[32]; // [esp+3Ch] [ebp-30h] BYREF
  __m128 v22; // [esp+5Ch] [ebp-10h]

  a1[1] = 0;
  a1[2] = 0x10;
  a1[3] = 0x20;
  v6 = *a5;
  v7 = a5[1];
  v8 = a5[2];
  v9 = a5[3];
  v10 = a4 + 1;
  v11 = 3;
  do
  {
    *(__m128 *)((char *)v10 + v21 - (_BYTE *)&a4[1]) = _mm_add_ps(
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v6, _mm_shuffle_ps(*v10, *v10, 0)),
                                                           _mm_mul_ps(v7, _mm_shuffle_ps(*v10, *v10, 0x55))),
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v8, _mm_shuffle_ps(*v10, *v10, 0xAA)),
                                                           v9));
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = *a3;
  v13 = _mm_sub_ps(v22, *(__m128 *)&v21[0x10]);
  v14 = _mm_sub_ps(*(__m128 *)&v21[0x10], *(__m128 *)v21);
  *(__m128 *)v18 = _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
  (*(void (__thiscall **)(int *, _BYTE *, int))(v12 + 0x2C))(a3, &v18[0x10], a2);
  v15 = _mm_mul_ps(_mm_sub_ps(v19, *(__m128 *)&v21[4]), *(__m128 *)&v18[4]);
  v16 = _mm_shuffle_ps(v15, v15, 0xAA);
  v16.m128_f32[0] = v16.m128_f32[0] + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  if ( (_mm_movemask_ps(v16) & 1) != 0 )
    *(__m128 *)&v18[4] = _mm_xor_ps(*(__m128 *)&v18[4], (__m128)xmmword_A965C0);
  (*(void (__thiscall **)(int *, _BYTE *))(*a3 + 0x24))(a3, &v18[4]);
  *a1 = v20;
  *((_BYTE *)a1 + 8) = 1;
  *((_BYTE *)a1 + 9) = 3;
  result = (*(int (__thiscall **)(int *))(*a3 + 0x30))(a3);
  *((_BYTE *)a1 + 0xA) = result;
  *((_BYTE *)a1 + 0xB) = 3;
  return result;
}
