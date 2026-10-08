int __thiscall NiRenderer::BatchRenderShape(NiRenderer *this, NiGeometry *a2)
{
  NiGeometry *v2; // ebp
  NiPropertyState *v4; // ecx
  NiGeometry *v5; // eax
  bool v6; // zf
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  NiGeometry *v8; // edi
  NiDynamicEffectState *v9; // edx
  NiGeometry *v10; // eax
  NiGeometry *v11; // edi
  int result; // eax

  v2 = a2; /*0x701842*/
  v4 = *NiGeometry_GetPropertyState(a2, (NiPropertyState **)&a2); /*0x701856*/
  v5 = a2; /*0x701858*/
  v6 = a2 == 0; /*0x70185c*/
  v7 = InterlockedDecrement; /*0x70185e*/
  this->members.propertyState = v4; /*0x701864*/
  if ( !v6 ) /*0x701867*/
  {
    v8 = v5; /*0x701869*/
    if ( !v7((volatile LONG *)&v5->member) ) /*0x70186f*/
    {
      if ( v8 ) /*0x701877*/
        v8->__vftable->super.super.super.Destructor((NiRefObject *)v8, 1); /*0x701881*/
    }
  }
  v9 = (NiDynamicEffectState *)*sub_7016D0(v2, (NiDynamicEffectState **)&a2); /*0x70188f*/
  v10 = a2; /*0x701891*/
  v6 = a2 == 0; /*0x701895*/
  this->members.dynamicEffectState = v9; /*0x701897*/
  if ( !v6 ) /*0x70189a*/
  {
    v11 = v10; /*0x70189c*/
    if ( !v7((volatile LONG *)&v10->member) ) /*0x7018a2*/
    {
      if ( v11 ) /*0x7018aa*/
        v11->__vftable->super.super.super.Destructor((NiRefObject *)v11, 1); /*0x7018b4*/
    }
  }
  result = 1; /*0x7018b6*/
  if ( (this->members.SceneState1 == 1 || this->members.SceneState2 == 1) && this->members.IsReady == 1 ) /*0x7018d1*/
    return ((int (__thiscall *)(NiRenderer *, NiGeometry *))this->__vftable->RenderTriShape)(this, v2); /*0x7018de*/
  return result; /*0x7018e0*/
}
