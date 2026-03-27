char __thiscall NiRenderTargetGroup::SetDepthStencilBuffer(NiRenderTargetGroup *this, NiDepthStencilBuffer *a2)
{
  NiDepthStencilBuffer *DepthStencilBuffer; // esi

  this->vtbl->SetRendererData(this, 0);
  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer != a2 )
  {
    if ( DepthStencilBuffer )
    {
      if ( !InterlockedDecrement((volatile LONG *)&DepthStencilBuffer->members) )
        (*(void (__thiscall **)(NiDepthStencilBuffer *, int))DepthStencilBuffer->vtlb)(DepthStencilBuffer, 1);
    }
    this->members.DepthStencilBuffer = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
  }
  return 1;
}
