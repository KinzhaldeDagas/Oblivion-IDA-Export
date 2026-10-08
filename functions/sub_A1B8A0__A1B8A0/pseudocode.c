void __cdecl sub_A1B8A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B08B54); /*0xa1b8aa*/
  if ( off_B08B58 ) /*0xa1b8b6*/
  {
    if ( *off_B08B58 == 0x53 ) /*0xa1b8bb*/
      FormHeapFree((unsigned int)off_B08B58); /*0xa1b8be*/
  }
}
