void __cdecl sub_A17C90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B05150); /*0xa17c9a*/
  if ( off_B05154[0] ) /*0xa17ca6*/
  {
    if ( *off_B05154[0] == 0x53 ) /*0xa17cab*/
      FormHeapFree((unsigned int)off_B05154[0]); /*0xa17cae*/
  }
}
