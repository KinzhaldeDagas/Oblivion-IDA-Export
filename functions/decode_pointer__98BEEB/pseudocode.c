PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleA; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) /*0x98bf15*/
    && dword_B310AC != 0xFFFFFFFF
    && (v6 = dword_B310AC, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    DecodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 0x1FC); /*0x98bf17*/
  }
  else
  {
    ModuleHandleA = GetModuleHandleA("KERNEL32.DLL"); /*0x98bf24*/
    if ( !ModuleHandleA ) /*0x98bf2c*/
      return a1; /*0x98bf2c*/
    DecodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleA, "DecodePointer"); /*0x98bf34*/
  }
  if ( DecodePointer ) /*0x98bf3c*/
    return DecodePointer(a1); /*0x98bf44*/
  return a1; /*0x98bf4c*/
}
