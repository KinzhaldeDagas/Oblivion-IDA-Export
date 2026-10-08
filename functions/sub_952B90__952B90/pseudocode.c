int __cdecl sub_952B90(
        int *a1,
        int *a2,
        __m128 *a3,
        float a4,
        __m128 *a5,
        __int128 *a6,
        int a7,
        _DWORD *a8,
        __m128 *a9)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  signed int v14; // ecx
  _DWORD *v15; // edx
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // esi
  unsigned __int64 v19; // rax
  float v21[28]; // [esp+10h] [ebp-70h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x952b99*/
  v10 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x952ba6*/
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x952bb8*/
  {
    v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x952bba*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x952bbc*/
    *v12 = "TtPenetration"; /*0x952bc2*/
    v13 = __rdtsc(); /*0x952bc8*/
    v12[1] = v13; /*0x952bd2*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x952bd8*/
  }
  sub_951C80(v21, (int)a1, (int)a2, a3, a4, (int)a5, (int)a6, a7, (int)a8); /*0x952c02*/
  v14 = sub_952A00(v21, a9); /*0x952c14*/
  if ( v14 == 3 ) /*0x952c19*/
  {
    sub_959750(a1, a2, a3, a5, a6, a9); /*0x952c2d*/
    *a8 = 1; /*0x952c35*/
    v14 = 1; /*0x952c3b*/
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x952c40*/
  v16 = v15[MEMORY[0xBA9DE4]]; /*0x952c4d*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x952c5c*/
  {
    v17 = v15[MEMORY[0xBA9DE4]]; /*0x952c5e*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x952c60*/
    *v18 = "Et"; /*0x952c66*/
    v19 = __rdtsc(); /*0x952c6c*/
    v18[1] = v19; /*0x952c76*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x952c7c*/
  }
  return v14; /*0x952c82*/
}
