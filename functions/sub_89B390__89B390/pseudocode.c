void __thiscall sub_89B390(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // esi
  _DWORD *v14; // eax
  char *v15; // ebx
  int v16; // ecx
  int v17; // esi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  bool v24; // zf
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  _DWORD v32[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v33; // [esp+1Ch] [ebp-14h]
  _DWORD *v34; // [esp+20h] [ebp-10h] BYREF
  int v35; // [esp+24h] [ebp-Ch]
  signed int v36; // [esp+28h] [ebp-8h]
  _DWORD *v37; // [esp+2Ch] [ebp-4h]

  if ( *(this + 0x22) )
  {
    LOBYTE(v33) = a3;
    v4 = *(this + 0x20);
    LOBYTE(v32[0]) = 0x13;
    v32[1] = a2;
    sub_8D8830(v4, (int)v32);
  }
  else
  {
    v5 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v7 = ThreadLocalStoragePointer[TlsIndex];
    *(this + 0x22) = 1;
    if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
    {
      v8 = v7;
      v9 = *(_DWORD **)(v7 + 0x1A4);
      *v9 = "LtUpdateFilterOnPhantom";
      v9[3] = "broadphase";
      v10 = __rdtsc();
      v9[1] = v10;
      *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
    }
    v11 = ThreadLocalStoragePointer[v5];
    v12 = *(_DWORD **)(v11 + 0x19C);
    v13 = *(this + 0xA9);
    v34 = 0;
    v35 = 0;
    v36 = 0x80000000;
    v30 = v11;
    if ( !v12 )
      v12 = (_DWORD *)dword_BA7D9C;
    v14 = (_DWORD *)v12[8];
    v15 = (char *)v14 + ((8 * v13 + 0x10) & 0xFFFFFFF0);
    if ( (unsigned int)v15 > v12[0xB] )
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (8 * v13 + 0x10) & 0xFFFFFFF0);
    else
      v12[8] = v15;
    v16 = *(this + 0x19);
    v34 = v14;
    v37 = v14;
    v36 = v13 | 0x80000000;
    (*(void (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v16 + 0x2C))(v16, a2 + 0x28, &v34);
    v17 = v30;
    if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                              + 0x1A8) )
    {
      v18 = *(_DWORD **)(v30 + 0x1A4);
      *v18 = "StUpdateOverlaps";
      v19 = __rdtsc();
      v18[1] = v19;
      *(_DWORD *)(v30 + 0x1A4) = v18 + 3;
    }
    v20 = 0;
    for ( i = 0; v20 < v35; i = v20 )
    {
      v21 = v34[2 * v20 + 1];
      if ( v21 != a2 + 0x28 )
      {
        sub_898760(a2, v21 + *(char *)(v21 + 5), *(this + 0x1E));
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        v20 = i;
        v17 = v30;
      }
      ++v20;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                                + 0x1A8) )
      {
        v22 = *(_DWORD **)(v17 + 0x1A4);
        *v22 = "StcollectionFilter";
        v23 = __rdtsc();
        v22[1] = v23;
        *(_DWORD *)(v17 + 0x1A4) = v22 + 3;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x28))(a2);
    }
    v24 = (*(this + 0x22))-- == 1;
    if ( v24 )
    {
      if ( *(this + 0x21) )
      {
        if ( !*((_BYTE *)this + 0x90) )
          sub_899210((int)this);
      }
    }
    if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex]
                                                                              + 0x1A8) )
    {
      v25 = *(_DWORD **)(v17 + 0x1A4);
      *v25 = "lt";
      v26 = __rdtsc();
      v25[1] = v26;
      *(_DWORD *)(v17 + 0x1A4) = v25 + 3;
    }
    v27 = *(_DWORD **)(v17 + 0x19C);
    v28 = v37;
    if ( !v27 )
      v27 = (_DWORD *)dword_BA7D9C;
    v24 = v37 == (_DWORD *)v27[0xA];
    v27[8] = v37;
    if ( v24 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v27 + 0x10))(v27, v28);
    if ( v36 >= 0 )
    {
      v29 = *(_DWORD *)(v17 + 0x19C);
      if ( !v29 )
        v29 = dword_BA7D9C;
      sub_8A75D0(v29, v34, 8 * v36, 0x14);
    }
  }
}
