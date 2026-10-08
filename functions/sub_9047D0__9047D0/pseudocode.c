int __cdecl sub_9047D0(__m128 **a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  __int32 v10; // ecx
  int v11; // esi
  int v12; // eax
  unsigned __int64 v13; // rax
  int v14; // ebx
  _DWORD *v15; // esi
  _DWORD v17[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v18[4]; // [esp+20h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9047e0*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9047e7*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x9047f8*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9047fa*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x9047fc*/
    *v7 = "TtTransform"; /*0x904802*/
    v8 = __rdtsc(); /*0x904808*/
    v7[1] = v8; /*0x904812*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x904818*/
  }
  v9 = *a1; /*0x904821*/
  sub_8B1F70(v18, a1[2], *a1 + 2); /*0x90482f*/
  v17[3] = a1; /*0x904834*/
  v17[2] = v18; /*0x90483c*/
  v10 = v9->m128_i32[3]; /*0x904840*/
  v17[1] = a1[1]; /*0x904846*/
  v17[0] = v10; /*0x90484a*/
  v11 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v10 + 8))(v10); /*0x90485a*/
  v12 = *(unsigned __int8 *)(*a3 + 0x20 * v11 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190); /*0x904869*/
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int))(*a3 + 0x14 * v12 + 0x994))(v17, a2, a3, a4); /*0x90487f*/
  LODWORD(v13) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90488c*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x9048a0*/
  {
    v14 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9048a2*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x9048a4*/
    *v15 = "Et"; /*0x9048aa*/
    v13 = __rdtsc(); /*0x9048b0*/
    v15[1] = v13; /*0x9048ba*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x9048c0*/
  }
  return v13; /*0x9048c6*/
}
