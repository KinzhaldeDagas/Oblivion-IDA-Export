void __cdecl sub_A1BB00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&havokDebug); /*0xa1bb0a*/
  if ( off_B097BC ) /*0xa1bb16*/
  {
    if ( *off_B097BC == 0x53 ) /*0xa1bb1b*/
      FormHeapFree((unsigned int)off_B097BC); /*0xa1bb1e*/
  }
}
