int __cdecl sub_8A7260(int a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // ecx

  if ( a1 )
    ++*(_DWORD *)(a1 + 0x14);
  result = TlsIndex;
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v3 = *(_DWORD **)(v2 + 0x19C);
  if ( v3 )
  {
    if ( v3[5]-- == 1 )
      result = (*(int (__thiscall **)(_DWORD *, int))(*v3 + 8))(v3, 1);
  }
  *(_DWORD *)(v2 + 0x19C) = a1;
  return result;
}
