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

  if ( a3 == 1 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2));
  v4 = *(float *)(a2 + 0x18);
  v5 = *(float *)(a2 + 0x14);
  v16[0] = *(float *)(a2 + 0x14);
  v16[1] = v4;
  v17 = v4 - v5;
  if ( v17 == *(float *)&SrcStr )
    v18 = 0.0;
  else
    v18 = fConstant_1 / v17;
  sub_89BF50(a2, 0, 1);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  sub_8D7920(a2, v16);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = TlsIndex;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtPostSimulateCb";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
  }
  sub_8DCD60((int)v16, a2, (int)v16);
  v12 = ThreadLocalStoragePointer[v7];
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
  {
    v13 = ThreadLocalStoragePointer[v7];
    v14 = *(_DWORD **)(v12 + 0x1A4);
    *v14 = "Et";
    v15 = __rdtsc();
    v14[1] = v15;
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3;
  }
  return 0;
}
