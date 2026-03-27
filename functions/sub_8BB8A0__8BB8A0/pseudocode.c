int __thiscall sub_8BB8A0(int *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  v2 = *(this + 7);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    sub_8A75D0(v3, (_DWORD *)*(this + 5), 4 * v2, 0x14);
  }
  result = sub_8B0E60(this + 2);
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
