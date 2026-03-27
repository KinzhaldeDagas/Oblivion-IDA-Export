PVOID __cdecl _decode_pointer(void *a1)
{
  int (__stdcall *Value)(int); // eax
  int v2; // eax
  PVOID (__stdcall *DecodePointer)(PVOID); // eax
  HMODULE ModuleHandleA; // eax
  int v6; // [esp-4h] [ebp-8h]

  if ( TlsGetValue(dwTlsIndex)
    && dword_B310AC != 0xFFFFFFFF
    && (v6 = dword_B310AC, Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex), (v2 = Value(v6)) != 0) )
  {
    DecodePointer = *(PVOID (__stdcall **)(PVOID))(v2 + 0x1FC);
  }
  else
  {
    ModuleHandleA = GetModuleHandleA("KERNEL32.DLL");
    if ( !ModuleHandleA )
      return a1;
    DecodePointer = (PVOID (__stdcall *)(PVOID))GetProcAddress(ModuleHandleA, "DecodePointer");
  }
  if ( DecodePointer )
    return DecodePointer(a1);
  return a1;
}
