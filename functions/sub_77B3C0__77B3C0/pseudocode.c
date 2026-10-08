void __thiscall NiDX9RenderState_RemoveVertexShader(NiDX9RenderState *self, IDirect3DVertexShader9 *shader)
{
  IDirect3DDevice9 *Device; // eax

  if ( self->member.CurrentVertexShader == shader ) /*0x77b3ce*/
  {
    Device = self->member.Device; /*0x77b3d0*/
    self->member.CurrentVertexShader = 0; /*0x77b3d6*/
    Device->lpVtbl->SetVertexShader(Device, 0); /*0x77b3eb*/
  }
  if ( self->member.SavedVertexShader == shader ) /*0x77b3f3*/
    self->member.SavedVertexShader = 0; /*0x77b3f5*/
}
