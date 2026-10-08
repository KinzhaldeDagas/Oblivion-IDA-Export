void __cdecl sub_A1A790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B075FC); /*0xa1a79a*/
  if ( off_B07600 ) /*0xa1a7a6*/
  {
    if ( *off_B07600 == 0x53 ) /*0xa1a7ab*/
      FormHeapFree((unsigned int)off_B07600); /*0xa1a7ae*/
  }
}
