NiTimeController *sub_6D0260()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x6d0285*/
  v1 = v0; /*0x6d028a*/
  if ( !v0 ) /*0x6d029b*/
    return 0; /*0x6d02c8*/
  NiInterpController_Construct(v0); /*0x6d029f*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiMultiTargetTransformController::`vftable'; /*0x6d02a4*/
  v1[1].vtbl = 0; /*0x6d02aa*/
  v1[1].members.super.m_uiRefCount = 0; /*0x6d02ad*/
  v1[1].members.flags = 0; /*0x6d02b0*/
  return v1; /*0x6d02b6*/
}
