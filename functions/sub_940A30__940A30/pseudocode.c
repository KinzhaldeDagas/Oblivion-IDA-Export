void __userpurge sub_940A30(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  char v6; // al
  int v7; // eax
  double v8; // st7
  int v9; // eax
  unsigned __int8 *v10; // ecx
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  float v15; // xmm3_4
  __m128 v16; // xmm1
  float v17; // xmm3_4
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20[2]; // [esp+10h] [ebp-60h] BYREF
  __m128 v21[2]; // [esp+30h] [ebp-40h] BYREF
  float v22; // [esp+50h] [ebp-20h]
  int v23; // [esp+54h] [ebp-1Ch]
  unsigned int v24; // [esp+58h] [ebp-18h]
  int v25; // [esp+5Ch] [ebp-14h]
  int v26; // [esp+60h] [ebp-10h]

  if ( byte_BA9429 || (v6 = sub_9246E0(a2, 4), (byte_BA9429 = v6) != 0) )
  {
    *(_DWORD *)(a1 + 0x2C) = a3;
    *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(**(_DWORD **)(a3 + 0x38) + 0x10);
    *(_DWORD *)(a1 + 0x24) = a4;
    *(_DWORD *)(a1 + 0x28) = a5;
    v7 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(a3 + 0x34) + 8))(**(_DWORD **)(a3 + 0x34));
    v8 = fConstant_1;
    *(_DWORD *)(a1 + 0x18) = v7;
    *(_DWORD *)(a1 + 0x1C) = 0x3F800000;
    *(_DWORD *)(a1 + 0x20) = 0x3F800000;
    v9 = *(_DWORD *)(a1 + 0x10);
    v10 = *(unsigned __int8 **)(v9 + 0x20);
    v21[0] = 0;
    *(float *)(a1 + 0x14) = v8 / *(float *)(v9 + 0x1C);
    v11 = *(__m128 *)(a3 + 0x20);
    *(float *)&v24 = *(float *)(v9 + 0x1C) * flt_AA1EC0;
    v12 = (__m128)v24;
    v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v11);
    v14 = *(__m128 *)(a3 + 0x20);
    v21[1] = v13;
    v13.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0];
    v15 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0];
    v16 = *(__m128 *)a3;
    v17 = v15 + v13.m128_f32[0];
    v18 = *(__m128 *)(a3 + 0x10);
    v22 = v17 * *(float *)&dword_A46C30;
    v19 = *(__m128 *)(v9 + 0x10);
    v20[0] = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v16, v19));
    v20[1] = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v18, v19));
    v25 = 0;
    v23 = 0;
    v26 = 0;
    sub_93FB80((float *)a1, v21, v10, v20);
  }
}
