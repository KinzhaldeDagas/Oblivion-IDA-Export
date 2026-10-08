UInt32 __thiscall NiRenderTargetGroup::GetDepthStencilBufferRefCount(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a1f60*/
  if ( DepthStencilBuffer ) /*0x9a1f65*/
    return DepthStencilBuffer->members.width; /*0x9a1f67*/
  else
    return 0; /*0x9a1f6b*/
}
