int __thiscall sub_8A9E50(int *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // ebx
  int v15; // edi
  int v16; // edx
  int result; // eax
  _DWORD *v18; // esi
  _DWORD *i; // ecx

  v3 = *(this + 0x13);
  v4 = v3 & 0x3FFFFFFF;
  if ( (v3 & 0x3FFFFFFF) < *(_DWORD *)(a2 + 0x48) )
  {
    v5 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v3 >= 0 )
    {
      v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v7 )
        v7 = dword_BA7D9C;
      sub_8A75D0(v7, (_DWORD *)*(this + 0x11), 0x10 * v4, 0x14);
    }
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    v9 = sub_8A7560(v8, 0x10 * *(_DWORD *)(a2 + 0x48), 0x14);
    v10 = *(this + 0x13);
    *(this + 0x11) = (int)v9;
    *(this + 0x13) = *(_DWORD *)(a2 + 0x48) | v10 & 0x40000000;
  }
  v11 = *(_DWORD *)(a2 + 0x48);
  v12 = (_DWORD *)*(this + 0x11);
  *(this + 0x12) = v11;
  if ( v11 > 0 )
  {
    v13 = *(_DWORD *)(a2 + 0x44) - (_DWORD)v12;
    do
    {
      v14 = v12;
      *v12 = *(_DWORD *)((char *)v12 + v13);
      v12[1] = *(_DWORD *)((char *)v12 + v13 + 4);
      v12[2] = *(_DWORD *)((char *)v12 + v13 + 8);
      v15 = *(_DWORD *)((char *)v12 + v13 + 0xC);
      v12 += 4;
      --v11;
      v14[3] = v15;
    }
    while ( v11 );
  }
  v16 = *(this + 0x12);
  result = 0;
  if ( v16 > 0 )
  {
    v18 = (_DWORD *)*(this + 0x11);
    for ( i = v18; *i != 0x1140; i += 4 )
    {
      if ( ++result >= v16 )
        return result;
    }
    result = (int)&v18[4 * result + 2];
    if ( result )
    {
      *(_BYTE *)result = 0xFD;
      *(_BYTE *)(result + 1) = 0;
    }
  }
  return result;
}
