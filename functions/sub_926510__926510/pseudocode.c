int __thiscall sub_926510(LPCRITICAL_SECTION lpCriticalSection, int a2, int a3, _DWORD *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx
  int v21; // edx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92651b*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x926522*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x926533*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x926535*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x926537*/
    *v8 = "TtGetNextJob"; /*0x92653d*/
    v9 = __rdtsc(); /*0x926543*/
    v8[1] = v9; /*0x92654d*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x926553*/
  }
  sub_8A7720(lpCriticalSection); /*0x92655b*/
  sub_9263E0((_DWORD *)lpCriticalSection + 5 * a2 + 0x10, a4); /*0x926572*/
  if ( a2 == a3 || !*((_DWORD *)lpCriticalSection + 5 * a3 + 0x12) ) /*0x926582*/
    v10 = (int *)lpCriticalSection + 5 * a2 + 0x10; /*0x926592*/
  else
    v10 = (int *)lpCriticalSection + 5 * a3 + 0x10; /*0x92658d*/
  v11 = v10[3] + 0xC * *v10; /*0x92659c*/
  if ( *(_BYTE *)v11 ) /*0x92659f*/
  {
    if ( *(_BYTE *)v11 != 6 ) /*0x9265ad*/
    {
      *a4 = *(_DWORD *)v11; /*0x9265b1*/
      a4[1] = *(_DWORD *)(v11 + 4); /*0x9265b6*/
      a4[2] = *(_DWORD *)(v11 + 8); /*0x9265bc*/
LABEL_10:
      v12 = v10[4]; /*0x9265bf*/
      v13 = *v10 + 1; /*0x9265c5*/
      *v10 = v13; /*0x9265c9*/
      if ( v13 == v12 ) /*0x9265cb*/
        *v10 = 0; /*0x9265cd*/
      --v10[2]; /*0x9265d3*/
      goto LABEL_17; /*0x9265d6*/
    }
    *a4 = *(_DWORD *)v11; /*0x9265de*/
    a4[1] = *(_DWORD *)(v11 + 4); /*0x9265e3*/
    a4[2] = *(_DWORD *)(v11 + 8); /*0x9265e9*/
    v14 = *(_DWORD *)(v11 + 8); /*0x9265ec*/
    if ( v14 <= 4 ) /*0x9265f6*/
      goto LABEL_10; /*0x9265f6*/
    v15 = *(_DWORD *)(v11 + 4) + 4; /*0x9265fe*/
    *(_DWORD *)(v11 + 8) = v14 - 4; /*0x926600*/
    *(_DWORD *)(v11 + 4) = v15; /*0x926603*/
    a4[2] = 4; /*0x926606*/
  }
  else
  {
    *a4 = *(_DWORD *)v11; /*0x926671*/
    a4[1] = *(_DWORD *)(v11 + 4); /*0x926676*/
    v21 = *(_DWORD *)(v11 + 4); /*0x926679*/
    if ( v21 <= 1 ) /*0x92667f*/
      goto LABEL_10; /*0x92667f*/
    ++*(_WORD *)(v11 + 2); /*0x926685*/
    *(_DWORD *)(v11 + 4) = v21 - 1; /*0x92668a*/
    a4[1] = 1; /*0x92668d*/
  }
  v16 = *((_DWORD *)lpCriticalSection + 0x1B); /*0x926609*/
  if ( v16 ) /*0x92660e*/
  {
    *((_DWORD *)lpCriticalSection + 0x1B) = v16 - 1; /*0x926616*/
    ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1); /*0x926619*/
  }
LABEL_17:
  LeaveCriticalSection(lpCriticalSection); /*0x92661e*/
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x926625*/
  LODWORD(v18) = v17[MEMORY[0xBA9DE4]]; /*0x926632*/
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x926641*/
  {
    v19 = v17[MEMORY[0xBA9DE4]]; /*0x926643*/
    v20 = *(_DWORD **)(v18 + 0x1A4); /*0x926645*/
    *v20 = "Et"; /*0x92664b*/
    v18 = __rdtsc(); /*0x926651*/
    v20[1] = v18; /*0x92665b*/
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3; /*0x926661*/
  }
  return v18; /*0x926667*/
}
