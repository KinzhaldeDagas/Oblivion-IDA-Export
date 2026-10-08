void __cdecl sub_A16D60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DA0); /*0xa16d6a*/
  if ( off_B02DA4 ) /*0xa16d76*/
  {
    if ( *off_B02DA4 == 0x53 ) /*0xa16d7b*/
      FormHeapFree((unsigned int)off_B02DA4); /*0xa16d7e*/
  }
}
