void __cdecl sub_A18830()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06A98); /*0xa1883a*/
  if ( off_B06A9C ) /*0xa18846*/
  {
    if ( *off_B06A9C == 0x53 ) /*0xa1884b*/
      FormHeapFree((unsigned int)off_B06A9C); /*0xa1884e*/
  }
}
