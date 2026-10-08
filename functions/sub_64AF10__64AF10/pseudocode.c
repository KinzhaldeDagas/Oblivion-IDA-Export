char __fastcall sub_64AF10(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedShieldData; // esi

  equippedShieldData = a1->equippedShieldData; /*0x64af14*/
  if ( equippedShieldData ) /*0x64af1c*/
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedShieldData, a2); /*0x64af20*/
    FormHeapFree((unsigned int)equippedShieldData); /*0x64af26*/
  }
  a1->equippedShieldData = a3; /*0x64af32*/
  return 1; /*0x64af38*/
}
