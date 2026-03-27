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

  v2 = a2;
  v4 = (NiPropertyState *)*sub_405760(a2, (volatile LONG **)&a2);
  v5 = a2;
  v6 = a2 == 0;
  v7 = InterlockedDecrement;
  this->members.propertyState = v4;
  if ( !v6 )
  {
    v8 = v5;
    if ( !v7((volatile LONG *)&v5->member) )
    {
      if ( v8 )
        v8->__vftable->super.super.super.Destructor((NiRefObject *)v8, 1);
    }
  }
  v9 = (NiDynamicEffectState *)*sub_7016D0(v2, (NiDynamicEffectState **)&a2);
  v10 = a2;
  v6 = a2 == 0;
  this->members.dynamicEffectState = v9;
  if ( !v6 )
  {
    v11 = v10;
    if ( !v7((volatile LONG *)&v10->member) )
    {
      if ( v11 )
        v11->__vftable->super.super.super.Destructor((NiRefObject *)v11, 1);
    }
  }
  result = 1;
  if ( (this->members.SceneState1 == 1 || this->members.SceneState2 == 1) && this->members.IsReady == 1 )
    return ((int (__thiscall *)(NiRenderer *, NiGeometry *))this->__vftable->RenderTriShape)(this, v2);
  return result;
}
