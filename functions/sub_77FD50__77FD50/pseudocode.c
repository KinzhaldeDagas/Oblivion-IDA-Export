// Apply NiWireframeProperty to DX9 render state. Property flag bit 0 selects D3DFILL_WIREFRAME versus D3DFILL_SOLID through D3DRS_FILLMODE.
int __thiscall NiD3DRenderState_ApplyWireframeProperty(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 0x64))( /*0x77fd6c*/
           this,
           8,
           ((*(_BYTE *)(a2 + 0x18) & 1) == 0) | 2,
           0);
}
