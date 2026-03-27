NiDX9Renderer *__thiscall NiGeometry::Render(NiGeometry *this, NiDX9Renderer *a2)
{
  NiDX9Renderer *result; // eax
  NiInterpController *i; // esi

  result = a2;
  a2->member.super.propertyState = this->member.unk0AC;
  a2->member.super.dynamicEffectState = this->member.unk0B0;
  for ( i = this->member.super.super.m_controller; i; i = (NiInterpController *)i->member.next )
    result = (NiDX9Renderer *)((int (__thiscall *)(NiInterpController *))i->vtbl->super.Unk_1A)(i);
  return result;
}
