int __thiscall sub_898B70(_DWORD **this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // edi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  _mm_setcsr(_mm_getcsr() | 0x8000);
  v3 = _mm_getcsr() & 0x8000;
  v16 = v3;
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 2) + 8))(*(this + 2), this, a2, a2);
  if ( !v15 )
  {
    v4 = *(this + 0x18);
    if ( v4 )
    {
      if ( *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28) > v4[2] )
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v6 = TlsIndex;
        v7 = ThreadLocalStoragePointer[TlsIndex];
        if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
        {
          v8 = *(_DWORD **)(v7 + 0x1A4);
          *v8 = "TtWatchDog:FreeMem";
          v9 = __rdtsc();
          v8[1] = v9;
          *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 3;
          v3 = v16;
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v4 + 8))(v4, this);
        v10 = ThreadLocalStoragePointer[v6];
        if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
        {
          v11 = ThreadLocalStoragePointer[v6];
          v12 = *(_DWORD **)(v10 + 0x1A4);
          *v12 = "Et";
          v13 = __rdtsc();
          v12[1] = v13;
          *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
        }
      }
    }
  }
  _mm_setcsr(v3 | _mm_getcsr() & 0xFFFF7FFF);
  return v15;
}
