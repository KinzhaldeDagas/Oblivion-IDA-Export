void __cdecl sub_A1A910()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0763C); /*0xa1a91a*/
  if ( off_B07640 ) /*0xa1a926*/
  {
    if ( *off_B07640 == 0x53 ) /*0xa1a92b*/
      FormHeapFree((unsigned int)off_B07640); /*0xa1a92e*/
  }
}
