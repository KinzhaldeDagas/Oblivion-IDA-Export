void __cdecl sub_A264F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162AC); /*0xa264fa*/
  if ( off_B162B0 ) /*0xa26506*/
  {
    if ( *off_B162B0 == 0x53 ) /*0xa2650b*/
      FormHeapFree((unsigned int)off_B162B0); /*0xa2650e*/
  }
}
