void __cdecl sub_A25CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F40); /*0xa25cba*/
  if ( off_B14F44 ) /*0xa25cc6*/
  {
    if ( *off_B14F44 == 0x53 ) /*0xa25ccb*/
      FormHeapFree((unsigned int)off_B14F44); /*0xa25cce*/
  }
}
