void __cdecl sub_A1B840()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08B44); /*0xa1b84a*/
  if ( off_B08B48 ) /*0xa1b856*/
  {
    if ( *off_B08B48 == 0x53 ) /*0xa1b85b*/
      FormHeapFree((unsigned int)off_B08B48); /*0xa1b85e*/
  }
}
