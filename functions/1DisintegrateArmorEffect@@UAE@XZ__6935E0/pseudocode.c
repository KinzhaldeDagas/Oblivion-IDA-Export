void __fastcall DisintegrateArmorEffect::~DisintegrateArmorEffect(ActiveEffect *this, int a2)
{
  unsigned int *v3; // edi

  this->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable';
  v3 = *((unsigned int **)this + 0xE);
  if ( v3 )
  {
    ContainerEntryExtraData_DestroyDataTable(v3, a2);
    FormHeapFree((unsigned int)v3);
  }
  ActiveEffect::~ActiveEffect(this);
}
