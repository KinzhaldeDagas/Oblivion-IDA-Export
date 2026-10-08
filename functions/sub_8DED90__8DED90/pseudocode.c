int __thiscall sub_8DED90(float *this, int a2, float *a3)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v4; // edi
  int v5; // eax
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ded94*/
  v4 = MEMORY[0xBA9DE4]; /*0x8ded9c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8deda2*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8dedb5*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8dedb7*/
    v8 = *(_DWORD **)(v5 + 0x1A4); /*0x8dedb9*/
    *v8 = "LtMaint"; /*0x8dedbf*/
    v8[3] = "Split"; /*0x8dedc5*/
    v9 = __rdtsc(); /*0x8dedcc*/
    v8[1] = v9; /*0x8dedd6*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x8deddc*/
  }
  sub_8CCC90(a2); /*0x8dede7*/
  if ( *a3 >= (double)*(this + 3) ) /*0x8dedfd*/
  {
    v10 = ThreadLocalStoragePointer[v4]; /*0x8dedff*/
    if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x8dee0e*/
    {
      v11 = ThreadLocalStoragePointer[v4]; /*0x8dee10*/
      v12 = *(_DWORD **)(v10 + 0x1A4); /*0x8dee12*/
      *v12 = "StResetTime"; /*0x8dee18*/
      v13 = __rdtsc(); /*0x8dee1e*/
      v12[1] = v13; /*0x8dee28*/
      *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x8dee2e*/
    }
    sub_8DEC30(this, a2, a3); /*0x8dee40*/
  }
  v14 = ThreadLocalStoragePointer[v4]; /*0x8dee45*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x8dee54*/
  {
    v15 = ThreadLocalStoragePointer[v4]; /*0x8dee56*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x8dee58*/
    *v16 = "StCheckDeact"; /*0x8dee5e*/
    v17 = __rdtsc(); /*0x8dee64*/
    v16[1] = v17; /*0x8dee6e*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x8dee74*/
  }
  sub_8DED40(a2, *(float *)&a3); /*0x8dee86*/
  LODWORD(v18) = ThreadLocalStoragePointer[v4]; /*0x8dee8b*/
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x8dee9a*/
  {
    v19 = ThreadLocalStoragePointer[v4]; /*0x8dee9c*/
    v20 = *(_DWORD **)(v18 + 0x1A4); /*0x8dee9e*/
    *v20 = "lt"; /*0x8deea4*/
    v18 = __rdtsc(); /*0x8deeaa*/
    v20[1] = v18; /*0x8deeb4*/
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3; /*0x8deeba*/
  }
  return v18; /*0x8deec0*/
}
