int __thiscall sub_905510(int **this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ebx
  int *v13; // edi
  int v14; // eax
  int v15; // esi
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+18h] [ebp-228h]
  int **v21; // [esp+1Ch] [ebp-224h]
  _DWORD v22[4]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v23[524]; // [esp+30h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v21 = this;
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtShapeCollection";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = a2[2];
  v12 = *a2;
  v13 = *(this + 3);
  v22[3] = a2;
  v14 = (int)v21[4] + 0xFFFFFFFF;
  v22[2] = v11;
  v20 = v14;
  if ( v14 >= 0 )
  {
    do
    {
      v15 = *v13;
      v22[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v12 + 0x28))(v12, *v13, v23);
      v22[1] = v15;
      (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v13[1] + 8))(v13[1], v22, a3, a4, a5);
      if ( *(_BYTE *)(a5 + 4) )
        break;
      v13 += 2;
      --v20;
    }
    while ( v20 >= 0 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v16) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = ThreadLocalStoragePointer[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v16 = __rdtsc();
    v18[1] = v16;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  return v16;
}
