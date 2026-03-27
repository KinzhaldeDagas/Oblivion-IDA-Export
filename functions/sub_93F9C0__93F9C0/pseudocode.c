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
  int v25; // [esp+74h] [ebp-4Ch]
  __m128 v26[4]; // [esp+80h] [ebp-40h] BYREF

  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtGsk";
    v10 = __rdtsc();
    v20[5] = v10;
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  sub_8B1FF0(v26, *(__m128 **)(a2 + 8), (__m128 *)a3[2]);
  v11 = *a3;
  v12 = *(_DWORD *)(a2 + 8);
  v20[2] = *(_DWORD *)a2;
  v20[3] = v11;
  v20[0] = v26;
  v13 = *(_DWORD *)(a4 + 8);
  v20[1] = v12;
  v20[4] = v13;
  if ( !sub_93D4A0((int)v20, this + 0xC, &v22, &v21) )
  {
    v14 = *a5;
    v25 = (int)a3;
    v23[0] = v21;
    v24 = a2;
    v23[1] = v22;
    (*(void (__thiscall **)(int *, _OWORD *))(v14 + 4))(a5, v23);
  }
  LODWORD(v15) = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[v5];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
