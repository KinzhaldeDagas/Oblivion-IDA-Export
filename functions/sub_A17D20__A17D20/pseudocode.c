void __cdecl sub_A17D20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uExteriorCellBuffer); /*0xa17d2a*/
  if ( off_B051E0[0] ) /*0xa17d36*/
  {
    if ( *off_B051E0[0] == 0x53 ) /*0xa17d3b*/
      FormHeapFree((unsigned int)off_B051E0[0]); /*0xa17d3e*/
  }
}
