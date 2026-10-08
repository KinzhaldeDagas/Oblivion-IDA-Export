int __thiscall sub_8BA1B0(_DWORD *this, int *a2, __int128 *a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // edx
  __int128 v13; // xmm0
  int v14; // edx
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  __int128 v19; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-10h]
  __int128 *v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ba1ba*/
  v7 = MEMORY[0xBA9DE4]; /*0x8ba1c2*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ba1c8*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x8ba1d8*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ba1da*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x8ba1dc*/
    *v10 = "TtRayCstCached"; /*0x8ba1e2*/
    v11 = __rdtsc(); /*0x8ba1e8*/
    v10[1] = v11; /*0x8ba1f2*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x8ba1f8*/
    v7 = MEMORY[0xBA9DE4]; /*0x8ba1fe*/
  }
  *(this + 1) = a3; /*0x8ba20f*/
  *(this + 3) = a6; /*0x8ba212*/
  *(this + 4) = 0; /*0x8ba215*/
  if ( a4 ) /*0x8ba21c*/
    v12 = a4 + 0x14; /*0x8ba21e*/
  else
    v12 = 0; /*0x8ba223*/
  *(this + 2) = v12; /*0x8ba225*/
  if ( *((_BYTE *)a3 + 0x20) ) /*0x8ba228*/
  {
    if ( a4 ) /*0x8ba231*/
      *(this + 0x11) = a4 + 0x10; /*0x8ba236*/
    else
      *(this + 0x11) = 0; /*0x8ba23d*/
  }
  else
  {
    *(this + 0x11) = 0; /*0x8ba242*/
  }
  v13 = *a3; /*0x8ba249*/
  v21 = a3 + 1; /*0x8ba24f*/
  v23 = a5; /*0x8ba259*/
  v14 = *a2; /*0x8ba260*/
  v20 = 1; /*0x8ba269*/
  v22 = 0x10; /*0x8ba271*/
  v19 = v13; /*0x8ba279*/
  (*(void (__thiscall **)(int *, __int128 *, _DWORD *, _DWORD))(v14 + 0x38))(a2, &v19, this, 0); /*0x8ba27e*/
  LODWORD(v15) = ThreadLocalStoragePointer[v7]; /*0x8ba281*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x8ba290*/
  {
    v16 = ThreadLocalStoragePointer[v7]; /*0x8ba292*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x8ba294*/
    *v17 = "Et"; /*0x8ba29a*/
    v15 = __rdtsc(); /*0x8ba2a0*/
    v17[1] = v15; /*0x8ba2aa*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x8ba2b0*/
  }
  return v15; /*0x8ba2b6*/
}
