int __thiscall sub_9044F0(_DWORD *this, __m128 **a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // edi
  int v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // ebx
  _DWORD *v15; // ecx
  _DWORD v18[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v19[4]; // [esp+30h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9044fa*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90450b*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90451c*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90451e*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x904520*/
    *v8 = "TtTransform"; /*0x904526*/
    v9 = __rdtsc(); /*0x90452c*/
    v8[1] = v9; /*0x904536*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x90453c*/
  }
  v10 = *a2; /*0x904545*/
  sub_8B1F70(v19, a2[2], *a2 + 2); /*0x904553*/
  v18[3] = a2; /*0x90455c*/
  v18[2] = v19; /*0x904564*/
  v11 = v10->m128_i32[3]; /*0x90456b*/
  v18[1] = a2[1]; /*0x90456e*/
  v12 = *(this + 3); /*0x904572*/
  v18[0] = v11; /*0x904585*/
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v12 + 0xC))(v12, v18, a3, a4, a5); /*0x90458c*/
  LODWORD(v13) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904595*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x9045a4*/
  {
    v14 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9045a6*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x9045a8*/
    *v15 = "Et"; /*0x9045ae*/
    v13 = __rdtsc(); /*0x9045b4*/
    v15[1] = v13; /*0x9045be*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x9045c4*/
  }
  return v13; /*0x9045ca*/
}
