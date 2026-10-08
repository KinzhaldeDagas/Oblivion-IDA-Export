// Authoritative MiddleHighProcess equipped-AMMO setter (vtable +0x10C). Destroys/frees the prior copied EntryData, stores the replacement pointer (NULL on final-shot depletion), and returns true. It does not clear ActorAnimData ammo-slot 3D and does not spawn/detach a projectile.
char __fastcall MiddleHighProcess_SetEquippedAmmoData(HighProcess *a1, int a2, EntryData *a3)
{
  EntryData *equippedAmmoData; // esi

  equippedAmmoData = a1->equippedAmmoData; /*0x64aed4*/
  if ( equippedAmmoData ) /*0x64aedc*/
  {
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)a1->equippedAmmoData, a2); /*0x64aee0*/
    FormHeapFree((unsigned int)equippedAmmoData); /*0x64aee6*/
  }
  a1->equippedAmmoData = a3; /*0x64aef2*/
  return 1; /*0x64aef8*/
}
