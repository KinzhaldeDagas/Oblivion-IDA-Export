// Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantB (device vtable slot +0x188).
bool __thiscall NiDX9RenderState__SetVertexShaderConstantB(
        void *this,
        unsigned int startRegister,
        const int *constantData,
        unsigned int boolCount,
        int unused)
{
  return (*(int (__stdcall **)(_DWORD, unsigned int, const int *, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x188))( /*0x783009*/
           *((_DWORD *)this + 0x3FE),
           startRegister,
           constantData,
           boolCount) >= 0;
}
