void __cdecl sub_A24760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135D8); /*0xa2476a*/
  if ( off_B135DC ) /*0xa24776*/
  {
    if ( *off_B135DC == 0x53 ) /*0xa2477b*/
      FormHeapFree((unsigned int)off_B135DC); /*0xa2477e*/
  }
}
