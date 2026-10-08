void __cdecl sub_A16E20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DC0); /*0xa16e2a*/
  if ( off_B02DC4 ) /*0xa16e36*/
  {
    if ( *off_B02DC4 == 0x53 ) /*0xa16e3b*/
      FormHeapFree((unsigned int)off_B02DC4); /*0xa16e3e*/
  }
}
