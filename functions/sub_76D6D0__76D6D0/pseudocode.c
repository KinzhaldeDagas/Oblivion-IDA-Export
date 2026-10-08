// Verified 2026-09-26 from OblivionNew x86 bytes and RTTI vtable 0xA8997C (NiDX9ImplicitBufferData), slot +0x28. Loads IDirect3DDevice9* at this+0x4C; calls device vtable+0x44 (Present, slot 17) with sourceRect=NULL, destRect=NULL, destinationWindow=NULL, dirtyRegion=NULL; returns SUCCEEDED(HRESULT). Renderer PresentScene 0x769340 dispatches queued buffer slot +0x28 at 0x7693AD. This path calls DEVICE Present, not IDirect3DSwapChain9::Present. No evidence here of arbitrary-rectangle or additional-swapchain presentation.
bool __thiscall NiDX9ImplicitBufferData_PresentDefaultDevice(_DWORD **this)
{
  return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(this + 0x13) + 0x44))( /*0x76d6ec*/
           *(this + 0x13),
           0,
           0,
           0,
           0) >= 0;
}
