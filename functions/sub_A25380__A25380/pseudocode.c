void __cdecl sub_A25380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_iMaxHiPerfCombatCount_Combat); /*0xa2538a*/
  if ( off_B148E8 ) /*0xa25396*/
  {
    if ( *off_B148E8 == 0x53 ) /*0xa2539b*/
      FormHeapFree((unsigned int)off_B148E8); /*0xa2539e*/
  }
}
