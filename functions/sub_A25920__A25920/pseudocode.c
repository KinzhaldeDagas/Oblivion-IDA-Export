void __cdecl sub_A25920()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&trackLevelUps); /*0xa2592a*/
  if ( off_B14EAC ) /*0xa25936*/
  {
    if ( *off_B14EAC == 0x53 ) /*0xa2593b*/
      FormHeapFree((unsigned int)off_B14EAC); /*0xa2593e*/
  }
}
