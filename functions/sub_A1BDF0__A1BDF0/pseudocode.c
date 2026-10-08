void __cdecl sub_A1BDF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09B00); /*0xa1bdfa*/
  if ( off_B09B04 ) /*0xa1be06*/
  {
    if ( *off_B09B04 == 0x53 ) /*0xa1be0b*/
      FormHeapFree((unsigned int)off_B09B04); /*0xa1be0e*/
  }
}
