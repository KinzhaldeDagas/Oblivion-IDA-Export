int __cdecl sub_8FDFF0(__m128 **a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ecx
  __m128 *v10; // edx
  unsigned __int64 v11; // rax
  int v12; // esi
  _DWORD *v13; // ecx
  __m128 v15; // [esp+10h] [ebp-190h]
  __m128 v16; // [esp+20h] [ebp-180h]
  __m128 v17[4]; // [esp+30h] [ebp-170h] BYREF
  __m128 v18; // [esp+70h] [ebp-130h] BYREF
  int v19; // [esp+80h] [ebp-120h]
  __m128 *v20; // [esp+84h] [ebp-11Ch]
  __m128 *v21; // [esp+88h] [ebp-118h]
  __m128 v22; // [esp+90h] [ebp-110h]
  __m128 v23; // [esp+A0h] [ebp-100h]
  __m128 v24; // [esp+B0h] [ebp-F0h]
  __m128 v25; // [esp+C0h] [ebp-E0h]
  __m128 v26; // [esp+D0h] [ebp-D0h]
  __m128 v27; // [esp+E0h] [ebp-C0h]
  __m128 v28[3]; // [esp+F0h] [ebp-B0h] BYREF
  unsigned int v29; // [esp+120h] [ebp-80h]
  int v30; // [esp+124h] [ebp-7Ch]

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
  v16 = _mm_add_ps((*a1)[1], _mm_shuffle_ps((__m128)(*a1)->m128_u32[3], (__m128)(*a1)->m128_u32[3], 0));
  v15 = _mm_add_ps((*a2)[1], _mm_shuffle_ps((__m128)(*a2)->m128_u32[3], (__m128)(*a2)->m128_u32[3], 0));
  sub_8B1FF0(v17, a1[2], a2[2]);
  v9 = a1[2];
  v29 = *(unsigned int *)(a3 + 8);
  v10 = a2[2];
  v22 = v17[0];
  v20 = v9;
  v23 = v17[1];
  v18.m128_i32[3] = 0;
  v19 = 0;
  v24 = v17[2];
  v21 = v10;
  v25 = v17[3];
  v26 = v16;
  v27 = v15;
  v28[0] = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0);
  v18.m128_i32[0] = (__int32)a1;
  *(unsigned __int64 *)((char *)v18.m128_u64 + 4) = (unsigned int)a2;
  v30 = 0x3C23D70A;
  v28[1] = _mm_add_ps(v28[0], v16);
  v28[2] = _mm_add_ps(v28[0], v15);
  sub_8FDAF0((int)&v18);
  if ( !sub_9377C0(&v18, v28) )
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
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
