void __cdecl sub_A16F10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpDefault); /*0xa16f1a*/
  if ( off_B02DEC[0] ) /*0xa16f26*/
  {
    if ( *off_B02DEC[0] == 0x53 ) /*0xa16f2b*/
      FormHeapFree((unsigned int)off_B02DEC[0]); /*0xa16f2e*/
  }
}
