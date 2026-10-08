void __cdecl sub_A194D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06DF4); /*0xa194da*/
  if ( off_B06DF8 ) /*0xa194e6*/
  {
    if ( *off_B06DF8 == 0x53 ) /*0xa194eb*/
      FormHeapFree((unsigned int)off_B06DF8); /*0xa194ee*/
  }
}
