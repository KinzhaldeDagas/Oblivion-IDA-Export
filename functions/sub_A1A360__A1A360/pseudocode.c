void __cdecl sub_A1A360()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionMisc); /*0xa1a36a*/
  if ( off_B07084 ) /*0xa1a376*/
  {
    if ( *off_B07084 == 0x53 ) /*0xa1a37b*/
      FormHeapFree((unsigned int)off_B07084); /*0xa1a37e*/
  }
}
