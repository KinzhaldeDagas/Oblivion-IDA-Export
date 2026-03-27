int sub_763DE0()
{
  int result; // eax
  FARPROC ProcAddress; // eax
  HMODULE LibraryA; // eax
  int v3; // esi
  int v4; // eax

  result = dword_B42160;
  if ( !dword_B42160 )
  {
    ProcAddress = (FARPROC)dword_B42158;
    if ( dword_B42158
      || (LibraryA = LoadLibraryA("D3D9.DLL"), (hLibModule = LibraryA) != 0)
      && (ProcAddress = GetProcAddress(LibraryA, "Direct3DCreate9"), (dword_B42158 = (int)ProcAddress) != 0) )
    {
      v3 = ((int (__stdcall *)(int))ProcAddress)(0x20);
      if ( v3 )
      {
        v4 = FormHeapAlloc(0x14u);
        if ( v4 )
        {
          dword_B42160 = sub_775DF0(v4, v3, (int)&off_B28E00);
          (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          return dword_B42160;
        }
        dword_B42160 = 0;
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      }
    }
    return dword_B42160;
  }
  return result;
}
