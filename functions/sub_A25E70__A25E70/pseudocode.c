void __cdecl sub_A25E70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSnapToAngle); /*0xa25e7a*/
  if ( off_B15818 ) /*0xa25e86*/
  {
    if ( *off_B15818 == 0x53 ) /*0xa25e8b*/
      FormHeapFree((unsigned int)off_B15818); /*0xa25e8e*/
  }
}
