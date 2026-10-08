void __cdecl sub_A1A390()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B07088); /*0xa1a39a*/
  if ( off_B0708C ) /*0xa1a3a6*/
  {
    if ( *off_B0708C == 0x53 ) /*0xa1a3ab*/
      FormHeapFree((unsigned int)off_B0708C); /*0xa1a3ae*/
  }
}
