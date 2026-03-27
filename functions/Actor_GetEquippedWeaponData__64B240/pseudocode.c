EntryData *__thiscall Actor_GetEquippedWeaponData(HighProcess *this, char a2)
{
  EntryData *equippedWeaponData; // ecx

  if ( !a2 )
    return this->equippedWeaponData;
  equippedWeaponData = this->equippedWeaponData;
  if ( equippedWeaponData && (unsigned __int8)ContainerEntryExtraData_HasWorn(equippedWeaponData, 0) )
    return this->equippedWeaponData;
  else
    return 0;
}
