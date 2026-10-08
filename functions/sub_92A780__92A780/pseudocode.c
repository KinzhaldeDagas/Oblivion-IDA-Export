_BYTE *__thiscall sub_92A780(__m128 *this, _BYTE *a2, __m128 *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __int32 v11; // ecx
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  _BYTE *result; // eax
  char v17; // [esp+17h] [ebp-39h] BYREF
  int v18; // [esp+18h] [ebp-38h]
  __m128 *v19; // [esp+1Ch] [ebp-34h]
  _OWORD v20[3]; // [esp+20h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92a78a*/
  v19 = this; /*0x92a791*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92a79b*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x92a7ac*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92a7ae*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x92a7b0*/
    *v7 = "TtrcConvTransl"; /*0x92a7b6*/
    v8 = __rdtsc(); /*0x92a7bc*/
    v18 = v8; /*0x92a7be*/
    v7[1] = v8; /*0x92a7c6*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x92a7cc*/
  }
  v9 = *a3; /*0x92a7d5*/
  qmemcpy(v20, a3, sizeof(v20)); /*0x92a7e3*/
  v10 = v19[2]; /*0x92a7e9*/
  v11 = v19[1].m128_i32[0]; /*0x92a7ed*/
  v20[0] = _mm_sub_ps(v9, v10); /*0x92a7f3*/
  v20[1] = _mm_sub_ps(a3[1], v10); /*0x92a80c*/
  (*(void (__thiscall **)(__int32, char *, _OWORD *, int))(*(_DWORD *)v11 + 0x14))(v11, &v17, v20, a4); /*0x92a814*/
  v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92a81d*/
  if ( *(_DWORD *)(v12 + 0x1A4) >= *(_DWORD *)(v12 + 0x1A8) ) /*0x92a82c*/
  {
    result = a2; /*0x92a864*/
  }
  else
  {
    v13 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92a82e*/
    v14 = *(_DWORD **)(v12 + 0x1A4); /*0x92a830*/
    *v14 = "Et"; /*0x92a836*/
    v15 = __rdtsc(); /*0x92a83c*/
    v19 = (__m128 *)v15; /*0x92a83e*/
    v14[1] = v15; /*0x92a846*/
    result = a2; /*0x92a849*/
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3; /*0x92a84f*/
  }
  *a2 = v17; /*0x92a859*/
  return result; /*0x92a85b*/
}
