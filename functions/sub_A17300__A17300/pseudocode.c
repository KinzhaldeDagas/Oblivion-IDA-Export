void __cdecl sub_A17300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B03144); /*0xa1730a*/
  if ( off_B03148 ) /*0xa17316*/
  {
    if ( *off_B03148 == 0x53 ) /*0xa1731b*/
      FormHeapFree((unsigned int)off_B03148); /*0xa1731e*/
  }
}
