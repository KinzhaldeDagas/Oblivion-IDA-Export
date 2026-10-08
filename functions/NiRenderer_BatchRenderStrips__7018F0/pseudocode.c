NiGeometry *__thiscall NiRenderer::BatchRenderStrips(NiRenderer *this, NiGeometry *a2)
{
  NiGeometry *v2; // ebp
  NiGeometry *v4; // ecx
  NiDynamicEffectState *v5; // edx
  NiGeometry *result; // eax
  bool v7; // zf
  NiGeometry *v8; // edi

  v2 = a2; /*0x7018f1*/
  v4 = a2; /*0x701903*/
  this->members.propertyState = a2->member.unk0AC; /*0x701905*/
  v5 = (NiDynamicEffectState *)*sub_7016D0(v4, (NiDynamicEffectState **)&a2); /*0x70190d*/
  result = a2; /*0x70190f*/
  v7 = a2 == 0; /*0x701913*/
  this->members.dynamicEffectState = v5; /*0x701915*/
  if ( !v7 ) /*0x701918*/
  {
    v8 = result; /*0x70191b*/
    result = (NiGeometry *)InterlockedDecrement((volatile LONG *)&result->member); /*0x701921*/
    if ( !result ) /*0x701929*/
    {
      if ( v8 ) /*0x70192d*/
        result = (NiGeometry *)((int (__thiscall *)(NiGeometry *, int))v8->__vftable->super.super.super.Destructor)( /*0x701937*/
                                 v8,
                                 1);
    }
  }
  if ( (this->members.SceneState1 == 1 || this->members.SceneState2 == 1) && this->members.IsReady == 1 ) /*0x701953*/
    return ((NiGeometry *(__thiscall *)(NiRenderer *, NiGeometry *))this->__vftable->RenderTriStrips)(this, v2); /*0x701960*/
  return result; /*0x701962*/
}
