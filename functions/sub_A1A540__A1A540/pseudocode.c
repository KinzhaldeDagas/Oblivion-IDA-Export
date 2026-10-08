void __cdecl sub_A1A540()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B070D0); /*0xa1a54a*/
  if ( off_B070D4 ) /*0xa1a556*/
  {
    if ( *off_B070D4 == 0x53 ) /*0xa1a55b*/
      FormHeapFree((unsigned int)off_B070D4); /*0xa1a55e*/
  }
}
