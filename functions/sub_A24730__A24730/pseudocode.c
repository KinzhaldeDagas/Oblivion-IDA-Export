void __cdecl sub_A24730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135D0); /*0xa2473a*/
  if ( off_B135D4 ) /*0xa24746*/
  {
    if ( *off_B135D4 == 0x53 ) /*0xa2474b*/
      FormHeapFree((unsigned int)off_B135D4); /*0xa2474e*/
  }
}
