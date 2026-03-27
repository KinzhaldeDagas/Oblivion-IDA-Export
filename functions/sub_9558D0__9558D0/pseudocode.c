int __thiscall sub_9558D0(float *this, int a2, _DWORD *a3, int *a4, int *a5)
{
  __m128 *v6; // ecx
  int v7; // ebx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // edi
  int result; // eax
  __m128 v15; // xmm0
  float v16; // xmm2_4
  double v17; // st5
  double v18; // st4
  double v19; // st6
  double v20; // st5
  double v21; // st7
  int v22; // esi
  unsigned int v23; // [esp+0h] [ebp-44h]
  unsigned int v24; // [esp+0h] [ebp-44h]
  unsigned int v25; // [esp+0h] [ebp-44h]
  unsigned int v26; // [esp+0h] [ebp-44h]
  unsigned int v27; // [esp+0h] [ebp-44h]
  unsigned int v28; // [esp+0h] [ebp-44h]
  unsigned int v29; // [esp+0h] [ebp-44h]
  unsigned int v30; // [esp+0h] [ebp-44h]
  int v31; // [esp+14h] [ebp-30h]
  unsigned int v32; // [esp+18h] [ebp-2Ch]
  double v33; // [esp+1Ch] [ebp-28h]
  double v34; // [esp+1Ch] [ebp-28h]
  double v35; // [esp+24h] [ebp-20h]
  double v36; // [esp+24h] [ebp-20h]
  __m128 v37; // [esp+34h] [ebp-10h]
  double v38; // [esp+34h] [ebp-10h]
  __m128 v39; // 0:^24.16

  v6 = *(__m128 **)(a2 + 0xB8);
  v7 = 0;
  v8 = 0;
  v31 = 0;
  if ( v6->m128_f32[0] != *(float *)&SrcStr )
  {
    v8 = 1;
    v31 = v6->m128_f32[0] < (double)*(float *)&SrcStr;
  }
  if ( v6->m128_f32[1] != *(float *)&SrcStr )
  {
    ++v8;
    v7 = 1;
    if ( v6->m128_f32[1] < (double)*(float *)&SrcStr )
      ++v31;
  }
  if ( v6->m128_f32[2] != *(float *)&SrcStr )
  {
    ++v8;
    v7 = 2;
    if ( v6->m128_f32[2] < (double)*(float *)&SrcStr )
      ++v31;
  }
  v33 = *(float *)(a2 + 0xC0);
  if ( v8 == 1 )
  {
    *(float *)&v23 = (*(float *)(a2 + 0xBC) - *(this + v7 + 0xC)) * *(this + 0xF);
    *(float *)&v24 = sub_8ECA90(v23);
    v9 = sub_8ECB30(v24);
    *(float *)&v25 = *(this + 0xF) * (v33 - *(this + v7 + 0xC));
    *(float *)&v26 = sub_8ECA90(v25);
    v10 = sub_8ECB30(v26);
    v11 = a3[v7 + 0xA];
    v12 = a3[9];
    v13 = (v9 - v11) >> v12;
    result = ((v10 - v11) >> v12) + 1;
    if ( v13 > 0 )
    {
      if ( v13 >= 0xFF )
        v13 = 0xFF;
    }
    else
    {
      v13 = 0;
    }
    if ( result > 0 )
    {
      if ( result >= 0xFF )
        result = 0xFF;
    }
    else
    {
      result = 0;
    }
    *a5 = v13;
    *a4 = result;
    if ( *a5 < 0 )
      *a5 = 0;
    return result;
  }
  v39 = *((__m128 *)this + 3);
  v37.m128_f32[0] = (float)(int)a3[0xA];
  v37.m128_f32[1] = (float)(int)a3[0xB];
  v37.m128_i32[3] = 0;
  v37.m128_f32[2] = (float)(int)a3[0xC];
  *(float *)&v32 = fConstant_1 / v39.m128_f32[3];
  v15 = _mm_mul_ps(*v6, _mm_add_ps(v39, _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v37)));
  v16 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  v17 = dbl_A2F928 / (double)(1 << a3[9]);
  v35 = (*(float *)(a2 + 0xBC) - v16) * v39.m128_f32[3] * v17;
  v18 = (v33 - v16) * v39.m128_f32[3] * v17;
  v19 = dbl_A2F928;
  v38 = v19;
  if ( v8 == 2 )
  {
    v19 = dbl_A3D660;
    v20 = dbl_A2FAA0;
LABEL_24:
    v38 = v20;
    goto LABEL_25;
  }
  if ( v8 == 3 )
  {
    v19 = dbl_A77B58;
    v20 = dbl_AA3548;
    goto LABEL_24;
  }
LABEL_25:
  v36 = v35 * v19;
  v34 = v19 * v18;
  if ( v31 )
  {
    v21 = (double)(0xFF * v31);
    v36 = v36 + v21;
    v34 = v21 + v34;
  }
  *(float *)&v27 = v38 * v36;
  *(float *)&v28 = sub_8ECA90(v27);
  v22 = sub_8ECB30(v28);
  *(float *)&v29 = v38 * v34;
  *(float *)&v30 = sub_8ECA90(v29);
  result = sub_8ECB30(v30) + 1;
  if ( v22 > 0 )
  {
    if ( v22 >= 0xFF )
      v22 = 0xFF;
  }
  else
  {
    v22 = 0;
  }
  if ( result > 0 )
  {
    if ( result >= 0xFF )
      result = 0xFF;
    *a5 = v22;
    *a4 = result;
  }
  else
  {
    *a5 = v22;
    *a4 = 0;
    return 0;
  }
  return result;
}
