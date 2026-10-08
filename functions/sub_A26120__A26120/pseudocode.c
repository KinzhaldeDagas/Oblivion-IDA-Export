void __cdecl sub_A26120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161B0); /*0xa2612a*/
  if ( off_B161B4 ) /*0xa26136*/
  {
    if ( *off_B161B4 == 0x53 ) /*0xa2613b*/
      FormHeapFree((unsigned int)off_B161B4); /*0xa2613e*/
  }
}
