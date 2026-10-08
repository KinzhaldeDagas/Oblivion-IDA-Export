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

  a1[1] = 0; /*0x93ef42*/
  a1[2] = 0x10; /*0x93ef48*/
  a1[3] = 0x20; /*0x93ef4e*/
  v6 = *a5; /*0x93ef54*/
  v7 = a5[1]; /*0x93ef57*/
  v8 = a5[2]; /*0x93ef5b*/
  v9 = a5[3]; /*0x93ef5f*/
  v10 = a4 + 1; /*0x93ef63*/
  v11 = 3; /*0x93ef6d*/
  do /*0x93efad*/
  {
    *(__m128 *)((char *)v10 + v21 - (_BYTE *)&a4[1]) = _mm_add_ps( /*0x93efa5*/
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v6, _mm_shuffle_ps(*v10, *v10, 0)),
                                                           _mm_mul_ps(v7, _mm_shuffle_ps(*v10, *v10, 0x55))),
                                                         _mm_add_ps(
                                                           _mm_mul_ps(v8, _mm_shuffle_ps(*v10, *v10, 0xAA)),
                                                           v9));
    ++v10; /*0x93efa9*/
    --v11; /*0x93efac*/
  }
  while ( v11 ); /*0x93efad*/
  v12 = *a3; /*0x93efbc*/
  v13 = _mm_sub_ps(v22, *(__m128 *)&v21[0x10]); /*0x93efbe*/
  v14 = _mm_sub_ps(*(__m128 *)&v21[0x10], *(__m128 *)v21); /*0x93efc4*/
  *(__m128 *)v18 = _mm_sub_ps( /*0x93eff5*/
                     _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
  (*(void (__thiscall **)(int *, _BYTE *, int))(v12 + 0x2C))(a3, &v18[0x10], a2); /*0x93effa*/
  v15 = _mm_mul_ps(_mm_sub_ps(v19, *(__m128 *)&v21[4]), *(__m128 *)&v18[4]); /*0x93f00c*/
  v16 = _mm_shuffle_ps(v15, v15, 0xAA); /*0x93f01d*/
  v16.m128_f32[0] = v16.m128_f32[0] + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]); /*0x93f021*/
  if ( (_mm_movemask_ps(v16) & 1) != 0 ) /*0x93f02b*/
    *(__m128 *)&v18[4] = _mm_xor_ps(*(__m128 *)&v18[4], (__m128)xmmword_A965C0); /*0x93f037*/
  (*(void (__thiscall **)(int *, _BYTE *))(*a3 + 0x24))(a3, &v18[4]); /*0x93f04a*/
  *a1 = v20; /*0x93f052*/
  *((_BYTE *)a1 + 8) = 1; /*0x93f055*/
  *((_BYTE *)a1 + 9) = 3; /*0x93f059*/
  result = (*(int (__thiscall **)(int *))(*a3 + 0x30))(a3); /*0x93f061*/
  *((_BYTE *)a1 + 0xA) = result; /*0x93f065*/
  *((_BYTE *)a1 + 0xB) = 3; /*0x93f068*/
  return result; /*0x93f06c*/
}
