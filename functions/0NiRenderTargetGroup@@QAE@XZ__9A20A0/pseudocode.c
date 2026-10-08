NiRenderTargetGroup *__thiscall NiRenderTargetGroup::NiRenderTargetGroup(NiRenderTargetGroup *this)
{
  NiObject_constr((NiObject *)this); /*0x9a20c9*/
  this->vtbl = (NiRenderTargetGroupVtbl *)&NiRenderTargetGroup::`vftable'; /*0x9a20e6*/
  ArrayConstructor( /*0x9a20ec*/
    (char *)this->members.RenderTargets,
    4u,
    4,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  this->members.numRenderTargets = 0; /*0x9a20f1*/
  this->members.DepthStencilBuffer = 0; /*0x9a20f4*/
  this->members.RenderData = 0; /*0x9a20f7*/
  return this; /*0x9a20fc*/
}
