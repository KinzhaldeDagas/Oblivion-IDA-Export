void __cdecl sub_A16F40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02DF0); /*0xa16f4a*/
  if ( off_B02DF4 ) /*0xa16f56*/
  {
    if ( *off_B02DF4 == 0x53 ) /*0xa16f5b*/
      FormHeapFree((unsigned int)off_B02DF4); /*0xa16f5e*/
  }
}
