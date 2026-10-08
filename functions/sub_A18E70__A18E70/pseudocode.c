void __cdecl sub_A18E70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CE4); /*0xa18e7a*/
  if ( off_B06CE8 ) /*0xa18e86*/
  {
    if ( *off_B06CE8 == 0x53 ) /*0xa18e8b*/
      FormHeapFree((unsigned int)off_B06CE8); /*0xa18e8e*/
  }
}
