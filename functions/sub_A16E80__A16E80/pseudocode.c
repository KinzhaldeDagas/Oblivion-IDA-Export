void __cdecl sub_A16E80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DD0); /*0xa16e8a*/
  if ( off_B02DD4[0] ) /*0xa16e96*/
  {
    if ( *off_B02DD4[0] == 0x53 ) /*0xa16e9b*/
      FormHeapFree((unsigned int)off_B02DD4[0]); /*0xa16e9e*/
  }
}
