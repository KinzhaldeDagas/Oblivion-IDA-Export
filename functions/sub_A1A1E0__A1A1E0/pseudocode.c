void __cdecl sub_A1A1E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B07040); /*0xa1a1ea*/
  if ( off_B07044 ) /*0xa1a1f6*/
  {
    if ( *off_B07044 == 0x53 ) /*0xa1a1fb*/
      FormHeapFree((unsigned int)off_B07044); /*0xa1a1fe*/
  }
}
