signed int __thiscall sub_8D7F80(float *this, int a2, int a3, float a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // edi
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  double v20; // st7
  double v21; // st6
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  float v30[2]; // [esp+18h] [ebp-10h] BYREF
  float v31; // [esp+20h] [ebp-8h]
  float v32; // [esp+24h] [ebp-4h]

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSimulate";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  *(this + 2) = a4;
  v10 = sub_8992B0((_DWORD *)a2);
  v11 = ThreadLocalStoragePointer[v4];
  v12 = *(_DWORD *)(v11 + 0x19C);
  if ( !v12 )
    v12 = dword_BA7D9C;
  if ( v10 <= *(_DWORD *)(v12 + 0x2C) - *(_DWORD *)(v12 + 0x20) - 0x10
    || ((v13 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28),
         v14 = *(_DWORD *)(dword_BA7D98 + 8),
         v14 > v13)
      ? (v15 = v14 - v13)
      : (v15 = 0),
        v10 <= v15) )
  {
    v20 = a4 + *(float *)(a2 + 0x18);
    *(_DWORD *)(a2 + 0x14) = *(_DWORD *)(a2 + 0x18);
    *(float *)(a2 + 0x18) = v20;
    *(float *)(a2 + 0x10) = v20;
    v21 = *(float *)(a2 + 0x14);
    v30[0] = *(float *)(a2 + 0x14);
    v30[1] = v20;
    v31 = v20 - v21;
    if ( v31 == *(float *)&SrcStr )
      v32 = 0.0;
    else
      v32 = fConstant_1 / v31;
    (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(a2 + 0x5C) + 0xC))(*(_DWORD *)(a2 + 0x5C), a2, v30);
    sub_8D6E40((__m128 *)a2, v30);
    *(_DWORD *)(a2 + 0xC) = *(_DWORD *)(a2 + 0x10);
    sub_8D7920(a2, v30);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) )
      {
        v22 = *(_DWORD **)(v11 + 0x1A4);
        *v22 = "Et";
        v23 = __rdtsc();
        v22[1] = v23;
        *(_DWORD *)(v11 + 0x1A4) = v22 + 3;
      }
      return 2;
    }
    else
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) )
      {
        v24 = *(_DWORD **)(v11 + 0x1A4);
        *v24 = "TtPostSimulateCb";
        v25 = __rdtsc();
        v24[1] = v25;
        *(_DWORD *)(v11 + 0x1A4) = v24 + 3;
      }
      sub_8DCD60((int)v30, a2, (int)v30);
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) )
      {
        v26 = *(_DWORD **)(v11 + 0x1A4);
        *v26 = "Et";
        v27 = __rdtsc();
        v26[1] = v27;
        *(_DWORD *)(v11 + 0x1A4) = v26 + 3;
      }
      if ( *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x1A8) )
      {
        v28 = *(_DWORD **)(v11 + 0x1A4);
        *v28 = "Et";
        v29 = __rdtsc();
        v28[1] = v29;
        *(_DWORD *)(v11 + 0x1A4) = v28 + 3;
      }
      return 0;
    }
  }
  else
  {
    v16 = ThreadLocalStoragePointer[v4];
    *(_DWORD *)(dword_BA7D98 + 4) = 1;
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
    {
      v17 = *(_DWORD **)(v11 + 0x1A4);
      *v17 = "Et";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v11 + 0x1A4) = v17 + 3;
    }
    return 1;
  }
}
