NiRenderTargetGroup *__thiscall NiRenderTargetGroup::NiRenderTargetGroup(NiRenderTargetGroup *this)
{
  NiObject_constr((NiObject *)this);
  this->vtbl = (NiRenderTargetGroupVtbl *)&NiRenderTargetGroup::`vftable';
  ArrayConstructor(
    (char *)this->members.RenderTargets,
    4u,
    4,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  this->members.numRenderTargets = 0;
  this->members.DepthStencilBuffer = 0;
  this->members.RenderData = 0;
  return this;
}
