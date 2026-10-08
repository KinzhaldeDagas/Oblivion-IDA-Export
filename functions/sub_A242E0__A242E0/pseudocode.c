void __cdecl sub_A242E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E1C); /*0xa242ea*/
  if ( off_B12E20[0] ) /*0xa242f6*/
  {
    if ( *off_B12E20[0] == 0x53 ) /*0xa242fb*/
      FormHeapFree((unsigned int)off_B12E20[0]); /*0xa242fe*/
  }
}
