void __cdecl sub_A1A510()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070C8); /*0xa1a51a*/
  if ( off_B070CC ) /*0xa1a526*/
  {
    if ( *off_B070CC == 0x53 ) /*0xa1a52b*/
      FormHeapFree((unsigned int)off_B070CC); /*0xa1a52e*/
  }
}
