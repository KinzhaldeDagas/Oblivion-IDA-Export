int __stdcall sub_8CFA80(int a1)
{
  int v1; // eax
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  float v5; // xmm2_4
  __m128 v6; // xmm1
  char *v7; // ecx
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 *LinearVelocityPtr; // eax
  int v11; // eax
  float v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  float v14; // [esp+Ch] [ebp-44h]
  __m128 v15; // [esp+20h] [ebp-30h]
  __m128 v16; // [esp+20h] [ebp-30h]
  __m128 v17; // [esp+20h] [ebp-30h]
  __m128 v18; // [esp+30h] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 0x2A0); /*0x8cfa98*/
  if ( v1 != 0xB && (!v1 || v1 == 3) ) /*0x8cfaaa*/
    return sub_890720((_DWORD *)a1); /*0x8cfaae*/
  *(_DWORD *)(a1 + 0x1F4) |= 0x2000u; /*0x8cfac5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cfad6*/
  v15 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20); /*0x8cfaec*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cfaf1*/
  v12 = fabs(*(float *)(a1 + 0x31C));           // MorrowindMovements jump correction source: Jumping state reads proxy+0x31C before computing launch velocity; pre-state hook at 0x89638D can reduce this field without replacing vanilla jump semantics. /*0x8cfb0b*/
  v3 = 0; /*0x8cfb13*/
  v3.m128_f32[0] = *(float *)(a1 + 0x328); /*0x8cfb16*/
  v16 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v15); /*0x8cfb23*/
  v4 = _mm_mul_ps(v16, v16); /*0x8cfb28*/
  v4.m128_f32[0] = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] /*0x8cfb3a*/
                 + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  v5 = 1.0 / fsqrt(v4.m128_f32[0]); /*0x8cfb45*/
  v6 = 0; /*0x8cfb66*/
  v6.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v5) /*0x8cfb71*/
                 * (float)(*(float *)&dword_A46C30 - (float)((float)(v4.m128_f32[0] * v5) * v5));
  v18 = _mm_shuffle_ps(v6, v6, 0); /*0x8cfb89*/
  v13 = v12 * ((float)(v4.m128_f32[0] * v18.m128_f32[0]) + (float)(v4.m128_f32[0] * v18.m128_f32[0])); /*0x8cfb90*/
  v14 = sqrt(v13); /*0x8cfb9d*/
  v7 = *(char **)(a1 + 8); /*0x8cfbad*/
  v8 = 0; /*0x8cfbbc*/
  v8.m128_f32[0] = *(float *)&dword_A99E34 - v14; /*0x8cfbbf*/
  v9 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), _mm_mul_ps(v18, v16)); /*0x8cfbd4*/
  if ( v7 ) /*0x8cfbdc*/
    LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v7); /*0x8cfbde*/
  else
    LinearVelocityPtr = (__m128 *)&unk_BA7A40; /*0x8cfbea*/
  v17 = *LinearVelocityPtr; /*0x8cfbf4*/
  v17.m128_f32[2] = 0.0; /*0x8cfbf9*/
  *(__m128 *)(a1 + 0x2E0) = _mm_add_ps(v17, v9); /*0x8cfc07*/
  *(_DWORD *)(a1 + 0x2A0) = 2; /*0x8cfc0e*/
  sub_890720((_DWORD *)a1); /*0x8cfc18*/
  *(_DWORD *)(a1 + 0x1F4) &= 0xFFFDFEFF; /*0x8cfc1d*/
  v11 = sub_8BA170(*(_DWORD **)(a1 + 0x1E8), *(_DWORD *)(a1 + 0x1EC)); /*0x8cfc34*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x18))(v11, a1); /*0x8cfab3*/
}
