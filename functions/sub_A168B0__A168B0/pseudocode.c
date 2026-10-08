void __cdecl sub_A168B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CD8); /*0xa168ba*/
  if ( off_B02CDC ) /*0xa168c6*/
  {
    if ( *off_B02CDC == 0x53 ) /*0xa168cb*/
      FormHeapFree((unsigned int)off_B02CDC); /*0xa168ce*/
  }
}
