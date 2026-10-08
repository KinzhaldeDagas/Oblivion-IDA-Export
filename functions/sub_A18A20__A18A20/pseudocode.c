void __cdecl sub_A18A20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSkipInitializationFlows_MESSAGES); /*0xa18a2a*/
  if ( off_B06B34 ) /*0xa18a36*/
  {
    if ( *off_B06B34 == 0x53 ) /*0xa18a3b*/
      FormHeapFree((unsigned int)off_B06B34); /*0xa18a3e*/
  }
}
