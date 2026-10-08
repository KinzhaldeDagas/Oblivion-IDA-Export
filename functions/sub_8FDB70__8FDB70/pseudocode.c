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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fdb7d*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdb8e*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fdb9f*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdba1*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fdba3*/
    *v7 = "TtBoxBox"; /*0x8fdba9*/
    v8 = __rdtsc(); /*0x8fdbaf*/
    v7[1] = v8; /*0x8fdbb9*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fdbbf*/
  }
  v16 = _mm_add_ps((*a2)[1], _mm_shuffle_ps((__m128)(*a2)->m128_u32[3], (__m128)(*a2)->m128_u32[3], 0)); /*0x8fdbed*/
  v17 = _mm_add_ps( /*0x8fdc10*/
          *(__m128 *)(*(_DWORD *)a3 + 0x10),
          _mm_shuffle_ps(
            (__m128)*(unsigned int *)(*(_DWORD *)a3 + 0xC),
            (__m128)*(unsigned int *)(*(_DWORD *)a3 + 0xC),
            0));
  sub_8B1FF0(v18, a2[2], *(__m128 **)(a3 + 8)); /*0x8fdc15*/
  v32 = *(unsigned int *)(HIDWORD(a3) + 8); /*0x8fdc28*/
  v19.m128_i32[3] = this->m128_i32[2]; /*0x8fdc41*/
  v9 = a2[2]; /*0x8fdc48*/
  v20 = a4; /*0x8fdc4b*/
  v10 = *(_DWORD *)(a3 + 8); /*0x8fdc52*/
  v21 = v9; /*0x8fdc55*/
  v23 = v18[0]; /*0x8fdc60*/
  v22 = v10; /*0x8fdc6d*/
  v27 = v16; /*0x8fdc78*/
  v24 = v18[1]; /*0x8fdc83*/
  v25 = v18[2]; /*0x8fdc9b*/
  v26 = v18[3]; /*0x8fdcb3*/
  v28 = v17; /*0x8fdccc*/
  v29 = _mm_shuffle_ps((__m128)v32, (__m128)v32, 0); /*0x8fdcf8*/
  v19.m128_i32[0] = (__int32)a2; /*0x8fdd0d*/
  *(unsigned __int64 *)((char *)v19.m128_u64 + 4) = a3; /*0x8fdd14*/
  v33 = 0x3C23D70A; /*0x8fdd22*/
  v30 = _mm_add_ps(v29, v16); /*0x8fdd2d*/
  v31 = _mm_add_ps(v29, v17); /*0x8fdd35*/
  sub_9386C0(&v19, this + 1); /*0x8fdd3d*/
  LODWORD(v11) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdd48*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x8fdd57*/
  {
    v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdd59*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x8fdd5b*/
    *v13 = "Et"; /*0x8fdd61*/
    v11 = __rdtsc(); /*0x8fdd67*/
    v13[1] = v11; /*0x8fdd71*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x8fdd77*/
  }
  return v11; /*0x8fdd7d*/
}
