void __cdecl sub_A25BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14F20); /*0xa25bfa*/
  if ( off_B14F24 ) /*0xa25c06*/
  {
    if ( *off_B14F24 == 0x53 ) /*0xa25c0b*/
      FormHeapFree((unsigned int)off_B14F24); /*0xa25c0e*/
  }
}
