int __cdecl sub_8FB040(_DWORD *a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ebx
  float *v10; // ecx
  int v11; // edi
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  double v18; // st7
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  __m128 *v21; // edx
  double v22; // st7
  double v23; // st7
  int v24; // eax
  double v25; // st7
  double v26; // st6
  int v27; // eax
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // esi
  _DWORD *v33; // ecx
  __m128 *v35; // [esp-8h] [ebp-78h]
  float v36; // [esp+18h] [ebp-58h]
  float v37; // [esp+1Ch] [ebp-54h]
  unsigned int v38; // [esp+1Ch] [ebp-54h]
  float v39; // [esp+20h] [ebp-50h]
  __m128 v40; // [esp+30h] [ebp-40h] BYREF
  __m128 v41; // [esp+40h] [ebp-30h] BYREF
  __m128 v42; // [esp+50h] [ebp-20h]
  _DWORD *v43; // [esp+60h] [ebp-10h]
  __m128 **v44; // [esp+64h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtSphereBox";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = (__m128 *)(a1[2] + 0x30);
  v35 = a2[2];
  v43 = a1;
  v44 = a2;
  sub_88FD10(&v40, v35, v9);
  v10 = (float *)*a2;
  v11 = *a1;
  v12 = _mm_and_ps(v40, (__m128)xmmword_A372D0);
  v13 = _mm_sub_ps(_mm_min_ps(v12, (*a2)[1]), v12);
  if ( (_mm_movemask_ps(v13) & 7) == 0 )
  {
    v21 = a2[2];
    v36 = v12.m128_f32[0] - v10[4];
    v37 = v12.m128_f32[1] - v10[5];
    v22 = v12.m128_f32[2] - v10[6];
    if ( v36 <= (double)v37 )
    {
      if ( v37 > v22 )
      {
        v25 = v42.m128_f32[3];
        v42 = v21[1];
        v42.m128_f32[3] = v25;
        v24 = 1;
        v22 = v37;
        goto LABEL_12;
      }
    }
    else if ( v36 > v22 )
    {
      v23 = v42.m128_f32[3];
      v42 = *v21;
      v42.m128_f32[3] = v23;
      v24 = 0;
      v22 = v36;
LABEL_12:
      v20 = v42;
      if ( v40.m128_f32[v24] < (double)*(float *)&SrcStr )
      {
        v20 = _mm_xor_ps(v42, (__m128)xmmword_A965C0);
        v42 = v20;
      }
      v18 = v22 - v10[3] - *(float *)(v11 + 0xC);
      goto LABEL_15;
    }
    v26 = v42.m128_f32[3];
    v42 = v21[2];
    v42.m128_f32[3] = v26;
    v24 = 2;
    goto LABEL_12;
  }
  v14 = _mm_mul_ps(v13, v13);
  v14.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  v39 = 1.0 / fsqrt(v14.m128_f32[0]);
  v15 = (__m128)0x3F000000u;
  v15.m128_f32[0] = 0.5 * v39;
  v16 = v15;
  v16.m128_f32[0] = (float)(0.5 * v39) * (float)(3.0 - (float)((float)(v14.m128_f32[0] * v39) * v39));
  v17 = _mm_shuffle_ps(v16, v16, 0);
  v18 = (float)(v14.m128_f32[0] * v17.m128_f32[0]) - (v10[3] + *(float *)(v11 + 0xC));
  if ( v18 > *(float *)(a3 + 8) )
    goto LABEL_16;
  v19 = _mm_xor_ps(_mm_xor_ps(_mm_mul_ps(v17, v13), _mm_and_ps(v40, (__m128)xmmword_A965C0)), (__m128)xmmword_A965C0);
  v20 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*a2[2], _mm_shuffle_ps(v19, v19, 0)),
            _mm_mul_ps(a2[2][1], _mm_shuffle_ps(v19, v19, 0x55))),
          _mm_mul_ps(a2[2][2], _mm_shuffle_ps(v19, v19, 0xAA)));
  v42 = v20;
LABEL_15:
  v27 = *a4;
  *(float *)&v38 = -v18 - *(float *)(v11 + 0xC);
  v28 = _mm_mul_ps(_mm_shuffle_ps((__m128)v38, (__m128)v38, 0), v20);
  v29 = *v9;
  v42.m128_f32[3] = v18;
  v41 = _mm_add_ps(v29, v28);
  (*(void (__thiscall **)(int *, __m128 *))(v27 + 4))(a4, &v41);
LABEL_16:
  v30 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v31) = v30[TlsIndex];
  if ( *(_DWORD *)(v31 + 0x1A4) < *(_DWORD *)(v31 + 0x1A8) )
  {
    v32 = v30[TlsIndex];
    v33 = *(_DWORD **)(v31 + 0x1A4);
    *v33 = "Et";
    v31 = __rdtsc();
    v33[1] = v31;
    *(_DWORD *)(v32 + 0x1A4) = v33 + 3;
  }
  return v31;
}
