void __cdecl sub_A16700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02C90); /*0xa1670a*/
  if ( off_B02C94 ) /*0xa16716*/
  {
    if ( *off_B02C94 == 0x53 ) /*0xa1671b*/
      FormHeapFree((unsigned int)off_B02C94); /*0xa1671e*/
  }
}
