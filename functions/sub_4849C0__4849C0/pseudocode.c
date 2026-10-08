// Return per-instance ExtraCharge when present; otherwise return the TESEnchantableForm base charge. Returns the sentinel/default when the EntryData form is not enchantable.
float __thiscall EquippedEntryData_GetCharge(EntryData *this)
{
  unsigned __int16 *v2; // edi
  tListVoid *extendData; // eax
  ExtraDataList *data; // esi

  v2 = (unsigned __int16 *)OblivionDynamicCast( /*0x4849dc*/
                             this->type,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( v2 ) /*0x4849e3*/
  {
    extendData = this->extendData; /*0x4849e5*/
    if ( this->extendData && (data = (ExtraDataList *)extendData->node.data) != 0 ) /*0x4849eb*/
    {
      if ( ExtraDataList_GetCharge((ExtraDataList *)extendData->node.data) == kTerrainLODQuadRayDirectionZ ) /*0x484a03*/
        return (float)v2[4]; /*0x484a1b*/
      else
        return ExtraDataList_GetCharge(data); /*0x484a0c*/
    }
    else
    {
      return (float)v2[4]; /*0x484a2a*/
    }
  }
  else
  {
    return kTerrainLODQuadRayDirectionZ; /*0x484a2f*/
  }
}
