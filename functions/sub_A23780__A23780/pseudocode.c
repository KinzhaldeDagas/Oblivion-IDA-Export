void __cdecl sub_A23780()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12628); /*0xa2378a*/
  if ( off_B1262C ) /*0xa23796*/
  {
    if ( *off_B1262C == 0x53 ) /*0xa2379b*/
      FormHeapFree((unsigned int)off_B1262C); /*0xa2379e*/
  }
}
