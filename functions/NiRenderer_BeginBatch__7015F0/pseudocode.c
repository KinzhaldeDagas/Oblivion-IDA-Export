NiPropertyState *__thiscall NiRenderer::BeginBatch(NiRenderer *this, NiPropertyState *a2, NiDynamicEffectState *a3)
{
  this->members.propertyState = a2;
  this->members.dynamicEffectState = a3;
  return a2;
}
