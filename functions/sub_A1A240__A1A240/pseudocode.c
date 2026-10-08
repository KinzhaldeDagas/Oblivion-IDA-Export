void __cdecl sub_A1A240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07050); /*0xa1a24a*/
  if ( off_B07054 ) /*0xa1a256*/
  {
    if ( *off_B07054 == 0x53 ) /*0xa1a25b*/
      FormHeapFree((unsigned int)off_B07054); /*0xa1a25e*/
  }
}
