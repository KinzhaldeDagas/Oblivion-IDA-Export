// MoonSugarEffect decode: NiDX9RenderState SetVertexShader cache. Caches current shader at +0xFE0, optional previous at +0xFE4, and only calls D3D SetVertexShader when value changes.
// DX11 GPU bucket program-state audit 2026-10-01: saved shader is updated before the equality test, including equal-cache requests. Native current/saved pairs are VS FE0/FE4 and PS FE8/FEC; device is FF8. A changed cache writes current before tailcalling device SetVertexShader(+170) or SetPixelShader(+1AC); equal-cache requests do not update actual device state. NiD3DPass 75FBA0 uses global B42040 and pushes savePrevious=0 before its zero-argument wrapper getter, then pushes the returned COM shader and calls the manager. Getter RET does not consume that pending save flag.
unsigned int __thiscall NiDX9RenderState_SetVertexShader(
        NiDX9RenderState *self,
        IDirect3DVertexShader9 *shader,
        unsigned __int8 savePrevious)
{
  unsigned int result; // eax

  if ( savePrevious ) /*0x77b355*/
    self->member.SavedVertexShader = self->member.CurrentVertexShader; /*0x77b35d*/
  result = (unsigned int)shader; /*0x77b363*/
  if ( self->member.CurrentVertexShader != shader ) /*0x77b36d*/
  {
    self->member.CurrentVertexShader = shader; /*0x77b36f*/
    return (unsigned int)self->member.Device->lpVtbl->SetVertexShader(self->member.Device, shader); /*0x77b38b*/
  }
  return result; /*0x77b38d*/
}
