void __cdecl sub_A26210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161D8); /*0xa2621a*/
  if ( off_B161DC ) /*0xa26226*/
  {
    if ( *off_B161DC == 0x53 ) /*0xa2622b*/
      FormHeapFree((unsigned int)off_B161DC); /*0xa2622e*/
  }
}
