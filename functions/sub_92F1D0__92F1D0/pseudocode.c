_DWORD *__thiscall sub_92F1D0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // ecx

  v3 = *(this + 2);
  if ( (v3 & 0x3FFFFFFF) < a2[1] )
  {
    v4 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v3 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*this, 8 * v3, 0x14);
    *this = sub_8A7560(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), 8 * a2[1], 0x14);
    *(this + 2) = a2[1] | *(this + 2) & 0x40000000;
  }
  v6 = a2[1];
  v7 = (_DWORD *)*this;
  *(this + 1) = v6;
  if ( v6 > 0 )
  {
    v8 = *a2 - (_DWORD)v7;
    do
    {
      *v7 = *(_DWORD *)((char *)v7 + v8);
      v7[1] = *(_DWORD *)((char *)v7 + v8 + 4);
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  return this;
}
