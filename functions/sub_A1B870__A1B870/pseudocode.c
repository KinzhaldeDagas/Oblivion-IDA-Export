void __cdecl sub_A1B870()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B08B4C); /*0xa1b87a*/
  if ( off_B08B50 ) /*0xa1b886*/
  {
    if ( *off_B08B50 == 0x53 ) /*0xa1b88b*/
      FormHeapFree((unsigned int)off_B08B50); /*0xa1b88e*/
  }
}
