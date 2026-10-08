int __thiscall sub_904300(_DWORD *this, __m128 **a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // edi
  __int32 v12; // edi
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // ecx
  _DWORD v19[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v20[4]; // [esp+30h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90430a*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90431b*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90432c*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90432e*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x904330*/
    *v9 = "TtTransform"; /*0x904336*/
    v10 = __rdtsc(); /*0x90433c*/
    v9[1] = v10; /*0x904346*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90434c*/
  }
  v11 = *a2; /*0x904355*/
  sub_8B1F70(v20, a2[2], *a2 + 2); /*0x904363*/
  v19[3] = a2; /*0x90436c*/
  v19[2] = v20; /*0x904374*/
  v12 = v11->m128_i32[3]; /*0x90437b*/
  v19[1] = a2[1]; /*0x90437e*/
  v13 = *(this + 3); /*0x904382*/
  v19[0] = v12; /*0x904399*/
  (*(void (__thiscall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)v13 + 0x10))(v13, v19, a3, a4, a5, a6); /*0x9043a0*/
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9043a9*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x9043b8*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9043ba*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x9043bc*/
    *v16 = "Et"; /*0x9043c2*/
    v14 = __rdtsc(); /*0x9043c8*/
    v16[1] = v14; /*0x9043d2*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x9043d8*/
  }
  return v14; /*0x9043de*/
}
