int __cdecl sub_8F2010(int *a1, const void **a2, const void **a3, int a4)
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f2018*/
  v5 = MEMORY[0xBA9DE4]; /*0x8f2020*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f2026*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f2035*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f2037*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f2039*/
    *v8 = "LtCreateConvex"; /*0x8f203f*/
    v8[3] = "Hull"; /*0x8f2045*/
    v9 = __rdtsc(); /*0x8f204c*/
    v8[1] = v9; /*0x8f2056*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x8f205c*/
  }
  sub_933D80(v21); /*0x8f2067*/
  sub_8F1ED0(a1, v21, a2, a4); /*0x8f2089*/
  sub_931A30((int)v21, (int)a2); /*0x8f2094*/
  v10 = ThreadLocalStoragePointer[v5]; /*0x8f2099*/
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x8f20ad*/
  {
    v11 = ThreadLocalStoragePointer[v5]; /*0x8f20af*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x8f20b1*/
    *v12 = "Stplanes"; /*0x8f20b7*/
    v13 = __rdtsc(); /*0x8f20bd*/
    v12[1] = v13; /*0x8f20c7*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x8f20cd*/
  }
  BYTE2(v20[0]) = a4 == 2; /*0x8f20ed*/
  LOBYTE(v20[0]) = 1; /*0x8f20fc*/
  v20[1] = 0.000019999999; /*0x8f2101*/
  v20[2] = 0.000004; /*0x8f2109*/
  v20[3] = 0.000001; /*0x8f2111*/
  v20[4] = 0.0000099999997; /*0x8f2119*/
  v20[5] = 0.050000001; /*0x8f2121*/
  v20[6] = 0.000001; /*0x8f2129*/
  v20[7] = 0.000001; /*0x8f2131*/
  v20[8] = 0.0000000099999999; /*0x8f2139*/
  v20[9] = 0.000001; /*0x8f2141*/
  v20[0xA] = 0.000099999997; /*0x8f2149*/
  v20[0xB] = 0.0000099999997; /*0x8f2151*/
  v20[0xC] = 0.000019999999; /*0x8f2159*/
  sub_931AF0(&v19, v20, v21, (__m128 **)a2, a3); /*0x8f2161*/
  v14 = ThreadLocalStoragePointer[v5]; /*0x8f2166*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x8f217b*/
  {
    v15 = ThreadLocalStoragePointer[v5]; /*0x8f217d*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x8f217f*/
    *v16 = "lt"; /*0x8f2185*/
    v17 = __rdtsc(); /*0x8f218b*/
    v16[1] = v17; /*0x8f2195*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x8f219b*/
  }
  result = v22; /*0x8f21a1*/
  if ( v22 >= 0 ) /*0x8f21a7*/
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C), (_DWORD *)v21[1], 8 * v22, 0x14); /*0x8f21c2*/
  return result; /*0x8f21c7*/
}
