EntryData *__thiscall Actor_GetEquippedLightData(HighProcess *this, char a2)
{
  EntryData *equippedLightData; // ecx

  if ( !a2 ) /*0x64b278*/
    return this->equippedLightData; /*0x64b278*/
  equippedLightData = this->equippedLightData; /*0x64b284*/
  if ( equippedLightData && ContainerEntryExtraData_HasWorn(equippedLightData, 0) ) /*0x64b290*/
    return this->equippedLightData; /*0x64b27a*/
  else
    return 0; /*0x64b299*/
}
