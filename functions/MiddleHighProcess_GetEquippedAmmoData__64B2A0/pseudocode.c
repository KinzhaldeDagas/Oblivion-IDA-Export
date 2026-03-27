EntryData *__thiscall MiddleHighProcess_GetEquippedAmmoData(HighProcess *this, char a2)
{
  EntryData *equippedAmmoData; // ecx

  if ( !a2 )
    return this->equippedAmmoData;
  equippedAmmoData = this->equippedAmmoData;
  if ( equippedAmmoData && (unsigned __int8)ContainerEntryExtraData_HasWorn(equippedAmmoData, 0) )
    return this->equippedAmmoData;
  else
    return 0;
}
