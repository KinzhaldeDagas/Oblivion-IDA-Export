void __cdecl sub_A236F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_fTreeForceBranchDimming_SpeedTree_010201A0); /*0xa236fa*/
  if ( off_B12614 ) /*0xa23706*/
  {
    if ( *off_B12614 == 0x53 ) /*0xa2370b*/
      FormHeapFree((unsigned int)off_B12614); /*0xa2370e*/
  }
}
