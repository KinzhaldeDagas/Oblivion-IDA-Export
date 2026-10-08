void __cdecl sub_A1B540()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08178); /*0xa1b54a*/
  if ( off_B0817C ) /*0xa1b556*/
  {
    if ( *off_B0817C == 0x53 ) /*0xa1b55b*/
      FormHeapFree((unsigned int)off_B0817C); /*0xa1b55e*/
  }
}
