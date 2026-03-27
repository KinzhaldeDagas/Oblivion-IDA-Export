int __thiscall EffectItem_GetScript(UInt32 **this)
{
  UInt32 *v1; // ecx
  UInt32 v2; // ecx
  TESForm *v3; // eax

  v1 = *(this + 6);
  if ( !v1 )
    return EffectItem_GetScript_::Done();
  v2 = *v1;
  if ( !v2 )
    return EffectItem_GetScript_::Done();
  v3 = TESForm_LookupByFormID(v2);
  OblivionDynamicCast(
    v3,
    0,
    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
    &Script `RTTI Type Descriptor',
    0);
  return EffectItem_GetScript_::Done();
}
