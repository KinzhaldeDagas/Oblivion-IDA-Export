int __thiscall sub_8D4290(const void **this, int a2, int *a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // esi
  _DWORD *v23; // ecx
  _DWORD *v24; // ecx
  int v25; // esi
  _DWORD *v26; // ecx
  int v28; // [esp+10h] [ebp-3064h]
  unsigned int v29; // [esp+14h] [ebp-3060h]
  int v31; // [esp+1Ch] [ebp-3058h]
  _DWORD v32[12]; // [esp+24h] [ebp-3050h] BYREF
  _BYTE v33[12292]; // [esp+54h] [ebp-3020h] BYREF
  float v34; // [esp+3058h] [ebp-1Ch]
  int v35; // [esp+3064h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = TlsIndex;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtNarrowPhase";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = a2;
  v10 = *(_DWORD *)(a2 + 0x48);
  v11 = 0;
  v34 = 3.4028235e38;
  if ( v10 <= 0 )
  {
LABEL_20:
    LODWORD(v21) = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
    {
      v22 = ThreadLocalStoragePointer[v4];
      v23 = *(_DWORD **)(v21 + 0x1A4);
      *v23 = "Et";
      v21 = __rdtsc();
      v23[1] = v21;
      *(_DWORD *)(v22 + 0x1A4) = v23 + 3;
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v9 + 0x44) + 4 * v11++);
      v28 = v11;
      v13 = v11 == v10 ? *(_DWORD *)(v9 + 0x54) : *(unsigned __int16 *)(v9 + 0x5A);
      v29 = v12 + v13;
      if ( v12 < v12 + v13 )
        break;
LABEL_18:
      v10 = *(_DWORD *)(v9 + 0x48);
      if ( v11 >= v10 )
      {
        v4 = TlsIndex;
        goto LABEL_20;
      }
    }
    while ( 1 )
    {
      v14 = *(_DWORD *)(v12 + 0x18);
      v15 = 0x3C * *(char *)(v12 + 8);
      v16 = *a3;
      v17 = *(_DWORD *)(v12 + 0x14);
      _mm_prefetch((const char *)(v12 + 0x80), 0);
      v31 = v14;
      _mm_prefetch(*(const char **)(v12 + 0x10), 0);
      a3[0xA] = v15 + v16 + 0x1A14;
      *((_BYTE *)a3 + 0xC) = *(_BYTE *)(v15 + v16 + 0x1A24);
      v32[0] = v33;
      v34 = 3.4028235e38;
      v35 = 0;
      sub_8E6D10(v12, (int)a3, (int)v32);
      v18 = dword_BA7D98;
      v19 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
      v20 = *(_DWORD *)(dword_BA7D98 + 8);
      if ( v20 <= v19 || v20 == v19 )
      {
        *(_DWORD *)(v18 + 4) = 1;
        v18 = dword_BA7D98;
      }
      if ( *(_DWORD *)(v18 + 4) == 1 )
        break;
      if ( (_BYTE *)v32[0] != v33 )
        (*(void (__thiscall **)(_DWORD, int, int, int *, _DWORD *))(**(_DWORD **)(v12 + 0x10) + 0x14))(
          *(_DWORD *)(v12 + 0x10),
          v17,
          v31,
          a3,
          v32);
      if ( v34 < (double)flt_A9A020 )
        sub_8D3600(this, (int)v32, (_DWORD *)v12);
      v12 += *(unsigned __int8 *)(v12 + 3);
      if ( v12 >= v29 )
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v11 = v28;
        v9 = a2;
        goto LABEL_18;
      }
    }
    v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
    LODWORD(v21) = v24[TlsIndex];
    if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
    {
      v25 = v24[TlsIndex];
      v26 = *(_DWORD **)(v21 + 0x1A4);
      *v26 = "Et";
      v21 = __rdtsc();
      v26[1] = v21;
      *(_DWORD *)(v25 + 0x1A4) = v26 + 3;
    }
  }
  return v21;
}
