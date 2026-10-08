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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x926094*/
  v5 = MEMORY[0xBA9DE4]; /*0x92609c*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9260a2*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x9260b7*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9260b9*/
    v9 = *(_DWORD **)(v6 + 0x1A4); /*0x9260bb*/
    *v9 = "TtGetNextJob"; /*0x9260c1*/
    v10 = __rdtsc(); /*0x9260c7*/
    v9[1] = v10; /*0x9260d1*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x9260d7*/
  }
  v11 = a2; /*0x9260dd*/
  v39 = (int *)&lpCriticalSection[2] + 5 * a2; /*0x9260e8*/
  while ( 2 ) /*0x9260f0*/
  {
    sub_8A7720(lpCriticalSection); /*0x9260f0*/
    v12 = v39; /*0x9260f7*/
    for ( i = 0; ; ++i ) /*0x9260fb*/
    {
      if ( v12[2] ) /*0x926100*/
      {
        v22 = v12[3] + 0xC * *v12; /*0x9261bf*/
        if ( *(_BYTE *)v22 ) /*0x9261c2*/
        {
          if ( *(_BYTE *)v22 != 6 ) /*0x9261d0*/
          {
            *a3 = *(_DWORD *)v22; /*0x9261d8*/
            a3[1] = *(_DWORD *)(v22 + 4); /*0x9261dd*/
            a3[2] = *(_DWORD *)(v22 + 8); /*0x9261e3*/
LABEL_16:
            v23 = v12[4]; /*0x9261e6*/
            v24 = *v12 + 1; /*0x9261ec*/
            *v12 = v24; /*0x9261f0*/
            if ( v24 == v23 ) /*0x9261f2*/
              *v12 = 0; /*0x9261f4*/
            --v12[2]; /*0x9261fa*/
LABEL_23:
            ++lpCriticalSection[3].RecursionCount; /*0x926251*/
            ((void (__cdecl *)(LPCRITICAL_SECTION))LeaveCriticalSection)(lpCriticalSection); /*0x926259*/
            v27 = ThreadLocalStoragePointer[v5]; /*0x92625f*/
            if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x92626e*/
            {
              v28 = ThreadLocalStoragePointer[v5]; /*0x926270*/
              v29 = *(_DWORD **)(v27 + 0x1A4); /*0x926272*/
              *v29 = "Et"; /*0x926278*/
              v30 = __rdtsc(); /*0x92627e*/
              v29[1] = v30; /*0x926288*/
              *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x92628e*/
            }
            return 0; /*0x92629d*/
          }
          *a3 = *(_DWORD *)v22; /*0x926207*/
          a3[1] = *(_DWORD *)(v22 + 4); /*0x92620c*/
          v5 = MEMORY[0xBA9DE4]; /*0x926212*/
          a3[2] = *(_DWORD *)(v22 + 8); /*0x926218*/
          v25 = *(_DWORD *)(v22 + 8); /*0x92621b*/
          if ( v25 <= 4 ) /*0x926225*/
            goto LABEL_16; /*0x926225*/
          *(_DWORD *)(v22 + 4) += 4; /*0x92622f*/
          *(_DWORD *)(v22 + 8) = v25 - 4; /*0x926236*/
          a3[2] = 4; /*0x926239*/
        }
        else
        {
          *a3 = *(_DWORD *)v22; /*0x9262a6*/
          a3[1] = *(_DWORD *)(v22 + 4); /*0x9262ab*/
          v32 = *(_DWORD *)(v22 + 4); /*0x9262ae*/
          if ( v32 <= 1 ) /*0x9262b4*/
            goto LABEL_16; /*0x9262b4*/
          ++*(_WORD *)(v22 + 2); /*0x9262ba*/
          *(_DWORD *)(v22 + 4) = v32 - 1; /*0x9262bf*/
          a3[1] = 1; /*0x9262c2*/
        }
        OwningThread = (char *)lpCriticalSection[3].OwningThread; /*0x92623c*/
        if ( OwningThread ) /*0x926241*/
        {
          lpCriticalSection[3].OwningThread = OwningThread + 0xFFFFFFFF; /*0x926249*/
          ReleaseSemaphore_0(&lpCriticalSection[3].LockSemaphore, 1); /*0x92624c*/
        }
        goto LABEL_23; /*0x92624c*/
      }
      if ( i == 1 ) /*0x92610e*/
        break; /*0x92610e*/
      v12 = (int *)&lpCriticalSection[2] + 5 * (v11 ^ 1); /*0x926118*/
    }
    if ( lpCriticalSection[3].RecursionCount ) /*0x92611f*/
    {
      ++lpCriticalSection[3].OwningThread; /*0x92612b*/
      LeaveCriticalSection(lpCriticalSection); /*0x92612e*/
      v14 = ThreadLocalStoragePointer[v5]; /*0x926134*/
      if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x926143*/
      {
        v15 = ThreadLocalStoragePointer[v5]; /*0x926145*/
        v16 = *(_DWORD **)(v14 + 0x1A4); /*0x926147*/
        *v16 = "TtWaitForSignal"; /*0x92614d*/
        v17 = __rdtsc(); /*0x926153*/
        v16[1] = v17; /*0x92615d*/
        *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x926163*/
        v11 = a2; /*0x926169*/
      }
      WaitForSingleObject_0(v37, v38); /*0x926170*/
      v18 = ThreadLocalStoragePointer[v5]; /*0x926175*/
      if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x926184*/
      {
        v19 = ThreadLocalStoragePointer[v5]; /*0x92618a*/
        v20 = *(_DWORD **)(v18 + 0x1A4); /*0x92618c*/
        *v20 = "Et"; /*0x926192*/
        v21 = __rdtsc(); /*0x926198*/
        a2 = v21; /*0x92619a*/
        v20[1] = v21; /*0x9261a2*/
        *(_DWORD *)(v19 + 0x1A4) = v20 + 3; /*0x9261a8*/
        v11 = a4; /*0x9261ae*/
      }
      continue; /*0x9261b2*/
    }
    break;
  }
  ((void (__cdecl *)(LPCRITICAL_SECTION))LeaveCriticalSection)(lpCriticalSection); /*0x9262ce*/
  v33 = ThreadLocalStoragePointer[v5]; /*0x9262d4*/
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x9262e3*/
  {
    v34 = ThreadLocalStoragePointer[v5]; /*0x9262e5*/
    v35 = *(_DWORD **)(v33 + 0x1A4); /*0x9262e7*/
    *v35 = "Et"; /*0x9262ed*/
    v36 = __rdtsc(); /*0x9262f3*/
    v35[1] = v36; /*0x9262fd*/
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3; /*0x926303*/
  }
  return 1; /*0x926294*/
}
