int __thiscall sub_8FDB70(__m128 *this, __m128 **a2, unsigned __int64 a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ecx
  int v10; // edx
  unsigned __int64 v11; // rax
  int v12; // ebx
  _DWORD *v13; // ecx
  __m128 v16; // [esp+20h] [ebp-190h]
  __m128 v17; // [esp+30h] [ebp-180h]
  __m128 v18[4]; // [esp+40h] [ebp-170h] BYREF
  __m128 v19; // [esp+80h] [ebp-130h] BYREF
  int v20; // [esp+90h] [ebp-120h]
  __m128 *v21; // [esp+94h] [ebp-11Ch]
  int v22; // [esp+98h] [ebp-118h]
  __m128 v23; // [esp+A0h] [ebp-110h]
  __m128 v24; // [esp+B0h] [ebp-100h]
  __m128 v25; // [esp+C0h] [ebp-F0h]
  __m128 v26; // [esp+D0h] [ebp-E0h]
  __m128 v27; // [esp+E0h] [ebp-D0h]
  __m128 v28; // [esp+F0h] [ebp-C0h]
  __m128 v29; // [esp+100h] [ebp-B0h]
  __m128 v30; // [esp+110h] [ebp-A0h]
  __m128 v31; // [esp+120h] [ebp-90h]
  unsigned int v32; // [esp+130h] [ebp-80h]
  int v33; // [esp+134h] [ebp-7Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtBoxBox";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v16 = _mm_add_ps((*a2)[1], _mm_shuffle_ps((__m128)(*a2)->m128_u32[3], (__m128)(*a2)->m128_u32[3], 0));
  v17 = _mm_add_ps(
          *(__m128 *)(*(_DWORD *)a3 + 0x10),
          _mm_shuffle_ps(
            (__m128)*(unsigned int *)(*(_DWORD *)a3 + 0xC),
            (__m128)*(unsigned int *)(*(_DWORD *)a3 + 0xC),
            0));
  sub_8B1FF0(v18, a2[2], *(__m128 **)(a3 + 8));
  v32 = *(unsigned int *)(HIDWORD(a3) + 8);
  v19.m128_i32[3] = this->m128_i32[2];
  v9 = a2[2];
  v20 = a4;
  v10 = *(_DWORD *)(a3 + 8);
  v21 = v9;
  v23 = v18[0];
  v22 = v10;
  v27 = v16;
  v24 = v18[1];
  v25 = v18[2];
  v26 = v18[3];
  v28 = v17;
  v29 = _mm_shuffle_ps((__m128)v32, (__m128)v32, 0);
  v19.m128_i32[0] = (__int32)a2;
  *(unsigned __int64 *)((char *)v19.m128_u64 + 4) = a3;
  v33 = 0x3C23D70A;
  v30 = _mm_add_ps(v29, v16);
  v31 = _mm_add_ps(v29, v17);
  sub_9386C0(&v19, this + 1);
  LODWORD(v11) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[TlsIndex];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "Et";
    v11 = __rdtsc();
    v13[1] = v11;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
  }
  return v11;
}
