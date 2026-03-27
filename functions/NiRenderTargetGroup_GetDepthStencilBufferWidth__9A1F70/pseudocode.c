UInt32 __thiscall NiRenderTargetGroup::GetDepthStencilBufferWidth(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer )
    return DepthStencilBuffer->members.height;
  else
    return 0;
}
