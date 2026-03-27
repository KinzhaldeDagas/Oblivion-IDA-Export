char __fastcall sub_64AF10(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedShieldData; // esi

  equippedShieldData = a1->equippedShieldData;
  if ( equippedShieldData )
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedShieldData, a2);
    FormHeapFree((unsigned int)equippedShieldData);
  }
  a1->equippedShieldData = a3;
  return 1;
}
