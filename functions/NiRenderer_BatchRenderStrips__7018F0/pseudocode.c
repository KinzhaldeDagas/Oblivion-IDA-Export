NiGeometry *__thiscall NiRenderer::BatchRenderStrips(NiRenderer *this, NiGeometry *a2)
{
  NiGeometry *v2; // ebp
  NiGeometry *v4; // ecx
  NiDynamicEffectState *v5; // edx
  NiGeometry *result; // eax
  bool v7; // zf
  NiGeometry *v8; // edi

  v2 = a2;
  v4 = a2;
  this->members.propertyState = a2->member.unk0AC;
  v5 = (NiDynamicEffectState *)*sub_7016D0(v4, (NiDynamicEffectState **)&a2);
  result = a2;
  v7 = a2 == 0;
  this->members.dynamicEffectState = v5;
  if ( !v7 )
  {
    v8 = result;
    result = (NiGeometry *)InterlockedDecrement((volatile LONG *)&result->member);
    if ( !result )
    {
      if ( v8 )
        result = (NiGeometry *)((int (__thiscall *)(NiGeometry *, int))v8->__vftable->super.super.super.Destructor)(
                                 v8,
                                 1);
    }
  }
  if ( (this->members.SceneState1 == 1 || this->members.SceneState2 == 1) && this->members.IsReady == 1 )
    return ((NiGeometry *(__thiscall *)(NiRenderer *, NiGeometry *))this->__vftable->RenderTriStrips)(this, v2);
  return result;
}
