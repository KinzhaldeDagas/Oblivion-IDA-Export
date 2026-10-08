int __thiscall sub_909050(__m128 *this, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // esi
  __int32 v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  __int32 i; // [esp+18h] [ebp-224h]
  _DWORD v28[4]; // [esp+1Ch] [ebp-220h] BYREF
  char v29[524]; // [esp+2Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909063*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90907a*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x909089*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90908b*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x90908d*/
    *v9 = "LtBvTree"; /*0x909093*/
    v9[3] = "QueryTree"; /*0x909099*/
    v10 = __rdtsc(); /*0x9090a0*/
    v9[1] = v10; /*0x9090aa*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x9090b0*/
  }
  sub_9069E0(this, a2, (int)a3, a4); /*0x9090c4*/
  v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9090cf*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x9090de*/
  {
    v12 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9090e0*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x9090e2*/
    *v13 = "StNarrowPhase"; /*0x9090e8*/
    v14 = __rdtsc(); /*0x9090ee*/
    v13[1] = v14; /*0x9090f8*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x9090fe*/
  }
  v15 = this->m128_i32[3]; /*0x909104*/
  v16 = v15 + 0xC * *((_DWORD *)this + 4); /*0x90910f*/
  v17 = a3[2]; /*0x909114*/
  v18 = *a3; /*0x909117*/
  v28[3] = a3; /*0x909119*/
  v28[2] = v17; /*0x90911d*/
  v19 = *(_DWORD *)(v18 + 0xC); /*0x909121*/
  for ( i = v16; v15 != i; v15 += 0xC ) /*0x909128*/
  {
    v20 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v19 + 0x28))(v19, *(_DWORD *)v15, v29); /*0x90913c*/
    v21 = *(_DWORD *)v15; /*0x909142*/
    v28[0] = v20; /*0x90914a*/
    v28[1] = v21; /*0x90914e*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(**(_DWORD **)(v15 + 8) + 8))( /*0x90915c*/
      *(_DWORD *)(v15 + 8),
      a2,
      v28,
      a4,
      a5);
    if ( *(_BYTE *)(a5 + 4) ) /*0x90915f*/
      break; /*0x909164*/
  }
  v22 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909171*/
  LODWORD(v23) = v22[MEMORY[0xBA9DE4]]; /*0x90917e*/
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) ) /*0x90918d*/
  {
    v24 = v22[MEMORY[0xBA9DE4]]; /*0x90918f*/
    v25 = *(_DWORD **)(v23 + 0x1A4); /*0x909191*/
    *v25 = "lt"; /*0x909197*/
    v23 = __rdtsc(); /*0x90919d*/
    v25[1] = v23; /*0x9091a7*/
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3; /*0x9091ad*/
  }
  return v23; /*0x9091b3*/
}
