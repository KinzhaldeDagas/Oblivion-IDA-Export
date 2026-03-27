char __thiscall NiRenderTargetGroup::SetRenderTarget(NiRenderTargetGroup *this, Ni2DBuffer *a2, UInt32 a3)
{
  this->vtbl->SetRendererData(this, 0);
  if ( a3 >= this->members.numRenderTargets )
    return 0;
  NiSmartPointer_Set__(&this->members.RenderTargets[a3], a2);
  return 1;
}
