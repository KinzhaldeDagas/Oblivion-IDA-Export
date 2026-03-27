int __thiscall sub_8A7A10(_RTL_CRITICAL_SECTION_0 **this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int result; // eax
  int v4; // ecx

  v2 = *(this + 5);
  *this = (_RTL_CRITICAL_SECTION_0 *)&off_A975F0;
  if ( v2 )
  {
    DeleteCriticalSection(v2);
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      v2,
      0x18,
      0x12);
  }
  result = (int)*(this + 4);
  if ( result >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    result = sub_8A75D0(v4, *(this + 2), 4 * result, 0x14);
  }
  *this = (_RTL_CRITICAL_SECTION_0 *)&hkBaseObject::`vftable';
  return result;
}
