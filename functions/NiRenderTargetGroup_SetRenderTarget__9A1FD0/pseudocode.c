char __thiscall NiRenderTargetGroup::SetRenderTarget(NiRenderTargetGroup *this, Ni2DBuffer *a2, UInt32 a3)
{
  this->vtbl->SetRendererData(this, 0); /*0x9a1fda*/
  if ( a3 >= this->members.numRenderTargets ) /*0x9a1fe3*/
    return 0; /*0x9a1ff9*/
  NiSmartPointer_Set__(&this->members.RenderTargets[a3], a2); /*0x9a1fee*/
  return 1; /*0x9a1ff5*/
}
