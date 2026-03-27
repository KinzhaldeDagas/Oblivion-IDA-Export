int __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleA; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]

  ModuleHandleA = GetModuleHandleA("KERNEL32.DLL");
  hModule = ModuleHandleA;
  *(_DWORD *)(a1 + 0x5C) = &unk_B312C8;
  *(_DWORD *)(a1 + 0x14) = 1;
  if ( ModuleHandleA )
  {
    *(_DWORD *)(a1 + 0x1F8) = GetProcAddress(ModuleHandleA, "EncodePointer");
    *(_DWORD *)(a1 + 0x1FC) = GetProcAddress(hModule, "DecodePointer");
  }
  *(_DWORD *)(a1 + 0x70) = 1;
  *(_BYTE *)(a1 + 0xC8) = 0x43;
  *(_BYTE *)(a1 + 0x14B) = 0x43;
  *(_DWORD *)(a1 + 0x68) = &dword_B31390;
  InterlockedIncrement(&dword_B31390);
  _lock(0xC);
  *(_DWORD *)(a1 + 0x6C) = a2;
  if ( !a2 )
    *(_DWORD *)(a1 + 0x6C) = off_B31998;
  __addlocaleref(*(volatile LONG **)(a1 + 0x6C));
  _unlock(0xC);
  return _initptd_::_LN10_5();
}
