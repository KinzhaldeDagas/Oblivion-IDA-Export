void __cdecl sub_A19440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06DDC); /*0xa1944a*/
  if ( off_B06DE0 ) /*0xa19456*/
  {
    if ( *off_B06DE0 == 0x53 ) /*0xa1945b*/
      FormHeapFree((unsigned int)off_B06DE0); /*0xa1945e*/
  }
}
