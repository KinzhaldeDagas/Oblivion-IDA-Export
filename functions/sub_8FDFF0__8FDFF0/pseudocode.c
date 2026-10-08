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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fe003*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe00a*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fe01b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe01d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fe01f*/
    *v7 = "TtBoxBox"; /*0x8fe025*/
    v8 = __rdtsc(); /*0x8fe02b*/
    v7[1] = v8; /*0x8fe035*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fe03b*/
  }
  v16 = _mm_add_ps((*a1)[1], _mm_shuffle_ps((__m128)(*a1)->m128_u32[3], (__m128)(*a1)->m128_u32[3], 0)); /*0x8fe069*/
  v15 = _mm_add_ps((*a2)[1], _mm_shuffle_ps((__m128)(*a2)->m128_u32[3], (__m128)(*a2)->m128_u32[3], 0)); /*0x8fe08c*/
  sub_8B1FF0(v17, a1[2], a2[2]); /*0x8fe091*/
  v9 = a1[2]; /*0x8fe09c*/
  v29 = *(unsigned int *)(a3 + 8); /*0x8fe0a4*/
  v10 = a2[2]; /*0x8fe0ab*/
  v22 = v17[0]; /*0x8fe0b4*/
  v20 = v9; /*0x8fe0c1*/
  v23 = v17[1]; /*0x8fe0cc*/
  v18.m128_i32[3] = 0; /*0x8fe0dd*/
  v19 = 0; /*0x8fe0e1*/
  v24 = v17[2]; /*0x8fe0ec*/
  v21 = v10; /*0x8fe104*/
  v25 = v17[3]; /*0x8fe10f*/
  v26 = v16; /*0x8fe11d*/
  v27 = v15; /*0x8fe128*/
  v28[0] = _mm_shuffle_ps((__m128)v29, (__m128)v29, 0); /*0x8fe15c*/
  v18.m128_i32[0] = (__int32)a1; /*0x8fe16d*/
  *(unsigned __int64 *)((char *)v18.m128_u64 + 4) = (unsigned int)a2; /*0x8fe171*/
  v30 = 0x3C23D70A; /*0x8fe183*/
  v28[1] = _mm_add_ps(v28[0], v16); /*0x8fe18e*/
  v28[2] = _mm_add_ps(v28[0], v15); /*0x8fe196*/
  sub_8FDAF0((int)&v18); /*0x8fe19e*/
  if ( !sub_9377C0(&v18, v28) ) /*0x8fe1af*/
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8fe1bf*/
  LODWORD(v11) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe1c8*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x8fe1d7*/
  {
    v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe1d9*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x8fe1db*/
    *v13 = "Et"; /*0x8fe1e1*/
    v11 = __rdtsc(); /*0x8fe1e7*/
    v13[1] = v11; /*0x8fe1f1*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x8fe1f7*/
  }
  return v11; /*0x8fe1fd*/
}
