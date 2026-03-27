char __fastcall sub_64AED0(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedAmmoData; // esi

  equippedAmmoData = a1->equippedAmmoData;
  if ( equippedAmmoData )
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedAmmoData, a2);
    FormHeapFree((unsigned int)equippedAmmoData);
  }
  a1->equippedAmmoData = a3;
  return 1;
}
