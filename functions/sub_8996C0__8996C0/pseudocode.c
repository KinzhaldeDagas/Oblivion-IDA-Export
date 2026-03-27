_BYTE *__thiscall sub_8996C0(_DWORD *this, _BYTE *a2, int (__stdcall ***a3)(signed int))
{
  int v4; // ecx
  int v6; // ebp
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // eax
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  _DWORD v23[2]; // [esp+4h] [ebp-8h] BYREF

  if ( *(this + 0x22) )
  {
    v4 = *(this + 0x20);
    LOBYTE(v23[0]) = 2;
    v23[1] = a3;
    sub_8D8830(v4, (int)v23);
    *a2 = 0;
    return a2;
  }
  else
  {
    v6 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v8 = ThreadLocalStoragePointer[TlsIndex];
    *(this + 0x22) = 1;
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
    {
      v9 = v8;
      v10 = *(_DWORD **)(v8 + 0x1A4);
      *v10 = "LtRemEntity";
      v10[3] = "Broadphase";
      v11 = __rdtsc();
      v23[0] = v11;
      v10[1] = v11;
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
    }
    sub_8CCA80((int)this, (int)a3);
    if ( (int)*(this + 0x2D) >= 4 )
      sub_8CC4E0(*(this + 2), (int)a3);
    v12 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
    {
      v13 = *(_DWORD **)(v12 + 0x1A4);
      *v13 = "StCallbacks";
      v14 = __rdtsc();
      v13[1] = v14;
      v12 = ThreadLocalStoragePointer[v6];
      *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
    }
    sub_8DC410(v12, (int)this, (int)a3);
    sub_8DC1C0((int)a3);
    v15 = ThreadLocalStoragePointer[v6];
    *((_BYTE *)this + 0x91) = 0;
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
    {
      v16 = *(_DWORD **)(v15 + 0x1A4);
      *v16 = "StIsland";
      v17 = __rdtsc();
      HIDWORD(v17) = v17;
      LODWORD(v17) = ThreadLocalStoragePointer[v6];
      v16[1] = HIDWORD(v17);
      *(_DWORD *)(v17 + 0x1A4) = v16 + 3;
    }
    sub_8CBE90((int)this, (int)a3);
    if ( !*((_WORD *)a3 + 2) )
      ((void (__thiscall *)(int (__stdcall ***)(signed int)))(*a3)[4])(a3);
    sub_8BC730(a3);
    v18 = *(this + 0x22) - 1;
    *((_BYTE *)this + 0x91) = 1;
    *(this + 0x22) = v18;
    if ( !v18 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
    v19 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
    {
      v20 = ThreadLocalStoragePointer[v6];
      v21 = *(_DWORD **)(v19 + 0x1A4);
      *v21 = "lt";
      v22 = __rdtsc();
      v21[1] = v22;
      *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
    }
    *a2 = 1;
    return a2;
  }
}
