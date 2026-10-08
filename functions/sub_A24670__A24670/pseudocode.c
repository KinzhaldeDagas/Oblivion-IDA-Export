void __cdecl sub_A24670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135B0); /*0xa2467a*/
  if ( off_B135B4 ) /*0xa24686*/
  {
    if ( *off_B135B4 == 0x53 ) /*0xa2468b*/
      FormHeapFree((unsigned int)off_B135B4); /*0xa2468e*/
  }
}
