int __thiscall sub_90D480(_DWORD *this)
{
  int result; // eax

  sub_8B0E60(this + 9);
  result = *(this + 4);
  if ( result >= 0 )
    result = sub_8A75D0(
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
               (_DWORD *)*(this + 2),
               result & 0x3FFFFFFF,
               0x14);
  *this = &hkBaseObject::`vftable';
  return result;
}
