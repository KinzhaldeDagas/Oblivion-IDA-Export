int __cdecl sub_9043F0(__m128 **a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // ecx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // esi
  _DWORD v18[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v19[4]; // [esp+20h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x904400*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904407*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x904418*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90441a*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90441c*/
    *v8 = "TtTransform"; /*0x904422*/
    v9 = __rdtsc(); /*0x904428*/
    v8[1] = v9; /*0x904432*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x904438*/
  }
  v10 = *a1; /*0x904441*/
  sub_8B1F70(v19, a1[2], *a1 + 2); /*0x90444f*/
  v18[3] = a1; /*0x904454*/
  v18[2] = v19; /*0x90445c*/
  v11 = v10->m128_i32[3]; /*0x904460*/
  v18[1] = a1[1]; /*0x904466*/
  v18[0] = v11; /*0x90446a*/
  v12 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v11 + 8))(v11); /*0x90447a*/
  v13 = *(unsigned __int8 *)(*a3 + 0x20 * v12 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190); /*0x904489*/
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int, int))(*a3 + 0x14 * (v13 + 0x7B)))(v18, a2, a3, a4, a5); /*0x9044a6*/
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9044af*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x9044c3*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9044c5*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x9044c7*/
    *v16 = "Et"; /*0x9044cd*/
    v14 = __rdtsc(); /*0x9044d3*/
    v16[1] = v14; /*0x9044dd*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x9044e3*/
  }
  return v14; /*0x9044e9*/
}
