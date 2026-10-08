PVOID __cdecl _encode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *EncodePointer)(PVOID); // eax
  HMODULE ModuleHandleA; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex) /*0x98bea9*/
    && dword_B310AC != 0xFFFFFFFF
    && (v6 = dword_B310AC, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    EncodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 0x1F8); /*0x98beab*/
  }
  else
  {
    ModuleHandleA = GetModuleHandleA("KERNEL32.DLL"); /*0x98beb8*/
    if ( !ModuleHandleA ) /*0x98bec0*/
      return a1; /*0x98bec0*/
    EncodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleA, "EncodePointer"); /*0x98bec8*/
  }
  if ( EncodePointer ) /*0x98bed0*/
    return EncodePointer(a1); /*0x98bed8*/
  return a1; /*0x98bee0*/
}
