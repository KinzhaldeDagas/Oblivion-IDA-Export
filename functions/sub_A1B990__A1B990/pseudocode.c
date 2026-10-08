void __cdecl sub_A1B990()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B7C); /*0xa1b99a*/
  if ( off_B08B80 ) /*0xa1b9a6*/
  {
    if ( *off_B08B80 == 0x53 ) /*0xa1b9ab*/
      FormHeapFree((unsigned int)off_B08B80); /*0xa1b9ae*/
  }
}
