UInt32 __thiscall NiRenderTargetGroup::GetDepthStencilBufferWidth(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a1f70*/
  if ( DepthStencilBuffer ) /*0x9a1f75*/
    return DepthStencilBuffer->members.height; /*0x9a1f77*/
  else
    return 0; /*0x9a1f7b*/
}
