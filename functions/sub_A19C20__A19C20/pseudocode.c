void __cdecl sub_A19C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F2C); /*0xa19c2a*/
  if ( off_B06F30 ) /*0xa19c36*/
  {
    if ( *off_B06F30 == 0x53 ) /*0xa19c3b*/
      FormHeapFree((unsigned int)off_B06F30); /*0xa19c3e*/
  }
}
