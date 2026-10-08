int __stdcall sub_91FF40(int a1, int a2, int a3)
{
  _DWORD *v3; // ecx
  int result; // eax
  bool v5; // zf

  v3 = *(_DWORD **)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91ff50*/
  result = *(_DWORD *)(a3 + 0x18); /*0x91ff5a*/
  v5 = result == v3[0xA]; /*0x91ff5d*/
  v3[8] = result; /*0x91ff60*/
  if ( v5 ) /*0x91ff63*/
    return (*(int (__thiscall **)(_DWORD *, int))(*v3 + 0x10))(v3, result); /*0x91ff68*/
  return result; /*0x91ff6b*/
}
