void __cdecl sub_A18D20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CAC); /*0xa18d2a*/
  if ( off_B06CB0 ) /*0xa18d36*/
  {
    if ( *off_B06CB0 == 0x53 ) /*0xa18d3b*/
      FormHeapFree((unsigned int)off_B06CB0); /*0xa18d3e*/
  }
}
