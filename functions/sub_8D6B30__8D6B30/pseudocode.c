int __thiscall sub_8D6B30(const void **this, int a2, int a3)
{
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  float v11; // ecx
  int v12; // eax
  float v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  _DWORD *ThreadLocalStoragePointer; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  float *v26; // eax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  float v31[2]; // [esp+8h] [ebp-28h] BYREF
  float v32; // [esp+10h] [ebp-20h]
  float v33; // [esp+14h] [ebp-1Ch]
  float v34[6]; // [esp+18h] [ebp-18h] BYREF
  int v35; // [esp+34h] [ebp+4h]

  if ( a3 == 1 )
    return (*((int (__thiscall **)(const void **, int, _DWORD, _DWORD))*this + 2))(this, a2, 0, *(this + 2));
  v6 = *(float *)(a2 + 0x18);
  v7 = *(float *)(a2 + 0xC);
  v31[0] = *(float *)(a2 + 0xC);
  v31[1] = v6;
  v32 = v6 - v7;
  if ( v32 == *(float *)&SrcStr )
    v33 = 0.0;
  else
    v33 = fConstant_1 / v32;
  v8 = (int)*(this + 6) + 0xFFFFFFFF;
  if ( v8 >= 0 )
  {
    v9 = v8 << 6;
    v35 = (int)*(this + 6);
    do
    {
      v10 = (int)*(this + 5);
      v11 = *(float *)(v10 + v9 + 8);
      v12 = *(_DWORD *)(v10 + v9 + 4);
      v13 = *(float *)(v10 + v9 + 0x18);
      v14 = v9 + v10;
      v34[3] = v11;
      LOWORD(v34[0]) = 0xFFFF;
      v34[1] = 0.0;
      LODWORD(v34[2]) = v12;
      v34[5] = v13;
      sub_8DC920(v12, *(_DWORD *)(v12 + 8), (int)v34);
      v15 = *(_DWORD *)(v14 + 4);
      if ( *(_DWORD *)(v15 + 0x98) )
        sub_8DC0A0(v15, v15, (int)v34);
      v16 = *(_DWORD *)(v14 + 8);
      v17 = *(_DWORD *)(v16 + 0x98);
      if ( v17 )
        sub_8DC0A0(v17, v16, (int)v34);
      v9 -= 0x40;
      --v35;
    }
    while ( v35 );
  }
  *(this + 6) = 0;
  sub_89BF50(a2, 0, 1);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  sub_8D5B20(this, a2, v31);
  if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
    return 2;
  v18 = *(this + 3) == (const void *)2;
  v19 = (int)*(this + 4);
  *(this + 4) = 0;
  if ( !v18 || v19 != 1 )
    return (*((int (__thiscall **)(const void **, int, _DWORD, _DWORD))*this + 2))(this, a2, 0, *(this + 2));
  if ( *(_DWORD *)(a2 + 0x110) )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v21 = TlsIndex;
    v22 = ThreadLocalStoragePointer[TlsIndex];
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
    {
      v23 = ThreadLocalStoragePointer[TlsIndex];
      v24 = *(_DWORD **)(v22 + 0x1A4);
      *v24 = "TtPostSimulateCb";
      v25 = __rdtsc();
      v24[1] = v25;
      *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
    }
    v26 = sub_8D2C90(v34, *(float *)(a2 + 0x10), *(float *)(a2 + 0x10));
    sub_8DCD60((int)v26, a2, (int)v34);
    v27 = ThreadLocalStoragePointer[v21];
    if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
    {
      v28 = ThreadLocalStoragePointer[v21];
      v29 = *(_DWORD **)(v27 + 0x1A4);
      *v29 = "Et";
      v30 = __rdtsc();
      v29[1] = v30;
      *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
    }
  }
  return 0;
}
