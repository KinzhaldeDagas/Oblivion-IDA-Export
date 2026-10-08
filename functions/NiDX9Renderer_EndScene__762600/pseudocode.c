// DeferredRendering implementation: EndScene is the opt-in full-screen lighting resolve point because IDA shows native drawing is complete before the D3D EndScene call. Resolve remains disabled by default until G-buffer material replacement is exact-gated.
char __thiscall NiDX9Renderer::EndScene(int this)
{                                               // DeferredRendering: EndScene checks NiDX9Renderer lostDevice byte at +0x6F0, then calls IDirect3DDevice9::EndScene through device at +0x280.
  if ( !*(_BYTE *)(this + 0x6F0) ) /*0x762603*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 0x280) + 0xA8))(*(_DWORD *)(this + 0x280)) < 0 ) /*0x76261f*/
      return 0; /*0x762624*/
    sub_777A40(*(_DWORD **)(this + 0x8B0)); /*0x76262b*/
  }
  return 1; /*0x762623*/
}
