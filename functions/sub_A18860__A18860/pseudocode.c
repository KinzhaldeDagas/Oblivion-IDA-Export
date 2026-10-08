void __cdecl sub_A18860()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06AA0); /*0xa1886a*/
  if ( off_B06AA4 ) /*0xa18876*/
  {
    if ( *off_B06AA4 == 0x53 ) /*0xa1887b*/
      FormHeapFree((unsigned int)off_B06AA4); /*0xa1887e*/
  }
}
