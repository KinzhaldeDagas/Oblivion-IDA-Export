void __cdecl sub_A17D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051E4); /*0xa17d5a*/
  if ( off_B051E8[0] ) /*0xa17d66*/
  {
    if ( *off_B051E8[0] == 0x53 ) /*0xa17d6b*/
      FormHeapFree((unsigned int)off_B051E8[0]); /*0xa17d6e*/
  }
}
