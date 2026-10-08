void __cdecl sub_A19230()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D84); /*0xa1923a*/
  if ( off_B06D88 ) /*0xa19246*/
  {
    if ( *off_B06D88 == 0x53 ) /*0xa1924b*/
      FormHeapFree((unsigned int)off_B06D88); /*0xa1924e*/
  }
}
