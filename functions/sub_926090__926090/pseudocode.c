int __userpurge sub_926090@<eax>(LPCRITICAL_SECTION lpCriticalSection@<ecx>, int a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ebp
  int v6; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // edi
  int *v12; // eax
  int i; // ecx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  char *OwningThread; // eax
  int v27; // eax
  int v28; // ebx
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  int v32; // edi
  int v33; // eax
  int v34; // ebx
  _DWORD *v35; // ecx
  unsigned __int64 v36; // rax
  void *v37; // [esp+0h] [ebp-1Ch]
  DWORD v38; // [esp+4h] [ebp-18h]
  int *v39; // [esp+10h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v6 + 0x1A4);
    *v9 = "TtGetNextJob";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = a2;
  v39 = (int *)&lpCriticalSection[2] + 5 * a2;
  while ( 2 )
  {
    sub_8A7720(lpCriticalSection);
    v12 = v39;
    for ( i = 0; ; ++i )
    {
      if ( v12[2] )
      {
        v22 = v12[3] + 0xC * *v12;
        if ( *(_BYTE *)v22 )
        {
          if ( *(_BYTE *)v22 != 6 )
          {
            *a3 = *(_DWORD *)v22;
            a3[1] = *(_DWORD *)(v22 + 4);
            a3[2] = *(_DWORD *)(v22 + 8);
LABEL_16:
            v23 = v12[4];
            v24 = *v12 + 1;
            *v12 = v24;
            if ( v24 == v23 )
              *v12 = 0;
            --v12[2];
LABEL_23:
            ++lpCriticalSection[3].RecursionCount;
            ((void (__cdecl *)(LPCRITICAL_SECTION))LeaveCriticalSection)(lpCriticalSection);
            v27 = ThreadLocalStoragePointer[v5];
            if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
            {
              v28 = ThreadLocalStoragePointer[v5];
              v29 = *(_DWORD **)(v27 + 0x1A4);
              *v29 = "Et";
              v30 = __rdtsc();
              v29[1] = v30;
              *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
            }
            return 0;
          }
          *a3 = *(_DWORD *)v22;
          a3[1] = *(_DWORD *)(v22 + 4);
          v5 = TlsIndex;
          a3[2] = *(_DWORD *)(v22 + 8);
          v25 = *(_DWORD *)(v22 + 8);
          if ( v25 <= 4 )
            goto LABEL_16;
          *(_DWORD *)(v22 + 4) += 4;
          *(_DWORD *)(v22 + 8) = v25 - 4;
          a3[2] = 4;
        }
        else
        {
          *a3 = *(_DWORD *)v22;
          a3[1] = *(_DWORD *)(v22 + 4);
          v32 = *(_DWORD *)(v22 + 4);
          if ( v32 <= 1 )
            goto LABEL_16;
          ++*(_WORD *)(v22 + 2);
          *(_DWORD *)(v22 + 4) = v32 - 1;
          a3[1] = 1;
        }
        OwningThread = (char *)lpCriticalSection[3].OwningThread;
        if ( OwningThread )
        {
          lpCriticalSection[3].OwningThread = OwningThread + 0xFFFFFFFF;
          ReleaseSemaphore_0(&lpCriticalSection[3].LockSemaphore, 1);
        }
        goto LABEL_23;
      }
      if ( i == 1 )
        break;
      v12 = (int *)&lpCriticalSection[2] + 5 * (v11 ^ 1);
    }
    if ( lpCriticalSection[3].RecursionCount )
    {
      ++lpCriticalSection[3].OwningThread;
      LeaveCriticalSection(lpCriticalSection);
      v14 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
      {
        v15 = ThreadLocalStoragePointer[v5];
        v16 = *(_DWORD **)(v14 + 0x1A4);
        *v16 = "TtWaitForSignal";
        v17 = __rdtsc();
        v16[1] = v17;
        *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
        v11 = a2;
      }
      WaitForSingleObject_0(v37, v38);
      v18 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) )
      {
        v19 = ThreadLocalStoragePointer[v5];
        v20 = *(_DWORD **)(v18 + 0x1A4);
        *v20 = "Et";
        v21 = __rdtsc();
        a2 = v21;
        v20[1] = v21;
        *(_DWORD *)(v19 + 0x1A4) = v20 + 3;
        v11 = a4;
      }
      continue;
    }
    break;
  }
  ((void (__cdecl *)(LPCRITICAL_SECTION))LeaveCriticalSection)(lpCriticalSection);
  v33 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) )
  {
    v34 = ThreadLocalStoragePointer[v5];
    v35 = *(_DWORD **)(v33 + 0x1A4);
    *v35 = "Et";
    v36 = __rdtsc();
    v35[1] = v36;
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3;
  }
  return 1;
}
