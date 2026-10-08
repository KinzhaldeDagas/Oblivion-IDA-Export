void __cdecl sub_A23690()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B12600); /*0xa2369a*/
  if ( off_B12604 ) /*0xa236a6*/
  {
    if ( *off_B12604 == 0x53 ) /*0xa236ab*/
      FormHeapFree((unsigned int)off_B12604); /*0xa236ae*/
  }
}
