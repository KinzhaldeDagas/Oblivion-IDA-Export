_OWORD *__thiscall sub_929560(int *this, int a2)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  _OWORD *result; // eax
  int v11; // edx

  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF) < *(this + 9) )
  {
    v3 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(int *)(a2 + 8) >= 0 )
    {
      v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
      if ( !v5 )
        v5 = dword_BA7D9C;
      sub_8A75D0(v5, *(_DWORD **)a2, 0x10 * *(_DWORD *)(a2 + 8), 0x14);
    }
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    v7 = sub_8A7560(v6, 0x10 * *(this + 9), 0x14);
    v8 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 8) = *(this + 9) | v8 & 0x40000000;
  }
  v9 = *(this + 9);
  result = *(_OWORD **)a2;
  *(_DWORD *)(a2 + 4) = v9;
  if ( v9 > 0 )
  {
    v11 = *(this + 8) - (_DWORD)result;
    do
    {
      *result = *(_OWORD *)((char *)result + v11);
      ++result;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
