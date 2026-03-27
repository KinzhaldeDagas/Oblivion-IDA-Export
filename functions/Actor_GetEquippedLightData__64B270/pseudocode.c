EntryData *__thiscall Actor_GetEquippedLightData(HighProcess *this, char a2)
{
  EntryData *equippedLightData; // ecx

  if ( !a2 )
    return this->equippedLightData;
  equippedLightData = this->equippedLightData;
  if ( equippedLightData && (unsigned __int8)ContainerEntryExtraData_HasWorn(equippedLightData, 0) )
    return this->equippedLightData;
  else
    return 0;
}
