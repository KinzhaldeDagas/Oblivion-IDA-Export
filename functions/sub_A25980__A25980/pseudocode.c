void __cdecl sub_A25980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B14EB8); /*0xa2598a*/
  if ( off_B14EBC ) /*0xa25996*/
  {
    if ( *off_B14EBC == 0x53 ) /*0xa2599b*/
      FormHeapFree((unsigned int)off_B14EBC); /*0xa2599e*/
  }
}
