char __fastcall sub_64AE90(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedLightData; // esi

  equippedLightData = a1->equippedLightData;
  if ( equippedLightData )
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedLightData, a2);
    FormHeapFree((unsigned int)equippedLightData);
  }
  a1->equippedLightData = a3;
  return 1;
}
