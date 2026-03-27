int __thiscall sub_8A5090(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5);
  if ( result >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    return sub_8A75D0(v3, (_DWORD *)*(this + 3), 8 * result, 0x14);
  }
  return result;
}
