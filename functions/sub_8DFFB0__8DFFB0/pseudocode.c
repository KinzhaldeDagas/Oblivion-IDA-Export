int __thiscall sub_8DFFB0(struct _RTL_CRITICAL_SECTION *this, _DWORD *a2, int a3, float a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v5; // edi
  int v6; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  const void *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v20[3]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v21[44]; // [esp+20h] [ebp-58h] BYREF
  int v22; // [esp+4Ch] [ebp-2Ch]
  int v23; // [esp+50h] [ebp-28h]
  int v24; // [esp+54h] [ebp-24h]
  int v25; // [esp+58h] [ebp-20h]
  int v26; // [esp+5Ch] [ebp-1Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v6 + 0x1A4);
    *v9 = "TtSimulate";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  sub_8A7720((LPCRITICAL_SECTION)this + 6);
  v11 = *((_DWORD *)this + 0x24) + 1;
  *((_DWORD *)this + 0x24) = v11;
  if ( v11 == 1 )
  {
    sub_8DFB70(*(float *)&this, (int)this, v5, (int)(this + 8), (int)a2, a3, a4);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 6);
    v12 = (const void *)a2[0x1D];
    v13 = a2[0x9A];
    v20[0] = (int)a2;
    v20[1] = (int)this;
    v20[2] = 1;
    qmemcpy(v21, v12, sizeof(v21));
    v22 = a2[0x99];
    v26 = a2[0x9C];
    v23 = v13;
    v14 = a2[0x5B];
    v24 = a2[0x5A];
    v25 = v14;
    sub_8DF6B0(this, v20);
    v5 = TlsIndex;
  }
  v15 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[v5];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v18 = __rdtsc();
    v17[1] = v18;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return 0;
}
