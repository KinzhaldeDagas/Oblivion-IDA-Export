void __cdecl sub_A25350()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_fMinBloodDamage_Combat); /*0xa2535a*/
  if ( off_B148E0 ) /*0xa25366*/
  {
    if ( *off_B148E0 == 0x53 ) /*0xa2536b*/
      FormHeapFree((unsigned int)off_B148E0); /*0xa2536e*/
  }
}
