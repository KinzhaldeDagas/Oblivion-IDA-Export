int __thiscall sub_9088D0(__m128 *this, __m128 **a2, int *a3, __m128 *a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  __int32 v16; // esi
  int v17; // eax
  __int32 v18; // ebx
  int v19; // ecx
  int i; // edi
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // esi
  _DWORD *v26; // ecx
  _DWORD v28[4]; // [esp+20h] [ebp-220h] BYREF
  char v29[524]; // [esp+30h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9088e3*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9088f9*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x908909*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90890b*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x90890d*/
    *v10 = "LtBvTree"; /*0x908913*/
    v10[3] = "QueryTree"; /*0x908919*/
    v11 = __rdtsc(); /*0x908920*/
    v10[1] = v11; /*0x90892a*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x908930*/
  }
  sub_9072C0(this, a2, a3, a4); /*0x908944*/
  v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90894f*/
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x90895e*/
  {
    v13 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x908960*/
    v14 = *(_DWORD **)(v12 + 0x1A4); /*0x908962*/
    *v14 = "StNarrowPhase"; /*0x908968*/
    v15 = __rdtsc(); /*0x90896e*/
    v14[1] = v15; /*0x908978*/
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3; /*0x90897e*/
  }
  v16 = this->m128_i32[3]; /*0x908984*/
  v17 = a3[2]; /*0x90898d*/
  v18 = v16 + 0xC * *((_DWORD *)this + 4); /*0x908992*/
  v19 = *a3; /*0x908997*/
  v28[3] = a3; /*0x908999*/
  v28[2] = v17; /*0x90899d*/
  for ( i = *(_DWORD *)(v19 + 0xC); v16 != v18; v16 += 0xC ) /*0x9089a4*/
  {
    v21 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)i + 0x28))(i, *(_DWORD *)v16, v29); /*0x9089b2*/
    v22 = *(_DWORD *)v16; /*0x9089b5*/
    v28[0] = v21; /*0x9089b7*/
    v28[1] = v22; /*0x9089cb*/
    (*(void (__thiscall **)(_DWORD, __m128 **, _DWORD *, __m128 *, int, int))(**(_DWORD **)(v16 + 8) + 0x10))( /*0x9089d9*/
      *(_DWORD *)(v16 + 8),
      a2,
      v28,
      a4,
      a5,
      a6);
  }
  v23 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9089e3*/
  LODWORD(v24) = v23[MEMORY[0xBA9DE4]]; /*0x9089f0*/
  if ( *(_DWORD *)(v24 + 0x1A4) < *(_DWORD *)(v24 + 0x1A8) ) /*0x9089ff*/
  {
    v25 = v23[MEMORY[0xBA9DE4]]; /*0x908a01*/
    v26 = *(_DWORD **)(v24 + 0x1A4); /*0x908a03*/
    *v26 = "lt"; /*0x908a09*/
    v24 = __rdtsc(); /*0x908a0f*/
    v26[1] = v24; /*0x908a19*/
    *(_DWORD *)(v25 + 0x1A4) = v26 + 3; /*0x908a1f*/
  }
  return v24; /*0x908a25*/
}
