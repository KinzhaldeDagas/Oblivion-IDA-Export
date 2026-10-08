void __cdecl sub_A25470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundLoadLipFiles); /*0xa2547a*/
  if ( off_B14910 ) /*0xa25486*/
  {
    if ( *off_B14910 == 0x53 ) /*0xa2548b*/
      FormHeapFree((unsigned int)off_B14910); /*0xa2548e*/
  }
}
