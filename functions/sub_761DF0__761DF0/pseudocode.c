// Oblivion-authoritative: lazily loads D3D9.DLL, resolves Direct3DCreate9, and creates the process IDirect3D9 singleton with SDK version 0x20. Returns 0 on success, -1 on failure.
int __cdecl NiDX9Renderer_CreateD3D9Instance()
{
  IDirect3D9 *(__stdcall *ProcAddress)(unsigned int); // eax
  HMODULE LibraryA; // eax
  void *v2; // ecx
  IDirect3D9 *v3; // eax

  if ( !g_Direct3D9 ) /*0x761df3*/
  {
    ProcAddress = g_Direct3DCreate9; /*0x761dfb*/
    if ( !g_Direct3DCreate9 /*0x761e38*/
      && ((LibraryA = LoadLibraryA("D3D9.DLL"), (g_D3D9Module = LibraryA) == 0)
       || (ProcAddress = (IDirect3D9 *(__stdcall *)(unsigned int))GetProcAddress(LibraryA, "Direct3DCreate9"),
           (g_Direct3DCreate9 = ProcAddress) == 0))
      || (v3 = ProcAddress(0x20u), (g_Direct3D9 = v3) == 0) )
    {
      Shared_NoOpVirtual_60D0A0(v2); /*0x761e3f*/
      return 0xFFFFFFFF; /*0x761e4b*/
    }
    Shared_NoOpVirtual_60D0A0(v2); /*0x761e51*/
  }
  return 0; /*0x761e4a*/
}
