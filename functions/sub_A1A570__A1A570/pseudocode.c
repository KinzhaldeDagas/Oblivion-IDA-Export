void __cdecl sub_A1A570()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B070D8); /*0xa1a57a*/
  if ( off_B070DC ) /*0xa1a586*/
  {
    if ( *off_B070DC == 0x53 ) /*0xa1a58b*/
      FormHeapFree((unsigned int)off_B070DC); /*0xa1a58e*/
  }
}
