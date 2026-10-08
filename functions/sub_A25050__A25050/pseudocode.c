void __cdecl sub_A25050()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14844); /*0xa2505a*/
  if ( off_B14848 ) /*0xa25066*/
  {
    if ( *off_B14848 == 0x53 ) /*0xa2506b*/
      FormHeapFree((unsigned int)off_B14848); /*0xa2506e*/
  }
}
