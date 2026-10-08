NiDX92DBufferData *__thiscall NiRenderTargetGroup::GetDepthStencilBufferHeight(NiRenderTargetGroup *this)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // eax

  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a2090*/
  if ( DepthStencilBuffer ) /*0x9a2095*/
    return DepthStencilBuffer->members.data; /*0x9a2097*/
  else
    return 0; /*0x9a209b*/
}
