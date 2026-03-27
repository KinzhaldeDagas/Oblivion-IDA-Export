int __cdecl sub_8FDD90(__m128 **a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ecx
  __int32 v10; // eax
  __m128 *v11; // edx
  __m128 *v12; // edx
  __m128 *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *v16; // ecx
  __m128 *v18; // [esp-4h] [ebp-1E4h]
  char v19[4]; // [esp+1Ch] [ebp-1C4h] BYREF
  __m128 v20; // [esp+20h] [ebp-1C0h]
  __m128 v21; // [esp+30h] [ebp-1B0h]
  __m128 v22[2]; // [esp+40h] [ebp-1A0h] BYREF
  __m128 **v23; // [esp+60h] [ebp-180h]
  __m128 **v24; // [esp+64h] [ebp-17Ch]
  __m128 v25[4]; // [esp+70h] [ebp-170h] BYREF
  __m128 v26; // [esp+B0h] [ebp-130h] BYREF
  int v27; // [esp+C0h] [ebp-120h]
  __m128 *v28; // [esp+C4h] [ebp-11Ch]
  __m128 *v29; // [esp+C8h] [ebp-118h]
  __m128 v30; // [esp+D0h] [ebp-110h]
  __m128 v31; // [esp+E0h] [ebp-100h]
  __m128 v32; // [esp+F0h] [ebp-F0h]
  __m128 v33; // [esp+100h] [ebp-E0h]
  __m128 v34; // [esp+110h] [ebp-D0h]
  __m128 v35; // [esp+120h] [ebp-C0h]
  __m128 v36; // [esp+130h] [ebp-B0h]
  __m128 v37; // [esp+140h] [ebp-A0h]
  __m128 v38; // [esp+150h] [ebp-90h]
  unsigned int v39; // [esp+160h] [ebp-80h]
  int v40; // [esp+164h] [ebp-7Ch]

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
  v9 = *a2;
  v10 = (*a2)->m128_i32[3];
  v11 = a1[2];
  v21 = _mm_add_ps((*a1)[1], _mm_shuffle_ps((__m128)(*a1)->m128_u32[3], (__m128)(*a1)->m128_u32[3], 0));
  v18 = a2[2];
  v20 = _mm_add_ps(v9[1], _mm_shuffle_ps((__m128)(unsigned int)v10, (__m128)(unsigned int)v10, 0));
  sub_8B1FF0(v25, v11, v18);
  v12 = a2[2];
  v13 = a1[2];
  v39 = *(unsigned int *)(a3 + 8);
  v26.m128_i32[3] = 0;
  v27 = 0;
  v30 = v25[0];
  v28 = v13;
  v29 = v12;
  v31 = v25[1];
  v34 = v21;
  v32 = v25[2];
  v33 = v25[3];
  v35 = v20;
  v36 = _mm_shuffle_ps((__m128)v39, (__m128)v39, 0);
  v26.m128_i32[0] = (__int32)a1;
  *(unsigned __int64 *)((char *)v26.m128_u64 + 4) = (unsigned int)a2;
  v40 = 0x3C23D70A;
  v37 = _mm_add_ps(v36, v21);
  v38 = _mm_add_ps(v36, v20);
  v23 = a1;
  v24 = a2;
  sub_9385C0(&v26, v19, v22);
  if ( v19[0] )
    (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)a4 + 4))(a4, v22);
  LODWORD(v14) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[TlsIndex];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "Et";
    v14 = __rdtsc();
    v16[1] = v14;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  return v14;
}
