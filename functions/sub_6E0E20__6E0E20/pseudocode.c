NiTimeController *sub_6E0E20()
{
  NiTimeController *v0; // eax
  NiTimeController *v1; // esi

  v0 = (NiTimeController *)FormHeapAlloc(0x44u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_6ECC00(v0);
  v1->vtbl = (NiTimeControllerVtbl *)&NiLightColorController::`vftable';
  LOWORD(v1[1].members.super.m_uiRefCount) = 0;
  return v1;
}
