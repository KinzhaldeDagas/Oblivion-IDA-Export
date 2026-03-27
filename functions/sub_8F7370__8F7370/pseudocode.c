int __stdcall sub_8F7370(int *a1, int a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // edi
  int v10; // eax
  __m128 *v11; // esi
  int v12; // edx
  __m128 *v13; // eax
  double v14; // st7
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  int v17; // edx
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // esi
  _DWORD *v21; // ecx
  int v23; // [esp+10h] [ebp-D0h]
  int *v24; // [esp+18h] [ebp-C8h]
  _BYTE v25[4]; // [esp+1Ch] [ebp-C4h] BYREF
  __m128 v26; // [esp+20h] [ebp-C0h] BYREF
  __m128 v27; // [esp+30h] [ebp-B0h]
  int v28; // [esp+40h] [ebp-A0h]
  int v29; // [esp+44h] [ebp-9Ch]
  __m128 v30; // [esp+50h] [ebp-90h] BYREF
  __m128 v31; // [esp+60h] [ebp-80h]
  int v32; // [esp+70h] [ebp-70h]
  _DWORD v33[8]; // [esp+74h] [ebp-6Ch] BYREF
  float v34; // [esp+94h] [ebp-4Ch]
  __m128 v35; // [esp+A0h] [ebp-40h] BYREF
  __m128 v36; // [esp+B0h] [ebp-30h]
  __m128 v37; // [esp+C0h] [ebp-20h]
  __m128 v38; // [esp+D0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtmultiRay-cvx";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a1;
  v24 = *(int **)a2;
  sub_8B1FF0(&v35, *(__m128 **)(a2 + 8), (__m128 *)a1[2]);
  v10 = *(_DWORD *)(v9 + 0x10);
  v11 = *(__m128 **)(v9 + 0xC);
  v32 = (int)a1;
  v33[0] = a2;
  v28 = 0;
  v29 = 0;
  if ( v10 > 0 )
  {
    v23 = v10;
    do
    {
      v26 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v35, _mm_shuffle_ps(*v11, *v11, 0)),
                _mm_mul_ps(v36, _mm_shuffle_ps(*v11, *v11, 0x55))),
              _mm_add_ps(_mm_mul_ps(v37, _mm_shuffle_ps(*v11, *v11, 0xAA)), v38));
      v27 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v35, _mm_shuffle_ps(v11[1], v11[1], 0)),
                _mm_mul_ps(v36, _mm_shuffle_ps(v11[1], v11[1], 0x55))),
              _mm_add_ps(_mm_mul_ps(v37, _mm_shuffle_ps(v11[1], v11[1], 0xAA)), v38));
      v12 = *v24;
      v34 = 1.0;
      (*(void (__thiscall **)(int *, _BYTE *, __m128 *, _DWORD *))(v12 + 0x14))(v24, v25, &v26, &v33[3]);
      if ( v25[0] )
      {
        v13 = *(__m128 **)(a2 + 8);
        v14 = v34 - fConstant_1;
        v15 = _mm_shuffle_ps((__m128)LODWORD(v34), (__m128)LODWORD(v34), 0);
        v16 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v26), _mm_mul_ps(v15, v27));
        v17 = *a4;
        v30 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(*v13, _mm_shuffle_ps(v16, v16, 0)),
                  _mm_mul_ps(v13[1], _mm_shuffle_ps(v16, v16, 0x55))),
                _mm_add_ps(_mm_mul_ps(v13[2], _mm_shuffle_ps(v16, v16, 0xAA)), v13[3]));
        v31 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(*v13, _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0)),
                  _mm_mul_ps(v13[1], _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0x55))),
                _mm_mul_ps(v13[2], _mm_shuffle_ps(*(__m128 *)&v33[3], *(__m128 *)&v33[3], 0xAA)));
        v31.m128_f32[3] = v14 * v11->m128_f32[3] + *(float *)(v9 + 0x18);
        (*(void (__thiscall **)(int *, __m128 *))(v17 + 4))(a4, &v30);
      }
      v11 += 2;
      --v23;
    }
    while ( v23 );
  }
  v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v19) = v18[TlsIndex];
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
  {
    v20 = v18[TlsIndex];
    v21 = *(_DWORD **)(v19 + 0x1A4);
    *v21 = "Et";
    v19 = __rdtsc();
    v21[1] = v19;
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
  }
  return v19;
}
