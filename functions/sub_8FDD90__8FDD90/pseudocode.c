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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fdda3*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fddaa*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fddbb*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fddbd*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fddbf*/
    *v7 = "TtBoxBox"; /*0x8fddc5*/
    v8 = __rdtsc(); /*0x8fddcb*/
    v7[1] = v8; /*0x8fddd5*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fdddb*/
  }
  v9 = *a2; /*0x8fddec*/
  v10 = (*a2)->m128_i32[3]; /*0x8fddf2*/
  v11 = a1[2]; /*0x8fddff*/
  v21 = _mm_add_ps((*a1)[1], _mm_shuffle_ps((__m128)(*a1)->m128_u32[3], (__m128)(*a1)->m128_u32[3], 0)); /*0x8fde09*/
  v18 = a2[2]; /*0x8fde1f*/
  v20 = _mm_add_ps(v9[1], _mm_shuffle_ps((__m128)(unsigned int)v10, (__m128)(unsigned int)v10, 0)); /*0x8fde2c*/
  sub_8B1FF0(v25, v11, v18); /*0x8fde31*/
  v12 = a2[2]; /*0x8fde3c*/
  v13 = a1[2]; /*0x8fde3f*/
  v39 = *(unsigned int *)(a3 + 8); /*0x8fde42*/
  v26.m128_i32[3] = 0; /*0x8fde5b*/
  v27 = 0; /*0x8fde62*/
  v30 = v25[0]; /*0x8fde6d*/
  v28 = v13; /*0x8fde7d*/
  v29 = v12; /*0x8fde88*/
  v31 = v25[1]; /*0x8fde93*/
  v34 = v21; /*0x8fdea3*/
  v32 = v25[2]; /*0x8fdeae*/
  v33 = v25[3]; /*0x8fdedf*/
  v35 = v20; /*0x8fdeed*/
  v36 = _mm_shuffle_ps((__m128)v39, (__m128)v39, 0); /*0x8fdf22*/
  v26.m128_i32[0] = (__int32)a1; /*0x8fdf37*/
  *(unsigned __int64 *)((char *)v26.m128_u64 + 4) = (unsigned int)a2; /*0x8fdf3e*/
  v40 = 0x3C23D70A; /*0x8fdf45*/
  v37 = _mm_add_ps(v36, v21); /*0x8fdf50*/
  v38 = _mm_add_ps(v36, v20); /*0x8fdf58*/
  v23 = a1; /*0x8fdf60*/
  v24 = a2; /*0x8fdf64*/
  sub_9385C0(&v26, v19, v22); /*0x8fdf68*/
  if ( v19[0] ) /*0x8fdf73*/
    (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)a4 + 4))(a4, v22); /*0x8fdf7f*/
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdf88*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x8fdf97*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fdf99*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x8fdf9b*/
    *v16 = "Et"; /*0x8fdfa1*/
    v14 = __rdtsc(); /*0x8fdfa7*/
    v16[1] = v14; /*0x8fdfb1*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x8fdfb7*/
  }
  return v14; /*0x8fdfbd*/
}
