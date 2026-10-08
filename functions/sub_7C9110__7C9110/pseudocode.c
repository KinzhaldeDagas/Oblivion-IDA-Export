// ShadowLight vtable +0x28 geometry-state preparation. Applies the geometry property-state stencil/cull and wireframe/fill entries. Mode-5 alpha property handling is performed later by ShadowLightShader__SetupRenderPass for selectors 6..9.
int __thiscall ShadowLightShader_PrepareGeometryRenderState(
        _DWORD **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x20))(*(this + 6), *(_DWORD *)(a5 + 0x1C)); /*0x7c9124*/
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x24))(*(this + 6), *(_DWORD *)(a5 + 0x28)); /*0x7c9132*/
  return 0; /*0x7c9134*/
}
