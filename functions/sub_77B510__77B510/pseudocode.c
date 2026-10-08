// DirectX10OBSE authority: Oblivion NiDX9RenderState vertex declaration cache. Sets input mode byte +0x1000=1, caches decl at +0x100C, then calls IDirect3DDevice9::SetVertexDeclaration via vtable +0x15C.
// DX11 declaration handoff audit 2026-10-01: ignore null completely. For non-null, write only if mode byte+1000 is zero or cached declaration+100C differs. Set mode=1; savePrevious updates+1010 only INSIDE this changed branch, then cache+100C before the device setter. Equal cache in declaration mode does not save or call the device, even if actual device state differs. Preserve padding bytes+1001..1003 and FVF/saved-FVF words+1004/+1008. Native cache identity and actual owned declaration/requested-FVF pair are independent.
unsigned int __thiscall NiDX9RenderState_SetVertexDeclaration(
        NiDX9RenderState *self,
        IDirect3DVertexDeclaration9 *declaration,
        unsigned __int8 savePrevious)
{
  unsigned int result; // eax

  result = (unsigned int)declaration; /*0x77b510*/
  if ( declaration ) /*0x77b516*/
  {
    if ( !self->member.UsingVertexDeclaration || self->member.CurrentVertexDeclaration != declaration ) /*0x77b527*/
    {
      self->member.UsingVertexDeclaration = 1; /*0x77b52e*/
      if ( savePrevious ) /*0x77b535*/
        self->member.SavedVertexDeclaration = self->member.CurrentVertexDeclaration; /*0x77b53d*/
      self->member.CurrentVertexDeclaration = declaration; /*0x77b543*/
      return (unsigned int)self->member.Device->lpVtbl->SetVertexDeclaration(self->member.Device, declaration); /*0x77b55f*/
    }
  }
  return result; /*0x77b561*/
}
