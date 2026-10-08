// Apply NiStencilProperty to DX9 render state: stencil enable/ops/function/reference/mask plus D3DRS_CULLMODE selected from the native face-draw-mode table. Mode-5 caster pass groups later disable stencil but retain this property-driven cull mode.
int __thiscall NiD3DRenderState_ApplyStencilProperty(_DWORD *this, int a2)
{
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 ) /*0x77fc5e*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 0x64))(this, 0x34, 1, 0); /*0x77fc6d*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fc89*/
      this,
      0x38,
      *(this + (*(unsigned __int16 *)(a2 + 0x18) >> 0xC) + 0x27),
      0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(this, 0x39, *(_DWORD *)(a2 + 0x1C), 0); /*0x77fc9a*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(this, 0x3A, *(_DWORD *)(a2 + 0x20), 0); /*0x77fcab*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fcc9*/
      this,
      0x35,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 1) & 7) + 0x2F),
      0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fce8*/
      this,
      0x36,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 4) & 7) + 0x2F),
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fd07*/
      0x37,
      *(this + ((*(unsigned __int16 *)(a2 + 0x18) >> 7) & 7) + 0x2F),
      0);
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(0x34, 0, 0); /*0x77fd12*/
  }
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fd3c*/
           this,
           0x16,
           *(this + 2 * ((*(unsigned __int16 *)(a2 + 0x18) >> 0xA) & 3) + *(this + 0x3D) + 0x35),
           0);
}
