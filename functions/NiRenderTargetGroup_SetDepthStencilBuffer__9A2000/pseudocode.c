char __thiscall NiRenderTargetGroup::SetDepthStencilBuffer(NiRenderTargetGroup *this, NiDepthStencilBuffer *a2)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // esi

  this->vtbl->SetRendererData(this, 0); /*0x9a200c*/
  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a200e*/
  if ( DepthStencilBuffer != a2 ) /*0x9a2017*/
  {
    if ( DepthStencilBuffer ) /*0x9a201b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&DepthStencilBuffer->members) ) /*0x9a2021*/
        (*(void (__thiscall **)(NiDepthStencilBuffer *, int))DepthStencilBuffer->vtlb)(DepthStencilBuffer, 1); /*0x9a2037*/
    }
    this->members.DepthStencilBuffer = a2; /*0x9a203b*/
    if ( a2 ) /*0x9a203e*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x9a2044*/
  }
  return 1; /*0x9a204a*/
}
