NiTimeController *sub_6DEF40()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x6def64*/
  v1 = v0; /*0x6def69*/
  if ( !v0 ) /*0x6def7c*/
    return 0; /*0x6defa4*/
  sub_6ECC00(v0); /*0x6def80*/
  v1->vtbl = (NiTimeControllerVtbl *)&NiMaterialColorController::`vftable'; /*0x6def85*/
  LOWORD(v1[1].members.super.m_uiRefCount) = 0; /*0x6def8b*/
  return v1; /*0x6def93*/
}
