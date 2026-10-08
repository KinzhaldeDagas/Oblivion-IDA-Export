void __cdecl sub_A1B9C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B84); /*0xa1b9ca*/
  if ( off_B08B88 ) /*0xa1b9d6*/
  {
    if ( *off_B08B88 == 0x53 ) /*0xa1b9db*/
      FormHeapFree((unsigned int)off_B08B88); /*0xa1b9de*/
  }
}
