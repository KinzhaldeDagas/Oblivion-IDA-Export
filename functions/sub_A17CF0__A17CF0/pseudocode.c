void __cdecl sub_A17CF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uInteriorCellBuffer); /*0xa17cfa*/
  if ( off_B051D8 ) /*0xa17d06*/
  {
    if ( *off_B051D8 == 0x53 ) /*0xa17d0b*/
      FormHeapFree((unsigned int)off_B051D8); /*0xa17d0e*/
  }
}
