// Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetPixelShaderConstantB (device vtable slot +0x1C4).
bool __thiscall NiDX9RenderState__SetPixelShaderConstantB(
        void *this,
        unsigned int startRegister,
        const int *constantData,
        unsigned int boolCount,
        int unused)
{
  return (*(int (__stdcall **)(_DWORD, unsigned int, const int *, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x1C4))( /*0x782d59*/
           *((_DWORD *)this + 0x3FE),
           startRegister,
           constantData,
           boolCount) >= 0;
}
