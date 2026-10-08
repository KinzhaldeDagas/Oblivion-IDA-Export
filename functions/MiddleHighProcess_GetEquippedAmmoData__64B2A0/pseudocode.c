EntryData *__thiscall MiddleHighProcess_GetEquippedAmmoData(HighProcess *this, char a2)
{
  EntryData *equippedAmmoData; // ecx

  if ( !a2 ) /*0x64b2a8*/
    return this->equippedAmmoData; /*0x64b2a8*/
  equippedAmmoData = this->equippedAmmoData; /*0x64b2b4*/
  if ( equippedAmmoData && ContainerEntryExtraData_HasWorn(equippedAmmoData, 0) ) /*0x64b2c0*/
    return this->equippedAmmoData; /*0x64b2aa*/
  else
    return 0; /*0x64b2c9*/
}
