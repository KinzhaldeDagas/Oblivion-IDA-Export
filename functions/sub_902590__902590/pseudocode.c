int __cdecl sub_902590(int *a1, int *a2, __m128 *a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  float v11; // ecx
  int v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edi
  _DWORD *v21; // ecx
  _DWORD v23[4]; // [esp+18h] [ebp-58h] BYREF
  int (__stdcall **v24)(char); // [esp+28h] [ebp-48h] BYREF
  __int16 v25; // [esp+2Eh] [ebp-42h]
  int v26; // [esp+30h] [ebp-40h]
  float v27; // [esp+34h] [ebp-3Ch]
  int v28; // [esp+38h] [ebp-38h]
  int v29; // [esp+3Ch] [ebp-34h]
  float v30[2]; // [esp+40h] [ebp-30h] BYREF
  char v31; // [esp+48h] [ebp-28h]
  int v32; // [esp+6Ch] [ebp-4h]

  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtCvsListAgent";
    v9[3] = "checkHull";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = flt_B2FFE4;
  v23[2] = a2[2];
  v12 = *a2;
  v27 = v11;
  v23[3] = a2;
  v25 = 1;
  v26 = 0;
  v24 = &off_A9BB94;
  v13 = *(float *)(**(_DWORD **)(v12 + 0x10) + 0xC);
  v14 = a2[1];
  v28 = *(_DWORD *)(v12 + 0x10);
  v15 = *(_DWORD *)(v12 + 0x14);
  v27 = v13;
  v29 = v15;
  v23[0] = &v24;
  v23[1] = v14;
  LODWORD(v30[0]) = &off_A9BB8C;
  v31 = 0;
  v32 = 0x7F7FFFFF;
  v30[1] = 3.4028235e38;
  sub_935CC0(a1, (int)v23, (int)a3, v30, (int)v30);
  if ( v31 )
  {
    v16 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
    {
      v17 = *(_DWORD **)(v16 + 0x1A4);
      *v17 = "Stchild";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v17 + 3;
    }
    sub_901E40(a1, a2, a3, a4, a5);
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
  {
    v20 = ThreadLocalStoragePointer[v5];
    v21 = *(_DWORD **)(v19 + 0x1A4);
    *v21 = "lt";
    v19 = __rdtsc();
    v21[1] = v19;
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
  }
  return v19;
}
