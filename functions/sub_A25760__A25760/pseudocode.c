void __cdecl sub_A25760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CDC); /*0xa2576a*/
  if ( off_B14CE0[0] ) /*0xa25776*/
  {
    if ( *off_B14CE0[0] == 0x53 ) /*0xa2577b*/
      FormHeapFree((unsigned int)off_B14CE0[0]); /*0xa2577e*/
  }
}
