UInt32 __thiscall NiRenderTargetGroup::GetDepthStencilBufferRefCount(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer )
    return DepthStencilBuffer->members.width;
  else
    return 0;
}
