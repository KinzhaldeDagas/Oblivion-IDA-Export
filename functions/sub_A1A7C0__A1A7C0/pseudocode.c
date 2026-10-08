void __cdecl sub_A1A7C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B07604); /*0xa1a7ca*/
  if ( off_B07608 ) /*0xa1a7d6*/
  {
    if ( *off_B07608 == 0x53 ) /*0xa1a7db*/
      FormHeapFree((unsigned int)off_B07608); /*0xa1a7de*/
  }
}
