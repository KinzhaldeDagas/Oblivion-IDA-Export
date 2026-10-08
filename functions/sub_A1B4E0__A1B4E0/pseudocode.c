void __cdecl sub_A1B4E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08168); /*0xa1b4ea*/
  if ( off_B0816C ) /*0xa1b4f6*/
  {
    if ( *off_B0816C == 0x53 ) /*0xa1b4fb*/
      FormHeapFree((unsigned int)off_B0816C); /*0xa1b4fe*/
  }
}
