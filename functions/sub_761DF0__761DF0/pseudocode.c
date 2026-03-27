unsigned int sub_761DF0()
{
  FARPROC ProcAddress; // eax
  HMODULE LibraryA; // eax
  void *v2; // ecx
  int v3; // eax

  if ( !dword_B42154 )
  {
    ProcAddress = (FARPROC)dword_B42158;
    if ( !dword_B42158
      && ((LibraryA = LoadLibraryA("D3D9.DLL"), (hLibModule = LibraryA) == 0)
       || (ProcAddress = GetProcAddress(LibraryA, "Direct3DCreate9"), (dword_B42158 = (int)ProcAddress) == 0))
      || (v3 = ((int (__stdcall *)(int))ProcAddress)(0x20), (dword_B42154 = v3) == 0) )
    {
      TESTexture::ClearComponentReferences(v2);
      return 0xFFFFFFFF;
    }
    TESTexture::ClearComponentReferences(v2);
  }
  return 0;
}
