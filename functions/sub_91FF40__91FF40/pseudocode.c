int __stdcall sub_91FF40(int a1, int a2, int a3)
{
  _DWORD *v3; // ecx
  int result; // eax
  bool v5; // zf

  v3 = *(_DWORD **)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  result = *(_DWORD *)(a3 + 0x18);
  v5 = result == v3[0xA];
  v3[8] = result;
  if ( v5 )
    return (*(int (__thiscall **)(_DWORD *, int))(*v3 + 0x10))(v3, result);
  return result;
}
