void __thiscall NiSourceTexture::LoadTexture(NiSourceTexture *this)
{
  if ( g_Renderer )
  {
    if ( !this->members.super.rendererData )
    {
      if ( ((unsigned __int8 (__thiscall *)(NiDX9Renderer *, NiSourceTexture *))g_Renderer->__vftable->super.CreateSourceTexture)(
             g_Renderer,
             this) )
      {
        if ( byte_B3F958 )
        {
          if ( this->members.super.rendererData )
          {
            if ( this->members.loadDirectToRender )
              this->vtbl->FreePixelData(this);
          }
        }
      }
    }
  }
}
