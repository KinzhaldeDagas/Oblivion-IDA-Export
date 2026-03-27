_DWORD *__thiscall sub_8994E0(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ecx
  int v6; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebp
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
  char v23[4]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  if ( *(this + 0x22) )
  {
    v25 = a3;
    v4 = *(this + 0x20);
    v23[0] = 1;
    v24 = a2;
    sub_8D8830(v4, (int)v23);
    return 0;
  }
  else
  {
    v6 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v8 = ThreadLocalStoragePointer[TlsIndex];
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
    {
      v9 = ThreadLocalStoragePointer[v6];
      v10 = *(_DWORD **)(v8 + 0x1A4);
      *v10 = "LtAddEntity";
      v10[3] = "Island";
      v11 = __rdtsc();
      v10[1] = v11;
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
    }
    if ( !a2[7] )
      a2[7] = (*(int (__thiscall **)(_DWORD *))(*a2 + 0xC))(a2);
    sub_8DD0C0(0.0, 0, a2[0x14] + 0x10);
    *((_BYTE *)this + 0x91) = 0;
    sub_8BC720(a2);
    sub_8CB640((int)this, (int)a2, a3);
    ++*(this + 0x22);
    v12 = ThreadLocalStoragePointer[v6];
    *((_BYTE *)this + 0x91) = 1;
    if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
    {
      v13 = *(_DWORD **)(v12 + 0x1A4);
      *v13 = "StBroadphase";
      v14 = __rdtsc();
      HIDWORD(v14) = v14;
      LODWORD(v14) = ThreadLocalStoragePointer[v6];
      v13[1] = HIDWORD(v14);
      *(_DWORD *)(v14 + 0x1A4) = v13 + 3;
    }
    sub_8CC800((int)this, (int)a2);
    v15 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
    {
      v16 = *(_DWORD **)(v15 + 0x1A4);
      *v16 = "StCallbacks";
      v17 = __rdtsc();
      HIDWORD(v17) = v17;
      v15 = ThreadLocalStoragePointer[v6];
      v16[1] = HIDWORD(v17);
      *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
    }
    sub_8DC380(v15, (int)this, (int)a2);
    sub_8DBEF0((int)a2);
    v18 = *(this + 0x22) - 1;
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
    return a2;
  }
}
