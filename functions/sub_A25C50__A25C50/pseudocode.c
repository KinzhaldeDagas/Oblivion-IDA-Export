void __cdecl sub_A25C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14F30); /*0xa25c5a*/
  if ( off_B14F34 ) /*0xa25c66*/
  {
    if ( *off_B14F34 == 0x53 ) /*0xa25c6b*/
      FormHeapFree((unsigned int)off_B14F34); /*0xa25c6e*/
  }
}
