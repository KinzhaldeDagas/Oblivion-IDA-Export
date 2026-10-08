int __thiscall sub_8D8200(_DWORD *this, int a2, int a3)
{
  double v4; // st7
  double v5; // st6
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  float v16[2]; // [esp+8h] [ebp-10h] BYREF
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  if ( a3 == 1 ) /*0x8d8212*/
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2)); /*0x8d8223*/
  v4 = *(float *)(a2 + 0x18); /*0x8d8233*/
  v5 = *(float *)(a2 + 0x14); /*0x8d8236*/
  v16[0] = *(float *)(a2 + 0x14); /*0x8d8239*/
  v16[1] = v4; /*0x8d823f*/
  v17 = v4 - v5; /*0x8d8247*/
  if ( v17 == *(float *)&SrcStr ) /*0x8d825e*/
    v18 = 0.0; /*0x8d8260*/
  else
    v18 = fConstant_1 / v17; /*0x8d8274*/
  sub_89BF50(a2, 0, 1); /*0x8d827d*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d828a*/
    return 2; /*0x8d828a*/
  sub_8D7920(a2, v16); /*0x8d82a2*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d82b0*/
    return 2; /*0x8d828e*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d82b2*/
  v7 = MEMORY[0xBA9DE4]; /*0x8d82b9*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d82bf*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x8d82ce*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d82d1*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x8d82d3*/
    *v10 = "TtPostSimulateCb"; /*0x8d82d9*/
    v11 = __rdtsc(); /*0x8d82df*/
    v10[1] = v11; /*0x8d82e9*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x8d82ef*/
  }
  sub_8DCD60((int)v16, a2, (int)v16); /*0x8d82fc*/
  v12 = ThreadLocalStoragePointer[v7]; /*0x8d8301*/
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x8d8315*/
  {
    v13 = ThreadLocalStoragePointer[v7]; /*0x8d8317*/
    v14 = *(_DWORD **)(v12 + 0x1A4); /*0x8d8319*/
    *v14 = "Et"; /*0x8d831f*/
    v15 = __rdtsc(); /*0x8d8325*/
    v14[1] = v15; /*0x8d832f*/
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3; /*0x8d8335*/
  }
  return 0; /*0x8d8226*/
}
