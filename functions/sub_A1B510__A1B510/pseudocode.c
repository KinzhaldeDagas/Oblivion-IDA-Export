void __cdecl sub_A1B510()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08170); /*0xa1b51a*/
  if ( off_B08174 ) /*0xa1b526*/
  {
    if ( *off_B08174 == 0x53 ) /*0xa1b52b*/
      FormHeapFree((unsigned int)off_B08174); /*0xa1b52e*/
  }
}
