void __cdecl sub_A1B480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08158); /*0xa1b48a*/
  if ( off_B0815C ) /*0xa1b496*/
  {
    if ( *off_B0815C == 0x53 ) /*0xa1b49b*/
      FormHeapFree((unsigned int)off_B0815C); /*0xa1b49e*/
  }
}
