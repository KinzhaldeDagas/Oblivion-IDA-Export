bool __thiscall OB_NiSourceTexture_CreateRendererData_010201A0(NiSourceTexture *this)
{
  if ( !renderer ) /*0x701c03*/
    return 0; /*0x701c0b*/
  if ( !this->members.super.rendererData ) /*0x701c11*/
  {
    if ( !((unsigned __int8 (__thiscall *)(NiDX9Renderer *, NiSourceTexture *))renderer->__vftable->super.CreateSourceTexture)( /*0x701c24*/
            renderer,
            this) )
      return 0; /*0x701c10*/
    if ( unk_B3F958 ) /*0x701c26*/
    {
      if ( this->members.super.rendererData ) /*0x701c2f*/
      {
        if ( this->members.loadDirectToRender ) /*0x701c35*/
          this->vtbl->FreePixelData(this); /*0x701c42*/
      }
    }
  }
  return 1; /*0x701c0f*/
}
/* Orphan comments:
NiDX9Renderer vtable +0x104 (slot 65) is CreateSourceTexture; Oblivion 1.2.0416 resolves it to 0x763560.
*/
