void __cdecl sub_A25020()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1483C); /*0xa2502a*/
  if ( off_B14840 ) /*0xa25036*/
  {
    if ( *off_B14840 == 0x53 ) /*0xa2503b*/
      FormHeapFree((unsigned int)off_B14840); /*0xa2503e*/
  }
}
