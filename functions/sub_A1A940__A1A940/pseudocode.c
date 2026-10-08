void __cdecl sub_A1A940()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07644); /*0xa1a94a*/
  if ( off_B07648 ) /*0xa1a956*/
  {
    if ( *off_B07648 == 0x53 ) /*0xa1a95b*/
      FormHeapFree((unsigned int)off_B07648); /*0xa1a95e*/
  }
}
