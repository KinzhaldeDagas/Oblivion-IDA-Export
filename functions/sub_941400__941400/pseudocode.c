int __thiscall sub_941400(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // eax
  int result; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 0xC);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = *(this + 0xB);
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v3 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 9), 8 * v3, 0x14);
  v6 = *(this + 8);
  if ( v6 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 6), 8 * v6, 0x14);
  v7 = *(this + 5);
  if ( v7 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 3), 0xC * (v7 & 0x3FFFFFFF), 0x14);
  result = *(this + 2);
  if ( result >= 0 )
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*this, 8 * result, 0x14);
  return result;
}
