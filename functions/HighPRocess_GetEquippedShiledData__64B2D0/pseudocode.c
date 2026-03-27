EntryData *__thiscall HighPRocess::GetEquippedShiledData(HighProcess *this, char a2)
{
  EntryData *equippedShieldData; // ecx

  if ( !a2 )
    return this->equippedShieldData;
  equippedShieldData = this->equippedShieldData;
  if ( equippedShieldData && (unsigned __int8)ContainerEntryExtraData_HasWorn(equippedShieldData, 0) )
    return this->equippedShieldData;
  else
    return 0;
}
