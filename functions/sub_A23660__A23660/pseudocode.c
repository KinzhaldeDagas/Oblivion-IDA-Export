void __cdecl sub_A23660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B125F8); /*0xa2366a*/
  if ( off_B125FC ) /*0xa23676*/
  {
    if ( *off_B125FC == 0x53 ) /*0xa2367b*/
      FormHeapFree((unsigned int)off_B125FC); /*0xa2367e*/
  }
}
