void __cdecl sub_A170F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0309C); /*0xa170fa*/
  if ( off_B030A0[0] ) /*0xa17106*/
  {
    if ( *off_B030A0[0] == 0x53 ) /*0xa1710b*/
      FormHeapFree((unsigned int)off_B030A0[0]); /*0xa1710e*/
  }
}
