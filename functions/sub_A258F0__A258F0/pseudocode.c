void __cdecl sub_A258F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowHavokGrabTheLiving); /*0xa258fa*/
  if ( off_B14EA4 ) /*0xa25906*/
  {
    if ( *off_B14EA4 == 0x53 ) /*0xa2590b*/
      FormHeapFree((unsigned int)off_B14EA4); /*0xa2590e*/
  }
}
