char __cdecl sub_8E6D10(int a1, int a2, int a3)
{
  char result; // al
  __m128 *v4; // ebx
  int v5; // edx
  __m128 *v6; // ecx
  double v7; // st7
  double v8; // st6
  __m128 v9; // xmm0
  double v10; // st7
  _DWORD *ThreadLocalStoragePointer; // eax
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // edx
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  __m128 v19; // xmm0
  float v20; // xmm1_4
  int v21; // eax
  int v22; // edx
  __m128 *v23; // eax
  __m128 *v24; // ecx
  double v25; // st7
  double v26; // st6
  __m128 v27; // xmm0
  int v28; // [esp+14h] [ebp-16Ch]
  int v29; // [esp+14h] [ebp-16Ch]
  unsigned int v30; // [esp+14h] [ebp-16Ch]
  unsigned int v31; // [esp+14h] [ebp-16Ch]
  unsigned int v32; // [esp+18h] [ebp-168h]
  unsigned int v33; // [esp+18h] [ebp-168h]
  int v34; // [esp+18h] [ebp-168h]
  __m128 *v35; // [esp+1Ch] [ebp-164h]
  int *v36; // [esp+20h] [ebp-160h] BYREF
  _DWORD *v37; // [esp+24h] [ebp-15Ch]
  int v38; // [esp+28h] [ebp-158h]
  int v39; // [esp+2Ch] [ebp-154h]
  __m128 v40[4]; // [esp+30h] [ebp-150h] BYREF
  float v41; // [esp+70h] [ebp-110h]
  __m128 v42; // [esp+80h] [ebp-100h]
  _DWORD v43[4]; // [esp+90h] [ebp-F0h] BYREF
  __m128 v44[4]; // [esp+A0h] [ebp-E0h] BYREF
  _DWORD v45[4]; // [esp+E0h] [ebp-A0h] BYREF
  _DWORD v46[4]; // [esp+F0h] [ebp-90h] BYREF
  __m128 v47[4]; // [esp+100h] [ebp-80h] BYREF
  __m128 v48[4]; // [esp+140h] [ebp-40h] BYREF

  if ( *(_BYTE *)a1 == 2 )
  {
    v21 = *(_DWORD *)(a1 + 0x14);
    v22 = *(_DWORD *)(a1 + 0x10);
    v37 = *(_DWORD **)(a1 + 0x18);
    v36 = (int *)v21;
    v39 = v22;
    v38 = a2;
    v23 = *(__m128 **)(v21 + 8);
    v24 = (__m128 *)v37[2];
    v25 = *(float *)(a2 + 0x18) * v23[5].m128_f32[3];
    v26 = *(float *)(a2 + 0x18) * v24[5].m128_f32[3];
    *(float *)&v30 = v25;
    v27 = (__m128)v30;
    *(float *)&v31 = v26;
    v42 = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), _mm_sub_ps(v23[4], v23[5])),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v31, (__m128)v31, 0), _mm_sub_ps(v24[5], v24[4])));
    v42.m128_f32[3] = v24[0xA].m128_f32[0] * v24[9].m128_f32[3] * v26 + v23[0xA].m128_f32[0] * v23[9].m128_f32[3] * v25;
    sub_8B1FF0(v40, v23, v24);
    return (*(char (__cdecl **)(int **, int, int, _DWORD, int))(0x34 * *(unsigned __int8 *)(a1 + 1)
                                                              + *(_DWORD *)a2
                                                              + 0x16BC))(
             &v36,
             a1,
             a1 + 0x20,
             0,
             a3);
  }
  if ( *(_BYTE *)a1 != 4 )
  {
    result = *(_BYTE *)a1 - 6;
    if ( *(_BYTE *)a1 == 6 )
      return (*(char (__thiscall **)(_DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 4) + 0x14))(
               *(_DWORD *)(a1 + 4),
               *(_DWORD *)(a1 + 0x14),
               *(_DWORD *)(a1 + 0x18),
               a2,
               a3);
    return result;
  }
  v4 = *(__m128 **)(*(_DWORD *)(a1 + 0x14) + 8);
  v5 = *(_DWORD *)(a1 + 0x18);
  v6 = *(__m128 **)(v5 + 8);
  v36 = *(int **)(a1 + 0x14);
  v39 = *(_DWORD *)(a1 + 0x10);
  v37 = (_DWORD *)v5;
  v38 = a2;
  v7 = *(float *)(a2 + 0x18) * v4[5].m128_f32[3];
  v8 = *(float *)(a2 + 0x18) * v6[5].m128_f32[3];
  v35 = v6;
  *(float *)&v32 = v7;
  v9 = (__m128)v32;
  *(float *)&v33 = v8;
  v42 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), _mm_sub_ps(v4[4], v4[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), _mm_sub_ps(v6[5], v6[4])));
  v42.m128_f32[3] = v6[0xA].m128_f32[0] * v6[9].m128_f32[3] * v8 + v4[0xA].m128_f32[0] * v4[9].m128_f32[3] * v7;
  if ( *(float *)(a1 + 0x1C) != *(float *)(a2 + 0x10) )
  {
    if ( !*(_BYTE *)(*(_DWORD *)(a2 + 0x28) + 0x10) )
    {
      v10 = flt_A3B888;
      *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x14);
      *(_OWORD *)(a1 + 0x20) = 0;
      *(_DWORD *)(a1 + 0x2C) = 0xFF7FFFFF;
LABEL_8:
      v41 = v10;
      sub_8B1FF0(v40, v4, v6);
      return (*(char (__cdecl **)(int **, int, int, int, int))(0x34 * *(unsigned __int8 *)(a1 + 1)
                                                             + *(_DWORD *)a2
                                                             + 0x16BC))(
               &v36,
               a1,
               a1 + 0x30,
               a1 + 0x20,
               a3);
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                              + 0x1A8) )
    {
      v12 = ThreadLocalStoragePointer[TlsIndex];
      v13 = *(_DWORD **)(v12 + 0x1A4);
      v28 = v12;
      *v13 = "TtrecalcT0";
      v14 = __rdtsc();
      v13[1] = v14;
      *(_DWORD *)(v28 + 0x1A4) = v13 + 3;
    }
    sub_8DD150((__m128 *)(v36[2] + 0x40), *(float *)(v38 + 0x10), v47);
    sub_8DD150((__m128 *)(v37[2] + 0x40), *(float *)(v38 + 0x10), v48);
    v43[3] = v39;
    v43[0] = v45;
    v43[2] = v38;
    v43[1] = v46;
    v15 = *v36;
    v45[1] = v36[1];
    v45[0] = v15;
    v29 = v37[1];
    v46[0] = *v37;
    v46[3] = v37;
    v46[1] = v29;
    v45[3] = v36;
    v46[2] = v48;
    v45[2] = v47;
    sub_8B1FF0(v44, v47, v48);
    (*(void (__cdecl **)(_DWORD *, int, int))(0x34 * *(unsigned __int8 *)(a1 + 1) + *(_DWORD *)a2 + 0x16B8))(
      v43,
      a1 + 0x30,
      a1 + 0x20);
    v16 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v16[TlsIndex] + 0x1A4) < *(_DWORD *)(v16[TlsIndex] + 0x1A8) )
    {
      v34 = v16[TlsIndex];
      v17 = *(_DWORD **)(v34 + 0x1A4);
      *v17 = "Et";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v34 + 0x1A4) = v17 + 3;
    }
    v6 = v35;
  }
  v19 = _mm_mul_ps(v42, *(__m128 *)(a1 + 0x20));
  v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] + _mm_shuffle_ps(v42, v42, 0xFF).m128_f32[0];
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x14);
  v10 = *(float *)(a1 + 0x2C) - (float)((float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]) + v20);
  if ( v10 < *(float *)(a2 + 8) )
    goto LABEL_8;
  *(float *)(a1 + 0x2C) = v10;
  result = *(_BYTE *)(a1 + 2);
  if ( result )
    return (*(char (__cdecl **)(int, int, _DWORD))(0x34 * *(unsigned __int8 *)(a1 + 1) + *(_DWORD *)a2 + 0x169C))(
             a1,
             a1 + 0x30,
             *(_DWORD *)(a1 + 0x10));
  return result;
}
