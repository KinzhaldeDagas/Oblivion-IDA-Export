NiPropertyState *__thiscall NiRenderer::BeginBatch(NiRenderer *this, NiPropertyState *a2, NiDynamicEffectState *a3)
{
  this->members.propertyState = a2; /*0x7015f8*/
  this->members.dynamicEffectState = a3; /*0x7015fb*/
  return a2; /*0x7015fe*/
}
