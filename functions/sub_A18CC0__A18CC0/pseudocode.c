void __cdecl sub_A18CC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C9C); /*0xa18cca*/
  if ( off_B06CA0 ) /*0xa18cd6*/
  {
    if ( *off_B06CA0 == 0x53 ) /*0xa18cdb*/
      FormHeapFree((unsigned int)off_B06CA0); /*0xa18cde*/
  }
}
