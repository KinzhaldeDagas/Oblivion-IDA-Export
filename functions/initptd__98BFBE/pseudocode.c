void __cdecl _initptd(int a1, int a2)
{
  HMODULE ModuleHandleA; // eax
  HMODULE hModule; // [esp+10h] [ebp-1Ch]

  ModuleHandleA = GetModuleHandleA("KERNEL32.DLL"); /*0x98bfcf*/
  hModule = ModuleHandleA; /*0x98bfd5*/
  *(_DWORD *)(a1 + 0x5C) = &unk_B312C8; /*0x98bfdb*/
  *(_DWORD *)(a1 + 0x14) = 1; /*0x98bfe5*/
  if ( ModuleHandleA ) /*0x98bfea*/
  {
    *(_DWORD *)(a1 + 0x1F8) = GetProcAddress(ModuleHandleA, "EncodePointer"); /*0x98bffa*/
    *(_DWORD *)(a1 + 0x1FC) = GetProcAddress(hModule, "DecodePointer"); /*0x98c00a*/
  }
  *(_DWORD *)(a1 + 0x70) = 1; /*0x98c010*/
  *(_BYTE *)(a1 + 0xC8) = 0x43; /*0x98c013*/
  *(_BYTE *)(a1 + 0x14B) = 0x43; /*0x98c01a*/
  *(_DWORD *)(a1 + 0x68) = &dword_B31390; /*0x98c026*/
  InterlockedIncrement(&dword_B31390); /*0x98c02a*/
  _lock(0xC); /*0x98c032*/
  *(_DWORD *)(a1 + 0x6C) = a2; /*0x98c03f*/
  if ( !a2 ) /*0x98c044*/
    *(_DWORD *)(a1 + 0x6C) = off_B31998; /*0x98c04b*/
  __addlocaleref(*(volatile LONG **)(a1 + 0x6C)); /*0x98c051*/
  _unlock(0xC); /*0x98c06b*/
  _initptd_::_LN10_5(); /*0x98c071*/
}
