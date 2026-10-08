void __cdecl sub_A18040()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0525C); /*0xa1804a*/
  if ( off_B05260[0] ) /*0xa18056*/
  {
    if ( *off_B05260[0] == 0x53 ) /*0xa1805b*/
      FormHeapFree((unsigned int)off_B05260[0]); /*0xa1805e*/
  }
}
