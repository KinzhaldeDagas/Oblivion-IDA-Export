void __cdecl sub_A1A970()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B0764C); /*0xa1a97a*/
  if ( off_B07650[0] ) /*0xa1a986*/
  {
    if ( *off_B07650[0] == 0x53 ) /*0xa1a98b*/
      FormHeapFree((unsigned int)off_B07650[0]); /*0xa1a98e*/
  }
}
