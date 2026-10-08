// MoonSugarEffect decode: NiDX9RenderState SetPixelShader cache. Caches current shader at +0xFE8, optional previous at +0xFEC, and only calls D3D SetPixelShader when value changes.
// DX11 GPU bucket program-state audit 2026-10-01: saved shader is updated before the equality test, including equal-cache requests. Native current/saved pairs are VS FE0/FE4 and PS FE8/FEC; device is FF8. A changed cache writes current before tailcalling device SetVertexShader(+170) or SetPixelShader(+1AC); equal-cache requests do not update actual device state. NiD3DPass 75FBA0 uses global B42040 and pushes savePrevious=0 before its zero-argument wrapper getter, then pushes the returned COM shader and calls the manager. Getter RET does not consume that pending save flag.
unsigned int __thiscall NiDX9RenderState_SetPixelShader(
        NiDX9RenderState *self,
        IDirect3DPixelShader9 *shader,
        unsigned __int8 savePrevious)
{
  unsigned int result; // eax

  if ( savePrevious ) /*0x77b085*/
    self->member.SavedPixelShader = self->member.CurrentPixelShader; /*0x77b08d*/
  result = (unsigned int)shader; /*0x77b093*/
  if ( self->member.CurrentPixelShader != shader ) /*0x77b09d*/
  {
    self->member.CurrentPixelShader = shader; /*0x77b09f*/
    return (unsigned int)self->member.Device->lpVtbl->SetPixelShader(self->member.Device, shader); /*0x77b0bb*/
  }
  return result; /*0x77b0bd*/
}
