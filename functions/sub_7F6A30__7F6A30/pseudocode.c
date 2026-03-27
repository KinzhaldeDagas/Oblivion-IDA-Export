char __stdcall sub_7F6A30(NiGeometry *a1)
{
  NiGeometry *v1; // ebx
  NiDX9Renderer *v2; // esi
  volatile LONG *v3; // ecx
  NiGeometry *v4; // eax
  bool v5; // zf
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  NiGeometry *v7; // edi
  NiGeometry *v8; // edx
  NiGeometry *v9; // eax
  NiGeometry *v10; // edi

  v1 = a1;
  v2 = g_Renderer;
  v3 = *sub_405760(a1, (volatile LONG **)&a1);
  v4 = a1;
  v5 = a1 == 0;
  v6 = InterlockedDecrement;
  v2->member.super.propertyState = (NiPropertyState *)v3;
  if ( !v5 )
  {
    v7 = v4;
    if ( !v6((volatile LONG *)&v4->member) )
    {
      if ( v7 )
        v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1);
    }
  }
  v8 = *sub_7016D0(v1, (NiDynamicEffectState **)&a1);
  v9 = a1;
  v5 = a1 == 0;
  v2->member.super.dynamicEffectState = (NiDynamicEffectState *)v8;
  if ( !v5 )
  {
    v10 = v9;
    if ( !v6((volatile LONG *)&v9->member) )
    {
      if ( v10 )
        v10->__vftable->super.super.super.Destructor((NiRefObject *)v10, 1);
    }
  }
  return NiGeometryGroup::AddGeometryDataToGroup(v2->member.unsharedGeometryGroup, v1->member.geomData, 0, 0, 0, 0);
}
