int __thiscall sub_8F6E30(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &off_A9B510;
  result = *(this + 0xE);
  if ( result >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    result = sub_8A75D0(v3, (_DWORD *)*(this + 0xC), 4 * result, 0x14);
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
