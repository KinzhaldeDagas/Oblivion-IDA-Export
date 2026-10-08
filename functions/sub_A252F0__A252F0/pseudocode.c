void __cdecl sub_A252F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148CC); /*0xa252fa*/
  if ( off_B148D0 ) /*0xa25306*/
  {
    if ( *off_B148D0 == 0x53 ) /*0xa2530b*/
      FormHeapFree((unsigned int)off_B148D0); /*0xa2530e*/
  }
}
