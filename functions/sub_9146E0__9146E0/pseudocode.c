char __userpurge sub_9146E0@<al>(int a1@<ecx>, int a2@<ebx>, __m128 *a3, int a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v10[2]; // [esp+8h] [ebp-60h] BYREF
  _OWORD v11[4]; // [esp+28h] [ebp-40h] BYREF

  v4 = *(_DWORD *)(a1 + 0x10); /*0x9146e9*/
  v5 = flt_A9CED4; /*0x9146ec*/
  v10[0] = *(__m128 *)(v4 + 0x10); /*0x9146f7*/
  v6 = v5 / *(float *)(v4 + 0x1C); /*0x914710*/
  v7 = v10[0]; /*0x914713*/
  v10[0].m128_i32[3] = 0; /*0x91471d*/
  v11[0] = v7; /*0x914725*/
  v10[0].m128_f32[0] = v6; /*0x914738*/
  v10[0].m128_f32[1] = v6; /*0x91473c*/
  v10[0].m128_f32[2] = v6; /*0x914740*/
  v11[1] = _mm_add_ps(v7, v10[0]); /*0x91474c*/
  qmemcpy(v10, v11, sizeof(v10)); /*0x914751*/
  v8 = a3[1]; /*0x914761*/
  v10[0] = _mm_max_ps(v10[0], *a3); /*0x914769*/
  v10[1] = _mm_min_ps(v10[1], v8); /*0x91477c*/
  return sub_944950((int)v11, a2, v4, v10[0].m128_f32, a4); /*0x914788*/
}
