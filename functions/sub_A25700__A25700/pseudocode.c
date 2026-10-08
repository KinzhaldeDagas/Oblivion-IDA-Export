void __cdecl sub_A25700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CCC); /*0xa2570a*/
  if ( off_B14CD0 ) /*0xa25716*/
  {
    if ( *off_B14CD0 == 0x53 ) /*0xa2571b*/
      FormHeapFree((unsigned int)off_B14CD0); /*0xa2571e*/
  }
}
