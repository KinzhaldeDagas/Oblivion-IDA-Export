void __cdecl sub_A1B3F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeLinear); /*0xa1b3fa*/
  if ( off_B08144 ) /*0xa1b406*/
  {
    if ( *off_B08144 == 0x53 ) /*0xa1b40b*/
      FormHeapFree((unsigned int)off_B08144); /*0xa1b40e*/
  }
}
