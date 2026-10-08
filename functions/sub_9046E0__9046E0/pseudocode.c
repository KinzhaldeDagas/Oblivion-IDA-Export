int __thiscall sub_9046E0(_DWORD **this, __m128 **a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // edi
  int v12; // eax
  bool v13; // cf
  int v14; // ebx
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  _DWORD v19[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v20[4]; // [esp+30h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9046ea*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9046fb*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x90470c*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90470e*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x904710*/
    *v8 = "TtTransform"; /*0x904716*/
    v9 = __rdtsc(); /*0x90471c*/
    v8[1] = v9; /*0x904726*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x90472c*/
  }
  v10 = *a2; /*0x904735*/
  sub_8B1F70(v20, a2[2], *a2 + 2); /*0x904743*/
  v19[3] = a2; /*0x90474c*/
  v19[2] = v20; /*0x904750*/
  v11 = v10->m128_i32[3]; /*0x904757*/
  v19[1] = a2[1]; /*0x90475a*/
  v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904764*/
  v13 = *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8); /*0x90476d*/
  v19[0] = v11; /*0x904773*/
  if ( v13 ) /*0x904777*/
  {
    v14 = v12; /*0x904779*/
    v15 = *(_DWORD **)(v12 + 0x1A4); /*0x90477b*/
    *v15 = "Et"; /*0x904781*/
    v16 = __rdtsc(); /*0x904787*/
    v15[1] = v16; /*0x904791*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x904797*/
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(this + 3) + 8))(*(this + 3), v19, a3, a4, a5); /*0x9047ba*/
}
