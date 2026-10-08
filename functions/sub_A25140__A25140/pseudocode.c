void __cdecl sub_A25140()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1486C); /*0xa2514a*/
  if ( off_B14870 ) /*0xa25156*/
  {
    if ( *off_B14870 == 0x53 ) /*0xa2515b*/
      FormHeapFree((unsigned int)off_B14870); /*0xa2515e*/
  }
}
