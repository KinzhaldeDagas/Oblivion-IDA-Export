void __cdecl sub_A18E10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CD4); /*0xa18e1a*/
  if ( off_B06CD8 ) /*0xa18e26*/
  {
    if ( *off_B06CD8 == 0x53 ) /*0xa18e2b*/
      FormHeapFree((unsigned int)off_B06CD8); /*0xa18e2e*/
  }
}
