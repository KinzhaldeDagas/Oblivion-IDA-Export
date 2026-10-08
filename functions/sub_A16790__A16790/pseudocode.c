void __cdecl sub_A16790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CA8); /*0xa1679a*/
  if ( off_B02CAC ) /*0xa167a6*/
  {
    if ( *off_B02CAC == 0x53 ) /*0xa167ab*/
      FormHeapFree((unsigned int)off_B02CAC); /*0xa167ae*/
  }
}
