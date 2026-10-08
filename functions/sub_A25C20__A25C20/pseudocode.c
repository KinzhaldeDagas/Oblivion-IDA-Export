void __cdecl sub_A25C20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14F28); /*0xa25c2a*/
  if ( off_B14F2C ) /*0xa25c36*/
  {
    if ( *off_B14F2C == 0x53 ) /*0xa25c3b*/
      FormHeapFree((unsigned int)off_B14F2C); /*0xa25c3e*/
  }
}
