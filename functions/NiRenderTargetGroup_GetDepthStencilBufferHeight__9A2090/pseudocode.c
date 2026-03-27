NiDX92DBufferData *__thiscall NiRenderTargetGroup::GetDepthStencilBufferHeight(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer )
    return DepthStencilBuffer->members.data;
  else
    return 0;
}
