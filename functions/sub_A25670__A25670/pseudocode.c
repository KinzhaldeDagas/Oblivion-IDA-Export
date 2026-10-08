void __cdecl sub_A25670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CB4); /*0xa2567a*/
  if ( off_B14CB8 ) /*0xa25686*/
  {
    if ( *off_B14CB8 == 0x53 ) /*0xa2568b*/
      FormHeapFree((unsigned int)off_B14CB8); /*0xa2568e*/
  }
}
