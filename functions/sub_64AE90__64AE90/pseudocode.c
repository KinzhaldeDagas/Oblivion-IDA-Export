char __fastcall sub_64AE90(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedLightData; // esi

  equippedLightData = a1->equippedLightData; /*0x64ae94*/
  if ( equippedLightData ) /*0x64ae9c*/
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedLightData, a2); /*0x64aea0*/
    FormHeapFree((unsigned int)equippedLightData); /*0x64aea6*/
  }
  a1->equippedLightData = a3; /*0x64aeb2*/
  return 1; /*0x64aeb8*/
}
