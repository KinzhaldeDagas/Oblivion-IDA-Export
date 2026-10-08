void __fastcall DisintegrateArmorEffect::~DisintegrateArmorEffect(ActiveEffect *this, int a2)
{
  unsigned int *v3; // edi

  this->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable'; /*0x693609*/
  v3 = *((unsigned int **)this + 0xE); /*0x69360f*/
  if ( v3 ) /*0x69361c*/
  {
    ContainerEntryExtraData_DestroyDataTable(v3, a2); /*0x693620*/
    FormHeapFree((unsigned int)v3); /*0x693626*/
  }
  ActiveEffect::~ActiveEffect(this); /*0x693638*/
}
