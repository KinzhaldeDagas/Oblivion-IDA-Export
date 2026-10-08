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

  v1 = a1; /*0x7f6a31*/
  v2 = renderer; /*0x7f6a37*/
  v3 = *NiGeometry_GetPropertyState(a1, (volatile LONG **)&a1); /*0x7f6a4a*/
  v4 = a1; /*0x7f6a4c*/
  v5 = a1 == 0; /*0x7f6a50*/
  v6 = InterlockedDecrement; /*0x7f6a52*/
  v2->member.super.propertyState = (NiPropertyState *)v3; /*0x7f6a58*/
  if ( !v5 ) /*0x7f6a5b*/
  {
    v7 = v4; /*0x7f6a5d*/
    if ( !v6((volatile LONG *)&v4->member) ) /*0x7f6a63*/
    {
      if ( v7 ) /*0x7f6a6b*/
        v7->__vftable->super.super.super.Destructor((NiRefObject *)v7, 1); /*0x7f6a75*/
    }
  }
  v8 = *sub_7016D0(v1, (NiDynamicEffectState **)&a1); /*0x7f6a83*/
  v9 = a1; /*0x7f6a85*/
  v5 = a1 == 0; /*0x7f6a89*/
  v2->member.super.dynamicEffectState = (NiDynamicEffectState *)v8; /*0x7f6a8b*/
  if ( !v5 ) /*0x7f6a8e*/
  {
    v10 = v9; /*0x7f6a90*/
    if ( !v6((volatile LONG *)&v9->member) ) /*0x7f6a96*/
    {
      if ( v10 ) /*0x7f6a9e*/
        v10->__vftable->super.super.super.Destructor((NiRefObject *)v10, 1); /*0x7f6aa8*/
    }
  }
  return NiGeometryGroup::AddGeometryDataToGroup(v2->member.unsharedGeometryGroup, v1->member.geomData, 0, 0, 0, 0); /*0x7f6acb*/
}
