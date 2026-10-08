void __cdecl sub_A1A450()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B070A8); /*0xa1a45a*/
  if ( off_B070AC ) /*0xa1a466*/
  {
    if ( *off_B070AC == 0x53 ) /*0xa1a46b*/
      FormHeapFree((unsigned int)off_B070AC); /*0xa1a46e*/
  }
}
