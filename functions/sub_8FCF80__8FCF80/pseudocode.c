int __thiscall sub_8FCF80(unsigned __int16 *this, _DWORD *a2, _DWORD *a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ebx
  __m128 *v13; // ecx
  __m128 v14; // xmm0
  __m128 *v15; // ecx
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  double v18; // st7
  __m128 *v19; // esi
  long double v20; // st7
  long double v21; // st7
  __int16 v22; // di
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  int v26; // eax
  float v28; // [esp+18h] [ebp-8h]
  unsigned int v29; // [esp+1Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtSphereSphere";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = *a3;
  v12 = *a2;
  v13 = (__m128 *)a3[2];
  v14 = v13[3];
  v15 = v13 + 3;
  v16 = _mm_sub_ps(*(__m128 *)(a2[2] + 0x30), v14);
  v17 = _mm_mul_ps(v16, v16);
  v28 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v18 = *(float *)(a4 + 8) + *(float *)(*a3 + 0xC) + *(float *)(*a2 + 0xC);
  if ( v28 >= v18 * v18 )
  {
    v26 = *(this + 6);
    if ( (_WORD)v26 != 0xFFFF )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v26);
      *(this + 6) = 0xFFFF;
    }
  }
  else
  {
    v19 = *a5;
    if ( v28 <= (double)*(float *)&SrcStr )
    {
      v19[1] = (__m128)xmmword_B2F090[0];
      v21 = -(*(float *)(v11 + 0xC) + *(float *)(v12 + 0xC));
    }
    else
    {
      v20 = fConstant_1 / sqrt(v28);
      *(float *)&v29 = v20;
      v19[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v29, (__m128)v29, 0), v16);
      v21 = v20 * v28 - (*(float *)(v11 + 0xC) + *(float *)(v12 + 0xC));
    }
    *v19 = _mm_add_ps(
             *v15,
             _mm_mul_ps(
               _mm_shuffle_ps((__m128)*(unsigned int *)(v11 + 0xC), (__m128)*(unsigned int *)(v11 + 0xC), 0),
               v19[1]));
    v19[1].m128_f32[3] = v21;
    if ( *(this + 6) == 0xFFFF )
      *(this + 6) = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                      *((_DWORD *)this + 2),
                      a2,
                      a3,
                      a4,
                      v19);
    v22 = *(this + 6);
    if ( v22 != (__int16)0xFFFF )
    {
      v19[2].m128_i16[0] = v22;
      *a5 += 3;
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v23) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
  {
    v24 = ThreadLocalStoragePointer[TlsIndex];
    v25 = *(_DWORD **)(v23 + 0x1A4);
    *v25 = "Et";
    v23 = __rdtsc();
    v25[1] = v23;
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3;
  }
  return v23;
}
