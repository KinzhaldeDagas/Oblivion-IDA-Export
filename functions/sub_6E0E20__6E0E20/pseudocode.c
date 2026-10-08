NiTimeController *sub_6E0E20()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6e0e44*/
  v1 = v0; /*0x6e0e49*/
  if ( !v0 ) /*0x6e0e5c*/
    return 0; /*0x6e0e84*/
  sub_6ECC00(v0); /*0x6e0e60*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiLightColorController::`vftable'; /*0x6e0e65*/
  LOWORD(v1[1].members.super.m_uiRefCount) = 0; /*0x6e0e6b*/
  return v1; /*0x6e0e73*/
}
