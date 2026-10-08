void __cdecl sub_A17D80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051EC); /*0xa17d8a*/
  if ( off_B051F0[0] ) /*0xa17d96*/
  {
    if ( *off_B051F0[0] == 0x53 ) /*0xa17d9b*/
      FormHeapFree((unsigned int)off_B051F0[0]); /*0xa17d9e*/
  }
}
