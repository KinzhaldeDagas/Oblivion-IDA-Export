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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtGetNextJob";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  sub_8A7720(lpCriticalSection);
  sub_9263E0((_DWORD *)lpCriticalSection + 5 * a2 + 0x10, a4);
  if ( a2 == a3 || !*((_DWORD *)lpCriticalSection + 5 * a3 + 0x12) )
    v10 = (int *)lpCriticalSection + 5 * a2 + 0x10;
  else
    v10 = (int *)lpCriticalSection + 5 * a3 + 0x10;
  v11 = v10[3] + 0xC * *v10;
  if ( *(_BYTE *)v11 )
  {
    if ( *(_BYTE *)v11 != 6 )
    {
      *a4 = *(_DWORD *)v11;
      a4[1] = *(_DWORD *)(v11 + 4);
      a4[2] = *(_DWORD *)(v11 + 8);
LABEL_10:
      v12 = v10[4];
      v13 = *v10 + 1;
      *v10 = v13;
      if ( v13 == v12 )
        *v10 = 0;
      --v10[2];
      goto LABEL_17;
    }
    *a4 = *(_DWORD *)v11;
    a4[1] = *(_DWORD *)(v11 + 4);
    a4[2] = *(_DWORD *)(v11 + 8);
    v14 = *(_DWORD *)(v11 + 8);
    if ( v14 <= 4 )
      goto LABEL_10;
    v15 = *(_DWORD *)(v11 + 4) + 4;
    *(_DWORD *)(v11 + 8) = v14 - 4;
    *(_DWORD *)(v11 + 4) = v15;
    a4[2] = 4;
  }
  else
  {
    *a4 = *(_DWORD *)v11;
    a4[1] = *(_DWORD *)(v11 + 4);
    v21 = *(_DWORD *)(v11 + 4);
    if ( v21 <= 1 )
      goto LABEL_10;
    ++*(_WORD *)(v11 + 2);
    *(_DWORD *)(v11 + 4) = v21 - 1;
    a4[1] = 1;
  }
  v16 = *((_DWORD *)lpCriticalSection + 0x1B);
  if ( v16 )
  {
    *((_DWORD *)lpCriticalSection + 0x1B) = v16 - 1;
    ReleaseSemaphore_0((HANDLE *)lpCriticalSection + 0x1C, 1);
  }
LABEL_17:
  LeaveCriticalSection(lpCriticalSection);
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v18) = v17[TlsIndex];
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) )
  {
    v19 = v17[TlsIndex];
    v20 = *(_DWORD **)(v18 + 0x1A4);
    *v20 = "Et";
    v18 = __rdtsc();
    v20[1] = v18;
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3;
  }
  return v18;
}
