// Oblivion NiTransformController clone factory. Allocates a 0x40-byte controller through NiSingleInterpController construction, installs the NiTransformController vtable, then copies base/controller members including a cloned smart interpolator through the native clone helper.
NiTimeController *__thiscall NiTransformController_CreateClone(float *this, int *a2)
{
  NiTimeController *v3; // eax
  NiTimeController *v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6c3ea7*/
  v4 = v3; /*0x6c3eac*/
  if ( v3 ) /*0x6c3ebf*/
  {
    NiSingleInterpController_Construct(v3); /*0x6c3ec3*/
    v4->vtbl = (NiTimeControllerVtbl *)&NiTransformController::`vftable'; /*0x6c3ec8*/
  }
  else
  {
    v4 = 0; /*0x6c3ed0*/
  }
  NiSingleInterpController_CopyMembers(this, (int)v4, a2); /*0x6c3ee2*/
  return v4; /*0x6c3ee9*/
}
