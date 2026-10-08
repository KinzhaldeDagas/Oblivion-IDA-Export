// Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetPixelShaderConstantF (device vtable slot +0x1B4).
bool __thiscall NiDX9RenderState__SetPixelShaderConstantF(
        void *this,
        unsigned int startRegister,
        const float *constantData,
        unsigned int vector4Count,
        int unused)
{
  return (*(int (__stdcall **)(_DWORD, unsigned int, const float *, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x1B4))( /*0x782d89*/
           *((_DWORD *)this + 0x3FE),
           startRegister,
           constantData,
           vector4Count) >= 0;
}
