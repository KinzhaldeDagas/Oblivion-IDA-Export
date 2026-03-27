void __thiscall NiRenderTargetGroup::~NiRenderTargetGroup(NiRenderTargetGroup *this)
{
  void (__thiscall ***RenderData)(void *, int); // ecx
  NiDepthStencilBuffer *DepthStencilBuffer; // edi

  this->vtbl = (NiRenderTargetGroupVtbl *)&NiRenderTargetGroup::`vftable';
  RenderData = (void (__thiscall ***)(void *, int))this->members.RenderData;
  if ( RenderData )
    (**RenderData)(RenderData, 1);
  DepthStencilBuffer = this->members.DepthStencilBuffer;
  if ( DepthStencilBuffer )
  {
    if ( !InterlockedDecrement((volatile LONG *)&DepthStencilBuffer->members) )
      (*(void (__thiscall **)(NiDepthStencilBuffer *, int))DepthStencilBuffer->vtlb)(DepthStencilBuffer, 1);
  }
  _LN21((char *)this->members.RenderTargets, 4u, 4, (void (__thiscall *)(void *))sub_7016A0);
  NiRefObject_destr(this);
}
