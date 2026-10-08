void __cdecl sub_A25320()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B148D4); /*0xa2532a*/
  if ( off_B148D8 ) /*0xa25336*/
  {
    if ( *off_B148D8 == 0x53 ) /*0xa2533b*/
      FormHeapFree((unsigned int)off_B148D8); /*0xa2533e*/
  }
}
