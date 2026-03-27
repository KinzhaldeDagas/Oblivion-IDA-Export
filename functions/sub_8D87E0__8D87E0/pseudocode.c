int __thiscall sub_8D87E0(char *this)
{
  int result; // eax
  int v3; // ecx

  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x10));
  result = *((_DWORD *)this + 2);
  if ( result >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    return sub_8A75D0(v3, *(_DWORD **)this, 0x14 * (result & 0x3FFFFFFF), 0x14);
  }
  return result;
}
