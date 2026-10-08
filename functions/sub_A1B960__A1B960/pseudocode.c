void __cdecl sub_A1B960()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B74); /*0xa1b96a*/
  if ( off_B08B78 ) /*0xa1b976*/
  {
    if ( *off_B08B78 == 0x53 ) /*0xa1b97b*/
      FormHeapFree((unsigned int)off_B08B78); /*0xa1b97e*/
  }
}
