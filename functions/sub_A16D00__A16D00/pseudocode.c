void __cdecl sub_A16D00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D90); /*0xa16d0a*/
  if ( off_B02D94 ) /*0xa16d16*/
  {
    if ( *off_B02D94 == 0x53 ) /*0xa16d1b*/
      FormHeapFree((unsigned int)off_B02D94); /*0xa16d1e*/
  }
}
