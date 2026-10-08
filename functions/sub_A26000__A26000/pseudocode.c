void __cdecl sub_A26000()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&MusicEnabled); /*0xa2600a*/
  if ( off_B16184 ) /*0xa26016*/
  {
    if ( *off_B16184 == 0x53 ) /*0xa2601b*/
      FormHeapFree((unsigned int)off_B16184); /*0xa2601e*/
  }
}
