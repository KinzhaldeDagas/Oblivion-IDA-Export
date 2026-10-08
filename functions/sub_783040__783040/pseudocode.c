// Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantI (device vtable slot +0x180).
bool __thiscall NiDX9RenderState__SetVertexShaderConstantI(
        void *this,
        unsigned int startRegister,
        const int *constantData,
        unsigned int vector4Count,
        int unused)
{
  return (*(int (__stdcall **)(_DWORD, unsigned int, const int *, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x180))( /*0x783069*/
           *((_DWORD *)this + 0x3FE),
           startRegister,
           constantData,
           vector4Count) >= 0;
}
