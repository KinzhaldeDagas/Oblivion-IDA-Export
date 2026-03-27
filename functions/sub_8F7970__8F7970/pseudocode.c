int __thiscall sub_8F7970(_DWORD *this, int *a2, int a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int *v11; // edx
  int v12; // eax
  int v13; // ebx
  __m128 *v14; // esi
  int v15; // edx
  int v16; // eax
  __m128 *v17; // esi
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // esi
  _DWORD *v23; // ecx
  __m128 *v25; // [esp+0h] [ebp-D8h]
  __m128 *v26; // [esp+0h] [ebp-D8h]
  __m128 *v27; // [esp+4h] [ebp-D4h]
  __m128 *i; // [esp+1Ch] [ebp-BCh]
  int v29; // [esp+20h] [ebp-B8h]
  _WORD *v30; // [esp+24h] [ebp-B4h]
  _BYTE v31[4]; // [esp+28h] [ebp-B0h] BYREF
  float v32; // [esp+2Ch] [ebp-ACh]
  int v33; // [esp+30h] [ebp-A8h]
  int *v34; // [esp+34h] [ebp-A4h]
  __m128 v35; // [esp+38h] [ebp-A0h] BYREF
  __m128 v36; // [esp+48h] [ebp-90h]
  int v37; // [esp+58h] [ebp-80h]
  int v38; // [esp+5Ch] [ebp-7Ch]
  __m128 v39; // [esp+68h] [ebp-70h] BYREF
  float v40; // [esp+7Ch] [ebp-5Ch]
  __m128 v41; // [esp+88h] [ebp-50h] BYREF
  __m128 v42; // [esp+98h] [ebp-40h]
  __m128 v43; // [esp+A8h] [ebp-30h]
  __m128 v44; // [esp+B8h] [ebp-20h]
  __m128 v45; // [esp+C8h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtmultiRay-cvx";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = *(int **)a3;
  v27 = (__m128 *)a2[2];
  v25 = *(__m128 **)(a3 + 8);
  v33 = *a2;
  v34 = v11;
  sub_8B1FF0(&v41, v25, v27);
  v12 = *(_DWORD *)(v33 + 0x10);
  v13 = 0;
  v37 = 0;
  v38 = 0;
  v14 = *(__m128 **)(v33 + 0xC);
  v29 = v12;
  for ( i = v14; v13 < v29; i += 2 )
  {
    v35 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v41, _mm_shuffle_ps(*v14, *v14, 0)),
              _mm_mul_ps(v42, _mm_shuffle_ps(*v14, *v14, 0x55))),
            _mm_add_ps(_mm_mul_ps(v43, _mm_shuffle_ps(*v14, *v14, 0xAA)), v44));
    v36 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v41, _mm_shuffle_ps(v14[1], v14[1], 0)),
              _mm_mul_ps(v42, _mm_shuffle_ps(v14[1], v14[1], 0x55))),
            _mm_add_ps(_mm_mul_ps(v43, _mm_shuffle_ps(v14[1], v14[1], 0xAA)), v44));
    v15 = *v34;
    v40 = 1.0;
    (*(void (__thiscall **)(int *, _BYTE *, __m128 *, __m128 *))(v15 + 0x14))(v34, v31, &v35, &v39);
    if ( v31[0] )
    {
      v17 = *a5;
      v18 = (__m128)xmmword_A6DFE0;
      v32 = v40;
      v19 = _mm_shuffle_ps((__m128)LODWORD(v40), (__m128)LODWORD(v40), 0);
      v26 = *(__m128 **)(a3 + 8);
      v45 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v18, v19), v35), _mm_mul_ps(v19, v36));
      sub_88FCC0(v17, v26, &v45);
      sub_88FE00(v17 + 1, *(__m128 **)(a3 + 8), &v39);
      v17[1].m128_f32[3] = (v40 - fConstant_1) * i->m128_f32[3] + *(float *)(v33 + 0x18);
      v30 = (_WORD *)(*(this + 3) + 2 * v13);
      if ( *v30 == 0xFFFF )
        *v30 = (*(int (__thiscall **)(_DWORD, int *, int, int, __m128 *))(*(_DWORD *)*(this + 2) + 8))(
                 *(this + 2),
                 a2,
                 a3,
                 a4,
                 v17);
      if ( *(_WORD *)(*(this + 3) + 2 * v13) != 0xFFFF )
      {
        *a5 += 3;
        v17[2].m128_i16[0] = *(_WORD *)(*(this + 3) + 2 * v13);
      }
    }
    else
    {
      v16 = *(unsigned __int16 *)(*(this + 3) + 2 * v13);
      if ( (_WORD)v16 != 0xFFFF )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 2) + 0x10))(*(this + 2), v16);
        *(_WORD *)(*(this + 3) + 2 * v13) = 0xFFFF;
      }
    }
    v14 = i + 2;
    ++v13;
  }
  v20 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v21) = v20[TlsIndex];
  if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
  {
    v22 = v20[TlsIndex];
    v23 = *(_DWORD **)(v21 + 0x1A4);
    *v23 = "Et";
    v21 = __rdtsc();
    v23[1] = v21;
    *(_DWORD *)(v22 + 0x1A4) = v23 + 3;
  }
  return v21;
}
