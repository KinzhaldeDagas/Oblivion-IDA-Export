void __cdecl sub_A24FF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14834); /*0xa24ffa*/
  if ( off_B14838 ) /*0xa25006*/
  {
    if ( *off_B14838 == 0x53 ) /*0xa2500b*/
      FormHeapFree((unsigned int)off_B14838); /*0xa2500e*/
  }
}
