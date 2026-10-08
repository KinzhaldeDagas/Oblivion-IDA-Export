char __stdcall sub_7C53B0(NiAVObject *a1)
{
  NiAVObject *v1; // edi
  NiPropertyState *v2; // ebx
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *v4; // esi
  NiAVObject *v5; // esi

  if ( !OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x7c53b0*/
    return 1; /*0x7c5437*/
  v1 = a1; /*0x7c53bd*/
  v2 = *NiGeometry_GetPropertyState((NiGeometry *)a1, (NiPropertyState **)&a1); /*0x7c53cd*/
  v3 = InterlockedDecrement; /*0x7c53d5*/
  if ( a1 ) /*0x7c53db*/
  {
    v4 = a1; /*0x7c53dd*/
    if ( !v3((volatile LONG *)&a1->members) ) /*0x7c53e3*/
      v4->vtbl->super.super.Destructor((NiRefObject *)v4, 1); /*0x7c53f5*/
  }
  if ( !v2 ) /*0x7c53f9*/
  {
    NiAVObject_InitializePropertyState(v1); /*0x7c53fd*/
    NiGeometry_GetPropertyState((NiGeometry *)v1, (NiPropertyState **)&a1); /*0x7c5409*/
    v5 = a1; /*0x7c540e*/
    if ( a1 ) /*0x7c5414*/
    {
      if ( !v3((volatile LONG *)&a1->members) ) /*0x7c541a*/
      {
        if ( v5 ) /*0x7c5422*/
          v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x7c542c*/
      }
    }
  }
  return 1; /*0x7c5434*/
}
