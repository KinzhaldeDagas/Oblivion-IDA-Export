// Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantF (device vtable slot +0x178).
bool __thiscall NiDX9RenderState__SetVertexShaderConstantF(
        void *this,
        unsigned int startRegister,
        const float *constantData,
        unsigned int vector4Count,
        int unused)
{
  return (*(int (__stdcall **)(_DWORD, unsigned int, const float *, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x178))( /*0x783039*/
           *((_DWORD *)this + 0x3FE),
           startRegister,
           constantData,
           vector4Count) >= 0;
}
