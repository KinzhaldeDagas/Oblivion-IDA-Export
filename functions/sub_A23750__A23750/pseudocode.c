void __cdecl sub_A23750()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12620); /*0xa2375a*/
  if ( off_B12624 ) /*0xa23766*/
  {
    if ( *off_B12624 == 0x53 ) /*0xa2376b*/
      FormHeapFree((unsigned int)off_B12624); /*0xa2376e*/
  }
}
