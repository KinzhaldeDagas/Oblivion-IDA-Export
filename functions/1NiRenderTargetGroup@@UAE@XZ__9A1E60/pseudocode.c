void __thiscall NiRenderTargetGroup::~NiRenderTargetGroup(NiRenderTargetGroup *this)
{
  void (__thiscall ***RenderData)(void *, int); // ecx
  NiDepthStencilBuffer *DepthStencilBuffer; // edi

  this->vtbl = (NiRenderTargetGroupVtbl *)&NiRenderTargetGroup::`vftable'; /*0x9a1e89*/
  RenderData = (void (__thiscall ***)(void *, int))this->members.RenderData; /*0x9a1e8f*/
  if ( RenderData ) /*0x9a1e9c*/
    (**RenderData)(RenderData, 1); /*0x9a1ea4*/
  DepthStencilBuffer = this->members.DepthStencilBuffer; /*0x9a1ea6*/
  if ( DepthStencilBuffer ) /*0x9a1eb0*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&DepthStencilBuffer->members) ) /*0x9a1eb6*/
      (*(void (__thiscall **)(NiDepthStencilBuffer *, int))DepthStencilBuffer->vtlb)(DepthStencilBuffer, 1); /*0x9a1ecc*/
  }
  _LN21((char *)this->members.RenderTargets, 4u, 4, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x9a1ee0*/
  NiRefObject_destr(this); /*0x9a1eef*/
}
