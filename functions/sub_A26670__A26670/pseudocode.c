void __cdecl sub_A26670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B162EC); /*0xa2667a*/
  if ( off_B162F0 ) /*0xa26686*/
  {
    if ( *off_B162F0 == 0x53 ) /*0xa2668b*/
      FormHeapFree((unsigned int)off_B162F0); /*0xa2668e*/
  }
}
