int __stdcall sub_912550(int **a1, float **a2, int a3, __m128 *a4, int a5, __m128 **a6)
{
  int *v6; // edi
  int v7; // esi
  float *v8; // eax
  int *v9; // edi
  __m128 v10; // xmm0
  __m128 v11; // xmm2
  __m128 v12; // xmm0
  __int32 v13; // ecx
  int v14; // edx
  int result; // eax
  __m128 *v16; // [esp-8h] [ebp-78h]
  int v17; // [esp+18h] [ebp-58h]
  float v18; // [esp+1Ch] [ebp-54h]
  __m128 v19; // [esp+20h] [ebp-50h] BYREF
  float v20[4]; // [esp+38h] [ebp-38h] BYREF
  int v21; // [esp+48h] [ebp-28h]
  int v22; // [esp+4Ch] [ebp-24h]
  int v23; // [esp+50h] [ebp-20h]
  _BYTE v24[28]; // [esp+54h] [ebp-1Ch] BYREF

  v6 = *a1 + 1;
  *a1 = v6;
  v7 = *v6;
  v8 = *a2;
  v17 = *(_DWORD *)(a5 + 0x28);
  *a2 += 4;
  v9 = *(int **)(*(_DWORD *)(a3 + 0x34) + 4 * (unsigned __int64)*v8);
  v10 = a4[1];
  v11 = *a4;
  v19 = a4[v7 + 2];
  v12 = _mm_mul_ps(_mm_sub_ps(v11, v10), v19);
  v18 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  if ( v9 )
  {
    v16 = *a6;
    v21 = 0;
    v22 = 0;
    sub_8F1190(&v19, a4 + 1, a5, v16, v20);
    v13 = a4[0xB].m128_i32[2];
    v21 = *(_DWORD *)(v17 + 8 * v13);
    v14 = *v9;
    v22 = *(_DWORD *)(v17 + 8 * v13 + 4);
    v20[1] = v18;
    v23 = 0;
    v20[2] = 0.0;
    LODWORD(v20[3]) = a5;
    (*(void (__thiscall **)(int *, float *, _BYTE *))(v14 + 8))(v9, v20, v24);
    sub_8F1010((int)v24, (float *)a5, (int *)a6);
  }
  result = a4[0xB].m128_i32[2] + 1;
  a4[0xB].m128_i32[2] = result;
  return result;
}
