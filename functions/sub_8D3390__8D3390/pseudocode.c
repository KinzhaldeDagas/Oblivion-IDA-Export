int __thiscall sub_8D3390(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 8);
  *this = &off_A9A030;
  if ( v2 )
    (**v2)(v2, 1);
  result = *(this + 7);
  if ( result >= 0 )
    result = sub_8A75D0(
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
               (_DWORD *)*(this + 5),
               result << 6,
               0x14);
  *this = &hkBaseObject::`vftable';
  return result;
}
