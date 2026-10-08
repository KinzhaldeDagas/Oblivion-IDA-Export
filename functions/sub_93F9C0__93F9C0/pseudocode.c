int __thiscall sub_93F9C0(char *this, int a2, int *a3, int a4, int *a5)
{
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  _DWORD v20[6]; // [esp+18h] [ebp-A8h] BYREF
  __m128 v21; // [esp+30h] [ebp-90h] BYREF
  __m128 v22; // [esp+40h] [ebp-80h] BYREF
  _OWORD v23[2]; // [esp+50h] [ebp-70h] BYREF
  int v24; // [esp+70h] [ebp-50h]
  int *v25; // [esp+74h] [ebp-4Ch]
  __m128 v26[4]; // [esp+80h] [ebp-40h] BYREF

  v5 = MEMORY[0xBA9DE4]; /*0x93f9cd*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f9d5*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f9dc*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x93f9f1*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f9f3*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x93f9f5*/
    *v9 = "TtGsk"; /*0x93f9fb*/
    v10 = __rdtsc(); /*0x93fa01*/
    v20[5] = v10; /*0x93fa03*/
    v9[1] = v10; /*0x93fa0b*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x93fa11*/
  }
  sub_8B1FF0(v26, *(__m128 **)(a2 + 8), (__m128 *)a3[2]); /*0x93fa2c*/
  v11 = *a3; /*0x93fa36*/
  v12 = *(_DWORD *)(a2 + 8); /*0x93fa38*/
  v20[2] = *(_DWORD *)a2; /*0x93fa3b*/
  v20[3] = v11; /*0x93fa3f*/
  v20[0] = v26; /*0x93fa4d*/
  v13 = *(_DWORD *)(a4 + 8); /*0x93fa51*/
  v20[1] = v12; /*0x93fa54*/
  v20[4] = v13; /*0x93fa58*/
  if ( !sub_93D4A0((int)v20, this + 0xC, &v22, &v21) ) /*0x93fa73*/
  {
    v14 = *a5; /*0x93fa8a*/
    v25 = a3; /*0x93fa8c*/
    v23[0] = v21; /*0x93fa94*/
    v24 = a2; /*0x93fa9f*/
    v23[1] = v22; /*0x93faa3*/
    (*(void (__thiscall **)(int *, _OWORD *))(v14 + 4))(a5, v23); /*0x93faa8*/
  }
  LODWORD(v15) = ThreadLocalStoragePointer[v5]; /*0x93faab*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x93faba*/
  {
    v16 = ThreadLocalStoragePointer[v5]; /*0x93fabc*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x93fabe*/
    *v17 = "Et"; /*0x93fac4*/
    v15 = __rdtsc(); /*0x93faca*/
    v17[1] = v15; /*0x93fad4*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x93fada*/
  }
  return v15; /*0x93fae0*/
}
