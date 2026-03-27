int __cdecl sub_8F2010(int *a1, int *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int result; // eax
  char v19; // [esp+13h] [ebp-445h] BYREF
  float v20[13]; // [esp+14h] [ebp-444h] BYREF
  int v21[3]; // [esp+48h] [ebp-410h] BYREF
  int v22; // [esp+54h] [ebp-404h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtCreateConvex";
    v8[3] = "Hull";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  sub_933D80(v21);
  sub_8F1ED0(a1, v21, a2, a4);
  sub_931A30((int)v21, (int)a2);
  v10 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
  {
    v11 = ThreadLocalStoragePointer[v5];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "Stplanes";
    v13 = __rdtsc();
    v12[1] = v13;
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  BYTE2(v20[0]) = a4 == 2;
  LOBYTE(v20[0]) = 1;
  v20[1] = 0.000019999999;
  v20[2] = 0.000004;
  v20[3] = 0.000001;
  v20[4] = 0.0000099999997;
  v20[5] = 0.050000001;
  v20[6] = 0.000001;
  v20[7] = 0.000001;
  v20[8] = 0.0000000099999999;
  v20[9] = 0.000001;
  v20[0xA] = 0.000099999997;
  v20[0xB] = 0.0000099999997;
  v20[0xC] = 0.000019999999;
  sub_931AF0(&v19, v20, v21, (__m128 **)a2, a3);
  v14 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[v5];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "lt";
    v17 = __rdtsc();
    v16[1] = v17;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  result = v22;
  if ( v22 >= 0 )
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C), (_DWORD *)v21[1], 8 * v22, 0x14);
  return result;
}
