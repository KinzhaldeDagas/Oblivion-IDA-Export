int __thiscall sub_8DFFB0(struct _RTL_CRITICAL_SECTION *this, _DWORD *a2, int a3, float a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v5; // edi
  int v6; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  const void *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v20[3]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v21[44]; // [esp+20h] [ebp-58h] BYREF
  int v22; // [esp+4Ch] [ebp-2Ch]
  int v23; // [esp+50h] [ebp-28h]
  int v24; // [esp+54h] [ebp-24h]
  int v25; // [esp+58h] [ebp-20h]
  int v26; // [esp+5Ch] [ebp-1Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8dffb5*/
  v5 = MEMORY[0xBA9DE4]; /*0x8dffbe*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8dffc4*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8dffd8*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8dffda*/
    v9 = *(_DWORD **)(v6 + 0x1A4); /*0x8dffdc*/
    *v9 = "TtSimulate"; /*0x8dffe2*/
    v10 = __rdtsc(); /*0x8dffe8*/
    v9[1] = v10; /*0x8dfff2*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8dfff8*/
  }
  sub_8A7720((LPCRITICAL_SECTION)this + 6); /*0x8e0006*/
  v11 = *((_DWORD *)this + 0x24) + 1; /*0x8e0012*/
  *((_DWORD *)this + 0x24) = v11; /*0x8e0017*/
  if ( v11 == 1 ) /*0x8e001d*/
  {
    sub_8DFB70((int)this, (int)this, v5, (int)(this + 8), (int)a2, a3, a4); /*0x8e0036*/
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 6); /*0x8e003e*/
    v12 = (const void *)a2[0x1D]; /*0x8e0048*/
    v13 = a2[0x9A]; /*0x8e004b*/
    v20[0] = (int)a2; /*0x8e0051*/
    v20[1] = (int)this; /*0x8e0055*/
    v20[2] = 1; /*0x8e0059*/
    qmemcpy(v21, v12, sizeof(v21)); /*0x8e006a*/
    v22 = a2[0x99]; /*0x8e0072*/
    v26 = a2[0x9C]; /*0x8e007c*/
    v23 = v13; /*0x8e0080*/
    v14 = a2[0x5B]; /*0x8e008a*/
    v24 = a2[0x5A]; /*0x8e0097*/
    v25 = v14; /*0x8e009b*/
    sub_8DF6B0(this, v20); /*0x8e009f*/
    v5 = MEMORY[0xBA9DE4]; /*0x8e00a4*/
  }
  v15 = ThreadLocalStoragePointer[v5]; /*0x8e00aa*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x8e00ba*/
  {
    v16 = ThreadLocalStoragePointer[v5]; /*0x8e00bc*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x8e00be*/
    *v17 = "Et"; /*0x8e00c4*/
    v18 = __rdtsc(); /*0x8e00ca*/
    v17[1] = v18; /*0x8e00d4*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x8e00da*/
  }
  return 0; /*0x8e00e0*/
}
