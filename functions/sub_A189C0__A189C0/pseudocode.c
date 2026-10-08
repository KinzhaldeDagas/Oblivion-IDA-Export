void __cdecl sub_A189C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bAllowYesToAll_MESSAGES); /*0xa189ca*/
  if ( off_B06B24 ) /*0xa189d6*/
  {
    if ( *off_B06B24 == 0x53 ) /*0xa189db*/
      FormHeapFree((unsigned int)off_B06B24); /*0xa189de*/
  }
}
