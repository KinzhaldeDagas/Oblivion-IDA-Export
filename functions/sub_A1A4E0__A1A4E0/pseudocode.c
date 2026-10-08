void __cdecl sub_A1A4E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070C0); /*0xa1a4ea*/
  if ( off_B070C4 ) /*0xa1a4f6*/
  {
    if ( *off_B070C4 == 0x53 ) /*0xa1a4fb*/
      FormHeapFree((unsigned int)off_B070C4); /*0xa1a4fe*/
  }
}
