int __thiscall sub_898C90(_DWORD **this, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // edi
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+14h] [ebp+4h]

  _mm_setcsr(_mm_getcsr() | 0x8000);
  v4 = _mm_getcsr() & 0x8000;
  v16 = v4;
  v17 = (*(int (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 2) + 8))(*(this + 2), this, a2, a3);
  if ( !v17 )
  {
    v5 = *(this + 0x18);
    if ( v5 )
    {
      if ( *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28) > v5[2] )
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v7 = TlsIndex;
        v8 = ThreadLocalStoragePointer[TlsIndex];
        if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
        {
          v9 = *(_DWORD **)(v8 + 0x1A4);
          *v9 = "TtWatchDog:FreeMem";
          v10 = __rdtsc();
          v9[1] = v10;
          *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x1A4) = v9 + 3;
          v4 = v16;
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v5 + 8))(v5, this);
        v11 = ThreadLocalStoragePointer[v7];
        if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
        {
          v12 = ThreadLocalStoragePointer[v7];
          v13 = *(_DWORD **)(v11 + 0x1A4);
          *v13 = "Et";
          v14 = __rdtsc();
          v13[1] = v14;
          *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
        }
      }
    }
  }
  _mm_setcsr(v4 | _mm_getcsr() & 0xFFFF7FFF);
  return v17;
}
