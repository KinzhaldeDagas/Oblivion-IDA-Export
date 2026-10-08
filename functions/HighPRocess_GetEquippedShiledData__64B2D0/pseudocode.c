EntryData *__thiscall HighPRocess::GetEquippedShiledData(HighProcess *this, char a2)
{
  EntryData *equippedShieldData; // ecx

  if ( !a2 ) /*0x64b2d8*/
    return this->equippedShieldData; /*0x64b2d8*/
  equippedShieldData = this->equippedShieldData; /*0x64b2e4*/
  if ( equippedShieldData && ContainerEntryExtraData_HasWorn(equippedShieldData, 0) ) /*0x64b2f0*/
    return this->equippedShieldData; /*0x64b2da*/
  else
    return 0; /*0x64b2f9*/
}
