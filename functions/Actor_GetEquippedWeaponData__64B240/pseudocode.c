// Returns HighProcess equippedWeaponData directly, or only when its instance data is marked Worn when requireWorn is nonzero.
EntryData *__thiscall HighProcess_GetEquippedWeaponData(HighProcess *this, char requireWorn)
{
  EntryData *equippedWeaponData; // ecx

  if ( !requireWorn ) /*0x64b248*/
    return this->equippedWeaponData; /*0x64b248*/
  equippedWeaponData = this->equippedWeaponData; /*0x64b254*/
  if ( equippedWeaponData && (unsigned __int8)ContainerEntryExtraData_HasWorn(equippedWeaponData, 0) ) /*0x64b260*/
    return this->equippedWeaponData; /*0x64b24a*/
  else
    return 0; /*0x64b269*/
}
