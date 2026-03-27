double __thiscall sub_4849C0(void **this)
{
  unsigned __int16 *v2; // edi
  ExtraDataList **v3; // eax
  ExtraDataList *v4; // esi

  v2 = (unsigned __int16 *)OblivionDynamicCast(
                             *(this + 2),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( !v2 )
    return flt_A30634;
  v3 = (ExtraDataList **)*this;
  if ( !*this )
    return (double)v2[4];
  v4 = *v3;
  if ( !*v3 )
    return (double)v2[4];
  if ( ExtraDataList_GetCharge(*v3) == flt_A30634 )
    return (double)v2[4];
  return ExtraDataList_GetCharge(v4);
}
