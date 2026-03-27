char __userpurge sub_9146E0@<al>(int a1@<ecx>, int a2@<ebx>, __m128 *a3, int a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v10[2]; // [esp+8h] [ebp-60h] BYREF
  _OWORD v11[4]; // [esp+28h] [ebp-40h] BYREF

  v4 = *(_DWORD *)(a1 + 0x10);
  v5 = flt_A9CED4;
  v10[0] = *(__m128 *)(v4 + 0x10);
  v6 = v5 / *(float *)(v4 + 0x1C);
  v7 = v10[0];
  v10[0].m128_i32[3] = 0;
  v11[0] = v7;
  v10[0].m128_f32[0] = v6;
  v10[0].m128_f32[1] = v6;
  v10[0].m128_f32[2] = v6;
  v11[1] = _mm_add_ps(v7, v10[0]);
  qmemcpy(v10, v11, sizeof(v10));
  v8 = a3[1];
  v10[0] = _mm_max_ps(v10[0], *a3);
  v10[1] = _mm_min_ps(v10[1], v8);
  return sub_944950((int)v11, a2, v4, v10[0].m128_f32, a4);
}
