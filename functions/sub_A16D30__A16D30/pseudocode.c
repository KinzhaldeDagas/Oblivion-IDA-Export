void __cdecl sub_A16D30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D98); /*0xa16d3a*/
  if ( off_B02D9C ) /*0xa16d46*/
  {
    if ( *off_B02D9C == 0x53 ) /*0xa16d4b*/
      FormHeapFree((unsigned int)off_B02D9C); /*0xa16d4e*/
  }
}
