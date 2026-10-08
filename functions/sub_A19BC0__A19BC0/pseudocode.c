void __cdecl sub_A19BC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&word_B06F1C); /*0xa19bca*/
  if ( off_B06F20 ) /*0xa19bd6*/
  {
    if ( *off_B06F20 == 0x53 ) /*0xa19bdb*/
      FormHeapFree((unsigned int)off_B06F20); /*0xa19bde*/
  }
}
